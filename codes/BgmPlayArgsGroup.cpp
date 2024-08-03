void __fastcall BgmPlayArgsGroup___ctor(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *mainBgmParam,
        BgmPlayArgs_array *otherBgmParams,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x22
  __int64 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x21
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_49FBA7E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, mainBgmParam);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v10);
    byte_49FBA7E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v13 )
    goto LABEL_20;
  items = v13->fields._items;
  v18 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)mainBgmParam,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v20[4] = (Il2CppClass *)mainBgmParam;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)mainBgmParam, v15, v16);
  }
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v13, v21, v22);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v24 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v25 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v25 )
    {
      sub_1BB6000(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v25 = v24[7];
    }
    v26 = *(_QWORD *)(v25 + 16);
    if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
      v26 = sub_1BB5FA4(v26);
    if ( !*(_DWORD *)(v26 + 224) )
      j_il2cpp_runtime_class_init_0(v26);
    v14 = *(_QWORD *)(v24[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BB5FA4(v14);
    otherBgmParams = **(BgmPlayArgs_array ***)(v14 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_20:
    sub_1B64324(v14);
  System_Collections_Generic_List_object___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v27);
}


void __fastcall BgmPlayArgsGroup___ctor_37999712(
        BgmPlayArgsGroup_o *this,
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_BgmPlayArgs__o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  System_Nullable_float__o v16; // 0:x1.8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16 = volumeNullable;
  v12 = Analyzer_FileNameToBgmPlayArgsGroup__Analyze(toAnalyze, v16, fadeTime, startTime, v11);
  this->fields._AllArgsList_k__BackingField = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v12, v13, v14);
  BgmPlayArgsGroup__Initialize(this, v15);
}


void __fastcall BgmPlayArgsGroup___ctor_38017092(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_Collections_Generic_List_object__o *v13; // x21
  __int64 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1

  v3 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_49FBA7F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, bgmParams);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___75645840, v5);
    sub_1B640C8(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v6);
    byte_49FBA7F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v9 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v10 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v10 )
    {
      sub_1BB6000(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BB5FA4(v11);
    if ( !*(_DWORD *)(v11 + 224) )
      j_il2cpp_runtime_class_init_0(v11);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BB5FA4(v12);
    v3 = **(System_Collections_Generic_IEnumerable_T__o ***)(v12 + 184);
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                       v7,
                                                       v8);
  System_Collections_Generic_List_object____ctor_55234504(
    v13,
    v3,
    (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___75645840);
  if ( !this )
    sub_1B64324(v14);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v13, v15, v16);
  BgmPlayArgsGroup__Initialize(this, v17);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BgmPlayArgsGroup___c_c *v7; // x0
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v10; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FBA7C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, method);
    sub_1B640C8(&System_Func_BgmPlayArgs__bool__TypeInfo, v4);
    sub_1B640C8(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v5);
    sub_1B640C8(&BgmPlayArgsGroup___c_TypeInfo, v6);
    byte_49FBA7C = 1;
  }
  v7 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v7 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v7->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BgmPlayArgs__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(_9__12_0, v10, Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v12, v13);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BgmPlayArgsGroup___c_c *v10; // x0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x20
  System_Predicate_object__o *_9__17_0; // x21
  Il2CppObject *v13; // x22
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct MainBgmPlayArgs_o *v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49FBA80 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v5);
    sub_1B640C8(&MainBgmPlayArgs_TypeInfo, v6);
    sub_1B640C8(&System_Predicate_BgmPlayArgs__TypeInfo, v7);
    sub_1B640C8(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v8);
    sub_1B640C8(&BgmPlayArgsGroup___c_TypeInfo, v9);
    byte_49FBA80 = 1;
  }
  v10 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v10 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__17_0 = (System_Predicate_object__o *)v10->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BgmPlayArgs__TypeInfo, method, v2);
    System_Predicate_object____ctor(_9__17_0, v13, Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v15, v16);
  }
  if ( !AllArgsList_k__BackingField )
    sub_1B64324(v10);
  v17 = System_Collections_Generic_List_object___Find(
          AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v17
    && (methodPtr_low = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v17->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MainBgmPlayArgs_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] == MainBgmPlayArgs_TypeInfo )
      v21 = (struct MainBgmPlayArgs_o *)v17;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._MainArgs_k__BackingField, (int32_t)v21, v18, v19);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields._AllArgsList_k__BackingField,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v23 = (struct System_Collections_Generic_List_SubBgmPlayArgs__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v22,
                                                                      (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  this->fields._SubArgsList_k__BackingField = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._SubArgsList_k__BackingField, (int32_t)v23, v24, v25);
}


