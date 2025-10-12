void WeightRate_int____ctor(WeightRate_int__o *this, const MethodInfo_3B8A1D4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WeightRate_int___HasWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_3B899D4 *method)
{
  __int64 _20_WeightRate___c__DisplayClass5_0_T___ctor; // x8
  __int64 v7; // x20
  __int64 v8; // x0
  System_Collections_Generic_List_T__o *list; // x21
  __int64 _23_System_Func_WeightRate_WeightSeed_T___bool___ctor; // x0
  System_Func_object__bool__o *v11; // x22

  _20_WeightRate___c__DisplayClass5_0_T___ctor = (__int64)method->klass->rgctx_data->_20_WeightRate___c__DisplayClass5_0_T___ctor;
  if ( (*(_BYTE *)(_20_WeightRate___c__DisplayClass5_0_T___ctor + 309) & 1) == 0 )
    _20_WeightRate___c__DisplayClass5_0_T___ctor = sub_1C83334();
  v7 = sub_1C32E6C(_20_WeightRate___c__DisplayClass5_0_T___ctor);
  WeightRate___c__DisplayClass5_0_int____ctor(
    (WeightRate___c__DisplayClass5_0_T__o *)v7,
    (const MethodInfo_32B141C *)method->klass->rgctx_data->_21_WeightRate___c__DisplayClass5_0_T___HasWeight_b__0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = t;
  list = (System_Collections_Generic_List_T__o *)this->fields.list;
  _23_System_Func_WeightRate_WeightSeed_T___bool___ctor = (__int64)method->klass->rgctx_data->_23_System_Func_WeightRate_WeightSeed_T___bool___ctor;
  if ( (*(_BYTE *)(_23_System_Func_WeightRate_WeightSeed_T___bool___ctor + 309) & 1) == 0 )
    _23_System_Func_WeightRate_WeightSeed_T___bool___ctor = sub_1C83334();
  v11 = (System_Func_object__bool__o *)sub_1C32E6C(_23_System_Func_WeightRate_WeightSeed_T___bool___ctor);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_22_System_Func_WeightRate_WeightSeed_T___bool_,
    (const MethodInfo_362EA50 *)method->klass->rgctx_data->_24_BasicHelper_Any_WeightRate_WeightSeed_T__);
  return BasicHelper__Any_object_(
           list,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_30C6790 *)method->klass->rgctx_data->_25_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
}


