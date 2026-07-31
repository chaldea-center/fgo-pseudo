void WeightRate_int____ctor(WeightRate_int__o *this, const MethodInfo_3D6E5DC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate_int___HasWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_3D6DD4C *method)
{
  __int64 _20_WeightRate___c__DisplayClass5_0_T___ctor; // x8
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  WeightRate_T__c *klass; // x8
  System_Collections_Generic_List_T__o *list; // x21
  __int64 _23_System_Func_WeightRate_WeightSeed_T___bool___ctor; // x0
  System_Func_object__bool__o *v13; // x22

  _20_WeightRate___c__DisplayClass5_0_T___ctor = (__int64)method->klass->rgctx_data->_20_WeightRate___c__DisplayClass5_0_T___ctor;
  if ( (*(_WORD *)(_20_WeightRate___c__DisplayClass5_0_T___ctor + 309) & 1) == 0 )
    _20_WeightRate___c__DisplayClass5_0_T___ctor = sub_2237AF8();
  v7 = sub_21FFEBC(_20_WeightRate___c__DisplayClass5_0_T___ctor);
  WeightRate___c__DisplayClass5_0_int____ctor(
    (WeightRate___c__DisplayClass5_0_T__o *)v7,
    (const MethodInfo_3AD1C7C *)method->klass->rgctx_data->_21_WeightRate___c__DisplayClass5_0_T___HasWeight_b__0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  klass = method->klass;
  *(_DWORD *)(v7 + 16) = t;
  list = (System_Collections_Generic_List_T__o *)this->fields.list;
  _23_System_Func_WeightRate_WeightSeed_T___bool___ctor = (__int64)klass->rgctx_data->_23_System_Func_WeightRate_WeightSeed_T___bool___ctor;
  if ( (*(_WORD *)(_23_System_Func_WeightRate_WeightSeed_T___bool___ctor + 309) & 1) == 0 )
    _23_System_Func_WeightRate_WeightSeed_T___bool___ctor = sub_2237AF8();
  v13 = (System_Func_object__bool__o *)sub_21FFEBC(_23_System_Func_WeightRate_WeightSeed_T___bool___ctor);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_22_System_Func_WeightRate_WeightSeed_T___bool_,
    (const MethodInfo_42568AC *)method->klass->rgctx_data->_24_BasicHelper_Any_WeightRate_WeightSeed_T__);
  return BasicHelper__Any_object_(
           list,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_37DCA30 *)method->klass->rgctx_data->_25_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
}


