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

  if ( (byte_4C476A8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_1C37058(&Localization_TypeInfo);
    byte_4C476A8 = 1;
  }
  static_fields = Localization_TypeInfo->static_fields;
  static_fields->mLanguages = 0;
  static_fields = (struct Localization_StaticFields *)((char *)static_fields + 24);
  static_fields[-1].mMerging = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)static_fields, 0, v1, v2);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v5 = Localization_TypeInfo->static_fields;
  v5->mOldDictionary = (struct System_Collections_Generic_Dictionary_string__string__o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->mOldDictionary, (int32_t)v4, v6, v7);
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
  v9 = Localization_TypeInfo->static_fields;
  v9->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&v9->mDictionary, (int32_t)v8, v10, v11);
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
  if ( (byte_4C4769F & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_string__get_Item__);
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&StringLiteral_536/*"' is already present"*/);
    newValues = (BetterList_string__o *)sub_1C37058(&StringLiteral_8485/*"Localization key '"*/);
    byte_4C4769F = 1;
  }
  if ( !v6 )
    goto LABEL_23;
  if ( v6->fields.size < 2 )
    return;
  Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
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
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
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
        (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
      if ( !newLanguages )
      {
        v13 = (Il2CppObject *)System_String__Concat_63599904(
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
    sub_1C372B4(newValues);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v11 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->mDictionary;
  if ( !mDictionary )
    sub_1C372B4(0);
  System_Collections_Generic_Dictionary_object__object___Add(
    mDictionary,
    Item,
    v9,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
}


bool Localization__Exists(System_String_o *key, const MethodInfo *method)
{
  Localization_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *String; // x20
  System_String_o *v6; // x0
  Localization_c *v7; // x8
  Il2CppObject *v8; // x20
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0
  Localization_c *v10; // x0
  Localization_c *v11; // x0
  Localization_c *v13; // x0

  if ( (byte_4C476A7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&StringLiteral_191/*" Mobile"*/);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    sub_1C37058(&StringLiteral_6053/*"English"*/);
    byte_4C476A7 = 1;
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
  v6 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_191/*" Mobile"*/, 0);
  v7 = Localization_TypeInfo;
  v8 = (Il2CppObject *)v6;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v7 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->mDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         v8,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
  {
    return 1;
  }
  v10 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v10 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v10->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         v8,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return 1;
  }
  v11 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v11 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->mDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         (Il2CppObject *)key,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
  {
    return 1;
  }
  v13 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v13 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v13->static_fields->mOldDictionary;
  if ( !mDictionary )
LABEL_26:
    sub_1C372B4(mDictionary);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           mDictionary,
           (Il2CppObject *)key,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
  if ( (byte_4C476A0 & 1) == 0 )
  {
    sub_1C37058(&Method_BetterList_string__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&Localization_TypeInfo);
    added = (BetterList_string__o *)sub_1C37058(&string___TypeInfo);
    byte_4C476A0 = 1;
  }
  value = 0;
  if ( newLanguages )
  {
    if ( !v6 )
      goto LABEL_35;
    Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
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
                                      (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
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
      added = (BetterList_string__o *)sub_1C37100(string___TypeInfo, *(unsigned int *)(v10 + 24));
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
                (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        v14 = value;
        v15 = v11 + 1;
        v16 = v13;
        added = (BetterList_string__o *)BetterList_object___get_Item(
                                          v6,
                                          (int)v11 + 1,
                                          (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
        if ( !v14 )
          break;
        if ( v16 >= LODWORD(v14[1].monitor) )
          goto LABEL_20;
        v19 = added;
        v20 = &v14->klass + (int)v16;
        v20[4] = (Il2CppClass *)v19;
        sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v17, v18);
        if ( v12 == v11 )
          return (System_String_array *)value;
        ++v11;
        if ( v15 >= LODWORD(newLanguages->max_length) )
          goto LABEL_20;
      }
LABEL_35:
      sub_1C372B4(added);
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
    added = (BetterList_string__o *)sub_1C37100(string___TypeInfo, *(unsigned int *)(v22 + 24));
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
                                          (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
        if ( i - 1 >= (unsigned __int64)(unsigned int)v21->fields.size )
LABEL_20:
          sub_1C372BC(added);
        v26->klass = (CGThumbnailListItem_c *)added;
        sub_1C36FFC(v26, (int32_t)added, v28, v29);
        v26 = (CGThumbnailListItem_o *)((char *)v26 + 8);
      }
    }
  }
  return (System_String_array *)v21;
}


System_String_o *Localization__Format(System_String_o *key, System_Object_array *parameters, const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_4C476A5 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    byte_4C476A5 = 1;
  }
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  v5 = Localization__Get(key, (const MethodInfo *)parameters);
  return System_String__Format_63603084(v5, parameters, 0);
}


System_String_o *Localization__Get(System_String_o *key, const MethodInfo *method)
{
  Localization_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *String; // x20
  void *language; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Localization_c *v9; // x8
  System_String_o *v10; // x20
  unsigned __int64 i; // x22
  struct System_String_array *mLanguages; // x9
  __int64 v14; // x8
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  System_String_o *v17; // x0
  Localization_c *v18; // x8
  Il2CppObject *v19; // x20
  struct Localization_StaticFields *static_fields; // x9
  Il2CppObject *v21; // x22
  int32_t monitor; // w10
  int32_t mLanguageIndex; // w9
  Il2CppClass **v24; // x8
  Localization_c *v25; // x8
  struct Localization_StaticFields *v26; // x9
  Il2CppObject *v27; // x20
  int32_t v28; // w10
  int32_t v29; // w9
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *v31; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C476A4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Debug_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&StringLiteral_191/*" Mobile"*/);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    sub_1C37058(&StringLiteral_9477/*"No localization data present"*/);
    sub_1C37058(&StringLiteral_8356/*"Language not found: "*/);
    sub_1C37058(&StringLiteral_6053/*"English"*/);
    byte_4C476A4 = 1;
  }
  v3 = Localization_TypeInfo;
  v31 = 0;
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
    v9 = Localization_TypeInfo;
    v10 = (System_String_o *)language;
    if ( Localization_TypeInfo->static_fields->mLanguageIndex == -1 )
    {
      for ( i = 0; ; ++i )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = Localization_TypeInfo;
        }
        mLanguages = v9->static_fields->mLanguages;
        if ( !mLanguages )
          goto LABEL_84;
        if ( (__int64)i >= SLODWORD(mLanguages->max_length) )
          goto LABEL_31;
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          mLanguages = Localization_TypeInfo->static_fields->mLanguages;
          if ( !mLanguages )
            goto LABEL_84;
        }
        if ( i >= LODWORD(mLanguages->max_length) )
          goto LABEL_85;
        language = (void *)System_String__op_Equality(mLanguages->m_Items[i], v10, 0);
        if ( ((unsigned __int8)language & 1) != 0 )
          break;
        v9 = Localization_TypeInfo;
      }
      v9 = Localization_TypeInfo;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v9 = Localization_TypeInfo;
      }
      v9->static_fields->mLanguageIndex = i;
    }
