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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  long double inited; // q0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x21
  _QWORD *v32; // x20
  __int64 v33; // x8
  __int64 v34; // x0
  const MethodInfo *v35; // x1

  if ( (byte_4B661D7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, mainBgmParam);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v10);
    byte_4B661D7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v11 )
    goto LABEL_20;
  items = v11->fields._items;
  v21 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)mainBgmParam,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v23[4] = (Il2CppClass *)mainBgmParam;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)mainBgmParam, v14, v15, v16, v17, v18, v19);
  }
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v11;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v24, v25, v26, v27, v28, v29);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !otherBgmParams )
  {
    v32 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v33 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v33 )
    {
      sub_1C36A04(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v33 = v32[7];
    }
    v34 = *(_QWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v34 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v34);
    v12 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C369A8(inited);
    otherBgmParams = **(BgmPlayArgs_array ***)(v12 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_20:
    sub_1BE4D28(v12, v13);
  System_Collections_Generic_List_object___AddRange(
    AllArgsList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams,
    (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v35);
}


void __fastcall BgmPlayArgsGroup___ctor_39236888(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  long double inited; // q0
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  System_Collections_Generic_List_object__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1

  v3 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_4B661D8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, bgmParams);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___77097448, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v6);
    byte_4B661D8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v8 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v9 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v9 )
    {
      sub_1C36A04(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C369A8(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C369A8(inited);
    v3 = **(System_Collections_Generic_IEnumerable_T__o ***)(v11 + 184);
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_BgmPlayArgs__TypeInfo);
  System_Collections_Generic_List_object____ctor_56539928(
    v12,
    v3,
    (const MethodInfo_35EBB18 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___77097448);
  if ( !this )
    sub_1BE4D28(v13, v14);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v12;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v12, v15, v16, v17, v18, v19, v20);
  BgmPlayArgsGroup__Initialize(this, v21);
}


void __fastcall BgmPlayArgsGroup___ctor_39238008(
        BgmPlayArgsGroup_o *this,
        System_String_o *toAnalyze,
        System_Nullable_float__o volumeNullable,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_BgmPlayArgs__o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x1
  System_Nullable_float__o v20; // 0:x1.8

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v20 = volumeNullable;
  v12 = Analyzer_FileNameToBgmPlayArgsGroup__Analyze(toAnalyze, v20, fadeTime, startTime, v11);
  this->fields._AllArgsList_k__BackingField = v12;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  BgmPlayArgsGroup__Initialize(this, v19);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B661D5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, method);
    sub_1BE4ACC(&System_Func_BgmPlayArgs__bool__TypeInfo, v3);
    sub_1BE4ACC(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v4);
    sub_1BE4ACC(&BgmPlayArgsGroup___c_TypeInfo, v5);
    byte_4B661D5 = 1;
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
    _9__12_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_BgmPlayArgs__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__12_0, v9, Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 methodPtr_low; // x10
  struct MainBgmPlayArgs_o *v28; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B661D9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v4);
    sub_1BE4ACC(&MainBgmPlayArgs_TypeInfo, v5);
    sub_1BE4ACC(&System_Predicate_BgmPlayArgs__TypeInfo, v6);
    sub_1BE4ACC(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v7);
    sub_1BE4ACC(&BgmPlayArgsGroup___c_TypeInfo, v8);
    byte_4B661D9 = 1;
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
    _9__17_0 = (System_Predicate_object__o *)sub_1BE4D18(System_Predicate_BgmPlayArgs__TypeInfo);
    System_Predicate_object____ctor(_9__17_0, v12, Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
      (int64_t)_9__17_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !AllArgsList_k__BackingField )
    sub_1BE4D28(v9, method);
  v20 = System_Collections_Generic_List_object___Find(
          AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_35EC88C *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v20
    && (methodPtr_low = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v20->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MainBgmPlayArgs_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] == MainBgmPlayArgs_TypeInfo )
      v28 = (struct MainBgmPlayArgs_o *)v20;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v28;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._MainArgs_k__BackingField,
    (int64_t)v28,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields._AllArgsList_k__BackingField,
                                                               (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v30 = (struct System_Collections_Generic_List_SubBgmPlayArgs__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v29,
                                                                      (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  this->fields._SubArgsList_k__BackingField = v30;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SubArgsList_k__BackingField,
    (int64_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x19
  BgmPlayArgsGroup_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_4B661D6 & 1) == 0 )
  {
    sub_1BE4ACC(&BgmPlayArgsGroup_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v4);
    sub_1BE4ACC(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v5);
    sub_1BE4ACC(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v6);
    sub_1BE4ACC(&BgmPlayArgsGroup___c_TypeInfo, v7);
    byte_4B661D6 = 1;
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
    _9__13_0 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo);
    System_Func_object__object____ctor(_9__13_0, v12, Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v22 = (BgmPlayArgsGroup_o *)sub_1BE4D18(BgmPlayArgsGroup_TypeInfo);
  BgmPlayArgsGroup___ctor_39236888(v22, (BgmPlayArgs_array *)v21, v23);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AllArgsList_k__BackingField = value;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall BgmPlayArgsGroup__set_MainArgs(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MainArgs_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._MainArgs_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BgmPlayArgsGroup__set_SubArgsList(
        BgmPlayArgsGroup_o *this,
        System_Collections_Generic_List_SubBgmPlayArgs__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SubArgsList_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._SubArgsList_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BgmPlayArgsGroup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B661DA & 1) == 0 )
  {
    sub_1BE4ACC(&BgmPlayArgsGroup___c_TypeInfo, v1);
    byte_4B661DA = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(BgmPlayArgsGroup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BgmPlayArgsGroup___c_TypeInfo->static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BgmPlayArgsGroup___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4B661DB & 1) == 0 )
  {
    sub_1BE4ACC(&MainBgmPlayArgs_TypeInfo, x);
    byte_4B661DB = 1;
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
    sub_1BE4D28(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}