void WeightRate_int___ReverseWeight(WeightRate_int__o *this, const MethodInfo_3B89F50 *method)
{
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_object__o *list; // x0
  __int64 _37_WeightRate___c_T___ReverseWeight_b__12_0; // x0
  __int64 v8; // x0
  System_Comparison_T__o *v9; // x21
  __int64 v10; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v12; // x0
  __int64 _36_WeightRate___c_T; // x8
  Il2CppObject *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  WeightRate_T__RGCTXs *v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  int size; // w8
  int32_t v21; // w21
  int v22; // w24
  int32_t v23; // w22
  int items; // w25
  Il2CppObject *Item; // x23

  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C83334();
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list
    || (list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                              list,
                                                              (const MethodInfo_379A314 *)method->klass->rgctx_data->_32_WeightRate_WeightSeed_T___),
        !v5) )
  {
LABEL_34:
    sub_1C32E7C(list);
  }
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)list,
    (const MethodInfo_37989C8 *)method->klass->rgctx_data->_34_WeightRate___c_T_);
  _37_WeightRate___c_T___ReverseWeight_b__12_0 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 309) & 1) == 0 )
    _37_WeightRate___c_T___ReverseWeight_b__12_0 = sub_1C83334();
  if ( !*(_DWORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 224) )
    j_il2cpp_runtime_class_init_0(_37_WeightRate___c_T___ReverseWeight_b__12_0);
  v8 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C83334();
  v9 = *(System_Comparison_T__o **)(*(_QWORD *)(v8 + 184) + 8LL);
  if ( !v9 )
  {
    v10 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334();
    if ( !*(_DWORD *)(v10 + 224) )
      j_il2cpp_runtime_class_init_0(v10);
    rgctx_data = method->klass->rgctx_data;
    v12 = (__int64)rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_1C83334();
      rgctx_data = method->klass->rgctx_data;
    }
    _36_WeightRate___c_T = (__int64)rgctx_data->_36_WeightRate___c_T_;
    v14 = **(Il2CppObject ***)(v12 + 184);
    if ( (*(_BYTE *)(_36_WeightRate___c_T + 309) & 1) == 0 )
      _36_WeightRate___c_T = sub_1C83334();
    v9 = (System_Comparison_T__o *)sub_1C32E6C(_36_WeightRate___c_T);
    System_Comparison_object____ctor(
      v9,
      v14,
      (intptr_t)method->klass->rgctx_data->_38_System_Comparison_WeightRate_WeightSeed_T____ctor,
      (const MethodInfo_336D360 *)method->klass->rgctx_data->_39_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort);
    v17 = method->klass->rgctx_data;
    v18 = (__int64)v17->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    {
      v18 = sub_1C83334();
      v17 = method->klass->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v18 + 184) + 8LL) = v9;
    v19 = (__int64)v17->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C83334();
    sub_1C32BC4((CGThumbnailListItem_o *)(*(_QWORD *)(v19 + 184) + 8LL), (int32_t)v9, v15, v16);
  }
  System_Collections_Generic_List_object___Sort_58303104(
    v5,
    v9,
    (const MethodInfo_379A280 *)method->klass->rgctx_data[1]._0_WeightRate_T_);
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v21 = 0;
    v22 = -1;
    do
    {
      v23 = size + v22;
      if ( v21 >= size + v22 )
        break;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v5,
                                                            v21,
                                                            (const MethodInfo_37984EC *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      items = (int)list->fields._items;
      Item = System_Collections_Generic_List_object___get_Item(
               v5,
               v21,
               (const MethodInfo_37984EC *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v5,
                                                            v23,
                                                            (const MethodInfo_37984EC *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      if ( !Item )
        goto LABEL_34;
      LODWORD(Item[1].klass) = list->fields._items;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v5,
                                                            v23,
                                                            (const MethodInfo_37984EC *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      LODWORD(list->fields._items) = items;
      size = v5->fields._size;
      ++v21;
      --v22;
    }
    while ( v21 < size );
  }
}


void WeightRate_int___SetAdjust(WeightRate_int__o *this, const MethodInfo_3B89AC4 *method)
{
  System_Collections_Generic_List_object__o *list; // x0
  int32_t v5; // w22
  int32_t v6; // w21
  int items; // w8

  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C32E7C(list);
  v5 = 0;
  v6 = 0;
  while ( v6 < list->fields._size )
  {
    list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          list,
                                                          v6,
                                                          (const MethodInfo_37984EC *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
    if ( list )
    {
      ++LODWORD(list->fields._items);
      list = (System_Collections_Generic_List_object__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              list,
                                                              v6,
                                                              (const MethodInfo_37984EC *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
        if ( list )
        {
          items = (int)list->fields._items;
          list = (System_Collections_Generic_List_object__o *)this->fields.list;
          ++v6;
          v5 += items;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_8;
  }
  this->fields.totalweight = v5;
}


bool WeightRate_int___checkWeight(WeightRate_int__o *this, const MethodInfo_3B89A9C *method)
{
  return this->fields.totalweight > 0;
}


int32_t WeightRate_int___getCount(WeightRate_int__o *this, const MethodInfo_3B89AAC *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x8

  list = this->fields.list;
  if ( list )
    return list->fields._size;
  else
    return 0;
}


int32_t WeightRate_int___getData(WeightRate_int__o *this, int32_t keywieght, const MethodInfo_3B89B64 *method)
{
  int32_t totalweight; // w22
  __int64 Instance_int; // x0
  System_Collections_Generic_List_object__o *list; // x9
  int32_t klass_high; // w20
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  v12.fields._list = 0;
  *(_QWORD *)&v12.fields._index = 0;
  totalweight = this->fields.totalweight;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_302AB5C *)method->klass->rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(Instance_int);
  klass_high = Instance_int;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    list,
    (const MethodInfo_37992B4 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3522FA8 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v10 )
      break;
    if ( !v12.fields._current )
      sub_1C32E7C(v10);
    klass_high = HIDWORD(v12.fields._current[1].klass);
    totalweight -= LODWORD(v12.fields._current[1].klass);
  }
  while ( totalweight > keywieght );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3522FA4 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  return klass_high;
}


int32_t WeightRate_int___getData_62430348(
        WeightRate_int__o *this,
        int32_t keyWeight,
        int32_t skipValue,
        const MethodInfo_3B89C8C *method)
{
  int32_t totalweight; // w26
  int32_t Instance_int; // w0
  System_Collections_Generic_IEnumerable_T__o *list; // x24
  int32_t klass_high; // w20
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v13; // x22
  __int64 v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *current; // x24
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v24; // x0
  Il2CppObject *v25; // x25
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x1
  _BOOL8 v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF
  int32_t v37; // [xsp+4Ch] [xbp-44h] BYREF

  memset(&v36, 0, sizeof(v36));
  totalweight = this->fields.totalweight;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_302AB5C *)method->klass->rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  klass_high = Instance_int;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C83334();
  v13 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
  System_Collections_Generic_List_object____ctor_58294448(
    v13,
    list,
    (const MethodInfo_37980B0 *)method->klass->rgctx_data->_29_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__);
  if ( !v13 )
    sub_1C32E7C(v14);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v13,
    (const MethodInfo_37992B4 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v36 = v35;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3522FA8 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v15 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1C32E7C(v15);
    rgctx_data = method->klass->rgctx_data;
    LODWORD(v35.fields._list) = HIDWORD(v36.fields._current[1].klass);
    v24 = j_il2cpp_value_box_0(rgctx_data->_3_T, &v35, v16, v17, v18, v19, v20, v21);
    v37 = skipValue;
    v25 = (Il2CppObject *)v24;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, &v37, v26, v27, v28, v29, v30, v31);
    if ( System_Object__Equals_65369548(v25, v32, 0) )
    {
      System_Collections_Generic_List_object___Remove(
        v13,
        current,
        (const MethodInfo_3799CE4 *)method->klass->rgctx_data->_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3522FA4 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    v13,
    (const MethodInfo_37992B4 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v36 = v35;
  do
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3522FA8 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v33 )
      break;
    if ( !v36.fields._current )
      sub_1C32E7C(v33);
    klass_high = HIDWORD(v36.fields._current[1].klass);
    totalweight -= LODWORD(v36.fields._current[1].klass);
  }
  while ( totalweight > keyWeight );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3522FA4 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  return klass_high;
}


int32_t WeightRate_int___getTotalWeight(WeightRate_int__o *this, const MethodInfo_3B89A94 *method)
{
  return this->fields.totalweight;
}


void WeightRate_int___removeWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_3B89828 *method)
{
  __int64 _7_WeightRate___c__DisplayClass4_0_T; // x8
  __int64 v7; // x22
  System_Collections_Generic_List_object__o *v8; // x0
  System_Collections_Generic_List_object__o *list; // x21
  __int64 _10_System_Predicate_WeightRate_WeightSeed_T; // x0
  System_Predicate_object__o *v11; // x23
  int32_t i; // w23
  _BOOL8 v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  memset(&v14, 0, sizeof(v14));
  _7_WeightRate___c__DisplayClass4_0_T = (__int64)method->klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T_;
  if ( (*(_BYTE *)(_7_WeightRate___c__DisplayClass4_0_T + 309) & 1) == 0 )
    _7_WeightRate___c__DisplayClass4_0_T = sub_1C83334();
  v7 = sub_1C32E6C(_7_WeightRate___c__DisplayClass4_0_T);
  WeightRate___c__DisplayClass4_0_int____ctor(
    (WeightRate___c__DisplayClass4_0_T__o *)v7,
    (const MethodInfo_32AF930 *)method->klass->rgctx_data->_8_WeightRate___c__DisplayClass4_0_T___ctor);
  if ( !v7 )
    goto LABEL_14;
  *(_DWORD *)(v7 + 16) = t;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  _10_System_Predicate_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_10_System_Predicate_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_10_System_Predicate_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _10_System_Predicate_WeightRate_WeightSeed_T = sub_1C83334();
  v11 = (System_Predicate_object__o *)sub_1C32E6C(_10_System_Predicate_WeightRate_WeightSeed_T);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_9_WeightRate___c__DisplayClass4_0_T___removeWeight_b__0,
    (const MethodInfo_3908DF8 *)method->klass->rgctx_data->_11_System_Predicate_WeightRate_WeightSeed_T____ctor);
  if ( !list
    || (System_Collections_Generic_List_object___RemoveAll(
          list,
          (System_Predicate_T__o *)v11,
          (const MethodInfo_3799E18 *)method->klass->rgctx_data->_12_System_Collections_Generic_List_WeightRate_WeightSeed_T___RemoveAll),
        (v8 = (System_Collections_Generic_List_object__o *)this->fields.list) == 0) )
  {
LABEL_14:
    sub_1C32E7C(v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    v8,
    (const MethodInfo_37992B4 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  for ( i = 0; ; i += *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)&word_10) )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3522FA8 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v13 )
      break;
    if ( !v14.fields._current )
      sub_1C32E7C(v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3522FA4 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  this->fields.totalweight = i;
}


void WeightRate_int___setWeight(WeightRate_int__o *this, int32_t weight, int32_t t, const MethodInfo_3B896F0 *method)
{
  System_Collections_Generic_List_object__o *list; // x22
  CGThumbnailListItem_o *p_fields; // x24
  int32_t totalweight; // w8
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 _4_WeightRate_WeightSeed_T; // x0
  __int64 v16; // x23
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  MethodInfo *_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  p_fields = (CGThumbnailListItem_o *)&this->fields;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
    if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
      _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C83334();
    v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_3797F88 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
    p_fields->klass = (CGThumbnailListItem_c *)v12;
    sub_1C32BC4(p_fields, (int32_t)v12, v13, v14);
    list = (System_Collections_Generic_List_object__o *)p_fields->klass;
    totalweight = 0;
  }
  this->fields.totalweight = totalweight + weight;
  _4_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_;
  if ( (*(_BYTE *)(_4_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _4_WeightRate_WeightSeed_T = sub_1C83334();
  v16 = sub_1C32E6C(_4_WeightRate_WeightSeed_T);
  System_Object___ctor((Il2CppObject *)v16, 0);
  *(_DWORD *)(v16 + 16) = weight;
  *(_DWORD *)(v16 + 20) = t;
  if ( !list
    || (items = list->fields._items,
        _6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add = method->klass->rgctx_data->_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add,
        ++list->fields._version,
        !items) )
  {
    sub_1C32E7C(v17);
  }
  size = list->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)v16,
      (const MethodInfo_37987BC *)_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add->klass->rgctx_data[14].rgctxDataDummy);
  }
  else
  {
    v23 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v16;
    sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), v16, v18, v19);
  }
}