LABEL_31:
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = Localization_TypeInfo;
    }
    language = v9->static_fields;
    if ( *((_DWORD *)language + 12) == -1 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        language = Localization_TypeInfo->static_fields;
      }
      v14 = *((_QWORD *)language + 3);
      *((_DWORD *)language + 12) = 0;
      if ( !v14 )
        goto LABEL_84;
      if ( !*(_DWORD *)(v14 + 24) )
        goto LABEL_85;
      v15 = *(_QWORD *)(v14 + 32);
      *((_QWORD *)language + 7) = v15;
      sub_1C36FFC((CGThumbnailListItem_o *)((char *)language + 56), v15, v7, v8);
      v16 = (Il2CppObject *)System_String__Concat_63561656((System_String_o *)StringLiteral_8356/*"Language not found: "*/, v10, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning(v16, 0);
    }
    v17 = System_String__Concat_63561656(key, (System_String_o *)StringLiteral_191/*" Mobile"*/, 0);
    v18 = Localization_TypeInfo;
    v19 = (Il2CppObject *)v17;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v18 = Localization_TypeInfo;
    }
    static_fields = v18->static_fields;
    if ( static_fields->mLanguageIndex != -1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = Localization_TypeInfo->static_fields;
      }
      language = static_fields->mDictionary;
      if ( !language )
        goto LABEL_84;
      language = (void *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                           (System_Collections_Generic_Dictionary_object__object__o *)language,
                           v19,
                           &value,
                           (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
      v18 = Localization_TypeInfo;
      if ( ((unsigned __int8)language & 1) != 0 )
      {
        if ( !Localization_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          v18 = Localization_TypeInfo;
        }
        v21 = value;
        if ( !value )
          goto LABEL_84;
        monitor = (int32_t)value[1].monitor;
        mLanguageIndex = v18->static_fields->mLanguageIndex;
        if ( mLanguageIndex < monitor )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            monitor = (int32_t)v21[1].monitor;
            mLanguageIndex = Localization_TypeInfo->static_fields->mLanguageIndex;
          }
          if ( mLanguageIndex < (unsigned int)monitor )
          {
            v24 = &v21->klass + mLanguageIndex;
            return (System_String_o *)v24[4];
          }
          goto LABEL_85;
        }
      }
    }
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = Localization_TypeInfo;
    }
    language = v18->static_fields->mOldDictionary;
    if ( language )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)language,
             v19,
             &v31,
             (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        return (System_String_o *)v31;
      }
      v25 = Localization_TypeInfo;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v25 = Localization_TypeInfo;
      }
      v26 = v25->static_fields;
      if ( v26->mLanguageIndex != -1 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v26 = Localization_TypeInfo->static_fields;
        }
        language = v26->mDictionary;
        if ( !language )
          goto LABEL_84;
        language = (void *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                             (System_Collections_Generic_Dictionary_object__object__o *)language,
                             (Il2CppObject *)key,
                             &value,
                             (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
        v25 = Localization_TypeInfo;
        if ( ((unsigned __int8)language & 1) != 0 )
        {
          if ( !Localization_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
            v25 = Localization_TypeInfo;
          }
          v27 = value;
          if ( !value )
            goto LABEL_84;
          v28 = (int32_t)value[1].monitor;
          v29 = v25->static_fields->mLanguageIndex;
          if ( v29 < v28 )
          {
            if ( !v25->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v25);
              v28 = (int32_t)v27[1].monitor;
              v29 = Localization_TypeInfo->static_fields->mLanguageIndex;
            }
            if ( v29 < (unsigned int)v28 )
            {
              v24 = &v27->klass + v29;
              return (System_String_o *)v24[4];
            }
LABEL_85:
            sub_1C372BC(language);
          }
        }
      }
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = Localization_TypeInfo;
      }
      language = v25->static_fields->mOldDictionary;
      if ( language )
      {
        if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
               (System_Collections_Generic_Dictionary_object__object__o *)language,
               (Il2CppObject *)key,
               &v31,
               (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          return (System_String_o *)v31;
        }
        else
        {
          return key;
        }
      }
    }
