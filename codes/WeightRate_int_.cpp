void __fastcall WeightRate_int____ctor(WeightRate_int__o *this, const MethodInfo_3984A0C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WeightRate_int___HasWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_398420C *method)
{
  __int64 v3; // x3
  __int64 _20_WeightRate___c__DisplayClass5_0_T___ctor; // x8
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_List_T__o *list; // x21
  __int64 _23_System_Func_WeightRate_WeightSeed_T___bool___ctor; // x0
  System_Func_object__bool__o *v15; // x22

  _20_WeightRate___c__DisplayClass5_0_T___ctor = (__int64)method->klass->rgctx_data->_20_WeightRate___c__DisplayClass5_0_T___ctor;
  if ( (*(_BYTE *)(_20_WeightRate___c__DisplayClass5_0_T___ctor + 309) & 1) == 0 )
    _20_WeightRate___c__DisplayClass5_0_T___ctor = sub_1C1C6BC();
  v8 = sub_1BCAA2C(_20_WeightRate___c__DisplayClass5_0_T___ctor, *(_QWORD *)&t, method, v3);
  WeightRate___c__DisplayClass5_0_int____ctor(
    (WeightRate___c__DisplayClass5_0_T__o *)v8,
    (const MethodInfo_30DD388 *)method->klass->rgctx_data->_21_WeightRate___c__DisplayClass5_0_T___HasWeight_b__0);
  if ( !v8 )
    sub_1BCAA3C(v9, v10);
  *(_DWORD *)(v8 + 16) = t;
  list = (System_Collections_Generic_List_T__o *)this->fields.list;
  _23_System_Func_WeightRate_WeightSeed_T___bool___ctor = (__int64)method->klass->rgctx_data->_23_System_Func_WeightRate_WeightSeed_T___bool___ctor;
  if ( (*(_BYTE *)(_23_System_Func_WeightRate_WeightSeed_T___bool___ctor + 309) & 1) == 0 )
    _23_System_Func_WeightRate_WeightSeed_T___bool___ctor = sub_1C1C6BC();
  v15 = (System_Func_object__bool__o *)sub_1BCAA2C(_23_System_Func_WeightRate_WeightSeed_T___bool___ctor, v10, v11, v12);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    (intptr_t)method->klass->rgctx_data->_22_System_Func_WeightRate_WeightSeed_T___bool_,
    (const MethodInfo_3413A9C *)method->klass->rgctx_data->_24_BasicHelper_Any_WeightRate_WeightSeed_T__);
  return BasicHelper__Any_object_(
           list,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_2EFDC94 *)method->klass->rgctx_data->_25_System_Collections_Generic_List_WeightRate_WeightSeed_T___get_Count);
}


