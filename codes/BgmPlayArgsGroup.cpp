void BgmPlayArgsGroup___ctor(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *mainBgmParam,
        BgmPlayArgs_array *otherBgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  long double v26; // q0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x21
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_596FE14 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    byte_596FE14 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)mainBgmParam;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)mainBgmParam, v10, v11, v12, v13, v14, v15);
  }
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v20, v21, v22, v23, v24, v25);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v28 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v29 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v29 )
    {
      sub_224B964(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v29 = v28[7];
    }
    v30 = *(_QWORD *)(v29 + 16);
    if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
      v30 = sub_224B908(v26);
    if ( !*(_DWORD *)(v30 + 228) )
      *(__n128 *)&v26 = j_il2cpp_runtime_class_init_0(v30, v9);
    v8 = *(_QWORD *)(v28[7] + 16LL);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_224B908(v26);
    otherBgmParams = **(BgmPlayArgs_array ***)(v8 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_20:
    sub_2213CDC(v8, v9);
  System_Collections_Generic_List_object___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v31);
}


void BgmPlayArgsGroup___ctor_48157840(
        BgmPlayArgsGroup_o *this,
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_BgmPlayArgs__o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  v12 = Analyzer_FileNameToBgmPlayArgsGroup__Analyze(toAnalyze, volumeNullable, fadeTime, startTime, v11);
  this->fields._AllArgsList_k__BackingField = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  BgmPlayArgsGroup__Initialize(this, v19);
}


void BgmPlayArgsGroup___ctor_48180292(BgmPlayArgsGroup_o *this, BgmPlayArgs_array *bgmParams, const MethodInfo *method)
{
  __int64 v5; // x1
  long double v6; // q0
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1

  if ( (byte_596FE15 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___91640704);
    sub_2213A60(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
    byte_596FE15 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !bgmParams )
  {
    v7 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v8 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v8 )
    {
      sub_224B964(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v6);
    if ( !*(_DWORD *)(v9 + 228) )
      *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v9, v5);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v6);
    bgmParams = **(BgmPlayArgs_array ***)(v10 + 184);
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)bgmParams,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___91640704);
  if ( !this )
    sub_2213CDC(v12, v13);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v11, v14, v15, v16, v17, v18, v19);
  BgmPlayArgsGroup__Initialize(this, v20);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  BgmPlayArgsGroup___c_c *v3; // x0
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v7; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596FE12 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
    sub_2213A60(&System_Func_BgmPlayArgs__bool__TypeInfo);
    sub_2213A60(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__);
    sub_2213A60(&BgmPlayArgsGroup___c_TypeInfo);
    byte_596FE12 = 1;
  }
  v3 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  if ( !*(&BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo, method);
    v3 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__12_0 = (System_Func_object__bool__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BgmPlayArgs__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v7, Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, 0);
    v8 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v8->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__12_0, (int32_t)_9__12_0, v9, v10, v11, v12, v13, v14);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  BgmPlayArgsGroup___c_c *v3; // x0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x20
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__17_0; // x21
  Il2CppObject *v7; // x22
  struct BgmPlayArgsGroup___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 naturalAligment; // x10
  struct MainBgmPlayArgs_o *v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596FE16 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
    sub_2213A60(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
    sub_2213A60(&MainBgmPlayArgs_TypeInfo);
    sub_2213A60(&System_Predicate_BgmPlayArgs__TypeInfo);
    sub_2213A60(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__);
    sub_2213A60(&BgmPlayArgsGroup___c_TypeInfo);
    byte_596FE16 = 1;
  }
  v3 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !*(&BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo, method);
    v3 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__17_0 = (System_Predicate_object__o *)static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BgmPlayArgs__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v7, Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, 0);
    v8 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v8->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__17_0, (int32_t)_9__17_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !AllArgsList_k__BackingField )
    sub_2213CDC(v3, method);
  v15 = System_Collections_Generic_List_object___Find(
          AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v15
    && (naturalAligment = MainBgmPlayArgs_TypeInfo->_2.naturalAligment,
        v15->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (MainBgmPlayArgs_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] == MainBgmPlayArgs_TypeInfo )
      v23 = (struct MainBgmPlayArgs_o *)v15;
    else
      v23 = 0;
  }
  else
  {
    v23 = 0;
  }
  this->fields._MainArgs_k__BackingField = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MainArgs_k__BackingField,
    (int32_t)v23,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields._AllArgsList_k__BackingField,
                                                               (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v25 = (struct System_Collections_Generic_List_SubBgmPlayArgs__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v24,
                                                                      (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  this->fields._SubArgsList_k__BackingField = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubArgsList_k__BackingField,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


BgmPlayArgsGroup_o *BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v3; // x0
  __int64 v4; // x1
  BgmPlayArgsGroup___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__13_0; // x20
  Il2CppObject *v9; // x21
  struct BgmPlayArgsGroup___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Object_array *v18; // x19
  BgmPlayArgsGroup_o *v19; // x20
  const MethodInfo *v20; // x2

  if ( (byte_596FE13 & 1) == 0 )
  {
    sub_2213A60(&BgmPlayArgsGroup_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
    sub_2213A60(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    sub_2213A60(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__);
    sub_2213A60(&BgmPlayArgsGroup___c_TypeInfo);
    byte_596FE13 = 1;
  }
  v3 = BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v5 = BgmPlayArgsGroup___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !*(&BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo, v4);
    v5 = BgmPlayArgsGroup___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__13_0 = (System_Func_object__object__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v9, Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, 0);
    v10 = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    v10->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__13_0, (int32_t)_9__13_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v6,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v18 = System_Linq_Enumerable__ToArray_object_(
          v17,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v19 = (BgmPlayArgsGroup_o *)sub_2213CCC(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_48180292(v19, (BgmPlayArgs_array *)v18, v20);
  return v19;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AllArgsList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BgmPlayArgsGroup__set_MainArgs(BgmPlayArgsGroup_o *this, MainBgmPlayArgs_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MainArgs_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MainArgs_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SubArgsList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SubArgsList_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BgmPlayArgsGroup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FE17 & 1) == 0 )
  {
    sub_2213A60(&BgmPlayArgsGroup___c_TypeInfo);
    byte_596FE17 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BgmPlayArgsGroup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BgmPlayArgsGroup___c_TypeInfo->static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BgmPlayArgsGroup___c_TypeInfo->static_fields,
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

  if ( (byte_596FE18 & 1) == 0 )
  {
    sub_2213A60(&MainBgmPlayArgs_TypeInfo);
    byte_596FE18 = 1;
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
    sub_2213CDC(this, 0);
  return ((BgmPlayArgs_o *(__fastcall *)(BgmPlayArgs_o *, void *))x->klass[1]._1.image)(x, x->klass[1]._1.gc_desc);
}