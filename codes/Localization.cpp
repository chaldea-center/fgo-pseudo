void Localization___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct Localization_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x19
  struct Localization_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_Dictionary_object__object__o *v8; // x19
  struct Localization_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct Localization_StaticFields *v12; // x8

  if ( (byte_4C5B49F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B49F = 1;
  }
  static_fields = Localization_TypeInfo->static_fields;
  static_fields->mLanguages = 0;
  static_fields = (struct Localization_StaticFields *)((char *)static_fields + 24);
  static_fields[-1].mMerging = 0;
  sub_1C3E508((CGThumbnailListItem_o *)static_fields, 0, v1, v2);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v5 = Localization_TypeInfo->static_fields;
  v5->mOldDictionary = (struct System_Collections_Generic_Dictionary_string__string__o *)v4;
  sub_1C3E508((CGThumbnailListItem_o *)&v5->mOldDictionary, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__string____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
  v9 = Localization_TypeInfo->static_fields;
  v9->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&v9->mDictionary, (int32_t)v8, v10, v11);
  v12 = Localization_TypeInfo->static_fields;
  v12->mLanguageIndex = -1;
  v12->mMerging = 0;
}


void Localization__AddCSV(
        BetterList_string__o *newValues,
        System_String_array *newLanguages,
        System_Collections_Generic_Dictionary_string__int__o *languageIndices,
        const MethodInfo *method)
{
  BetterList_T__o *v6; // x22
  Il2CppObject *Item; // x19
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x21
  bool v10; // w0
  Localization_c *v11; // x8
  uint32_t cctor_finished; // w9
  Il2CppObject *v13; // x19
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0

  v6 = (BetterList_T__o *)newValues;
  if ( (byte_4C5B496 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_string__get_Item__);
    sub_1C3E564(&UnityEngine_Debug_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&StringLiteral_536/*"' is already present"*/);
    newValues = (BetterList_string__o *)sub_1C3E564(&StringLiteral_8485/*"Localization key '"*/);
    byte_4C5B496 = 1;
  }
  if ( !v6 )
    goto LABEL_23;
  if ( v6->fields.size < 2 )
    return;
  Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
  if ( System_String__IsNullOrEmpty((System_String_o *)Item, 0) )
    return;
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  newValues = (BetterList_string__o *)Localization__ExtractStrings(
                                        (BetterList_string__o *)v6,
                                        newLanguages,
                                        languageIndices,
                                        v8);
  if ( !Localization_TypeInfo->static_fields->mDictionary )
    goto LABEL_23;
  v9 = (Il2CppObject *)newValues;
  v10 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo->static_fields->mDictionary,
          Item,
          (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
  v11 = Localization_TypeInfo;
  cctor_finished = Localization_TypeInfo->_2.cctor_finished;
  if ( v10 )
  {
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v11 = Localization_TypeInfo;
    }
    newValues = (BetterList_string__o *)v11->static_fields->mDictionary;
    if ( newValues )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)newValues,
        Item,
        v9,
        (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
      if ( !newLanguages )
      {
        v13 = (Il2CppObject *)System_String__Concat_63674716(
                                (System_String_o *)StringLiteral_8485/*"Localization key '"*/,
                                (System_String_o *)Item,
                                (System_String_o *)StringLiteral_536/*"' is already present"*/,
                                0);
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogWarning(v13, 0);
      }
      return;
    }
LABEL_23:
    sub_1C3E7C0(newValues, newLanguages);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v11 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->mDictionary;
  if ( !mDictionary )
    sub_1C3E7C0(0, newLanguages);
  System_Collections_Generic_Dictionary_object__object___Add(
    mDictionary,
    Item,
    v9,
    (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
}


bool Localization__Exists(System_String_o *key, const MethodInfo *method)
{
  Localization_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *String; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  Localization_c *v8; // x8
  Il2CppObject *v9; // x20
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0
  Localization_c *v11; // x0
  Localization_c *v12; // x0
  Localization_c *v14; // x0

  if ( (byte_4C5B49E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&StringLiteral_191/*" Mobile"*/);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    sub_1C3E564(&StringLiteral_6053/*"English"*/);
    byte_4C5B49E = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v3 = Localization_TypeInfo;
  }
  if ( !v3->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8355/*"Language"*/,
               (System_String_o *)StringLiteral_6053/*"English"*/,
               0);
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    Localization__set_language(String, v4);
  }
  v6 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_191/*" Mobile"*/, 0);
  v8 = Localization_TypeInfo;
  v9 = (Il2CppObject *)v6;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v8 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->mDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         v9,
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
  {
    return 1;
  }
  v11 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v11 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         v9,
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return 1;
  }
  v12 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v12 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v12->static_fields->mDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         (Il2CppObject *)key,
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
  {
    return 1;
  }
  v14 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v14 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v14->static_fields->mOldDictionary;
  if ( !mDictionary )
LABEL_26:
    sub_1C3E7C0(mDictionary, v7);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           mDictionary,
           (Il2CppObject *)key,
           (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
}


