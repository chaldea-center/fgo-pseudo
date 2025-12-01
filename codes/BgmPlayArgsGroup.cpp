void BgmPlayArgsGroup___ctor(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *mainBgmParam,
        BgmPlayArgs_array *otherBgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  long double inited; // q0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x21
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_4CC6A2C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
    sub_1C713B0(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    byte_4CC6A2C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v7 )
    goto LABEL_20;
  items = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v7->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)mainBgmParam,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)mainBgmParam;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)mainBgmParam, v10, v11, v12, v13, v14, v15);
  }
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v7, v20, v21, v22, v23, v24, v25);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v28 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v29 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v29 )
    {
      sub_1C474A0(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v29 = v28[7];
    }
    v30 = *(_QWORD *)(v29 + 16);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v30 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v30);
    v8 = *(_QWORD *)(v28[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C47444(inited);
    otherBgmParams = **(BgmPlayArgs_array ***)(v8 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_20:
    sub_1C71608(v8, v9);
  System_Collections_Generic_List_object___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v31);
}


void BgmPlayArgsGroup___ctor_41483832(BgmPlayArgsGroup_o *this, BgmPlayArgs_array *bgmParams, const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  System_Collections_Generic_List_object__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1

  if ( (byte_4CC6A2D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
    sub_1C713B0(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___78575544);
    sub_1C713B0(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    byte_4CC6A2D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !bgmParams )
  {
    v6 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v7 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v7 )
    {
      sub_1C474A0(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C47444(inited);
    bgmParams = **(BgmPlayArgs_array ***)(v9 + 184);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor_58785804(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)bgmParams,
    (const MethodInfo_381000C *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___78575544);
  if ( !this )
    sub_1C71608(v11, v12);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v10, v13, v14, v15, v16, v17, v18);
  BgmPlayArgsGroup__Initialize(this, v19);
}


void BgmPlayArgsGroup___ctor_41484952(
        BgmPlayArgsGroup_o *this,
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  System_Nullable_float__o v11; // x1
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_BgmPlayArgs__o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  v11 = volumeNullable;
  v13 = Analyzer_FileNameToBgmPlayArgsGroup__Analyze(toAnalyze, v11, fadeTime, startTime, v12);
  this->fields._AllArgsList_k__BackingField = v13;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  BgmPlayArgsGroup__Initialize(this, v20);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  BgmPlayArgsGroup___c_c *v3; // x0
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v6; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC6A2A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
    sub_1C713B0(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_1C713B0(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__);
    sub_1C713B0(&BgmPlayArgsGroup___c_TypeInfo);
    byte_4CC6A2A = 1;
  }
  v3 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v3 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v3->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BgmPlayArgs__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v6, Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, 0);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v8, v9, v10, v11, v12, v13);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup___c_c *v3; // x0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x20
  System_Predicate_object__o *_9__17_0; // x21
  Il2CppObject *v6; // x22
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 naturalAligment; // x10
  struct MainBgmPlayArgs_o *v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CC6A2E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
    sub_1C713B0(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
    sub_1C713B0(&MainBgmPlayArgs_TypeInfo);
    sub_1C713B0(&System_Predicate_BgmPlayArgs__TypeInfo);
    sub_1C713B0(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__);
    sub_1C713B0(&BgmPlayArgsGroup___c_TypeInfo);
    byte_4CC6A2E = 1;
  }
  v3 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v3 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__17_0 = (System_Predicate_object__o *)v3->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_BgmPlayArgs__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v6, Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, 0);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !AllArgsList_k__BackingField )
    sub_1C71608(v3, method);
  v14 = System_Collections_Generic_List_object___Find(
          AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_3810D80 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v14
    && (naturalAligment = MainBgmPlayArgs_TypeInfo->_2.naturalAligment,
        v14->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MainBgmPlayArgs_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] == MainBgmPlayArgs_TypeInfo )
      v22 = (struct MainBgmPlayArgs_o *)v14;
    else
      v22 = 0;
  }
  else
  {
    v22 = 0;
  }
  this->fields._MainArgs_k__BackingField = v22;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._MainArgs_k__BackingField,
    (int32_t)v22,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields._AllArgsList_k__BackingField,
                                                               (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v24 = (struct System_Collections_Generic_List_SubBgmPlayArgs__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v23,
                                                                      (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  this->fields._SubArgsList_k__BackingField = v24;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SubArgsList_k__BackingField,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


BgmPlayArgsGroup_o *BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v3; // x0
  BgmPlayArgsGroup___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__object__o *_9__13_0; // x20
  Il2CppObject *v7; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x19
  BgmPlayArgsGroup_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_4CC6A2B & 1) == 0 )
  {
    sub_1C713B0(&BgmPlayArgsGroup_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_1C713B0(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    sub_1C713B0(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__);
    sub_1C713B0(&BgmPlayArgsGroup___c_TypeInfo);
    byte_4CC6A2B = 1;
  }
  v3 = BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v4 = BgmPlayArgsGroup___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo);
    v4 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__object__o *)v4->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v7, Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, 0);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0,
      (int32_t)_9__13_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v17 = (BgmPlayArgsGroup_o *)sub_1C715FC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_41483832(v17, (BgmPlayArgs_array *)v16, v18);
  return v17;
}


System_Collections_Generic_List_BgmPlayArgs__o *BgmPlayArgsGroup__get_AllArgsList(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._AllArgsList_k__BackingField;
}


MainBgmPlayArgs_o *BgmPlayArgsGroup__get_MainArgs(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  return this->fields._MainArgs_k__BackingField;
}


System_Collections_Generic_List_SubBgmPlayArgs__o *BgmPlayArgsGroup__get_SubArgsList(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._SubArgsList_k__BackingField;
}


void BgmPlayArgsGroup__set_AllArgsList(
        BgmPlayArgsGroup_o *this,
        System_Collections_Generic_List_BgmPlayArgs__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._AllArgsList_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void BgmPlayArgsGroup__set_MainArgs(BgmPlayArgsGroup_o *this, MainBgmPlayArgs_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MainArgs_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._MainArgs_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BgmPlayArgsGroup__set_SubArgsList(
        BgmPlayArgsGroup_o *this,
        System_Collections_Generic_List_SubBgmPlayArgs__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SubArgsList_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SubArgsList_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BgmPlayArgsGroup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC6A2F & 1) == 0 )
  {
    sub_1C713B0(&BgmPlayArgsGroup___c_TypeInfo);
    byte_4CC6A2F = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BgmPlayArgsGroup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BgmPlayArgsGroup___c_TypeInfo->static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BgmPlayArgsGroup___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BgmPlayArgsGroup___c___ctor(BgmPlayArgsGroup___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BgmPlayArgsGroup___c___AllArgsListNullExcluded_b__12_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  return x != 0;
}


bool BgmPlayArgsGroup___c___Initialize_b__17_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  bool result; // w0

  if ( (byte_4CC6A30 & 1) == 0 )
  {
    sub_1C713B0(&MainBgmPlayArgs_TypeInfo);
    byte_4CC6A30 = 1;
  }
  result = x
        && (naturalAligment = MainBgmPlayArgs_TypeInfo->_2.naturalAligment,
            x->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
        && x->klass->_2.typeHierarchy[naturalAligment - 1] == (Il2CppClass *)MainBgmPlayArgs_TypeInfo;
  return result;
}


BgmPlayArgs_o *BgmPlayArgsGroup___c___NullExcludedClone_b__13_0(
        BgmPlayArgsGroup___c_o *this,
        BgmPlayArgs_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, void *))x->klass[1]._1.image)(
                            x,
                            x->klass[1]._1.gc_desc);
}