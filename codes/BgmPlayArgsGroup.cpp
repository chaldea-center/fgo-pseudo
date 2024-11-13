void __fastcall BgmPlayArgsGroup___ctor(
        BgmPlayArgsGroup_o *this,
        MainBgmPlayArgs_o *mainBgmParam,
        BgmPlayArgs_array *otherBgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Collections_Generic_List_object__o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  long double inited; // q0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x21
  _QWORD *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x0
  const MethodInfo *v42; // x1

  v4 = (System_Collections_Generic_IEnumerable_T__o *)otherBgmParams;
  if ( (byte_4B15823 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, mainBgmParam, otherBgmParams);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v13, v14);
    byte_4B15823 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                       v15,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor__);
  if ( !v18 )
    goto LABEL_20;
  items = v18->fields._items;
  v28 = Method_System_Collections_Generic_List_BgmPlayArgs__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v18->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)mainBgmParam,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &items->obj.klass + size;
    v18->fields._size = size + 1;
    v30[4] = (Il2CppClass *)mainBgmParam;
    sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)mainBgmParam, v21, v22, v23, v24, v25, v26);
  }
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v18, v31, v32, v33, v34, v35, v36);
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !v4 )
  {
    v39 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v40 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v40 )
    {
      sub_1C1C718(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, v20);
      v40 = v39[7];
    }
    v41 = *(_QWORD *)(v40 + 16);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v41 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v41, v20);
    v19 = *(_QWORD *)(v39[7] + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC(inited);
    v4 = **(System_Collections_Generic_IEnumerable_T__o ***)(v19 + 184);
  }
  if ( !AllArgsList_k__BackingField )
LABEL_20:
    sub_1BCAA3C(v19, v20);
  System_Collections_Generic_List_object___AddRange(
    AllArgsList_k__BackingField,
    v4,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BgmPlayArgs__AddRange__);
  BgmPlayArgsGroup__Initialize(this, v42);
}


void __fastcall BgmPlayArgsGroup___ctor_39041644(
        BgmPlayArgsGroup_o *this,
        BgmPlayArgs_array *bgmParams,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  long double inited; // q0
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1

  v3 = (System_Collections_Generic_IEnumerable_T__o *)bgmParams;
  if ( (byte_4B15824 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, bgmParams, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs___ctor___76775944, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_BgmPlayArgs__TypeInfo, v7, v8);
    byte_4B15824 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v13 = Method_System_Linq_Enumerable_Empty_BgmPlayArgs___;
    v14 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_BgmPlayArgs___ + 7);
    if ( !v14 )
    {
      sub_1C1C718(Method_System_Linq_Enumerable_Empty_BgmPlayArgs___, v9);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15, v9);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C1C6BC(inited);
    v3 = **(System_Collections_Generic_IEnumerable_T__o ***)(v16 + 184);
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BgmPlayArgs__TypeInfo,
                                                       v9,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor_56235344(
    v17,
    v3,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_BgmPlayArgs___ctor___76775944);
  if ( !this )
    sub_1BCAA3C(v18, v19);
  this->fields._AllArgsList_k__BackingField = (struct System_Collections_Generic_List_BgmPlayArgs__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v17, v20, v21, v22, v23, v24, v25);
  BgmPlayArgsGroup__Initialize(this, v26);
}


void __fastcall BgmPlayArgsGroup___ctor_39042764(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  BgmPlayArgsGroup__Initialize(this, v19);
}


System_Collections_Generic_IEnumerable_BgmPlayArgs__o *__fastcall BgmPlayArgsGroup__AllArgsListNullExcluded(
        BgmPlayArgsGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BgmPlayArgsGroup___c_c *v11; // x0
  struct System_Collections_Generic_List_BgmPlayArgs__o *AllArgsList_k__BackingField; // x19
  System_Func_object__bool__o *_9__12_0; // x20
  Il2CppObject *v14; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B15821 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BgmPlayArgs___, method, v2);
    sub_1BCA7E0(&System_Func_BgmPlayArgs__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, v7, v8);
    sub_1BCA7E0(&BgmPlayArgsGroup___c_TypeInfo, v9, v10);
    byte_4B15821 = 1;
  }
  v11 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo, method);
    v11 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__12_0 = (System_Func_object__bool__o *)v11->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__12_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BgmPlayArgs__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(_9__12_0, v14, Method_BgmPlayArgsGroup___c__AllArgsListNullExcluded_b__12_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Func_BgmPlayArgs__bool__o *)_9__12_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__12_0,
      (int64_t)_9__12_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (System_Collections_Generic_IEnumerable_BgmPlayArgs__o *)System_Linq_Enumerable__Where_object_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)AllArgsList_k__BackingField,
                                                                    (System_Func_TSource__bool__o *)_9__12_0,
                                                                    (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BgmPlayArgs___);
}