System_String_array *Localization__ExtractStrings(
        BetterList_string__o *added,
        System_String_array *newLanguages,
        System_Collections_Generic_Dictionary_string__int__o *languageIndices,
        const MethodInfo *method)
{
  BetterList_T__o *v6; // x19
  Il2CppObject *Item; // x0
  Localization_c *v8; // x8
  Il2CppObject *v9; // x22
  __int64 v10; // x8
  __int64 v11; // x28
  __int64 v12; // x25
  int32_t v13; // w0
  Il2CppObject *v14; // x29
  unsigned __int64 v15; // x22
  unsigned int v16; // w23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  BetterList_string__o *v19; // x1
  Il2CppClass **v20; // x0
  BetterList_string__o *v21; // x20
  __int64 v22; // x8
  int32_t size; // w8
  int v24; // w8
  __int64 v25; // x23
  CGThumbnailListItem_o *v26; // x22
  __int64 i; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  v6 = (BetterList_T__o *)added;
  if ( (byte_4C5B497 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_string__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C3E564(&Localization_TypeInfo);
    added = (BetterList_string__o *)sub_1C3E564(&string___TypeInfo);
    byte_4C5B497 = 1;
  }
  value = 0;
  if ( newLanguages )
  {
    if ( !v6 )
      goto LABEL_35;
    Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
    v8 = Localization_TypeInfo;
    v9 = Item;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v8 = Localization_TypeInfo;
    }
    added = (BetterList_string__o *)v8->static_fields->mDictionary;
    if ( !added )
      goto LABEL_35;
    added = (BetterList_string__o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                      (System_Collections_Generic_Dictionary_object__object__o *)added,
                                      v9,
                                      &value,
                                      (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    if ( ((unsigned __int8)added & 1) == 0 )
    {
      added = (BetterList_string__o *)Localization_TypeInfo;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        added = (BetterList_string__o *)Localization_TypeInfo;
      }
      v10 = *(_QWORD *)(*(_QWORD *)&added[5].fields.size + 24LL);
      if ( !v10 )
        goto LABEL_35;
      added = (BetterList_string__o *)sub_1C3E60C(string___TypeInfo, *(unsigned int *)(v10 + 24));
      value = (Il2CppObject *)added;
    }
    if ( (int)newLanguages->max_length >= 1 )
    {
      v11 = 0;
      v12 = (unsigned int)newLanguages->max_length - 1LL;
      while ( languageIndices )
      {
        v13 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)languageIndices,
                (Il2CppObject *)newLanguages->m_Items[v11],
                (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        v14 = value;
        v15 = v11 + 1;
        v16 = v13;
        added = (BetterList_string__o *)BetterList_object___get_Item(
                                          v6,
                                          (int)v11 + 1,
                                          (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
        if ( !v14 )
          break;
        if ( v16 >= LODWORD(v14[1].monitor) )
          goto LABEL_20;
        v19 = added;
        v20 = &v14->klass + (int)v16;
        v20[4] = (Il2CppClass *)v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v17, v18);
        if ( v12 == v11 )
          return (System_String_array *)value;
        ++v11;
        if ( v15 >= LODWORD(newLanguages->max_length) )
          goto LABEL_20;
      }
LABEL_35:
      sub_1C3E7C0(added, newLanguages);
    }
    return (System_String_array *)value;
  }
  else
  {
    added = (BetterList_string__o *)Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      added = (BetterList_string__o *)Localization_TypeInfo;
    }
    v22 = *(_QWORD *)(*(_QWORD *)&added[5].fields.size + 24LL);
    if ( !v22 )
      goto LABEL_35;
    added = (BetterList_string__o *)sub_1C3E60C(string___TypeInfo, *(unsigned int *)(v22 + 24));
    if ( !v6 )
      goto LABEL_35;
    v21 = added;
    if ( !added )
      goto LABEL_35;
    size = added->fields.size;
    if ( v6->fields.size >= size + 1 )
      v24 = size + 1;
    else
      v24 = v6->fields.size;
    if ( v24 >= 2 )
    {
      v25 = (unsigned int)v24;
      v26 = (CGThumbnailListItem_o *)&added[1];
      for ( i = 1; i != v25; ++i )
      {
        added = (BetterList_string__o *)BetterList_object___get_Item(
                                          v6,
                                          i,
                                          (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
        if ( i - 1 >= (unsigned __int64)(unsigned int)v21->fields.size )
LABEL_20:
          sub_1C3E7C8(added, newLanguages);
        v26->klass = (CGThumbnailListItem_c *)added;
        sub_1C3E508(v26, (int32_t)added, v28, v29);
        v26 = (CGThumbnailListItem_o *)((char *)v26 + 8);
      }
    }
  }
  return (System_String_array *)v21;
}


System_String_o *Localization__Format(System_String_o *key, System_Object_array *parameters, const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_4C5B49C & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B49C = 1;
  }
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  v5 = Localization__Get(key, (const MethodInfo *)parameters);
  return System_String__Format_63677896(v5, parameters, 0);
}


System_String_o *Localization__Get(System_String_o *key, const MethodInfo *method)
{
  Localization_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *String; // x20
  void *language; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Localization_c *v10; // x8
  System_String_o *v11; // x20
  unsigned __int64 i; // x22
  struct System_String_array *mLanguages; // x9
  __int64 v15; // x8
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  System_String_o *v18; // x0
  Localization_c *v19; // x8
  Il2CppObject *v20; // x20
  struct Localization_StaticFields *static_fields; // x9
  Il2CppObject *v22; // x22
  int32_t monitor; // w10
  int32_t mLanguageIndex; // w9
  Il2CppClass **v25; // x8
  Localization_c *v26; // x8
  struct Localization_StaticFields *v27; // x9
  Il2CppObject *v28; // x20
  int32_t v29; // w10
  int32_t v30; // w9
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *v32; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C5B49B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Debug_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&StringLiteral_191/*" Mobile"*/);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    sub_1C3E564(&StringLiteral_9477/*"No localization data present"*/);
    sub_1C3E564(&StringLiteral_8356/*"Language not found: "*/);
    sub_1C3E564(&StringLiteral_6053/*"English"*/);
    byte_4C5B49B = 1;
  }
  v3 = Localization_TypeInfo;
  v32 = 0;
  value = 0;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v3 = Localization_TypeInfo;
  }
  if ( !v3->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8355/*"Language"*/,
               (System_String_o *)StringLiteral_6053/*"English"*/,
               0);
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    Localization__LoadDictionary(String, v4);
    v3 = Localization_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = Localization_TypeInfo;
  }
  if ( v3->static_fields->mLanguages )
  {
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    language = Localization__get_language((const MethodInfo *)v3);
    v10 = Localization_TypeInfo;
    v11 = (System_String_o *)language;
    if ( Localization_TypeInfo->static_fields->mLanguageIndex == -1 )
    {
      for ( i = 0; ; ++i )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = Localization_TypeInfo;
        }
        mLanguages = v10->static_fields->mLanguages;
        if ( !mLanguages )
          goto LABEL_84;
        if ( (__int64)i >= SLODWORD(mLanguages->max_length) )
          goto LABEL_31;
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          mLanguages = Localization_TypeInfo->static_fields->mLanguages;
          if ( !mLanguages )
            goto LABEL_84;
        }
        if ( i >= LODWORD(mLanguages->max_length) )
          goto LABEL_85;
        language = (void *)System_String__op_Equality(mLanguages->m_Items[i], v11, 0);
        if ( ((unsigned __int8)language & 1) != 0 )
          break;
        v10 = Localization_TypeInfo;
      }
      v10 = Localization_TypeInfo;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v10 = Localization_TypeInfo;
      }
      v10->static_fields->mLanguageIndex = i;
    }