void WeightRate_int___ReverseWeight(WeightRate_int__o *this, const MethodInfo_3D6E338 *method)
{
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *list; // x0
  __int64 v8; // x1
  __int64 _37_WeightRate___c_T___ReverseWeight_b__12_0; // x0
  WeightRate_T__c *klass; // x8
  __int64 v11; // x0
  System_Comparison_T__o *v12; // x21
  __int64 v13; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v15; // x0
  __int64 _36_WeightRate___c_T; // x8
  Il2CppObject *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  WeightRate_T__RGCTXs *v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  int size; // w8
  int32_t v28; // w21
  int v29; // w24
  int32_t v30; // w22
  int items; // w25
  Il2CppObject *Item; // x23
  WeightRate_T__RGCTXs *v33; // x8

  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_WORD *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_2237AF8();
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list
    || (list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                              list,
                                                              (const MethodInfo_445164C *)method->klass->rgctx_data->_32_WeightRate_WeightSeed_T___),
        !v5) )
  {
LABEL_34:
    sub_21FFECC(list, v6);
  }
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)list,
    (const MethodInfo_444FD3C *)method->klass->rgctx_data->_34_WeightRate___c_T_);
  _37_WeightRate___c_T___ReverseWeight_b__12_0 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_WORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 309) & 1) == 0 )
    _37_WeightRate___c_T___ReverseWeight_b__12_0 = sub_2237AF8();
  if ( !*(_DWORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 228) )
    j_il2cpp_runtime_class_init_0(_37_WeightRate___c_T___ReverseWeight_b__12_0, v8);
  klass = method->klass;
  v11 = (__int64)klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
  {
    v11 = sub_2237AF8();
    klass = method->klass;
  }
  v12 = *(System_Comparison_T__o **)(*(_QWORD *)(v11 + 184) + 8LL);
  if ( !v12 )
  {
    v13 = (__int64)klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_2237AF8();
    if ( !*(_DWORD *)(v13 + 228) )
      j_il2cpp_runtime_class_init_0(v13, v8);
    rgctx_data = method->klass->rgctx_data;
    v15 = (__int64)rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    {
      v15 = sub_2237AF8();
      rgctx_data = method->klass->rgctx_data;
    }
    _36_WeightRate___c_T = (__int64)rgctx_data->_36_WeightRate___c_T_;
    v17 = **(Il2CppObject ***)(v15 + 184);
    if ( (*(_WORD *)(_36_WeightRate___c_T + 309) & 1) == 0 )
      _36_WeightRate___c_T = sub_2237AF8();
    v12 = (System_Comparison_T__o *)sub_21FFEBC(_36_WeightRate___c_T);
    System_Comparison_object____ctor(
      v12,
      v17,
      (intptr_t)method->klass->rgctx_data->_38_System_Comparison_WeightRate_WeightSeed_T____ctor,
      (const MethodInfo_3EAD090 *)method->klass->rgctx_data->_39_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort);
    v24 = method->klass->rgctx_data;
    v25 = (__int64)v24->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
    {
      v25 = sub_2237AF8();
      v24 = method->klass->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v25 + 184) + 8LL) = v12;
    v26 = (__int64)v24->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
      v26 = sub_2237AF8();
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(*(_QWORD *)(v26 + 184) + 8LL),
      (int32_t)v12,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    klass = method->klass;
  }
  System_Collections_Generic_List_object___Sort_71636404(
    v5,
    v12,
    (const MethodInfo_44515B4 *)klass->rgctx_data[1]._0_WeightRate_T_);
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v28 = 0;
    v29 = -1;
    do
    {
      v30 = size + v29;
      if ( v28 >= size + v29 )
        break;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v5,
                                                            v28,
                                                            (const MethodInfo_444F85C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      items = (int)list->fields._items;
      Item = System_Collections_Generic_List_object___get_Item(
               v5,
               v28,
               (const MethodInfo_444F85C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v5,
                                                            v30,
                                                            (const MethodInfo_444F85C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      if ( !Item )
        goto LABEL_34;
      v33 = method->klass->rgctx_data;
      LODWORD(Item[1].klass) = list->fields._items;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v5,
                                                            v30,
                                                            (const MethodInfo_444F85C *)v33->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      size = v5->fields._size;
      ++v28;
      --v29;
      LODWORD(list->fields._items) = items;
    }
    while ( v28 < size );
  }
}


void WeightRate_int___SetAdjust(WeightRate_int__o *this, const MethodInfo_3D6DE44 *method)
{
  System_Collections_Generic_List_object__o *list; // x0
  int32_t v5; // w22
  int32_t v6; // w21
  int items; // w9
  System_Collections_Generic_List_object__o *v8; // x8
  int v9; // w8

  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_21FFECC(list, method);
  v5 = 0;
  v6 = 0;
  while ( v6 < list->fields._size )
  {
    list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          list,
                                                          v6,
                                                          (const MethodInfo_444F85C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
    if ( list )
    {
      items = (int)list->fields._items;
      v8 = list;
      list = (System_Collections_Generic_List_object__o *)this->fields.list;
      LODWORD(v8->fields._items) = items + 1;
      if ( list )
      {
        list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              list,
                                                              v6,
                                                              (const MethodInfo_444F85C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
        if ( list )
        {
          v9 = (int)list->fields._items;
          list = (System_Collections_Generic_List_object__o *)this->fields.list;
          ++v6;
          v5 += v9;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_8;
  }
  this->fields.totalweight = v5;
}


bool WeightRate_int___checkWeight(WeightRate_int__o *this, const MethodInfo_3D6DE1C *method)
{
  return this->fields.totalweight > 0;
}


int32_t WeightRate_int___getCount(WeightRate_int__o *this, const MethodInfo_3D6DE2C *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x8

  list = this->fields.list;
  if ( list )
    return list->fields._size;
  else
    return 0;
}


int32_t WeightRate_int___getData(WeightRate_int__o *this, int32_t keywieght, const MethodInfo_3D6DEE8 *method)
{
  WeightRate_T__c *klass; // x8
  int32_t totalweight; // w22
  const MethodInfo_3D6DEE8 *v6; // x20
  __int64 Instance_int; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *list; // x9
  int32_t v11; // w19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  bool v14; // w20
  int32_t klass_high; // w23
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF
  const MethodInfo_3D6DEE8 *v18; // [xsp+38h] [xbp-38h]

  klass = method->klass;
  memset(&v17, 0, sizeof(v17));
  v18 = method;
  totalweight = this->fields.totalweight;
  v6 = method;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_36D000C *)klass->rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(Instance_int, v9);
  v11 = Instance_int;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    list,
    (const MethodInfo_4450604 *)v6->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40C7F4C *)v6->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    v14 = v12;
    if ( !v12 )
      break;
    if ( !v17.fields._current )
      sub_21FFECC(v12, v13);
    klass_high = HIDWORD(v17.fields._current[1].klass);
    totalweight -= LODWORD(v17.fields._current[1].klass);
    if ( totalweight <= keywieght )
      goto LABEL_8;
    v6 = v18;
    v11 = HIDWORD(v17.fields._current[1].klass);
  }
  klass_high = 0;
LABEL_8:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40C7F48 *)v18->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  if ( v14 )
    return klass_high;
  else
    return v11;
}


int32_t WeightRate_int___getData_64413756(
        WeightRate_int__o *this,
        int32_t keyWeight,
        int32_t skipValue,
        const MethodInfo_3D6E03C *method)
{
  WeightRate_T__c *klass; // x8
  int32_t totalweight; // w25
  int32_t Instance_int; // w0
  System_Collections_Generic_IEnumerable_T__o *list; // x24
  int32_t v12; // w19
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  __int128 v17; // q0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x23
  WeightRate_T__c *v21; // x8
  Il2CppObject *v22; // x24
  Il2CppObject *v23; // x1
  __int128 v24; // q0
  int32_t v25; // w23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  bool v28; // w21
  int32_t v30; // [xsp+0h] [xbp-80h] BYREF
  int klass_high; // [xsp+4h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF
  const MethodInfo_3D6E03C *v34; // [xsp+38h] [xbp-48h] BYREF

  klass = method->klass;
  v34 = method;
  memset(&v33, 0, sizeof(v33));
  totalweight = this->fields.totalweight;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_36D000C *)klass->rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v12 = Instance_int;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_WORD *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_2237AF8();
  v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  System_Collections_Generic_List_object____ctor_71627776(
    v14,
    list,
    (const MethodInfo_444F400 *)method->klass->rgctx_data->_29_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__);
  if ( !v14 )
    sub_21FFECC(v15, v16);
  System_Collections_Generic_List_object___GetEnumerator(
    &v32,
    v14,
    (const MethodInfo_4450604 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v17 = *(_OWORD *)&v32.fields._list;
  v33.fields._current = v32.fields._current;
  v32.fields._list = 0;
  *(_QWORD *)&v32.fields._index = &v33;
  *(_OWORD *)&v33.fields._list = v17;
  v32.fields._current = (Il2CppObject *)&v34;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_40C7F4C *)v34->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v18 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_21FFECC(v18, v19);
    v21 = v34->klass;
    klass_high = HIDWORD(v33.fields._current[1].klass);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(v21->rgctx_data->_3_T, &klass_high);
    v30 = skipValue;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(v34->klass->rgctx_data->_3_T, &v30);
    if ( System_Object__Equals_77261636(v22, v23, 0) )
    {
      System_Collections_Generic_List_object___Remove(
        v14,
        current,
        (const MethodInfo_445101C *)v34->klass->rgctx_data->_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_40C7F48 *)v34->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  System_Collections_Generic_List_object___GetEnumerator(
    &v32,
    v14,
    (const MethodInfo_4450604 *)v34->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v24 = *(_OWORD *)&v32.fields._list;
  v33.fields._current = v32.fields._current;
  v32.fields._list = 0;
  *(_QWORD *)&v32.fields._index = &v33;
  *(_OWORD *)&v33.fields._list = v24;
  v32.fields._current = (Il2CppObject *)&v34;
  while ( 1 )
  {
    v25 = v12;
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_40C7F4C *)v34->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    v28 = v26;
    if ( !v26 )
      break;
    if ( !v33.fields._current )
      sub_21FFECC(v26, v27);
    v12 = HIDWORD(v33.fields._current[1].klass);
    totalweight -= LODWORD(v33.fields._current[1].klass);
    if ( totalweight <= keyWeight )
      goto LABEL_15;
  }
  v12 = 0;
LABEL_15:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_40C7F48 *)v34->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  if ( v28 )
    return v12;
  else
    return v25;
}


int32_t WeightRate_int___getTotalWeight(WeightRate_int__o *this, const MethodInfo_3D6DE14 *method)
{
  return this->fields.totalweight;
}


void WeightRate_int___removeWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_3D6DB94 *method)
{
  WeightRate_T__c *klass; // x8
  const MethodInfo_3D6DB94 *v4; // x20
  __int64 _7_WeightRate___c__DisplayClass4_0_T; // x8
  __int64 v8; // x22
  System_Collections_Generic_List_object__o *v9; // x0
  __int64 v10; // x1
  WeightRate_T__c *v11; // x8
  System_Collections_Generic_List_object__o *list; // x21
  __int64 _10_System_Predicate_WeightRate_WeightSeed_T; // x0
  System_Predicate_object__o *v14; // x23
  int32_t i; // w21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF
  const MethodInfo_3D6DB94 *v19; // [xsp+38h] [xbp-38h]

  klass = method->klass;
  memset(&v18, 0, sizeof(v18));
  v4 = method;
  v19 = method;
  _7_WeightRate___c__DisplayClass4_0_T = (__int64)klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T_;
  if ( (*(_WORD *)(_7_WeightRate___c__DisplayClass4_0_T + 309) & 1) == 0 )
    _7_WeightRate___c__DisplayClass4_0_T = sub_2237AF8();
  v8 = sub_21FFEBC(_7_WeightRate___c__DisplayClass4_0_T);
  WeightRate___c__DisplayClass4_0_int____ctor(
    (WeightRate___c__DisplayClass4_0_T__o *)v8,
    (const MethodInfo_3AD0020 *)v4->klass->rgctx_data->_8_WeightRate___c__DisplayClass4_0_T___ctor);
  if ( !v8 )
    goto LABEL_14;
  v11 = v4->klass;
  *(_DWORD *)(v8 + 16) = t;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  _10_System_Predicate_WeightRate_WeightSeed_T = (__int64)v11->rgctx_data->_10_System_Predicate_WeightRate_WeightSeed_T__;
  if ( (*(_WORD *)(_10_System_Predicate_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _10_System_Predicate_WeightRate_WeightSeed_T = sub_2237AF8();
  v14 = (System_Predicate_object__o *)sub_21FFEBC(_10_System_Predicate_WeightRate_WeightSeed_T);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v8,
    (intptr_t)v4->klass->rgctx_data->_9_WeightRate___c__DisplayClass4_0_T___removeWeight_b__0,
    (const MethodInfo_4611460 *)v4->klass->rgctx_data->_11_System_Predicate_WeightRate_WeightSeed_T____ctor);
  if ( !list
    || (System_Collections_Generic_List_object___RemoveAll(
          list,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_4451158 *)v4->klass->rgctx_data->_12_System_Collections_Generic_List_WeightRate_WeightSeed_T___RemoveAll),
        (v9 = (System_Collections_Generic_List_object__o *)this->fields.list) == 0) )
  {
LABEL_14:
    sub_21FFECC(v9, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    v9,
    (const MethodInfo_4450604 *)v4->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  for ( i = 0; ; i += LODWORD(v18.fields._current[1].klass) )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_40C7F4C *)v4->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v16 )
      break;
    if ( !v18.fields._current )
      sub_21FFECC(v16, v17);
    v4 = v19;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40C7F48 *)v19->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  this->fields.totalweight = i;
}


void WeightRate_int___setWeight(WeightRate_int__o *this, int32_t weight, int32_t t, const MethodInfo_3D6DA50 *method)
{
  System_Collections_Generic_List_object__o *list; // x22
  MissionNaviTransitionBoardItem_o *p_fields; // x24
  int32_t totalweight; // w8
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  System_Collections_Generic_List_object__o *v12; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  WeightRate_T__c *klass; // x9
  __int64 _4_WeightRate_WeightSeed_T; // x0
  __int64 v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  MethodInfo *_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
    if ( (*(_WORD *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
      _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_2237AF8();
    v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_444F2C4 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
    this->fields.list = (struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *)v12;
    sub_21FFBF4(p_fields, (int32_t)v12, v13, v14, v15, v16, v17, v18);
    list = (System_Collections_Generic_List_object__o *)this->fields.list;
    totalweight = 0;
    this->fields.totalweight = 0;
  }
  klass = method->klass;
  this->fields.totalweight = totalweight + weight;
  _4_WeightRate_WeightSeed_T = (__int64)klass->rgctx_data->_4_WeightRate_WeightSeed_T_;
  if ( (*(_WORD *)(_4_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _4_WeightRate_WeightSeed_T = sub_2237AF8();
  v21 = sub_21FFEBC(_4_WeightRate_WeightSeed_T);
  System_Object___ctor((Il2CppObject *)v21, 0);
  *(_DWORD *)(v21 + 16) = weight;
  *(_DWORD *)(v21 + 20) = t;
  if ( !list
    || (items = list->fields._items,
        _6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add = method->klass->rgctx_data->_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add,
        ++list->fields._version,
        !items) )
  {
    sub_21FFECC(v22, v23);
  }
  size = list->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)v21,
      (const MethodInfo_444FB2C *)_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add->klass->rgctx_data[14].rgctxDataDummy);
  }
  else
  {
    v33 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v21;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v33 + 4), v21, v24, v25, v26, v27, v28, v29);
  }
}