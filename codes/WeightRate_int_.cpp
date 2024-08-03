void __fastcall WeightRate_int____ctor(WeightRate_int__o *this, const MethodInfo_388C894 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WeightRate_int___ReverseWeight(WeightRate_int__o *this, const MethodInfo_388C610 *method)
{
  __int64 v2; // x2
  Il2CppClass *_1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_object__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  MethodInfo *_31_WeightRate___c_T___ReverseWeight_b__11_0; // x0
  MethodInfo *v11; // x0
  System_Comparison_T__o *v12; // x21
  MethodInfo *v13; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v15; // x0
  __int64 _30_WeightRate___c_T; // x8
  Il2CppObject *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  WeightRate_T__RGCTXs *v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  int size; // w8
  int32_t v24; // w21
  int v25; // w24
  int32_t v26; // w22
  int items; // w25
  Il2CppObject *Item; // x23

  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE5(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      _1_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list
    || (list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                              list,
                                                              (const MethodInfo_34AF2CC *)method->klass->rgctx_data->_26_WeightRate_WeightSeed_T___),
        !v6) )
  {
LABEL_34:
    sub_1B64324(list);
  }
  System_Collections_Generic_List_object___AddRange(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)list,
    (const MethodInfo_34AD8E0 *)method->klass->rgctx_data->_28_WeightRate___c_T_);
  _31_WeightRate___c_T___ReverseWeight_b__11_0 = method->klass->rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
  if ( (BYTE5(_31_WeightRate___c_T___ReverseWeight_b__11_0[3].return_type) & 1) == 0 )
    _31_WeightRate___c_T___ReverseWeight_b__11_0 = (MethodInfo *)sub_1BB5FA4(_31_WeightRate___c_T___ReverseWeight_b__11_0);
  if ( !LODWORD(_31_WeightRate___c_T___ReverseWeight_b__11_0[2].parameters) )
    j_il2cpp_runtime_class_init_0(_31_WeightRate___c_T___ReverseWeight_b__11_0);
  v11 = method->klass->rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
  if ( (BYTE5(v11[3].return_type) & 1) == 0 )
    v11 = (MethodInfo *)sub_1BB5FA4(v11);
  v12 = (System_Comparison_T__o *)*((_QWORD *)v11[2].virtualMethodPointer + 1);
  if ( !v12 )
  {
    v13 = method->klass->rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (BYTE5(v13[3].return_type) & 1) == 0 )
      v13 = (MethodInfo *)sub_1BB5FA4(v13);
    if ( !LODWORD(v13[2].parameters) )
      j_il2cpp_runtime_class_init_0(v13);
    rgctx_data = method->klass->rgctx_data;
    v15 = (__int64)rgctx_data->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    {
      v15 = sub_1BB5FA4(v15);
      rgctx_data = method->klass->rgctx_data;
    }
    _30_WeightRate___c_T = (__int64)rgctx_data->_30_WeightRate___c_T_;
    v17 = **(Il2CppObject ***)(v15 + 184);
    if ( (*(_BYTE *)(_30_WeightRate___c_T + 309) & 1) == 0 )
      _30_WeightRate___c_T = sub_1BB5FA4(_30_WeightRate___c_T);
    v12 = (System_Comparison_T__o *)sub_1B64314(_30_WeightRate___c_T, v8, v9);
    System_Comparison_object____ctor(
      v12,
      v17,
      (intptr_t)method->klass->rgctx_data->_32_System_Comparison_WeightRate_WeightSeed_T____ctor,
      (const MethodInfo_30AB950 *)method->klass->rgctx_data->_33_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort);
    v20 = method->klass->rgctx_data;
    v21 = (__int64)v20->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    {
      v21 = sub_1BB5FA4(v21);
      v20 = method->klass->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v21 + 184) + 8LL) = v12;
    v22 = (__int64)v20->_31_WeightRate___c_T___ReverseWeight_b__11_0;
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1BB5FA4(v22);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(*(_QWORD *)(v22 + 184) + 8LL), (int32_t)v12, v18, v19);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v6,
    v12,
    (const MethodInfo_34AF238 *)method->klass->rgctx_data[1]._0_WeightRate_T_);
  size = v6->fields._size;
  if ( size >= 1 )
  {
    v24 = 0;
    v25 = -1;
    do
    {
      v26 = size + v25;
      if ( v24 >= size + v25 )
        break;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v6,
                                                            v24,
                                                            (const MethodInfo_34AD404 *)method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      items = (int)list->fields._items;
      Item = System_Collections_Generic_List_object___get_Item(
               v6,
               v24,
               (const MethodInfo_34AD404 *)method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_);
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v6,
                                                            v26,
                                                            (const MethodInfo_34AD404 *)method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      if ( !Item )
        goto LABEL_34;
      LODWORD(Item[1].klass) = list->fields._items;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v6,
                                                            v26,
                                                            (const MethodInfo_34AD404 *)method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      LODWORD(list->fields._items) = items;
      size = v6->fields._size;
      ++v24;
      --v25;
    }
    while ( v24 < size );
  }
}