LABEL_31:
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = Localization_TypeInfo;
    }
    language = v10->static_fields;
    if ( *((_DWORD *)language + 12) == -1 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        language = Localization_TypeInfo->static_fields;
      }
      v15 = *((_QWORD *)language + 3);
      *((_DWORD *)language + 12) = 0;
      if ( !v15 )
        goto LABEL_84;
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_85;
      v16 = *(_QWORD *)(v15 + 32);
      *((_QWORD *)language + 7) = v16;
      sub_1C3E508((CGThumbnailListItem_o *)((char *)language + 56), v16, v8, v9);
      v17 = (Il2CppObject *)System_String__Concat_63636468((System_String_o *)StringLiteral_8356/*"Language not found: "*/, v11, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning(v17, 0);
    }
    v18 = System_String__Concat_63636468(key, (System_String_o *)StringLiteral_191/*" Mobile"*/, 0);
    v19 = Localization_TypeInfo;
    v20 = (Il2CppObject *)v18;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v19 = Localization_TypeInfo;
    }
    static_fields = v19->static_fields;
    if ( static_fields->mLanguageIndex != -1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = Localization_TypeInfo->static_fields;
      }
      language = static_fields->mDictionary;
      if ( !language )
        goto LABEL_84;
      language = (void *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                           (System_Collections_Generic_Dictionary_object__object__o *)language,
                           v20,
                           &value,
                           (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
      v19 = Localization_TypeInfo;
      if ( ((unsigned __int8)language & 1) != 0 )
      {
        if ( !Localization_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          v19 = Localization_TypeInfo;
        }
        v22 = value;
        if ( !value )
          goto LABEL_84;
        monitor = (int32_t)value[1].monitor;
        mLanguageIndex = v19->static_fields->mLanguageIndex;
        if ( mLanguageIndex < monitor )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            monitor = (int32_t)v22[1].monitor;
            mLanguageIndex = Localization_TypeInfo->static_fields->mLanguageIndex;
          }
          if ( mLanguageIndex < (unsigned int)monitor )
          {
            v25 = &v22->klass + mLanguageIndex;
            return (System_String_o *)v25[4];
          }
          goto LABEL_85;
        }
      }
    }
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = Localization_TypeInfo;
    }
    language = v19->static_fields->mOldDictionary;
    if ( language )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)language,
             v20,
             &v32,
             (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        return (System_String_o *)v32;
      }
      v26 = Localization_TypeInfo;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v26 = Localization_TypeInfo;
      }
      v27 = v26->static_fields;
      if ( v27->mLanguageIndex != -1 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v27 = Localization_TypeInfo->static_fields;
        }
        language = v27->mDictionary;
        if ( !language )
          goto LABEL_84;
        language = (void *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                             (System_Collections_Generic_Dictionary_object__object__o *)language,
                             (Il2CppObject *)key,
                             &value,
                             (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
        v26 = Localization_TypeInfo;
        if ( ((unsigned __int8)language & 1) != 0 )
        {
          if ( !Localization_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
            v26 = Localization_TypeInfo;
          }
          v28 = value;
          if ( !value )
            goto LABEL_84;
          v29 = (int32_t)value[1].monitor;
          v30 = v26->static_fields->mLanguageIndex;
          if ( v30 < v29 )
          {
            if ( !v26->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v26);
              v29 = (int32_t)v28[1].monitor;
              v30 = Localization_TypeInfo->static_fields->mLanguageIndex;
            }
            if ( v30 < (unsigned int)v29 )
            {
              v25 = &v28->klass + v30;
              return (System_String_o *)v25[4];
            }
LABEL_85:
            sub_1C3E7C8(language, v7);
          }
        }
      }
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = Localization_TypeInfo;
      }
      language = v26->static_fields->mOldDictionary;
      if ( language )
      {
        if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
               (System_Collections_Generic_Dictionary_object__object__o *)language,
               (Il2CppObject *)key,
               &v32,
               (const MethodInfo_3476FEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          return (System_String_o *)v32;
        }
        else
        {
          return key;
        }
      }
    }
LABEL_84:
    sub_1C3E7C0(language, v7);
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_9477/*"No localization data present"*/, 0);
  return 0;
}


bool Localization__HasLanguage(System_String_o *languageName, const MethodInfo *method)
{
  Localization_c *v3; // x0
  struct System_String_array *mLanguages; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x24
  __int64 v7; // x22
  __int64 v8; // x23
  bool v9; // w21
  struct System_String_array *v10; // x8

  if ( (byte_4C5B494 & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B494 = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v3 = Localization_TypeInfo;
  }
  mLanguages = v3->static_fields->mLanguages;
  if ( !mLanguages )
    goto LABEL_17;
  max_length = mLanguages->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = (int)max_length;
    v8 = (unsigned int)max_length - 1LL;
    v9 = 1;
    while ( 1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = Localization_TypeInfo;
      }
      v10 = v3->static_fields->mLanguages;
      if ( !v10 )
        break;
      if ( v6 >= LODWORD(v10->max_length) )
        sub_1C3E7C8(v3, method);
      if ( System_String__op_Equality(v10->m_Items[v6], languageName, 0) )
        return v9;
      v9 = (__int64)(v6 + 1) < v7;
      if ( v8 == v6 )
        return v9;
      v3 = Localization_TypeInfo;
      ++v6;
    }
LABEL_17:
    sub_1C3E7C0(v3, method);
  }
  return 0;
}


void Localization__Load(UnityEngine_TextAsset_o *asset, const MethodInfo *method)
{
  ByteReader_o *v3; // x20
  const MethodInfo *v4; // x2
  System_String_o *name; // x0
  const MethodInfo *v6; // x1
  System_String_o *v7; // x19
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_string__string__o *Dictionary; // x20

  if ( (byte_4C5B490 & 1) == 0 )
  {
    sub_1C3E564(&ByteReader_TypeInfo);
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B490 = 1;
  }
  v3 = (ByteReader_o *)sub_1C3E7B0(ByteReader_TypeInfo);
  ByteReader___ctor_49342372(v3, asset, v4);
  if ( !asset || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)asset, 0), !v3) )
    sub_1C3E7C0(name, v6);
  v7 = name;
  Dictionary = ByteReader__ReadDictionary(v3, v6);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  Localization__Set_49357056(v7, Dictionary, v8);
}