LABEL_84:
    sub_1C372B4(language);
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

  if ( (byte_4C4769D & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    byte_4C4769D = 1;
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
        sub_1C372BC(v3);
      if ( System_String__op_Equality(v10->m_Items[v6], languageName, 0) )
        return v9;
      v9 = (__int64)(v6 + 1) < v7;
      if ( v8 == v6 )
        return v9;
      v3 = Localization_TypeInfo;
      ++v6;
    }
LABEL_17:
    sub_1C372B4(v3);
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

  if ( (byte_4C47699 & 1) == 0 )
  {
    sub_1C37058(&ByteReader_TypeInfo);
    sub_1C37058(&Localization_TypeInfo);
    byte_4C47699 = 1;
  }
  v3 = (ByteReader_o *)sub_1C372A4(ByteReader_TypeInfo);
  ByteReader___ctor_49269132(v3, asset, v4);
  if ( !asset || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)asset, 0), !v3) )
    sub_1C372B4(name);
  v7 = name;
  Dictionary = ByteReader__ReadDictionary(v3, v6);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  Localization__Set_49283816(v7, Dictionary, v8);
}


bool Localization__LoadAndSelect(System_String_o *value, const MethodInfo *method)
{
  Localization_c *v3; // x0
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0
  const MethodInfo *v5; // x1
  Localization_c *v6; // x0
  Localization_c *v8; // x0

  if ( (byte_4C47698 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    byte_4C47698 = 1;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    v3 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v3 = Localization_TypeInfo;
    }
    mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v3->static_fields->mDictionary;
    if ( !mDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_object__object___get_Count(
            mDictionary,
            (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__) )
    {
      if ( !Localization_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      if ( !Localization__LoadDictionary(value, v5) )
        return 0;
    }
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    if ( Localization__SelectLanguage(value, v5) )
      return 1;
  }
  v6 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v6 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v6->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         mDictionary,
         (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) > 0 )
    return 1;
  v8 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v8 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->mOldDictionary;
  if ( !mDictionary
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          mDictionary,
          (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo->static_fields->mDictionary) == 0) )
  {
LABEL_26:
    sub_1C372B4(mDictionary);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    mDictionary,
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
  if ( System_String__IsNullOrEmpty(value, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8355/*"Language"*/, 0);
  return 0;
}


bool Localization__LoadCSV(UnityEngine_TextAsset_o *asset, bool merge, const MethodInfo *method)
{
  UnityEngine_TextAsset_o *v4; // x20
  UnityEngine_TextAsset_o *v5; // x1
  const MethodInfo *v6; // x3
  System_Byte_array *bytes; // x20

  v4 = asset;
  if ( (byte_4C4769B & 1) == 0 )
  {
    asset = (UnityEngine_TextAsset_o *)sub_1C37058(&Localization_TypeInfo);
    byte_4C4769B = 1;
  }
  if ( !v4 )
    sub_1C372B4(asset);
  bytes = UnityEngine_TextAsset__get_bytes(v4, 0);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  return Localization__LoadCSV_49284352(bytes, v5, merge, v6);
}


// local variable allocation has failed, the output may be wrong!
bool Localization__LoadCSV_49282812(System_Byte_array *bytes, bool merge, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C4769C & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    byte_4C4769C = 1;
  }
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  return Localization__LoadCSV_49284352(bytes, (UnityEngine_TextAsset_o *)merge, merge, v3);
}


bool Localization__LoadCSV_49284352(
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
  BetterList_T__o *v11; // x20
  Localization_c *v12; // x0
  bool IsNullOrEmpty; // w0
  Localization_c *v14; // x8
  struct Localization_StaticFields *static_fields; // x9
  struct System_String_array *mLanguages; // x9
  __int64 v17; // x0
  __int64 v18; // x21
  unsigned __int64 v19; // x22
  CGThumbnailListItem_o *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  signed __int64 size; // x8
  int32_t i; // w22
  const MethodInfo *v25; // x1
  Il2CppObject *Item; // x23
  Localization_c *v27; // x0
  struct Localization_StaticFields *v28; // x0
  struct System_String_array *v29; // x8
  struct System_String_array *v30; // t1
  il2cpp_array_size_t max_length; // x19
  struct System_String_array *v32; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  BetterList_T__o *v35; // x1
  Il2CppClass **v36; // x0
  System_Collections_Generic_Dictionary_object__object__o *v37; // x23
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  unsigned int v42; // w9
  Il2CppObject *v43; // x1
  Il2CppClass **v44; // x0
  __int64 v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Localization_c *v48; // x0
  struct Localization_StaticFields *v49; // x0
  __int64 v51; // x0
  struct Localization_StaticFields *v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Localization_c *v55; // x0
  Il2CppObject *v56; // x0
  System_String_o *String; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  Localization_c *v60; // x8
  System_String_o *v61; // x21
  struct Localization_StaticFields *v62; // x0
  unsigned __int64 v63; // x21
  __int64 j; // x19
  struct System_String_array *v65; // x23
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct Localization_StaticFields *v68; // x8
  struct System_String_array *v69; // x9
  Localization_c *v70; // x0
  System_Collections_Generic_Dictionary_object__int__o *v71; // x20
  const MethodInfo *v72; // x1
  unsigned __int64 k; // x22
  struct System_String_array *v74; // x8
  BetterList_string__o *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  BetterList_T__o *v78; // x22
  Il2CppObject *v79; // x0
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x3
  Localization_c *v82; // x0
  struct Localization_StaticFields *v83; // x8
  struct Localization_OnLocalizeNotification_o *onLocalize; // x19
  struct Localization_StaticFields *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v88; // [xsp+10h] [xbp-C0h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4C4769E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Resize_string___);
    sub_1C37058(&Method_BetterList_string__RemoveAt__);
    sub_1C37058(&Method_BetterList_string__get_Item__);
    sub_1C37058(&ByteReader_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Value__);
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    byte_4C4769E = 1;
  }
  memset(&v90, 0, sizeof(v90));
  array = 0;
  if ( !bytes )
    return 0;
  v6 = sub_1C372A4(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = bytes;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)bytes, v7, v8);
  CSV = (BetterList_T__o *)ByteReader__ReadCSV((ByteReader_o *)v6, v9);
  if ( !CSV )
    goto LABEL_110;
  v11 = CSV;
  if ( CSV->fields.size < 2 )
    return 0;
  BetterList_object___RemoveAt(CSV, 0, (const MethodInfo_331A408 *)Method_BetterList_string__RemoveAt__);
  v12 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v12 = Localization_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v12->static_fields->mLanguage, 0);
  v14 = Localization_TypeInfo;
  if ( IsNullOrEmpty )
  {
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v14 = Localization_TypeInfo;
    }
    v14->static_fields->localizationHasBeenSet = 0;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = Localization_TypeInfo;
  }
  static_fields = v14->static_fields;
  if ( !static_fields->localizationHasBeenSet )
    goto LABEL_114;
  if ( !merge )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = Localization_TypeInfo;
      static_fields = Localization_TypeInfo->static_fields;
    }
    if ( !static_fields->mMerging )
      goto LABEL_114;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = Localization_TypeInfo;
  }
  mLanguages = v14->static_fields->mLanguages;
  if ( !mLanguages )
    goto LABEL_114;
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = Localization_TypeInfo;
    mLanguages = Localization_TypeInfo->static_fields->mLanguages;
    if ( !mLanguages )
      goto LABEL_110;
  }
  if ( mLanguages->max_length )
  {
    v17 = sub_1C37100(string___TypeInfo, (unsigned int)v11->fields.size);
    v18 = v17;
    if ( v11->fields.size >= 1 )
    {
      v19 = 0;
      v20 = (CGThumbnailListItem_o *)(v17 + 32);
      do
      {
        CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                   v11,
                                   v19,
                                   (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
        if ( !v18 )
          goto LABEL_110;
        if ( v19 >= *(unsigned int *)(v18 + 24) )
          goto LABEL_111;
        v20->klass = (CGThumbnailListItem_c *)CSV;
        sub_1C36FFC(v20, (int32_t)CSV, v21, v22);
        size = v11->fields.size;
        ++v19;
        v20 = (CGThumbnailListItem_o *)((char *)v20 + 8);
      }
      while ( (__int64)v19 < size );
      if ( (int)size >= 1 )
      {
        for ( i = 0; i < v11->fields.size; ++i )
        {
          Item = BetterList_object___get_Item(v11, i, (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          if ( !Localization__HasLanguage((System_String_o *)Item, v25) )
          {
            v27 = Localization_TypeInfo;
            if ( !Localization_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v27 = Localization_TypeInfo;
            }
            v28 = v27->static_fields;
            v30 = v28->mLanguages;
            CSV = (BetterList_T__o *)&v28->mLanguages;
            v29 = v30;
            if ( !v30 )
              goto LABEL_110;
            max_length = v29->max_length;
            System_Array__Resize_object_(
              (System_Object_array **)CSV,
              max_length + 1,
              (const MethodInfo_30A5ABC *)Method_System_Array_Resize_string___);
            v32 = Localization_TypeInfo->static_fields->mLanguages;
            CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                       v11,
                                       i,
                                       (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
            if ( !v32 )
              goto LABEL_110;
            if ( (unsigned int)max_length >= LODWORD(v32->max_length) )
              goto LABEL_111;
            v35 = CSV;
            v36 = &v32->obj.klass + (int)max_length;
            v36[4] = (Il2CppClass *)v35;
            sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v35, v33, v34);
            v37 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string____TypeInfo);
            System_Collections_Generic_Dictionary_object__object____ctor(
              v37,
              (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
            CSV = (BetterList_T__o *)Localization_TypeInfo->static_fields->mDictionary;
            if ( !CSV )
              goto LABEL_110;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v88,
              (System_Collections_Generic_Dictionary_object__object__o *)CSV,
              (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
            v90 = v88;
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v90,
                      (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__) )
            {
              current = v90.fields._current;
              array = (System_Object_array *)v90.fields._current.fields.value;
              System_Array__Resize_object_(
                &array,
                max_length + 1,
                (const MethodInfo_30A5ABC *)Method_System_Array_Resize_string___);
              if ( !array )
                sub_1C372B4(v39);
              v42 = array->max_length;
              if ( !v42 )
                sub_1C372BC(v39);
              if ( (unsigned int)max_length >= v42 )
                sub_1C372BC(v39);
              v43 = array->m_Items[0];
              v44 = &array->obj.klass + (int)max_length;
              v44[4] = (Il2CppClass *)v43;
              sub_1C36FFC((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v43, v40, v41);
              if ( !v37 )
                sub_1C372B4(v45);
              System_Collections_Generic_Dictionary_object__object___Add(
                v37,
                current.fields.key,
                &array->obj,
                (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v90,
              (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
            v48 = Localization_TypeInfo;
            if ( !Localization_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v48 = Localization_TypeInfo;
            }
            v49 = v48->static_fields;
            v49->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v37;
            sub_1C36FFC((CGThumbnailListItem_o *)&v49->mDictionary, (int32_t)v37, v46, v47);
          }
        }
      }
    }
  }
  else
  {
LABEL_114:
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = Localization_TypeInfo;
    }
    CSV = (BetterList_T__o *)v14->static_fields->mDictionary;
    if ( !CSV )
      goto LABEL_110;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)CSV,
      (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    v51 = sub_1C37100(string___TypeInfo, (unsigned int)v11->fields.size);
    v52 = Localization_TypeInfo->static_fields;
    v52->mLanguages = (struct System_String_array *)v51;
    sub_1C36FFC((CGThumbnailListItem_o *)&v52->mLanguages, v51, v53, v54);
    v55 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->static_fields->localizationHasBeenSet )
    {
      v56 = BetterList_object___get_Item(v11, 0, (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
      String = UnityEngine_PlayerPrefs__GetString((System_String_o *)StringLiteral_8355/*"Language"*/, (System_String_o *)v56, 0);
      v60 = Localization_TypeInfo;
      v61 = String;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v60 = Localization_TypeInfo;
      }
      v62 = v60->static_fields;
      v62->mLanguage = v61;
      sub_1C36FFC((CGThumbnailListItem_o *)&v62->mLanguage, (int32_t)v61, v58, v59);
      v55 = Localization_TypeInfo;
      Localization_TypeInfo->static_fields->localizationHasBeenSet = 1;
    }
    if ( v11->fields.size >= 1 )
    {
      v63 = 0;
      for ( j = 32; ; j += 8 )
      {
        if ( !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          v55 = Localization_TypeInfo;
        }
        v65 = v55->static_fields->mLanguages;
        CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                   v11,
                                   v63,
                                   (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
        if ( !v65 )
          break;
        if ( v63 >= LODWORD(v65->max_length) )
          goto LABEL_111;
        *(Il2CppClass **)((char *)&v65->obj.klass + j) = (Il2CppClass *)CSV;
        sub_1C36FFC((CGThumbnailListItem_o *)((char *)v65 + j), (int32_t)CSV, v66, v67);
        v68 = Localization_TypeInfo->static_fields;
        v69 = v68->mLanguages;
        if ( !v69 )
          break;
        if ( v63 >= LODWORD(v69->max_length) )
LABEL_111:
          sub_1C372BC(CSV);
        if ( System_String__op_Equality(*(System_String_o **)((char *)&v69->obj.klass + j), v68->mLanguage, 0) )
        {
          v70 = Localization_TypeInfo;
          if ( !Localization_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
            v70 = Localization_TypeInfo;
          }
          v70->static_fields->mLanguageIndex = v63;
        }
        if ( (__int64)++v63 >= v11->fields.size )
          goto LABEL_79;
        v55 = Localization_TypeInfo;
      }
      goto LABEL_110;
    }
LABEL_79:
    v18 = 0;
  }
  v71 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v71,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  for ( k = 0; ; ++k )
  {
    CSV = (BetterList_T__o *)Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      CSV = (BetterList_T__o *)Localization_TypeInfo;
    }
    v74 = *(struct System_String_array **)(*(_QWORD *)&CSV[5].fields.size + 24LL);
    if ( !v74 )
      goto LABEL_110;
    if ( (__int64)k >= SLODWORD(v74->max_length) )
      break;
    if ( !LODWORD(CSV[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(CSV);
      v74 = Localization_TypeInfo->static_fields->mLanguages;
      if ( !v74 )
        goto LABEL_110;
    }
    if ( k >= LODWORD(v74->max_length) )
      goto LABEL_111;
    if ( !v71 )
      goto LABEL_110;
    System_Collections_Generic_Dictionary_object__int___Add(
      v71,
      (Il2CppObject *)v74->m_Items[k],
      k,
      (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  }
  v75 = ByteReader__ReadCSV((ByteReader_o *)v6, v72);
  if ( v75 )
  {
    v78 = (BetterList_T__o *)v75;
    do
    {
      if ( !v78->fields.size )
        break;
      v79 = BetterList_object___get_Item(v78, 0, (const MethodInfo_3319DC0 *)Method_BetterList_string__get_Item__);
      if ( !System_String__IsNullOrEmpty((System_String_o *)v79, 0) )
      {
        if ( !Localization_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        Localization__AddCSV(
          (BetterList_string__o *)v78,
          (System_String_array *)v18,
          (System_Collections_Generic_Dictionary_string__int__o *)v71,
          v81);
      }
      v78 = (BetterList_T__o *)ByteReader__ReadCSV((ByteReader_o *)v6, v80);
    }
    while ( v78 );
  }
  v82 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v82 = Localization_TypeInfo;
  }
  v83 = v82->static_fields;
  if ( v83->mMerging )
    return 1;
  if ( !v82->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v82);
    v82 = Localization_TypeInfo;
    v83 = Localization_TypeInfo->static_fields;
  }
  onLocalize = v83->onLocalize;
  if ( !onLocalize )
    return 1;
  if ( !v82->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v82);
    v83 = Localization_TypeInfo->static_fields;
    onLocalize = v83->onLocalize;
  }
  v83->onLocalize = 0;
  v83->mMerging = 1;
  sub_1C36FFC((CGThumbnailListItem_o *)&v83->onLocalize, 0, v76, v77);
  if ( !onLocalize )
LABEL_110:
    sub_1C372B4(CSV);
  ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
    onLocalize->fields.method_code,
    onLocalize->fields.method);
  v85 = Localization_TypeInfo->static_fields;
  v85->onLocalize = onLocalize;
  sub_1C36FFC((CGThumbnailListItem_o *)&v85->onLocalize, (int32_t)onLocalize, v86, v87);
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
  System_Byte_array *bytes; // x0
  Il2CppObject *object; // x21
  Localization_c *v10; // x0
  Localization_c *v11; // x0
  struct Localization_LoadFunction_o *v12; // x8
  System_Byte_array *v13; // x0
  const MethodInfo *v14; // x2
  Il2CppObject *v15; // x21

  if ( (byte_4C47697 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_TextAsset___);
    sub_1C37058(&StringLiteral_8484/*"Localization"*/);
    byte_4C47697 = 1;
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
               (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_TextAsset___);
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
  if ( Localization__LoadCSV_49282812(v5, 0, v2) )
    return 1;
  if ( System_String__IsNullOrEmpty(value, 0) )
  {
    v10 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v10 = Localization_TypeInfo;
    }
    value = v10->static_fields->mLanguage;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    v11 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v11 = Localization_TypeInfo;
    }
    v12 = v11->static_fields->loadFunction;
    if ( v12 )
    {
      if ( v11->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v11), (v12 = Localization_TypeInfo->static_fields->loadFunction) != 0) )
      {
        v13 = (System_Byte_array *)((__int64 (__fastcall *)(intptr_t, System_String_o *, intptr_t))v12->fields.invoke_impl)(
                                     v12->fields.method_code,
                                     value,
                                     v12->fields.method);
LABEL_41:
        v5 = v13;
        goto LABEL_42;
      }
    }
    else
    {
      v15 = UnityEngine_Resources__Load_object_(
              value,
              (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_TextAsset___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( !v7 )
      {
LABEL_42:
        if ( v5 )
        {
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          Localization__Set(value, v5, v14);
          return 1;
        }
        return 0;
      }
      if ( v15 )
      {
        v13 = UnityEngine_TextAsset__get_bytes((UnityEngine_TextAsset_o *)v15, 0);
        goto LABEL_41;
      }
    }
LABEL_48:
    sub_1C372B4(v7);
  }
  return 0;
}


System_String_o *Localization__Localize(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4C476A6 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    byte_4C476A6 = 1;
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

  if ( (byte_4C476A1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&UIRoot_TypeInfo);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    sub_1C37058(&StringLiteral_9920/*"OnLocalize"*/);
    byte_4C476A1 = 1;
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
            (const MethodInfo_3463300 *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
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
      sub_1C372BC(mDictionary);
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
    (const MethodInfo_34637B8 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
  v13 = (CGThumbnailListItem_o *)Localization_TypeInfo->static_fields;
  v13->fields.sortStr1 = language;
  v13 = (CGThumbnailListItem_o *)((char *)v13 + 56);
  LODWORD(v13[-1].fields._ThumbnailSpritePath_k__BackingField) = v9;
  sub_1C36FFC(v13, (int32_t)language, v14, v15);
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
    sub_1C372B4(mDictionary);
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

  if ( (byte_4C4769A & 1) == 0 )
  {
    sub_1C37058(&ByteReader_TypeInfo);
    sub_1C37058(&Localization_TypeInfo);
    byte_4C4769A = 1;
  }
  v5 = sub_1C372A4(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = bytes;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)bytes, v6, v7);
  Dictionary = ByteReader__ReadDictionary((ByteReader_o *)v5, v8);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  Localization__Set_49283816(languageName, Dictionary, v9);
}


void Localization__Set_49283816(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_array *v15; // x20
  struct Localization_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct Localization_OnLocalizeNotification_o *onLocalize; // x8

  if ( (byte_4C476A2 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&UIRoot_TypeInfo);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    sub_1C37058(&StringLiteral_9920/*"OnLocalize"*/);
    byte_4C476A2 = 1;
  }
  v6 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v6 = Localization_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->mLanguage = languageName;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mLanguage, (int32_t)languageName, (int32_t)method, v3);
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_8355/*"Language"*/,
    Localization_TypeInfo->static_fields->mLanguage,
    0);
  v8 = Localization_TypeInfo->static_fields;
  v8->mOldDictionary = dictionary;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->mOldDictionary, (int32_t)dictionary, v9, v10);
  v11 = Localization_TypeInfo->static_fields;
  v11->localizationHasBeenSet = 1;
  v11->mLanguageIndex = -1;
  v12 = sub_1C37100(string___TypeInfo, 1);
  if ( !v12 )
    goto LABEL_14;
  v15 = (struct System_String_array *)v12;
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C372BC(v12);
  *(_QWORD *)(v12 + 32) = languageName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)languageName, v13, v14);
  v16 = Localization_TypeInfo->static_fields;
  v16->mLanguages = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->mLanguages, (int32_t)v15, v17, v18);
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
    sub_1C372B4(v12);
  }
LABEL_11:
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
  UIRoot__Broadcast((System_String_o *)StringLiteral_9920/*"OnLocalize"*/, 0);
}


void Localization__Set_49288384(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  Localization_c *v5; // x0
  System_Collections_Generic_Dictionary_object__object__o *mOldDictionary; // x0
  bool v7; // w0
  Localization_c *v8; // x8
  bool v9; // w21

  if ( (byte_4C476A3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C37058(&Localization_TypeInfo);
    byte_4C476A3 = 1;
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
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
    sub_1C372B4(mOldDictionary);
  if ( v9 )
    System_Collections_Generic_Dictionary_object__object___set_Item(
      mOldDictionary,
      (Il2CppObject *)key,
      (Il2CppObject *)value,
      (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  else
    System_Collections_Generic_Dictionary_object__object___Add(
      mOldDictionary,
      (Il2CppObject *)key,
      (Il2CppObject *)value,
      (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


System_Collections_Generic_Dictionary_string__string____o *Localization__get_dictionary(const MethodInfo *method)
{
  Localization_c *v1; // x0
  const MethodInfo *v2; // x1
  System_String_o *String; // x19

  if ( (byte_4C47692 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    sub_1C37058(&StringLiteral_6053/*"English"*/);
    byte_4C47692 = 1;
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

  if ( (byte_4C47694 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    sub_1C37058(&StringLiteral_6053/*"English"*/);
    byte_4C47694 = 1;
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

  if ( (byte_4C47695 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    sub_1C37058(&StringLiteral_8355/*"Language"*/);
    sub_1C37058(&StringLiteral_6053/*"English"*/);
    byte_4C47695 = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mLanguage, (int32_t)String, v5, v6);
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

  if ( (byte_4C47693 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    byte_4C47693 = 1;
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
  sub_1C36FFC(static_fields, (int32_t)value, v2, v3);
}


void Localization__set_language(System_String_o *value, const MethodInfo *method)
{
  Localization_c *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Localization_c *v6; // x0
  struct Localization_StaticFields *static_fields; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C47696 & 1) == 0 )
  {
    sub_1C37058(&Localization_TypeInfo);
    byte_4C47696 = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->mLanguage, (int32_t)value, v4, v5);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A825D4;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A825B4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A82564;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


System_Byte_array *Localization_LoadFunction__EndInvoke(
        Localization_LoadFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (System_Byte_array *)sub_1C37010(result, 0, method);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A826B8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A82678;
}


System_IAsyncResult_o *Localization_OnLocalizeNotification__BeginInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void Localization_OnLocalizeNotification__EndInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void Localization_OnLocalizeNotification__Invoke(Localization_OnLocalizeNotification_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}