void __fastcall WeightRate_int___ReverseWeight(WeightRate_int__o *this, const MethodInfo_3984788 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 _37_WeightRate___c_T___ReverseWeight_b__12_0; // x0
  __int64 v14; // x0
  System_Comparison_T__o *v15; // x21
  __int64 v16; // x0
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v18; // x0
  __int64 _36_WeightRate___c_T; // x8
  Il2CppObject *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  WeightRate_T__RGCTXs *v27; // x8
  __int64 v28; // x0
  __int64 v29; // x0
  int size; // w8
  int32_t v31; // w21
  int v32; // w24
  int32_t v33; // w22
  int items; // w25
  Il2CppObject *Item; // x23

  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C1C6BC();
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      _1_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list
    || (list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                              list,
                                                              (const MethodInfo_35A37B4 *)method->klass->rgctx_data->_32_WeightRate_WeightSeed_T___),
        !v7) )
  {
LABEL_34:
    sub_1BCAA3C(list, v8);
  }
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)list,
    (const MethodInfo_35A1E68 *)method->klass->rgctx_data->_34_WeightRate___c_T_);
  _37_WeightRate___c_T___ReverseWeight_b__12_0 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 309) & 1) == 0 )
    _37_WeightRate___c_T___ReverseWeight_b__12_0 = sub_1C1C6BC();
  if ( !*(_DWORD *)(_37_WeightRate___c_T___ReverseWeight_b__12_0 + 224) )
    j_il2cpp_runtime_class_init_0(_37_WeightRate___c_T___ReverseWeight_b__12_0, v10);
  v14 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1C6BC();
  v15 = *(System_Comparison_T__o **)(*(_QWORD *)(v14 + 184) + 8LL);
  if ( !v15 )
  {
    v16 = (__int64)method->klass->rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v16 + 224) )
      j_il2cpp_runtime_class_init_0(v16, v10);
    rgctx_data = method->klass->rgctx_data;
    v18 = (__int64)rgctx_data->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    {
      v18 = sub_1C1C6BC();
      rgctx_data = method->klass->rgctx_data;
    }
    _36_WeightRate___c_T = (__int64)rgctx_data->_36_WeightRate___c_T_;
    v20 = **(Il2CppObject ***)(v18 + 184);
    if ( (*(_BYTE *)(_36_WeightRate___c_T + 309) & 1) == 0 )
      _36_WeightRate___c_T = sub_1C1C6BC();
    v15 = (System_Comparison_T__o *)sub_1BCAA2C(_36_WeightRate___c_T, v10, v11, v12);
    System_Comparison_object____ctor(
      v15,
      v20,
      (intptr_t)method->klass->rgctx_data->_38_System_Comparison_WeightRate_WeightSeed_T____ctor,
      (const MethodInfo_318A940 *)method->klass->rgctx_data->_39_System_Collections_Generic_List_WeightRate_WeightSeed_T___Sort);
    v27 = method->klass->rgctx_data;
    v28 = (__int64)v27->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    {
      v28 = sub_1C1C6BC();
      v27 = method->klass->rgctx_data;
    }
    *(_QWORD *)(*(_QWORD *)(v28 + 184) + 8LL) = v15;
    v29 = (__int64)v27->_37_WeightRate___c_T___ReverseWeight_b__12_0;
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C1C6BC();
    sub_1BCA784(
      (PartyOrganizationUtility_o *)(*(_QWORD *)(v29 + 184) + 8LL),
      (int64_t)v15,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  System_Collections_Generic_List_object___Sort_56244000(
    v7,
    v15,
    (const MethodInfo_35A3720 *)method->klass->rgctx_data[1]._0_WeightRate_T_);
  size = v7->fields._size;
  if ( size >= 1 )
  {
    v31 = 0;
    v32 = -1;
    do
    {
      v33 = size + v32;
      if ( v31 >= size + v32 )
        break;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v7,
                                                            v31,
                                                            (const MethodInfo_35A198C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      items = (int)list->fields._items;
      Item = System_Collections_Generic_List_object___get_Item(
               v7,
               v31,
               (const MethodInfo_35A198C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v7,
                                                            v33,
                                                            (const MethodInfo_35A198C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      if ( !Item )
        goto LABEL_34;
      LODWORD(Item[1].klass) = list->fields._items;
      list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v7,
                                                            v33,
                                                            (const MethodInfo_35A198C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
      if ( !list )
        goto LABEL_34;
      LODWORD(list->fields._items) = items;
      size = v7->fields._size;
      ++v31;
      --v32;
    }
    while ( v31 < size );
  }
}


void __fastcall WeightRate_int___SetAdjust(WeightRate_int__o *this, const MethodInfo_39842FC *method)
{
  System_Collections_Generic_List_object__o *list; // x0
  int32_t v5; // w22
  int32_t v6; // w21
  int items; // w8

  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1BCAA3C(list, method);
  v5 = 0;
  v6 = 0;
  while ( v6 < list->fields._size )
  {
    list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          list,
                                                          v6,
                                                          (const MethodInfo_35A198C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
    if ( list )
    {
      ++LODWORD(list->fields._items);
      list = (System_Collections_Generic_List_object__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              list,
                                                              v6,
                                                              (const MethodInfo_35A198C *)method->klass->rgctx_data->_27_System_Activator_CreateInstance_T_);
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


bool __fastcall WeightRate_int___checkWeight(WeightRate_int__o *this, const MethodInfo_39842D4 *method)
{
  return this->fields.totalweight > 0;
}


int32_t __fastcall WeightRate_int___getCount(WeightRate_int__o *this, const MethodInfo_39842E4 *method)
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
        const MethodInfo_398439C *method)
{
  int32_t totalweight; // w22
  __int64 Instance_int; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *list; // x9
  int32_t klass_high; // w20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  v14.fields._list = 0LL;
  *(_QWORD *)&v14.fields._index = 0LL;
  totalweight = this->fields.totalweight;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_2E662E8 *)method->klass->rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(Instance_int, v8);
  klass_high = Instance_int;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    list,
    (const MethodInfo_35A2754 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  do
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3316D1C *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v11 )
      break;
    if ( !v14.fields._current )
      sub_1BCAA3C(v11, v12);
    klass_high = HIDWORD(v14.fields._current[1].klass);
    totalweight -= LODWORD(v14.fields._current[1].klass);
  }
  while ( totalweight > keywieght );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3316D18 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  return klass_high;
}


int32_t __fastcall WeightRate_int___getData_60310724(
        WeightRate_int__o *this,
        int32_t keyWeight,
        int32_t skipValue,
        const MethodInfo_39844C4 *method)
{
  int32_t totalweight; // w26
  int32_t Instance_int; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_IEnumerable_T__o *list; // x24
  int32_t klass_high; // w20
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x8
  System_Collections_Generic_List_object__o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x24
  WeightRate_T__RGCTXs *rgctx_data; // x8
  __int64 v23; // x0
  Il2CppObject *v24; // x25
  Il2CppObject *v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF
  int32_t v31; // [xsp+4Ch] [xbp-44h] BYREF

  memset(&v30, 0, sizeof(v30));
  totalweight = this->fields.totalweight;
  Instance_int = System_Activator__CreateInstance_int_((const MethodInfo_2E662E8 *)method->klass->rgctx_data->_28_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  klass_high = Instance_int;
  _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C1C6BC();
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       _1_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                       v10,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor_56235344(
    v16,
    list,
    (const MethodInfo_35A1550 *)method->klass->rgctx_data->_29_System_Collections_Generic_IEnumerable_WeightRate_WeightSeed_T__);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    v16,
    (const MethodInfo_35A2754 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v30 = v29;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v19 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1BCAA3C(v19, v20);
    rgctx_data = method->klass->rgctx_data;
    LODWORD(v29.fields._list) = HIDWORD(v30.fields._current[1].klass);
    v23 = j_il2cpp_value_box_0(rgctx_data->_3_T, &v29);
    v31 = skipValue;
    v24 = (Il2CppObject *)v23;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(method->klass->rgctx_data->_3_T, &v31);
    if ( System_Object__Equals_63546356(v24, v25, 0LL) )
    {
      System_Collections_Generic_List_object___Remove(
        v16,
        current,
        (const MethodInfo_35A3184 *)method->klass->rgctx_data->_31_System_Collections_Generic_List_WeightRate_WeightSeed_T___ToArray);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    v16,
    (const MethodInfo_35A2754 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  v30 = v29;
  do
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v26 )
      break;
    if ( !v30.fields._current )
      sub_1BCAA3C(v26, v27);
    klass_high = HIDWORD(v30.fields._current[1].klass);
    totalweight -= LODWORD(v30.fields._current[1].klass);
  }
  while ( totalweight > keyWeight );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  return klass_high;
}


int32_t __fastcall WeightRate_int___getTotalWeight(WeightRate_int__o *this, const MethodInfo_39842CC *method)
{
  return this->fields.totalweight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_int___removeWeight(WeightRate_int__o *this, int32_t t, const MethodInfo_3984060 *method)
{
  __int64 v3; // x3
  __int64 _7_WeightRate___c__DisplayClass4_0_T; // x8
  __int64 v8; // x22
  System_Collections_Generic_List_object__o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Collections_Generic_List_object__o *list; // x21
  __int64 _10_System_Predicate_WeightRate_WeightSeed_T; // x0
  System_Predicate_object__o *v15; // x23
  int32_t i; // w23
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  memset(&v19, 0, sizeof(v19));
  _7_WeightRate___c__DisplayClass4_0_T = (__int64)method->klass->rgctx_data->_7_WeightRate___c__DisplayClass4_0_T_;
  if ( (*(_BYTE *)(_7_WeightRate___c__DisplayClass4_0_T + 309) & 1) == 0 )
    _7_WeightRate___c__DisplayClass4_0_T = sub_1C1C6BC();
  v8 = sub_1BCAA2C(_7_WeightRate___c__DisplayClass4_0_T, *(_QWORD *)&t, method, v3);
  WeightRate___c__DisplayClass4_0_int____ctor(
    (WeightRate___c__DisplayClass4_0_T__o *)v8,
    (const MethodInfo_30DB924 *)method->klass->rgctx_data->_8_WeightRate___c__DisplayClass4_0_T___ctor);
  if ( !v8 )
    goto LABEL_14;
  *(_DWORD *)(v8 + 16) = t;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  _10_System_Predicate_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_10_System_Predicate_WeightRate_WeightSeed_T__;
  if ( (*(_BYTE *)(_10_System_Predicate_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _10_System_Predicate_WeightRate_WeightSeed_T = sub_1C1C6BC();
  v15 = (System_Predicate_object__o *)sub_1BCAA2C(_10_System_Predicate_WeightRate_WeightSeed_T, v10, v11, v12);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v8,
    (intptr_t)method->klass->rgctx_data->_9_WeightRate___c__DisplayClass4_0_T___removeWeight_b__0,
    (const MethodInfo_3706A64 *)method->klass->rgctx_data->_11_System_Predicate_WeightRate_WeightSeed_T____ctor);
  if ( !list
    || (System_Collections_Generic_List_object___RemoveAll(
          list,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_35A32B8 *)method->klass->rgctx_data->_12_System_Collections_Generic_List_WeightRate_WeightSeed_T___RemoveAll),
        (v9 = (System_Collections_Generic_List_object__o *)this->fields.list) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(v9, v10);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    v9,
    (const MethodInfo_35A2754 *)method->klass->rgctx_data->_13_System_Collections_Generic_List_WeightRate_WeightSeed_T___GetEnumerator);
  for ( i = 0; ; i += LODWORD(v19.fields._current[1].klass) )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)method->klass->rgctx_data->_17_System_Collections_Generic_List_Enumerator_WeightRate_WeightSeed_T___MoveNext);
    if ( !v17 )
      break;
    if ( !v19.fields._current )
      sub_1BCAA3C(v17, v18);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)method->klass->rgctx_data->_19_WeightRate___c__DisplayClass5_0_T_);
  this->fields.totalweight = i;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WeightRate_int___setWeight(
        WeightRate_int__o *this,
        int32_t weight,
        int32_t t,
        const MethodInfo_3983F28 *method)
{
  System_Collections_Generic_List_object__o *list; // x22
  PartyOrganizationUtility_o *p_fields; // x24
  int32_t totalweight; // w8
  __int64 _1_System_Collections_Generic_List_WeightRate_WeightSeed_T; // x0
  System_Collections_Generic_List_object__o *v12; // x22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 _4_WeightRate_WeightSeed_T; // x0
  int64_t v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *items; // x8
  MethodInfo *_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  if ( list )
  {
    totalweight = this->fields.totalweight;
  }
  else
  {
    _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_1_System_Collections_Generic_List_WeightRate_WeightSeed_T__;
    if ( (*(_BYTE *)(_1_System_Collections_Generic_List_WeightRate_WeightSeed_T + 309) & 1) == 0 )
      _1_System_Collections_Generic_List_WeightRate_WeightSeed_T = sub_1C1C6BC();
    v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         _1_System_Collections_Generic_List_WeightRate_WeightSeed_T,
                                                         *(_QWORD *)&weight,
                                                         *(_QWORD *)&t,
                                                         method);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_35A1428 *)method->klass->rgctx_data->_2_System_Collections_Generic_List_WeightRate_WeightSeed_T____ctor);
    p_fields->klass = (PartyOrganizationUtility_c *)v12;
    sub_1BCA784(p_fields, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    list = (System_Collections_Generic_List_object__o *)p_fields->klass;
    totalweight = 0;
  }
  this->fields.totalweight = totalweight + weight;
  _4_WeightRate_WeightSeed_T = (__int64)method->klass->rgctx_data->_4_WeightRate_WeightSeed_T_;
  if ( (*(_BYTE *)(_4_WeightRate_WeightSeed_T + 309) & 1) == 0 )
    _4_WeightRate_WeightSeed_T = sub_1C1C6BC();
  v20 = sub_1BCAA2C(_4_WeightRate_WeightSeed_T, *(_QWORD *)&weight, *(_QWORD *)&t, method);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  *(_DWORD *)(v20 + 16) = weight;
  *(_DWORD *)(v20 + 20) = t;
  if ( !list
    || (items = list->fields._items,
        _6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add = method->klass->rgctx_data->_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add,
        ++list->fields._version,
        !items) )
  {
    sub_1BCAA3C(v21, v22);
  }
  size = list->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)v20,
      (const MethodInfo_35A1C5C *)_6_System_Collections_Generic_List_WeightRate_WeightSeed_T___Add->klass->rgctx_data[14].rgctxDataDummy);
  }
  else
  {
    v32 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v32[4] = (Il2CppClass *)v20;
    sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v20, v23, v24, v25, v26, v27, v28);
  }
}