bool Localization__LoadAndSelect(System_String_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  Localization_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0
  const MethodInfo *v6; // x1
  Localization_c *v7; // x0
  Localization_c *v9; // x0

  if ( (byte_4C5B48F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    byte_4C5B48F = 1;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    v4 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v4 = Localization_TypeInfo;
    }
    mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v4->static_fields->mDictionary;
    if ( !mDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_object__object___get_Count(
            mDictionary,
            (const MethodInfo_34754B0 *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__) )
    {
      if ( !Localization_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      if ( !Localization__LoadDictionary(value, v6) )
        return 0;
    }
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    if ( Localization__SelectLanguage(value, v6) )
      return 1;
  }
  v7 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v7 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         mDictionary,
         (const MethodInfo_34754B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) > 0 )
    return 1;
  v9 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v9 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v9->static_fields->mOldDictionary;
  if ( !mDictionary
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          mDictionary,
          (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo->static_fields->mDictionary) == 0) )
  {
LABEL_26:
    sub_1C3E7C0(mDictionary, v3);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    mDictionary,
    (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
  if ( System_String__IsNullOrEmpty(value, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8355/*"Language"*/, 0);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool Localization__LoadCSV(UnityEngine_TextAsset_o *asset, bool merge, const MethodInfo *method)
{
  UnityEngine_TextAsset_o *v4; // x20
  UnityEngine_TextAsset_o *v5; // x1
  const MethodInfo *v6; // x3
  System_Byte_array *bytes; // x20

  v4 = asset;
  if ( (byte_4C5B492 & 1) == 0 )
  {
    asset = (UnityEngine_TextAsset_o *)sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B492 = 1;
  }
  if ( !v4 )
    sub_1C3E7C0(asset, merge);
  bytes = UnityEngine_TextAsset__get_bytes(v4, 0);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  return Localization__LoadCSV_49357592(bytes, v5, merge, v6);
}


// local variable allocation has failed, the output may be wrong!
bool Localization__LoadCSV_49356052(System_Byte_array *bytes, bool merge, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C5B493 & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B493 = 1;
  }
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  return Localization__LoadCSV_49357592(bytes, (UnityEngine_TextAsset_o *)merge, merge, v3);
}


bool Localization__LoadCSV_49357592(
        System_Byte_array *bytes,
        UnityEngine_TextAsset_o *asset,
        bool merge,
        const MethodInfo *method)
{
  __int64 v6; // x24
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  BetterList_T__o *CSV; // x0
  const MethodInfo *v11; // x1
  BetterList_T__o *v12; // x20
  Localization_c *v13; // x0
  bool IsNullOrEmpty; // w0
  Localization_c *v15; // x8
  struct Localization_StaticFields *static_fields; // x9
  struct System_String_array *mLanguages; // x9
  __int64 v18; // x0
  __int64 v19; // x21
  unsigned __int64 v20; // x22
  CGThumbnailListItem_o *v21; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  signed __int64 size; // x8
  int32_t i; // w22
  const MethodInfo *v26; // x1
  Il2CppObject *Item; // x23
  Localization_c *v28; // x0
  struct Localization_StaticFields *v29; // x0
  struct System_String_array *v30; // x8
  struct System_String_array *v31; // t1
  il2cpp_array_size_t max_length; // x19
  struct System_String_array *v33; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  BetterList_T__o *v36; // x1
  Il2CppClass **v37; // x0
  System_Collections_Generic_Dictionary_object__object__o *v38; // x23
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  unsigned int v44; // w9
  Il2CppObject *v45; // x1
  Il2CppClass **v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Localization_c *v51; // x0
  struct Localization_StaticFields *v52; // x0
  __int64 v54; // x0
  struct Localization_StaticFields *v55; // x8
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Localization_c *v58; // x0
  Il2CppObject *v59; // x0
  System_String_o *String; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Localization_c *v63; // x8
  System_String_o *v64; // x21
  struct Localization_StaticFields *v65; // x0
  unsigned __int64 v66; // x21
  __int64 j; // x19
  struct System_String_array *v68; // x23
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct Localization_StaticFields *v71; // x8
  struct System_String_array *v72; // x9
  Localization_c *v73; // x0
  System_Collections_Generic_Dictionary_object__int__o *v74; // x20
  unsigned __int64 k; // x22
  struct System_String_array *v76; // x8
  BetterList_string__o *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  BetterList_T__o *v80; // x22
  Il2CppObject *v81; // x0
  const MethodInfo *v82; // x1
  const MethodInfo *v83; // x3
  Localization_c *v84; // x0
  struct Localization_StaticFields *v85; // x8
  struct Localization_OnLocalizeNotification_o *onLocalize; // x19
  struct Localization_StaticFields *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+10h] [xbp-C0h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v92; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4C5B495 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Resize_string___);
    sub_1C3E564(&Method_BetterList_string__RemoveAt__);
    sub_1C3E564(&Method_BetterList_string__get_Item__);
    sub_1C3E564(&ByteReader_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Value__);
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    byte_4C5B495 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  array = 0;
  if ( !bytes )
    return 0;
  v6 = sub_1C3E7B0(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = bytes;
  sub_1C3E508((CGThumbnailListItem_o *)(v6 + 16), (int32_t)bytes, v7, v8);
  CSV = (BetterList_T__o *)ByteReader__ReadCSV((ByteReader_o *)v6, v9);
  if ( !CSV )
    goto LABEL_110;
  v12 = CSV;
  if ( CSV->fields.size < 2 )
    return 0;
  BetterList_object___RemoveAt(CSV, 0, (const MethodInfo_332C2C0 *)Method_BetterList_string__RemoveAt__);
  v13 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v13 = Localization_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v13->static_fields->mLanguage, 0);
  v15 = Localization_TypeInfo;
  if ( IsNullOrEmpty )
  {
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v15 = Localization_TypeInfo;
    }
    v15->static_fields->localizationHasBeenSet = 0;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = Localization_TypeInfo;
  }
  static_fields = v15->static_fields;
  if ( !static_fields->localizationHasBeenSet )
    goto LABEL_114;
  if ( !merge )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = Localization_TypeInfo;
      static_fields = Localization_TypeInfo->static_fields;
    }
    if ( !static_fields->mMerging )
      goto LABEL_114;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = Localization_TypeInfo;
  }
  mLanguages = v15->static_fields->mLanguages;
  if ( !mLanguages )
    goto LABEL_114;
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = Localization_TypeInfo;
    mLanguages = Localization_TypeInfo->static_fields->mLanguages;
    if ( !mLanguages )
      goto LABEL_110;
  }
  if ( mLanguages->max_length )
  {
    v18 = sub_1C3E60C(string___TypeInfo, (unsigned int)v12->fields.size);
    v19 = v18;
    if ( v12->fields.size >= 1 )
    {
      v20 = 0;
      v21 = (CGThumbnailListItem_o *)(v18 + 32);
      do
      {
        CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                   v12,
                                   v20,
                                   (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
        if ( !v19 )
          goto LABEL_110;
        if ( v20 >= *(unsigned int *)(v19 + 24) )
          goto LABEL_111;
        v21->klass = (CGThumbnailListItem_c *)CSV;
        sub_1C3E508(v21, (int32_t)CSV, v22, v23);
        size = v12->fields.size;
        ++v20;
        v21 = (CGThumbnailListItem_o *)((char *)v21 + 8);
      }
      while ( (__int64)v20 < size );
      if ( (int)size >= 1 )
      {
        for ( i = 0; i < v12->fields.size; ++i )
        {
          Item = BetterList_object___get_Item(v12, i, (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          if ( !Localization__HasLanguage((System_String_o *)Item, v26) )
          {
            v28 = Localization_TypeInfo;
            if ( !Localization_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v28 = Localization_TypeInfo;
            }
            v29 = v28->static_fields;
            v31 = v29->mLanguages;
            CSV = (BetterList_T__o *)&v29->mLanguages;
            v30 = v31;
            if ( !v31 )
              goto LABEL_110;
            max_length = v30->max_length;
            System_Array__Resize_object_(
              (System_Object_array **)CSV,
              max_length + 1,
              (const MethodInfo_30B78D4 *)Method_System_Array_Resize_string___);
            v33 = Localization_TypeInfo->static_fields->mLanguages;
            CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                       v12,
                                       i,
                                       (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
            if ( !v33 )
              goto LABEL_110;
            if ( (unsigned int)max_length >= LODWORD(v33->max_length) )
              goto LABEL_111;
            v36 = CSV;
            v37 = &v33->obj.klass + (int)max_length;
            v37[4] = (Il2CppClass *)v36;
            sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v36, v34, v35);
            v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__string____TypeInfo);
            System_Collections_Generic_Dictionary_object__object____ctor(
              v38,
              (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
            CSV = (BetterList_T__o *)Localization_TypeInfo->static_fields->mDictionary;
            if ( !CSV )
              goto LABEL_110;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v90,
              (System_Collections_Generic_Dictionary_object__object__o *)CSV,
              (const MethodInfo_3475C10 *)Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
            v92 = v90;
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v92,
                      (const MethodInfo_3572518 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__) )
            {
              current = v92.fields._current;
              array = (System_Object_array *)v92.fields._current.fields.value;
              System_Array__Resize_object_(
                &array,
                max_length + 1,
                (const MethodInfo_30B78D4 *)Method_System_Array_Resize_string___);
              if ( !array )
                sub_1C3E7C0(v40, v41);
              v44 = array->max_length;
              if ( !v44 )
                sub_1C3E7C8(v40, v41);
              if ( (unsigned int)max_length >= v44 )
                sub_1C3E7C8(v40, v41);
              v45 = array->m_Items[0];
              v46 = &array->obj.klass + (int)max_length;
              v46[4] = (Il2CppClass *)v45;
              sub_1C3E508((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v45, v42, v43);
              if ( !v38 )
                sub_1C3E7C0(v47, v48);
              System_Collections_Generic_Dictionary_object__object___Add(
                v38,
                current.fields.key,
                &array->obj,
                (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v92,
              (const MethodInfo_3572638 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
            v51 = Localization_TypeInfo;
            if ( !Localization_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v51 = Localization_TypeInfo;
            }
            v52 = v51->static_fields;
            v52->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v38;
            sub_1C3E508((CGThumbnailListItem_o *)&v52->mDictionary, (int32_t)v38, v49, v50);
          }
        }
      }
    }
  }
  else
  {
LABEL_114:
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = Localization_TypeInfo;
    }
    CSV = (BetterList_T__o *)v15->static_fields->mDictionary;
    if ( !CSV )
      goto LABEL_110;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)CSV,
      (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    v54 = sub_1C3E60C(string___TypeInfo, (unsigned int)v12->fields.size);
    v55 = Localization_TypeInfo->static_fields;
    v55->mLanguages = (struct System_String_array *)v54;
    sub_1C3E508((CGThumbnailListItem_o *)&v55->mLanguages, v54, v56, v57);
    v58 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->static_fields->localizationHasBeenSet )
    {
      v59 = BetterList_object___get_Item(v12, 0, (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
      String = UnityEngine_PlayerPrefs__GetString((System_String_o *)StringLiteral_8355/*"Language"*/, (System_String_o *)v59, 0);
      v63 = Localization_TypeInfo;
      v64 = String;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v63 = Localization_TypeInfo;
      }
      v65 = v63->static_fields;
      v65->mLanguage = v64;
      sub_1C3E508((CGThumbnailListItem_o *)&v65->mLanguage, (int32_t)v64, v61, v62);
      v58 = Localization_TypeInfo;
      Localization_TypeInfo->static_fields->localizationHasBeenSet = 1;
    }
    if ( v12->fields.size >= 1 )
    {
      v66 = 0;
      for ( j = 32; ; j += 8 )
      {
        if ( !v58->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v58);
          v58 = Localization_TypeInfo;
        }
        v68 = v58->static_fields->mLanguages;
        CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                   v12,
                                   v66,
                                   (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
        if ( !v68 )
          break;
        if ( v66 >= LODWORD(v68->max_length) )
          goto LABEL_111;
        *(Il2CppClass **)((char *)&v68->obj.klass + j) = (Il2CppClass *)CSV;
        sub_1C3E508((CGThumbnailListItem_o *)((char *)v68 + j), (int32_t)CSV, v69, v70);
        v71 = Localization_TypeInfo->static_fields;
        v72 = v71->mLanguages;
        if ( !v72 )
          break;
        if ( v66 >= LODWORD(v72->max_length) )
LABEL_111:
          sub_1C3E7C8(CSV, v11);
        if ( System_String__op_Equality(*(System_String_o **)((char *)&v72->obj.klass + j), v71->mLanguage, 0) )
        {
          v73 = Localization_TypeInfo;
          if ( !Localization_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
            v73 = Localization_TypeInfo;
          }
          v73->static_fields->mLanguageIndex = v66;
        }
        if ( (__int64)++v66 >= v12->fields.size )
          goto LABEL_79;
        v58 = Localization_TypeInfo;
      }
      goto LABEL_110;
    }
LABEL_79:
    v19 = 0;
  }
  v74 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v74,
    (const MethodInfo_346C0FC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  for ( k = 0; ; ++k )
  {
    CSV = (BetterList_T__o *)Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      CSV = (BetterList_T__o *)Localization_TypeInfo;
    }
    v76 = *(struct System_String_array **)(*(_QWORD *)&CSV[5].fields.size + 24LL);
    if ( !v76 )
      goto LABEL_110;
    if ( (__int64)k >= SLODWORD(v76->max_length) )
      break;
    if ( !LODWORD(CSV[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(CSV);
      v76 = Localization_TypeInfo->static_fields->mLanguages;
      if ( !v76 )
        goto LABEL_110;
    }
    if ( k >= LODWORD(v76->max_length) )
      goto LABEL_111;
    if ( !v74 )
      goto LABEL_110;
    System_Collections_Generic_Dictionary_object__int___Add(
      v74,
      (Il2CppObject *)v76->m_Items[k],
      k,
      (const MethodInfo_346CAB0 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  }
  v77 = ByteReader__ReadCSV((ByteReader_o *)v6, v11);
  if ( v77 )
  {
    v80 = (BetterList_T__o *)v77;
    do
    {
      if ( !v80->fields.size )
        break;
      v81 = BetterList_object___get_Item(v80, 0, (const MethodInfo_332BC78 *)Method_BetterList_string__get_Item__);
      if ( !System_String__IsNullOrEmpty((System_String_o *)v81, 0) )
      {
        if ( !Localization_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        Localization__AddCSV(
          (BetterList_string__o *)v80,
          (System_String_array *)v19,
          (System_Collections_Generic_Dictionary_string__int__o *)v74,
          v83);
      }
      v80 = (BetterList_T__o *)ByteReader__ReadCSV((ByteReader_o *)v6, v82);
    }
    while ( v80 );
  }
  v84 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v84 = Localization_TypeInfo;
  }
  v85 = v84->static_fields;
  if ( v85->mMerging )
    return 1;
  if ( !v84->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v84);
    v84 = Localization_TypeInfo;
    v85 = Localization_TypeInfo->static_fields;
  }
  onLocalize = v85->onLocalize;
  if ( !onLocalize )
    return 1;
  if ( !v84->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v84);
    v85 = Localization_TypeInfo->static_fields;
    onLocalize = v85->onLocalize;
  }
  v85->onLocalize = 0;
  v85->mMerging = 1;
  sub_1C3E508((CGThumbnailListItem_o *)&v85->onLocalize, 0, v78, v79);
  if ( !onLocalize )
LABEL_110:
    sub_1C3E7C0(CSV, v11);
  ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
    onLocalize->fields.method_code,
    onLocalize->fields.method);
  v87 = Localization_TypeInfo->static_fields;
  v87->onLocalize = onLocalize;
  sub_1C3E508((CGThumbnailListItem_o *)&v87->onLocalize, (int32_t)onLocalize, v88, v89);
  Localization_TypeInfo->static_fields->mMerging = 0;
  return 1;
}


bool Localization__LoadDictionary(System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Localization_c *v4; // x0
  System_Byte_array *v5; // x20
  struct Localization_LoadFunction_o *loadFunction; // x8
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Byte_array *bytes; // x0
  Il2CppObject *object; // x21
  Localization_c *v11; // x0
  Localization_c *v12; // x0
  struct Localization_LoadFunction_o *v13; // x8
  System_Byte_array *v14; // x0
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x21

  if ( (byte_4C5B48E & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Resources_Load_TextAsset___);
    sub_1C3E564(&StringLiteral_8484/*"Localization"*/);
    byte_4C5B48E = 1;
  }
  v4 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v4 = Localization_TypeInfo;
  }
  if ( v4->static_fields->localizationHasBeenSet )
  {
    v5 = 0;
    goto LABEL_22;
  }
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = Localization_TypeInfo;
  }
  loadFunction = v4->static_fields->loadFunction;
  if ( loadFunction )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      loadFunction = Localization_TypeInfo->static_fields->loadFunction;
      if ( !loadFunction )
        goto LABEL_48;
    }
    bytes = (System_Byte_array *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))loadFunction->fields.invoke_impl)(
                                   loadFunction->fields.method_code,
                                   StringLiteral_8484/*"Localization"*/,
                                   loadFunction->fields.method);
  }
  else
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_8484/*"Localization"*/,
               (const MethodInfo_3196164 *)Method_UnityEngine_Resources_Load_TextAsset___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
    v5 = 0;
    if ( !v7 )
      goto LABEL_19;
    if ( !object )
      goto LABEL_48;
    bytes = UnityEngine_TextAsset__get_bytes((UnityEngine_TextAsset_o *)object, 0);
  }
  v5 = bytes;
LABEL_19:
  v4 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v4 = Localization_TypeInfo;
  }
  v4->static_fields->localizationHasBeenSet = 1;