void __fastcall BgmPlayArgsGroup__Initialize(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BgmPlayArgsGroup___c_c *v17; // x0
  System_Collections_Generic_List_object__o *AllArgsList_k__BackingField; // x20
  System_Predicate_object__o *_9__17_0; // x21
  Il2CppObject *v20; // x22
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 methodPtr_low; // x10
  struct MainBgmPlayArgs_o *v36; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  struct System_Collections_Generic_List_SubBgmPlayArgs__o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B15825 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BgmPlayArgs__Find__, v7, v8);
    sub_1BCA7E0(&MainBgmPlayArgs_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Predicate_BgmPlayArgs__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, v13, v14);
    sub_1BCA7E0(&BgmPlayArgsGroup___c_TypeInfo, v15, v16);
    byte_4B15825 = 1;
  }
  v17 = BgmPlayArgsGroup___c_TypeInfo;
  AllArgsList_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._AllArgsList_k__BackingField;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo, method);
    v17 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__17_0 = (System_Predicate_object__o *)v17->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17, method);
      v17 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__17_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_BgmPlayArgs__TypeInfo, method, v2, v3);
    System_Predicate_object____ctor(_9__17_0, v20, Method_BgmPlayArgsGroup___c__Initialize_b__17_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Predicate_BgmPlayArgs__o *)_9__17_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
      (int64_t)_9__17_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !AllArgsList_k__BackingField )
    sub_1BCAA3C(v17, method);
  v28 = System_Collections_Generic_List_object___Find(
          AllArgsList_k__BackingField,
          (System_Predicate_T__o *)_9__17_0,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_BgmPlayArgs__Find__);
  if ( v28
    && (methodPtr_low = LOBYTE(MainBgmPlayArgs_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v28->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (MainBgmPlayArgs_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] == MainBgmPlayArgs_TypeInfo )
      v36 = (struct MainBgmPlayArgs_o *)v28;
    else
      v36 = 0LL;
  }
  else
  {
    v36 = 0LL;
  }
  this->fields._MainArgs_k__BackingField = v36;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MainArgs_k__BackingField,
    (int64_t)v36,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields._AllArgsList_k__BackingField,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_SubBgmPlayArgs___);
  v38 = (struct System_Collections_Generic_List_SubBgmPlayArgs__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v37,
                                                                      (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_SubBgmPlayArgs___);
  this->fields._SubArgsList_k__BackingField = v38;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SubArgsList_k__BackingField,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


BgmPlayArgsGroup_o *__fastcall BgmPlayArgsGroup__NullExcludedClone(BgmPlayArgsGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_BgmPlayArgs__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  BgmPlayArgsGroup___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__object__o *_9__13_0; // x20
  Il2CppObject *v21; // x21
  struct BgmPlayArgsGroup___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  BgmPlayArgsGroup_o *v34; // x20
  const MethodInfo *v35; // x2

  if ( (byte_4B15822 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmPlayArgsGroup_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___, v6, v7);
    sub_1BCA7E0(&System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, v10, v11);
    sub_1BCA7E0(&BgmPlayArgsGroup___c_TypeInfo, v12, v13);
    byte_4B15822 = 1;
  }
  v14 = BgmPlayArgsGroup__AllArgsListNullExcluded(this, method);
  v18 = BgmPlayArgsGroup___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !BgmPlayArgsGroup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmPlayArgsGroup___c_TypeInfo, v15);
    v18 = BgmPlayArgsGroup___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__object__o *)v18->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v15);
      v18 = BgmPlayArgsGroup___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__13_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BgmPlayArgs__BgmPlayArgs__TypeInfo,
                                                  v15,
                                                  v16,
                                                  v17);
    System_Func_object__object____ctor(_9__13_0, v21, Method_BgmPlayArgsGroup___c__NullExcludedClone_b__13_0__, 0LL);
    static_fields = BgmPlayArgsGroup___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_BgmPlayArgs__BgmPlayArgs__o *)_9__13_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BgmPlayArgs__BgmPlayArgs___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BgmPlayArgs___);
  v34 = (BgmPlayArgsGroup_o *)sub_1BCAA2C(BgmPlayArgsGroup_TypeInfo, v31, v32, v33);
  BgmPlayArgsGroup___ctor_39041644(v34, (BgmPlayArgs_array *)v30, v35);
  return v34;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1BCA784(
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15826 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmPlayArgsGroup___c_TypeInfo, v1, v2);
    byte_4B15826 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BgmPlayArgsGroup___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BgmPlayArgsGroup___c_TypeInfo->static_fields->__9 = (struct BgmPlayArgsGroup___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BgmPlayArgsGroup___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B15827 & 1) == 0 )
  {
    sub_1BCA7E0(&MainBgmPlayArgs_TypeInfo, x, method);
    byte_4B15827 = 1;
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
    sub_1BCAA3C(this, 0LL);
  return (BgmPlayArgs_o *)((__int64 (__fastcall *)(BgmPlayArgs_o *, const char *))x->klass[1]._1.gc_desc)(
                            x,
                            x->klass[1]._1.name);
}