BgmPlayArgsGroup_o *__fastcall BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  BgmPlayArgsGroup___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__object__o *_9__13_0; // x20
  Il2CppObject *v14; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  BgmPlayArgsGroup_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_49FBA7D & 1) == 0 )
  {
    sub_1B640C8(&BgmPlayArgsGroup_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1B640C8(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v5);
    sub_1B640C8(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v6);
    sub_1B640C8(&BgmPlayArgsGroup___c_TypeInfo, v7);
    byte_49FBA7D = 1;
  }
  v8 = BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v11 = BgmPlayArgsGroup___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v11 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__object__o *)v11->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_1B64314(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v9, v10);
    System_Func_object__object____ctor(_9__13_0, v14, Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v22 = (BgmPlayArgsGroup_o *)sub_1B64314(BgmPlayArgsGroup_TypeInfo, v20, v21);
  BgmPlayArgsGroup___ctor_38017092(v22, (BgmPlayArgs_array *)v19, v23);
  return v22;
}


System_Collections_Generic_List_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__get_AllArgsList(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._AllArgsList_k__BackingField;
}


MainBgmPlayArgs_o *__fastcall BgmPlayArgsGroup__get_MainArgs(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  return this->fields._MainArgs_k__BackingField;
}


System_Collections_Generic_List_SubBgmPlayArgs__o *__fastcall BgmPlayArgsGroup__get_SubArgsList(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._SubArgsList_k__BackingField;
}


void __fastcall BgmPlayArgsGroup__set_AllArgsList(
        BgmPlayArgsGroup_o *this,
        System_Collections_Generic_List_BgmPlayArgs__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._AllArgsList_k__BackingField = value;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BgmPlayArgsGroup__set_MainArgs(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MainArgs_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._MainArgs_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BgmPlayArgsGroup__set_SubArgsList(
        BgmPlayArgsGroup_o *this,
        System_Collections_Generic_List_SubBgmPlayArgs__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SubArgsList_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._SubArgsList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BgmPlayArgsGroup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBA81 & 1) == 0 )
  {
    sub_1B640C8(&BgmPlayArgsGroup___c_TypeInfo, v1);
    byte_49FBA81 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BgmPlayArgsGroup___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BgmPlayArgsGroup___c_TypeInfo->static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BgmPlayArgsGroup___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall BgmPlayArgsGroup___c___ctor(BgmPlayArgsGroup___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmPlayArgsGroup___c___AllArgsListNullExcluded_b__12_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  return x != 0LL;
}


bool __fastcall BgmPlayArgsGroup___c___Initialize_b__17_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  bool result; // w0

  if ( (byte_49FBA82 & 1) == 0 )
  {
    sub_1B640C8(&MainBgmPlayArgs_TypeInfo, x);
    byte_49FBA82 = 1;
  }
  result = x
        && (methodPtr_low = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(x->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
        && x->klass->_2.typeHierarchy[methodPtr_low - 1] == (Il2CppClass *)MainBgmPlayArgs_TypeInfo;
  return result;
}


BgmPlayArgs_o *__fastcall BgmPlayArgsGroup___c___NullExcludedClone_b__13_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}