LABEL_22:
  if ( !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( Localization__LoadCSV_49356052(v5, 0, v2) )
    return 1;
  if ( System_String__IsNullOrEmpty(value, 0) )
  {
    v11 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v11 = Localization_TypeInfo;
    }
    value = v11->static_fields->mLanguage;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    v12 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v12 = Localization_TypeInfo;
    }
    v13 = v12->static_fields->loadFunction;
    if ( v13 )
    {
      if ( v12->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v12), (v13 = Localization_TypeInfo->static_fields->loadFunction) != 0) )
      {
        v14 = (System_Byte_array *)((__int64 (__fastcall *)(intptr_t, System_String_o *, intptr_t))v13->fields.invoke_impl)(
                                     v13->fields.method_code,
                                     value,
                                     v13->fields.method);
LABEL_41:
        v5 = v14;
        goto LABEL_42;
      }
    }
    else
    {
      v16 = UnityEngine_Resources__Load_object_(
              value,
              (const MethodInfo_3196164 *)Method_UnityEngine_Resources_Load_TextAsset___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( !v7 )
      {
LABEL_42:
        if ( v5 )
        {
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          Localization__Set(value, v5, v15);
          return 1;
        }
        return 0;
      }
      if ( v16 )
      {
        v14 = UnityEngine_TextAsset__get_bytes((UnityEngine_TextAsset_o *)v16, 0);
        goto LABEL_41;
      }
    }
LABEL_48:
    sub_1C3E7C0(v7, v8);
  }
  return 0;
}