void __fastcall WeightRate_int___SetAdjust(WeightRate_int__o *this, const MethodInfo_388C184 *method)
{
  System_Collections_Generic_List_object__o *list; // x0
  int32_t v5; // w22
  int32_t v6; // w21
  int items; // w8

  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1B64324(list);
  v5 = 0;
  v6 = 0;
  while ( v6 < list->fields._size )
  {
    list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          list,
                                                          v6,
                                                          (const MethodInfo_34AD404 *)method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_);
    if ( list )
    {
      ++LODWORD(list->fields._items);
      list = (System_Collections_Generic_List_object__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              list,
                                                              v6,
                                                              (const MethodInfo_34AD404 *)method->klass->rgctx_data->_21_System_Activator_CreateInstance_T_);
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


bool __fastcall WeightRate_int___checkWeight(WeightRate_int__o *this, const MethodInfo_388C15C *method)
{
  return this->fields.totalweight > 0;
}


int32_t __fastcall WeightRate_int___getCount(WeightRate_int__o *this, const MethodInfo_388C16C *method)
{
  struct System_Collections_Generic_List_WeightRate_WeightSeed_T___o *list; // x8

  list = this->fields.list;
  if ( list )
    return list->fields._size;
  else
    return 0;
}


int32_t __fastcall WeightRate_int___getData(
        WeightRate_int__o *this,
        int32_t keywieght,
        const MethodInfo_388C224 *method)
{
  int32_t totalweight; // w22
  __int64 Instance_int; // x0
  System_Collections_Generic_List_object__o *list; // x9
  int32_t klass_high; // w20
  _BOOL8 v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  v12.fields._list = 0LL;
  *(_QWORD *)&v12.fields._index = 0LL;
  totalweight = this->fields.totalweight;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_2D9176C *)method->klass->rgctx_data->_22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
    sub_1B64324(Instance_int);
  klass_high = Instance_int;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    list,
    (const MethodInfo_34AE26C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  do
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322A0B0 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v10 )
      break;
    if ( !v12.fields._current )
      sub_1B64324(v10);
    klass_high = HIDWORD(v12.fields._current[1].klass);
    totalweight -= LODWORD(v12.fields._current[1].klass);
  }
  while ( totalweight > keywieght );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322A0AC *)method->klass->rgctx_data->_19_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
  return klass_high;
}


int32_t __fastcall WeightRate_int___getData_59294540(
        WeightRate_int__o *this,
        int32_t keyWeight,
        int32_t skipValue,
        const MethodInfo_388C34C *method)
{
  int32_t totalweight; // w26
  int32_t Instance_int; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *list; // x24
  int32_t klass_high; // w20
  Il2CppClass *_1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v15; // x22
  __int64 v16; // x0
  _BOOL8 v17; // x0
  Il2CppObject *current; // x24
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v20; // x0
  Il2CppObject *v21; // x25
  Il2CppObject *v22; // x1
  _BOOL8 v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-70h] BYREF
  int32_t v27; // [xsp+4Ch] [xbp-44h] BYREF

  memset(&v26, 0, sizeof(v26));
  totalweight = this->fields.totalweight;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_2D9176C *)method->klass->rgctx_data->_22_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  klass_high = Instance_int;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (BYTE5(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       _1_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor_55234504(
    v15,
    list,
    (const MethodInfo_34ACFC8 *)method->klass->rgctx_data->_23_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__);
  if ( !v15 )
    sub_1B64324(v16);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    v15,
    (const MethodInfo_34AE26C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v26 = v25;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v17 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B64324(v17);
    rgctx_data = method->klass->rgctx_data;
    LODWORD(v25.fields._list) = HIDWORD(v26.fields._current[1].klass);
    v20 = j_il2cpp_value_box_0(rgctx_data->_3_T, &v25);
    v27 = skipValue;
    v21 = (Il2CppObject *)v20;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, &v27);
    if ( System_Object__Equals_62520080(v21, v22, 0LL) )
    {
      System_Collections_Generic_List_object___Remove(
        v15,
        current,
        (const MethodInfo_34AEC9C *)method->klass->rgctx_data->_25_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)method->klass->rgctx_data->_19_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    v15,
    (const MethodInfo_34AE26C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v26 = v25;
  do
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_322A0B0 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v23 )
      break;
    if ( !v26.fields._current )
      sub_1B64324(v23);
    klass_high = HIDWORD(v26.fields._current[1].klass);
    totalweight -= LODWORD(v26.fields._current[1].klass);
  }
  while ( totalweight > keyWeight );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_322A0AC *)method->klass->rgctx_data->_19_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
  return klass_high;
}


