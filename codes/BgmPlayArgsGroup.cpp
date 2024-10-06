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
  System_Collections_Generic_List_object__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x21
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4A6F4C2 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, mainBgmParam);
    sub_1B90010(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v9);
    sub_1B90010(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v10);
    byte_4A6F4C2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v11 )
    goto LABEL_20;
  items = v11->fields._items;
  v17 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)mainBgmParam,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v19[4] = (Il2CppClass *)mainBgmParam;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)mainBgmParam, v14, v15);
  }
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v11;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, v20, v21);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v23 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v24 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v24 )
    {
      sub_1BE1F48(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v24 = v23[7];
    }
    v25 = *(_QWORD *)(v24 + 16);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1BE1EEC(v25);
    if ( !*(_DWORD *)(v25 + 224) )
      j_il2cpp_runtime_class_init_0(v25);
    v12 = *(_QWORD *)(v23[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BE1EEC(v12);
    otherBgmParams = **(BgmPlayArgs_array ***)(v12 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_20:
    sub_1B9026C(v12, v13);
  System_Collections_Generic_List_object___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v26);
}


void __fastcall BgmPlayArgsGroup___ctor_38383224(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1

  v3 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_4A6F4C3 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, bgmParams);
    sub_1B90010(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___76109288, v5);
    sub_1B90010(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v6);
    byte_4A6F4C3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v7 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v8 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v8 )
    {
      sub_1BE1F48(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BE1EEC(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BE1EEC(v10);
    v3 = **(System_Collections_Generic_IEnumerable_T__o ***)(v10 + 184);
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor_55640756(
    v11,
    v3,
    (const MethodInfo_35102B4 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___76109288);
  if ( !this )
    sub_1B9026C(v12, v13);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v11;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v11, v14, v15);
  BgmPlayArgsGroup__Initialize(this, v16);
}


void __fastcall BgmPlayArgsGroup___ctor_38384344(
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v12, v13, v14);
  BgmPlayArgsGroup__Initialize(this, v15);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BgmPlayArgsGroup___c_c *v6; // x0
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v9; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A6F4C0 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, method);
    sub_1B90010(&System_Func_BgmPlayArgs__bool__TypeInfo, v3);
    sub_1B90010(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v4);
    sub_1B90010(&BgmPlayArgsGroup___c_TypeInfo, v5);
    byte_4A6F4C0 = 1;
  }
  v6 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v6 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v6->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_BgmPlayArgs__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v9, Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BgmPlayArgsGroup___c_c *v9; // x0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x20
  System_Predicate_object__o *_9__17_0; // x21
  Il2CppObject *v12; // x22
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 methodPtr_low; // x10
  struct MainBgmPlayArgs_o *v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A6F4C4 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v4);
    sub_1B90010(&MainBgmPlayArgs_TypeInfo, v5);
    sub_1B90010(&System_Predicate_BgmPlayArgs__TypeInfo, v6);
    sub_1B90010(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v7);
    sub_1B90010(&BgmPlayArgsGroup___c_TypeInfo, v8);
    byte_4A6F4C4 = 1;
  }
  v9 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v9 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__17_0 = (System_Predicate_object__o *)v9->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_BgmPlayArgs__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v12, Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v14, v15);
  }
  if ( !AllArgsList_k__BackingField )
    sub_1B9026C(v9, method);
  v16 = System_Collections_Generic_List_object___Find(
          AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_3511028 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v16
    && (methodPtr_low = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MainBgmPlayArgs_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == MainBgmPlayArgs_TypeInfo )
      v20 = (struct MainBgmPlayArgs_o *)v16;
    else
      v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v20;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._MainArgs_k__BackingField, (int32_t)v20, v17, v18);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields._AllArgsList_k__BackingField,
                                                               (const MethodInfo_2EB82A0 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v22 = (struct System_Collections_Generic_List_SubBgmPlayArgs__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v21,
                                                                      (const MethodInfo_2ECA8AC *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  this->fields._SubArgsList_k__BackingField = v22;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._SubArgsList_k__BackingField, (int32_t)v22, v23, v24);
}


BgmPlayArgsGroup_o *__fastcall BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v8; // x0
  BgmPlayArgsGroup___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__object__o *_9__13_0; // x20
  Il2CppObject *v12; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x19
  BgmPlayArgsGroup_o *v18; // x20
  const MethodInfo *v19; // x2

  if ( (byte_4A6F4C1 & 1) == 0 )
  {
    sub_1B90010(&BgmPlayArgsGroup_TypeInfo, method);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1B90010(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v5);
    sub_1B90010(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v6);
    sub_1B90010(&BgmPlayArgsGroup___c_TypeInfo, v7);
    byte_4A6F4C1 = 1;
  }
  v8 = BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v9 = BgmPlayArgsGroup___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v9 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__object__o *)v9->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_1B9025C(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v12, Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_2EBED8C *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v18 = (BgmPlayArgsGroup_o *)sub_1B9025C(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_38383224(v18, (BgmPlayArgs_array *)v17, v19);
  return v18;
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BgmPlayArgsGroup__set_MainArgs(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._MainArgs_k__BackingField = value;
  sub_1B8FFB4(
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
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._SubArgsList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BgmPlayArgsGroup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6F4C5 & 1) == 0 )
  {
    sub_1B90010(&BgmPlayArgsGroup___c_TypeInfo, v1);
    byte_4A6F4C5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BgmPlayArgsGroup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BgmPlayArgsGroup___c_TypeInfo->static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)BgmPlayArgsGroup___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4A6F4C6 & 1) == 0 )
  {
    sub_1B90010(&MainBgmPlayArgs_TypeInfo, x);
    byte_4A6F4C6 = 1;
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
    sub_1B9026C(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}