System_String_o *Localization__Localize(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4C5B49D & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B49D = 1;
  }
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  return Localization__Get(key, method);
}


bool Localization__SelectLanguage(System_String_o *language, const MethodInfo *method)
{
  Localization_c *v3; // x0
  struct Localization_StaticFields *static_fields; // x8
  Localization_c *mDictionary; // x0
  int32_t Count; // w0
  struct System_String_array *mLanguages; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x21
  __int64 v10; // x22
  struct System_String_array *v11; // x8
  Localization_c *v12; // x0
  CGThumbnailListItem_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct Localization_OnLocalizeNotification_o *onLocalize; // x8

  if ( (byte_4C5B498 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&UIRoot_TypeInfo);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    sub_1C3E564(&StringLiteral_9920/*"OnLocalize"*/);
    byte_4C5B498 = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v3 = Localization_TypeInfo;
  }
  static_fields = v3->static_fields;
  mDictionary = (Localization_c *)static_fields->mDictionary;
  static_fields->mLanguageIndex = -1;
  if ( !mDictionary )
    goto LABEL_31;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            (System_Collections_Generic_Dictionary_object__object__o *)mDictionary,
            (const MethodInfo_34754B0 *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
  if ( !Count )
    return Count;
  mDictionary = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    mDictionary = Localization_TypeInfo;
  }
  mLanguages = mDictionary->static_fields->mLanguages;
  if ( !mLanguages )
    goto LABEL_31;
  max_length = mLanguages->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_19:
    LOBYTE(Count) = 0;
    return Count;
  }
  v9 = 0;
  v10 = (unsigned int)max_length - 1LL;
  while ( 1 )
  {
    if ( !mDictionary->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(mDictionary);
      mDictionary = Localization_TypeInfo;
    }
    v11 = mDictionary->static_fields->mLanguages;
    if ( !v11 )
      goto LABEL_31;
    if ( v9 >= LODWORD(v11->max_length) )
      sub_1C3E7C8(mDictionary, method);
    if ( System_String__op_Equality(v11->m_Items[v9], language, 0) )
      break;
    if ( v10 == v9 )
      goto LABEL_19;
    mDictionary = Localization_TypeInfo;
    ++v9;
  }
  v12 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v12 = Localization_TypeInfo;
  }
  mDictionary = (Localization_c *)v12->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_31;
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)mDictionary,
    (const MethodInfo_3475968 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
  v13 = (CGThumbnailListItem_o *)Localization_TypeInfo->static_fields;
  v13->fields.sortStr1 = language;
  v13 = (CGThumbnailListItem_o *)((char *)v13 + 56);
  LODWORD(v13[-1].fields._ThumbnailSpritePath_k__BackingField) = v9;
  sub_1C3E508(v13, (int32_t)language, v14, v15);
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_8355/*"Language"*/,
    Localization_TypeInfo->static_fields->mLanguage,
    0);
  onLocalize = Localization_TypeInfo->static_fields->onLocalize;
  if ( onLocalize )
  {
    if ( Localization_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(Localization_TypeInfo),
          (onLocalize = Localization_TypeInfo->static_fields->onLocalize) != 0) )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
        onLocalize->fields.method_code,
        onLocalize->fields.method);
      goto LABEL_27;
    }