int32_t __fastcall WeightRate_int___getTotalWeight(WeightRate_int__o *this, const MethodInfo_388C154 *method)
{
  return this->fields.totalweight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_int___removeWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_388BFA8 *method)
{
  Il2CppClass *_7_WeightRate___c__DisplayClass4_0_T; // x8
  __int64 v7; // x22
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *list; // x21
  Il2CppClass *_10_System_Predicate_WeightRate_WeightSeed_T; // x0
  System_Predicate_object__o *v13; // x23
  int32_t i; // w23
  _BOOL8 v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  memset(&v16, 0, sizeof(v16));
  _7_WeightRate___c__DisplayClass4_0_T = method->klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T_;
  if ( (BYTE5(_7_WeightRate___c__DisplayClass4_0_T->vtable[0].methodPtr) & 1) == 0 )
    _7_WeightRate___c__DisplayClass4_0_T = (Il2CppClass *)sub_1BB5FA4(method->klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T_);
  v7 = sub_1B64314(_7_WeightRate___c__DisplayClass4_0_T, *(_QWORD *)&t, method);
  WeightRate___c__DisplayClass4_0_int____ctor(
    (WeightRate___c__DisplayClass4_0_T__o *)v7,
    (const MethodInfo_2FFEEA4 *)method->klass->rgctx_data->_8_WeightRate___c__DisplayClass4_0_T___ctor);
  if ( !v7 )
    goto LABEL_14;
  *(_DWORD *)(v7 + 16) = t;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  _10_System_Predicate_WeightRate_WeightSeed_T = method->klass->rgctx_data->_10_System_Predicate_WeightRate_WeightSeed_T__;
  if ( (BYTE5(_10_System_Predicate_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    _10_System_Predicate_WeightRate_WeightSeed_T = (Il2CppClass *)sub_1BB5FA4(_10_System_Predicate_WeightRate_WeightSeed_T);
  v13 = (System_Predicate_object__o *)sub_1B64314(_10_System_Predicate_WeightRate_WeightSeed_T, v9, v10);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_9_WeightRate___c__DisplayClass4_0_T___removeWeight_b__0,
    (const MethodInfo_3615190 *)method->klass->rgctx_data->_11_System_Predicate_WeightRate_WeightSeed_T____ctor);
  if ( !list
    || (System_Collections_Generic_List_object___RemoveAll(
          list,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_34AEDD0 *)method->klass->rgctx_data->_12_System_Collections_Generic_List_WeightRate_WeightSeed_T___RemoveAll),
        (v8 = (System_Collections_Generic_List_object__o *)this->fields.list) == 0LL) )
  {
LABEL_14:
    sub_1B64324(v8);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    v8,
    (const MethodInfo_34AE26C *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  for ( i = 0; ; i += LODWORD(v16.fields._current[1].klass) )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_322A0B0 *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v15 )
      break;
    if ( !v16.fields._current )
      sub_1B64324(v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_322A0AC *)method->klass->rgctx_data->_19_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
  this->fields.totalweight = i;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_int___setWeight(
        WeightRate_int__o *this,
        int32_t weight,
        int32_t t,
        const MethodInfo_388BE70 *method)
{
  System_Collections_Generic_List_object__o *list; // x22
  ServantStatusBattleListViewItem_o *p_fields; // x24
  int32_t totalweight; // w8
  Il2CppClass *_1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppClass *_4_WeightRate_WeightSeed_T; // x0
  __int64 v16; // x23
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  MethodInfo *_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
    if ( (BYTE5(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
      _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (Il2CppClass *)sub_1BB5FA4(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T);
    v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         _1_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                         *(_QWORD *)&weight,
                                                         *(_QWORD *)&t);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_34ACEA0 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v12;
    sub_1B6406C(p_fields, (int32_t)v12, v13, v14);
    list = (System_Collections_Generic_List_object__o *)p_fields->klass;
    totalweight = 0;
  }
  this->fields.totalweight = totalweight + weight;
  _4_WeightRate_WeightSeed_T = method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_;
  if ( (BYTE5(_4_WeightRate_WeightSeed_T->vtable[0].methodPtr) & 1) == 0 )
    _4_WeightRate_WeightSeed_T = (Il2CppClass *)sub_1BB5FA4(_4_WeightRate_WeightSeed_T);
  v16 = sub_1B64314(_4_WeightRate_WeightSeed_T, *(_QWORD *)&weight, *(_QWORD *)&t);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  *(_DWORD *)(v16 + 16) = weight;
  *(_DWORD *)(v16 + 20) = t;
  if ( !list
    || (items = list->fields._items,
        _6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add = method->klass->rgctx_data->_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add,
        ++list->fields._version,
        !items) )
  {
    sub_1B64324(v17);
  }
  size = list->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)v16,
      (const MethodInfo_34AD6D4 *)_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add->klass->rgctx_data[14].rgctxDataDummy);
  }
  else
  {
    v23 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), v16, v18, v19);
  }
}