LABEL_31:
    sub_1C3E7C0(mDictionary, method);
  }
LABEL_27:
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
  UIRoot__Broadcast((System_String_o *)StringLiteral_9920/*"OnLocalize"*/, 0);
  LOBYTE(Count) = 1;
  return Count;
}


void Localization__Set(System_String_o *languageName, System_Byte_array *bytes, const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_Dictionary_string__string__o *Dictionary; // x20

  if ( (byte_4C5B491 & 1) == 0 )
  {
    sub_1C3E564(&ByteReader_TypeInfo);
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B491 = 1;
  }
  v5 = sub_1C3E7B0(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = bytes;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)bytes, v6, v7);
  Dictionary = ByteReader__ReadDictionary((ByteReader_o *)v5, v8);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  Localization__Set_49357056(languageName, Dictionary, v9);
}


void Localization__Set_49357056(
        System_String_o *languageName,
        System_Collections_Generic_Dictionary_string__string__o *dictionary,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Localization_c *v6; // x0
  struct Localization_StaticFields *static_fields; // x0
  struct Localization_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct Localization_StaticFields *v11; // x8
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_String_array *v16; // x20
  struct Localization_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct Localization_OnLocalizeNotification_o *onLocalize; // x8

  if ( (byte_4C5B499 & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&UIRoot_TypeInfo);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    sub_1C3E564(&StringLiteral_9920/*"OnLocalize"*/);
    byte_4C5B499 = 1;
  }
  v6 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v6 = Localization_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->mLanguage = languageName;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mLanguage, (int32_t)languageName, (int32_t)method, v3);
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_8355/*"Language"*/,
    Localization_TypeInfo->static_fields->mLanguage,
    0);
  v8 = Localization_TypeInfo->static_fields;
  v8->mOldDictionary = dictionary;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->mOldDictionary, (int32_t)dictionary, v9, v10);
  v11 = Localization_TypeInfo->static_fields;
  v11->localizationHasBeenSet = 1;
  v11->mLanguageIndex = -1;
  v12 = sub_1C3E60C(string___TypeInfo, 1);
  if ( !v12 )
    goto LABEL_14;
  v16 = (struct System_String_array *)v12;
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C3E7C8(v12, v13);
  *(_QWORD *)(v12 + 32) = languageName;
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 32), (int32_t)languageName, v14, v15);
  v17 = Localization_TypeInfo->static_fields;
  v17->mLanguages = v16;
  sub_1C3E508((CGThumbnailListItem_o *)&v17->mLanguages, (int32_t)v16, v18, v19);
  onLocalize = Localization_TypeInfo->static_fields->onLocalize;
  if ( onLocalize )
  {
    if ( Localization_TypeInfo->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(Localization_TypeInfo),
          (onLocalize = Localization_TypeInfo->static_fields->onLocalize) != 0) )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
        onLocalize->fields.method_code,
        onLocalize->fields.method);
      goto LABEL_11;
    }
LABEL_14:
    sub_1C3E7C0(v12, v13);
  }
LABEL_11:
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
  UIRoot__Broadcast((System_String_o *)StringLiteral_9920/*"OnLocalize"*/, 0);
}


void Localization__Set_49361624(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  Localization_c *v5; // x0
  System_Collections_Generic_Dictionary_object__object__o *mOldDictionary; // x0
  bool v7; // w0
  Localization_c *v8; // x8
  bool v9; // w21

  if ( (byte_4C5B49A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B49A = 1;
  }
  v5 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v5 = Localization_TypeInfo;
  }
  mOldDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v5->static_fields->mOldDictionary;
  if ( !mOldDictionary )
    goto LABEL_12;
  v7 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mOldDictionary,
         (Il2CppObject *)key,
         (const MethodInfo_34759D4 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  v8 = Localization_TypeInfo;
  v9 = v7;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v8 = Localization_TypeInfo;
  }
  mOldDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->mOldDictionary;
  if ( !mOldDictionary )
LABEL_12:
    sub_1C3E7C0(mOldDictionary, value);
  if ( v9 )
    System_Collections_Generic_Dictionary_object__object___set_Item(
      mOldDictionary,
      (Il2CppObject *)key,
      (Il2CppObject *)value,
      (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  else
    System_Collections_Generic_Dictionary_object__object___Add(
      mOldDictionary,
      (Il2CppObject *)key,
      (Il2CppObject *)value,
      (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


System_Collections_Generic_Dictionary_string__string____o *Localization__get_dictionary(const MethodInfo *method)
{
  Localization_c *v1; // x0
  const MethodInfo *v2; // x1
  System_String_o *String; // x19

  if ( (byte_4C5B489 & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    sub_1C3E564(&StringLiteral_6053/*"English"*/);
    byte_4C5B489 = 1;
  }
  v1 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v1 = Localization_TypeInfo;
  }
  if ( !v1->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8355/*"Language"*/,
               (System_String_o *)StringLiteral_6053/*"English"*/,
               0);
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    Localization__LoadDictionary(String, v2);
    v1 = Localization_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = Localization_TypeInfo;
  }
  return v1->static_fields->mDictionary;
}


bool Localization__get_isActive(const MethodInfo *method)
{
  return 1;
}


System_String_array *Localization__get_knownLanguages(const MethodInfo *method)
{
  Localization_c *v1; // x0
  const MethodInfo *v2; // x1
  System_String_o *String; // x19

  if ( (byte_4C5B48B & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    sub_1C3E564(&StringLiteral_6053/*"English"*/);
    byte_4C5B48B = 1;
  }
  v1 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v1 = Localization_TypeInfo;
  }
  if ( !v1->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8355/*"Language"*/,
               (System_String_o *)StringLiteral_6053/*"English"*/,
               0);
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    Localization__LoadDictionary(String, v2);
    v1 = Localization_TypeInfo;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = Localization_TypeInfo;
  }
  return v1->static_fields->mLanguages;
}


System_String_o *Localization__get_language(const MethodInfo *method)
{
  Localization_c *v1; // x0
  Localization_c *v2; // x0
  System_String_o *String; // x0
  struct Localization_StaticFields *static_fields; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  Localization_c *v8; // x0

  if ( (byte_4C5B48C & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    sub_1C3E564(&StringLiteral_8355/*"Language"*/);
    sub_1C3E564(&StringLiteral_6053/*"English"*/);
    byte_4C5B48C = 1;
  }
  v1 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v1 = Localization_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v1->static_fields->mLanguage, 0) )
  {
    v2 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v2 = Localization_TypeInfo;
    }
    v2->static_fields->localizationHasBeenSet = 1;
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8355/*"Language"*/,
               (System_String_o *)StringLiteral_6053/*"English"*/,
               0);
    static_fields = Localization_TypeInfo->static_fields;
    static_fields->mLanguage = String;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mLanguage, (int32_t)String, v5, v6);
    Localization__LoadAndSelect(Localization_TypeInfo->static_fields->mLanguage, v7);
  }
  v8 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v8 = Localization_TypeInfo;
  }
  return v8->static_fields->mLanguage;
}


void Localization__set_dictionary(
        System_Collections_Generic_Dictionary_string__string____o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Localization_c *v5; // x0
  CGThumbnailListItem_o *static_fields; // x0

  if ( (byte_4C5B48A & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B48A = 1;
  }
  v5 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v5 = Localization_TypeInfo;
  }
  static_fields = (CGThumbnailListItem_o *)v5->static_fields;
  static_fields->fields.sortValue0B = (int64_t)value;
  static_fields = (CGThumbnailListItem_o *)((char *)static_fields + 40);
  LOBYTE(static_fields[-1].fields._Id_k__BackingField) = value != 0;
  sub_1C3E508(static_fields, (int32_t)value, v2, v3);
}


void Localization__set_language(System_String_o *value, const MethodInfo *method)
{
  Localization_c *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Localization_c *v6; // x0
  struct Localization_StaticFields *static_fields; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C5B48D & 1) == 0 )
  {
    sub_1C3E564(&Localization_TypeInfo);
    byte_4C5B48D = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v3 = Localization_TypeInfo;
  }
  if ( System_String__op_Inequality(v3->static_fields->mLanguage, value, 0) )
  {
    v6 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v6 = Localization_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->mLanguage = value;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mLanguage, (int32_t)value, v4, v5);
    Localization__LoadAndSelect(value, v8);
  }
}


void Localization_LoadFunction___ctor(
        Localization_LoadFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A8997C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A8995C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A8990C;
}


System_IAsyncResult_o *Localization_LoadFunction__BeginInvoke(
        Localization_LoadFunction_o *this,
        System_String_o *path,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = path;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v6, callback, object);
}


System_Byte_array *Localization_LoadFunction__EndInvoke(
        Localization_LoadFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (System_Byte_array *)sub_1C3E51C(result, 0, method);
}


System_Byte_array *Localization_LoadFunction__Invoke(
        Localization_LoadFunction_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  return (System_Byte_array *)((__int64 (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
                                this->fields.method_code,
                                path,
                                this->fields.method);
}


void Localization_OnLocalizeNotification___ctor(
        Localization_OnLocalizeNotification_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A89A60;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A89A20;
}


System_IAsyncResult_o *Localization_OnLocalizeNotification__BeginInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void Localization_OnLocalizeNotification__EndInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void Localization_OnLocalizeNotification__Invoke(Localization_OnLocalizeNotification_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}