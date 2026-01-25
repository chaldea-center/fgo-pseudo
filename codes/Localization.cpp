void Localization___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct Localization_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x19
  struct Localization_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_Dictionary_object__object__o *v16; // x19
  struct Localization_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct Localization_StaticFields *v24; // x8

  if ( (byte_4CF2DB9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DB9 = 1;
  }
  static_fields = Localization_TypeInfo->static_fields;
  static_fields->mLanguages = 0;
  static_fields = (struct Localization_StaticFields *)((char *)static_fields + 24);
  static_fields[-1].mMerging = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)static_fields, 0, v1, v2, v3, v4, v5, v6);
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v9 = Localization_TypeInfo->static_fields;
  v9->mOldDictionary = (struct System_Collections_Generic_Dictionary_string__string__o *)v8;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->mOldDictionary, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__string____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
  v17 = Localization_TypeInfo->static_fields;
  v17->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17->mDictionary, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v24 = Localization_TypeInfo->static_fields;
  v24->mLanguageIndex = -1;
  v24->mMerging = 0;
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
  if ( (byte_4CF2DB0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_string__get_Item__);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&StringLiteral_536/*"' is already present"*/);
    newValues = (BetterList_string__o *)sub_1C7BAE8(&StringLiteral_8509/*"Localization key '"*/);
    byte_4CF2DB0 = 1;
  }
  if ( !v6 )
    goto LABEL_23;
  if ( v6->fields.size < 2 )
    return;
  Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
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
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
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
        (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
      if ( !newLanguages )
      {
        v13 = (Il2CppObject *)System_String__Concat_64215176(
                                (System_String_o *)StringLiteral_8509/*"Localization key '"*/,
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
    sub_1C7BD40(newValues, newLanguages);
  }
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v11 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->mDictionary;
  if ( !mDictionary )
    sub_1C7BD40(0, newLanguages);
  System_Collections_Generic_Dictionary_object__object___Add(
    mDictionary,
    Item,
    v9,
    (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
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

  if ( (byte_4CF2DB8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&StringLiteral_191/*" Mobile"*/);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    sub_1C7BAE8(&StringLiteral_6061/*"English"*/);
    byte_4CF2DB8 = 1;
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
               (System_String_o *)StringLiteral_8379/*"Language"*/,
               (System_String_o *)StringLiteral_6061/*"English"*/,
               0);
    if ( !Localization_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    Localization__set_language(String, v4);
  }
  v6 = System_String__Concat_64176912(key, (System_String_o *)StringLiteral_191/*" Mobile"*/, 0);
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
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
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
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
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
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
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
    sub_1C7BD40(mDictionary, v7);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           mDictionary,
           (Il2CppObject *)key,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BetterList_string__o *v23; // x1
  Il2CppClass **v24; // x0
  BetterList_string__o *v25; // x20
  __int64 v26; // x8
  int32_t size; // w8
  int v28; // w8
  __int64 v29; // x23
  GrandQuestFolderBoardItem_o *v30; // x22
  __int64 i; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  v6 = (BetterList_T__o *)added;
  if ( (byte_4CF2DB1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BetterList_string__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&Localization_TypeInfo);
    added = (BetterList_string__o *)sub_1C7BAE8(&string___TypeInfo);
    byte_4CF2DB1 = 1;
  }
  value = 0;
  if ( newLanguages )
  {
    if ( !v6 )
      goto LABEL_35;
    Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
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
                                      (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
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
      added = (BetterList_string__o *)sub_1C7BB90(string___TypeInfo, *(unsigned int *)(v10 + 24));
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
                (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
        v14 = value;
        v15 = v11 + 1;
        v16 = v13;
        added = (BetterList_string__o *)BetterList_object___get_Item(
                                          v6,
                                          (int)v11 + 1,
                                          (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
        if ( !v14 )
          break;
        if ( v16 >= LODWORD(v14[1].monitor) )
          goto LABEL_20;
        v23 = added;
        v24 = &v14->klass + (int)v16;
        v24[4] = (Il2CppClass *)v23;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v24 + 4), (int32_t)v23, v17, v18, v19, v20, v21, v22);
        if ( v12 == v11 )
          return (System_String_array *)value;
        ++v11;
        if ( v15 >= LODWORD(newLanguages->max_length) )
          goto LABEL_20;
      }
LABEL_35:
      sub_1C7BD40(added, newLanguages);
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
    v26 = *(_QWORD *)(*(_QWORD *)&added[5].fields.size + 24LL);
    if ( !v26 )
      goto LABEL_35;
    added = (BetterList_string__o *)sub_1C7BB90(string___TypeInfo, *(unsigned int *)(v26 + 24));
    if ( !v6 )
      goto LABEL_35;
    v25 = added;
    if ( !added )
      goto LABEL_35;
    size = added->fields.size;
    if ( v6->fields.size >= size + 1 )
      v28 = size + 1;
    else
      v28 = v6->fields.size;
    if ( v28 >= 2 )
    {
      v29 = (unsigned int)v28;
      v30 = (GrandQuestFolderBoardItem_o *)&added[1];
      for ( i = 1; i != v29; ++i )
      {
        added = (BetterList_string__o *)BetterList_object___get_Item(
                                          v6,
                                          i,
                                          (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
        if ( i - 1 >= (unsigned __int64)(unsigned int)v25->fields.size )
LABEL_20:
          sub_1C7BD48(added);
        v30->klass = (GrandQuestFolderBoardItem_c *)added;
        sub_1C7BA8C(v30, (int32_t)added, v32, v33, v34, v35, v36, v37);
        v30 = (GrandQuestFolderBoardItem_o *)((char *)v30 + 8);
      }
    }
  }
  return (System_String_array *)v25;
}


System_String_o *Localization__Format(System_String_o *key, System_Object_array *parameters, const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_4CF2DB6 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DB6 = 1;
  }
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  v5 = Localization__Get(key, (const MethodInfo *)parameters);
  return System_String__Format_64218356(v5, parameters, 0);
}


System_String_o *Localization__Get(System_String_o *key, const MethodInfo *method)
{
  Localization_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *String; // x20
  void *language; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Localization_c *v14; // x8
  System_String_o *v15; // x20
  unsigned __int64 i; // x22
  struct System_String_array *mLanguages; // x9
  __int64 v19; // x8
  __int64 v20; // x1
  Il2CppObject *v21; // x20
  System_String_o *v22; // x0
  Localization_c *v23; // x8
  Il2CppObject *v24; // x20
  struct Localization_StaticFields *static_fields; // x9
  Il2CppObject *v26; // x22
  int32_t monitor; // w10
  int32_t mLanguageIndex; // w9
  Il2CppClass **v29; // x8
  Localization_c *v30; // x8
  struct Localization_StaticFields *v31; // x9
  Il2CppObject *v32; // x20
  int32_t v33; // w10
  int32_t v34; // w9
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *v36; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CF2DB5 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&StringLiteral_191/*" Mobile"*/);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    sub_1C7BAE8(&StringLiteral_9502/*"No localization data present"*/);
    sub_1C7BAE8(&StringLiteral_8380/*"Language not found: "*/);
    sub_1C7BAE8(&StringLiteral_6061/*"English"*/);
    byte_4CF2DB5 = 1;
  }
  v3 = Localization_TypeInfo;
  v36 = 0;
  value = 0;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v3 = Localization_TypeInfo;
  }
  if ( !v3->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8379/*"Language"*/,
               (System_String_o *)StringLiteral_6061/*"English"*/,
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
    v14 = Localization_TypeInfo;
    v15 = (System_String_o *)language;
    if ( Localization_TypeInfo->static_fields->mLanguageIndex == -1 )
    {
      for ( i = 0; ; ++i )
      {
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          v14 = Localization_TypeInfo;
        }
        mLanguages = v14->static_fields->mLanguages;
        if ( !mLanguages )
          goto LABEL_84;
        if ( (__int64)i >= SLODWORD(mLanguages->max_length) )
          goto LABEL_31;
        if ( !v14->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v14);
          mLanguages = Localization_TypeInfo->static_fields->mLanguages;
          if ( !mLanguages )
            goto LABEL_84;
        }
        if ( i >= LODWORD(mLanguages->max_length) )
          goto LABEL_85;
        language = (void *)System_String__op_Equality(mLanguages->m_Items[i], v15, 0);
        if ( ((unsigned __int8)language & 1) != 0 )
          break;
        v14 = Localization_TypeInfo;
      }
      v14 = Localization_TypeInfo;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v14 = Localization_TypeInfo;
      }
      v14->static_fields->mLanguageIndex = i;
    }
LABEL_31:
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = Localization_TypeInfo;
    }
    language = v14->static_fields;
    if ( *((_DWORD *)language + 12) == -1 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        language = Localization_TypeInfo->static_fields;
      }
      v19 = *((_QWORD *)language + 3);
      *((_DWORD *)language + 12) = 0;
      if ( !v19 )
        goto LABEL_84;
      if ( !*(_DWORD *)(v19 + 24) )
        goto LABEL_85;
      v20 = *(_QWORD *)(v19 + 32);
      *((_QWORD *)language + 7) = v20;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)language + 56), v20, v8, v9, v10, v11, v12, v13);
      v21 = (Il2CppObject *)System_String__Concat_64176912((System_String_o *)StringLiteral_8380/*"Language not found: "*/, v15, 0);
      if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
      UnityEngine_Debug__LogWarning(v21, 0);
    }
    v22 = System_String__Concat_64176912(key, (System_String_o *)StringLiteral_191/*" Mobile"*/, 0);
    v23 = Localization_TypeInfo;
    v24 = (Il2CppObject *)v22;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v23 = Localization_TypeInfo;
    }
    static_fields = v23->static_fields;
    if ( static_fields->mLanguageIndex != -1 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = Localization_TypeInfo->static_fields;
      }
      language = static_fields->mDictionary;
      if ( !language )
        goto LABEL_84;
      language = (void *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                           (System_Collections_Generic_Dictionary_object__object__o *)language,
                           v24,
                           &value,
                           (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
      v23 = Localization_TypeInfo;
      if ( ((unsigned __int8)language & 1) != 0 )
      {
        if ( !Localization_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          v23 = Localization_TypeInfo;
        }
        v26 = value;
        if ( !value )
          goto LABEL_84;
        monitor = (int32_t)value[1].monitor;
        mLanguageIndex = v23->static_fields->mLanguageIndex;
        if ( mLanguageIndex < monitor )
        {
          if ( !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            monitor = (int32_t)v26[1].monitor;
            mLanguageIndex = Localization_TypeInfo->static_fields->mLanguageIndex;
          }
          if ( mLanguageIndex < (unsigned int)monitor )
          {
            v29 = &v26->klass + mLanguageIndex;
            return (System_String_o *)v29[4];
          }
          goto LABEL_85;
        }
      }
    }
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = Localization_TypeInfo;
    }
    language = v23->static_fields->mOldDictionary;
    if ( language )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)language,
             v24,
             &v36,
             (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        return (System_String_o *)v36;
      }
      v30 = Localization_TypeInfo;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v30 = Localization_TypeInfo;
      }
      v31 = v30->static_fields;
      if ( v31->mLanguageIndex != -1 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v31 = Localization_TypeInfo->static_fields;
        }
        language = v31->mDictionary;
        if ( !language )
          goto LABEL_84;
        language = (void *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                             (System_Collections_Generic_Dictionary_object__object__o *)language,
                             (Il2CppObject *)key,
                             &value,
                             (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
        v30 = Localization_TypeInfo;
        if ( ((unsigned __int8)language & 1) != 0 )
        {
          if ( !Localization_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
            v30 = Localization_TypeInfo;
          }
          v32 = value;
          if ( !value )
            goto LABEL_84;
          v33 = (int32_t)value[1].monitor;
          v34 = v30->static_fields->mLanguageIndex;
          if ( v34 < v33 )
          {
            if ( !v30->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v30);
              v33 = (int32_t)v32[1].monitor;
              v34 = Localization_TypeInfo->static_fields->mLanguageIndex;
            }
            if ( v34 < (unsigned int)v33 )
            {
              v29 = &v32->klass + v34;
              return (System_String_o *)v29[4];
            }
LABEL_85:
            sub_1C7BD48(language);
          }
        }
      }
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = Localization_TypeInfo;
      }
      language = v30->static_fields->mOldDictionary;
      if ( language )
      {
        if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
               (System_Collections_Generic_Dictionary_object__object__o *)language,
               (Il2CppObject *)key,
               &v36,
               (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          return (System_String_o *)v36;
        }
        else
        {
          return key;
        }
      }
    }
LABEL_84:
    sub_1C7BD40(language, v7);
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_9502/*"No localization data present"*/, 0);
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

  if ( (byte_4CF2DAE & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DAE = 1;
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
        sub_1C7BD48(v3);
      if ( System_String__op_Equality(v10->m_Items[v6], languageName, 0) )
        return v9;
      v9 = (__int64)(v6 + 1) < v7;
      if ( v8 == v6 )
        return v9;
      v3 = Localization_TypeInfo;
      ++v6;
    }
LABEL_17:
    sub_1C7BD40(v3, method);
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

  if ( (byte_4CF2DAA & 1) == 0 )
  {
    sub_1C7BAE8(&ByteReader_TypeInfo);
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DAA = 1;
  }
  v3 = (ByteReader_o *)sub_1C7BD34(ByteReader_TypeInfo);
  ByteReader___ctor_49788012(v3, asset, v4);
  if ( !asset || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)asset, 0), !v3) )
    sub_1C7BD40(name, v6);
  v7 = name;
  Dictionary = ByteReader__ReadDictionary(v3, v6);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  Localization__Set_49802696(v7, Dictionary, v8);
}


bool Localization__LoadAndSelect(System_String_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  Localization_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0
  const MethodInfo *v6; // x1
  Localization_c *v7; // x0
  Localization_c *v9; // x0

  if ( (byte_4CF2DA9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    byte_4CF2DA9 = 1;
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
            (const MethodInfo_34F215C *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__) )
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
         (const MethodInfo_34F215C *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) > 0 )
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
          (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo->static_fields->mDictionary) == 0) )
  {
LABEL_26:
    sub_1C7BD40(mDictionary, v3);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    mDictionary,
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
  if ( System_String__IsNullOrEmpty(value, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8379/*"Language"*/, 0);
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
  if ( (byte_4CF2DAC & 1) == 0 )
  {
    asset = (UnityEngine_TextAsset_o *)sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DAC = 1;
  }
  if ( !v4 )
    sub_1C7BD40(asset, merge);
  bytes = UnityEngine_TextAsset__get_bytes(v4, 0);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  return Localization__LoadCSV_49803232(bytes, v5, merge, v6);
}


// local variable allocation has failed, the output may be wrong!
bool Localization__LoadCSV_49801692(System_Byte_array *bytes, bool merge, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CF2DAD & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DAD = 1;
  }
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  return Localization__LoadCSV_49803232(bytes, (UnityEngine_TextAsset_o *)merge, merge, v3);
}


bool Localization__LoadCSV_49803232(
        System_Byte_array *bytes,
        UnityEngine_TextAsset_o *asset,
        bool merge,
        const MethodInfo *method)
{
  __int64 v6; // x24
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1
  BetterList_T__o *CSV; // x0
  const MethodInfo *v15; // x1
  BetterList_T__o *v16; // x20
  Localization_c *v17; // x0
  bool IsNullOrEmpty; // w0
  Localization_c *v19; // x8
  struct Localization_StaticFields *static_fields; // x9
  struct System_String_array *mLanguages; // x9
  __int64 v22; // x0
  __int64 v23; // x21
  unsigned __int64 v24; // x22
  GrandQuestFolderBoardItem_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  signed __int64 size; // x8
  int32_t i; // w22
  const MethodInfo *v34; // x1
  Il2CppObject *Item; // x23
  Localization_c *v36; // x0
  struct Localization_StaticFields *v37; // x0
  struct System_String_array *v38; // x8
  struct System_String_array *v39; // t1
  il2cpp_array_size_t max_length; // x19
  struct System_String_array *v41; // x23
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  BetterList_T__o *v48; // x1
  Il2CppClass **v49; // x0
  System_Collections_Generic_Dictionary_object__object__o *v50; // x23
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  unsigned int v60; // w9
  Il2CppObject *v61; // x1
  Il2CppClass **v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  Localization_c *v71; // x0
  struct Localization_StaticFields *v72; // x0
  __int64 v74; // x0
  struct Localization_StaticFields *v75; // x8
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  Localization_c *v82; // x0
  Il2CppObject *v83; // x0
  System_String_o *String; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  Localization_c *v91; // x8
  System_String_o *v92; // x21
  struct Localization_StaticFields *v93; // x0
  unsigned __int64 v94; // x21
  __int64 j; // x19
  struct System_String_array *v96; // x23
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct Localization_StaticFields *v103; // x8
  struct System_String_array *v104; // x9
  Localization_c *v105; // x0
  System_Collections_Generic_Dictionary_object__int__o *v106; // x20
  unsigned __int64 k; // x22
  struct System_String_array *v108; // x8
  BetterList_string__o *v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  BetterList_T__o *v116; // x22
  Il2CppObject *v117; // x0
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x3
  Localization_c *v120; // x0
  struct Localization_StaticFields *v121; // x8
  struct Localization_OnLocalizeNotification_o *onLocalize; // x19
  struct Localization_StaticFields *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v130; // [xsp+10h] [xbp-C0h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v132; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_4CF2DAF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Resize_string___);
    sub_1C7BAE8(&Method_BetterList_string__RemoveAt__);
    sub_1C7BAE8(&Method_BetterList_string__get_Item__);
    sub_1C7BAE8(&ByteReader_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Value__);
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    byte_4CF2DAF = 1;
  }
  memset(&v132, 0, sizeof(v132));
  array = 0;
  if ( !bytes )
    return 0;
  v6 = sub_1C7BD34(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = bytes;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)bytes, v7, v8, v9, v10, v11, v12);
  CSV = (BetterList_T__o *)ByteReader__ReadCSV((ByteReader_o *)v6, v13);
  if ( !CSV )
    goto LABEL_110;
  v16 = CSV;
  if ( CSV->fields.size < 2 )
    return 0;
  BetterList_object___RemoveAt(CSV, 0, (const MethodInfo_33A6870 *)Method_BetterList_string__RemoveAt__);
  v17 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v17 = Localization_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v17->static_fields->mLanguage, 0);
  v19 = Localization_TypeInfo;
  if ( IsNullOrEmpty )
  {
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v19 = Localization_TypeInfo;
    }
    v19->static_fields->localizationHasBeenSet = 0;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = Localization_TypeInfo;
  }
  static_fields = v19->static_fields;
  if ( !static_fields->localizationHasBeenSet )
    goto LABEL_114;
  if ( !merge )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = Localization_TypeInfo;
      static_fields = Localization_TypeInfo->static_fields;
    }
    if ( !static_fields->mMerging )
      goto LABEL_114;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = Localization_TypeInfo;
  }
  mLanguages = v19->static_fields->mLanguages;
  if ( !mLanguages )
    goto LABEL_114;
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = Localization_TypeInfo;
    mLanguages = Localization_TypeInfo->static_fields->mLanguages;
    if ( !mLanguages )
      goto LABEL_110;
  }
  if ( mLanguages->max_length )
  {
    v22 = sub_1C7BB90(string___TypeInfo, (unsigned int)v16->fields.size);
    v23 = v22;
    if ( v16->fields.size >= 1 )
    {
      v24 = 0;
      v25 = (GrandQuestFolderBoardItem_o *)(v22 + 32);
      do
      {
        CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                   v16,
                                   v24,
                                   (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
        if ( !v23 )
          goto LABEL_110;
        if ( v24 >= *(unsigned int *)(v23 + 24) )
          goto LABEL_111;
        v25->klass = (GrandQuestFolderBoardItem_c *)CSV;
        sub_1C7BA8C(v25, (int32_t)CSV, v26, v27, v28, v29, v30, v31);
        size = v16->fields.size;
        ++v24;
        v25 = (GrandQuestFolderBoardItem_o *)((char *)v25 + 8);
      }
      while ( (__int64)v24 < size );
      if ( (int)size >= 1 )
      {
        for ( i = 0; i < v16->fields.size; ++i )
        {
          Item = BetterList_object___get_Item(v16, i, (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          if ( !Localization__HasLanguage((System_String_o *)Item, v34) )
          {
            v36 = Localization_TypeInfo;
            if ( !Localization_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v36 = Localization_TypeInfo;
            }
            v37 = v36->static_fields;
            v39 = v37->mLanguages;
            CSV = (BetterList_T__o *)&v37->mLanguages;
            v38 = v39;
            if ( !v39 )
              goto LABEL_110;
            max_length = v38->max_length;
            System_Array__Resize_object_(
              (System_Object_array **)CSV,
              max_length + 1,
              (const MethodInfo_312D9D4 *)Method_System_Array_Resize_string___);
            v41 = Localization_TypeInfo->static_fields->mLanguages;
            CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                       v16,
                                       i,
                                       (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
            if ( !v41 )
              goto LABEL_110;
            if ( (unsigned int)max_length >= LODWORD(v41->max_length) )
              goto LABEL_111;
            v48 = CSV;
            v49 = &v41->obj.klass + (int)max_length;
            v49[4] = (Il2CppClass *)v48;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v49 + 4), (int32_t)v48, v42, v43, v44, v45, v46, v47);
            v50 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__string____TypeInfo);
            System_Collections_Generic_Dictionary_object__object____ctor(
              v50,
              (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
            CSV = (BetterList_T__o *)Localization_TypeInfo->static_fields->mDictionary;
            if ( !CSV )
              goto LABEL_110;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v130,
              (System_Collections_Generic_Dictionary_object__object__o *)CSV,
              (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
            v132 = v130;
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v132,
                      (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__) )
            {
              current = v132.fields._current;
              array = (System_Object_array *)v132.fields._current.fields.value;
              System_Array__Resize_object_(
                &array,
                max_length + 1,
                (const MethodInfo_312D9D4 *)Method_System_Array_Resize_string___);
              if ( !array )
                sub_1C7BD40(v52, v53);
              v60 = array->max_length;
              if ( !v60 )
                sub_1C7BD48(v52);
              if ( (unsigned int)max_length >= v60 )
                sub_1C7BD48(v52);
              v61 = array->m_Items[0];
              v62 = &array->obj.klass + (int)max_length;
              v62[4] = (Il2CppClass *)v61;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v62 + 4), (int32_t)v61, v54, v55, v56, v57, v58, v59);
              if ( !v50 )
                sub_1C7BD40(v63, v64);
              System_Collections_Generic_Dictionary_object__object___Add(
                v50,
                current.fields.key,
                &array->obj,
                (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v132,
              (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
            v71 = Localization_TypeInfo;
            if ( !Localization_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
              v71 = Localization_TypeInfo;
            }
            v72 = v71->static_fields;
            v72->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v50;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v72->mDictionary, (int32_t)v50, v65, v66, v67, v68, v69, v70);
          }
        }
      }
    }
  }
  else
  {
LABEL_114:
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = Localization_TypeInfo;
    }
    CSV = (BetterList_T__o *)v19->static_fields->mDictionary;
    if ( !CSV )
      goto LABEL_110;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)CSV,
      (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    v74 = sub_1C7BB90(string___TypeInfo, (unsigned int)v16->fields.size);
    v75 = Localization_TypeInfo->static_fields;
    v75->mLanguages = (struct System_String_array *)v74;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v75->mLanguages, v74, v76, v77, v78, v79, v80, v81);
    v82 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->static_fields->localizationHasBeenSet )
    {
      v83 = BetterList_object___get_Item(v16, 0, (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
      String = UnityEngine_PlayerPrefs__GetString((System_String_o *)StringLiteral_8379/*"Language"*/, (System_String_o *)v83, 0);
      v91 = Localization_TypeInfo;
      v92 = String;
      if ( !Localization_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        v91 = Localization_TypeInfo;
      }
      v93 = v91->static_fields;
      v93->mLanguage = v92;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v93->mLanguage, (int32_t)v92, v85, v86, v87, v88, v89, v90);
      v82 = Localization_TypeInfo;
      Localization_TypeInfo->static_fields->localizationHasBeenSet = 1;
    }
    if ( v16->fields.size >= 1 )
    {
      v94 = 0;
      for ( j = 32; ; j += 8 )
      {
        if ( !v82->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v82);
          v82 = Localization_TypeInfo;
        }
        v96 = v82->static_fields->mLanguages;
        CSV = (BetterList_T__o *)BetterList_object___get_Item(
                                   v16,
                                   v94,
                                   (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
        if ( !v96 )
          break;
        if ( v94 >= LODWORD(v96->max_length) )
          goto LABEL_111;
        *(Il2CppClass **)((char *)&v96->obj.klass + j) = (Il2CppClass *)CSV;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)((char *)v96 + j), (int32_t)CSV, v97, v98, v99, v100, v101, v102);
        v103 = Localization_TypeInfo->static_fields;
        v104 = v103->mLanguages;
        if ( !v104 )
          break;
        if ( v94 >= LODWORD(v104->max_length) )
LABEL_111:
          sub_1C7BD48(CSV);
        if ( System_String__op_Equality(*(System_String_o **)((char *)&v104->obj.klass + j), v103->mLanguage, 0) )
        {
          v105 = Localization_TypeInfo;
          if ( !Localization_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
            v105 = Localization_TypeInfo;
          }
          v105->static_fields->mLanguageIndex = v94;
        }
        if ( (__int64)++v94 >= v16->fields.size )
          goto LABEL_79;
        v82 = Localization_TypeInfo;
      }
      goto LABEL_110;
    }
LABEL_79:
    v23 = 0;
  }
  v106 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v106,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  for ( k = 0; ; ++k )
  {
    CSV = (BetterList_T__o *)Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      CSV = (BetterList_T__o *)Localization_TypeInfo;
    }
    v108 = *(struct System_String_array **)(*(_QWORD *)&CSV[5].fields.size + 24LL);
    if ( !v108 )
      goto LABEL_110;
    if ( (__int64)k >= SLODWORD(v108->max_length) )
      break;
    if ( !LODWORD(CSV[7].klass) )
    {
      j_il2cpp_runtime_class_init_0(CSV);
      v108 = Localization_TypeInfo->static_fields->mLanguages;
      if ( !v108 )
        goto LABEL_110;
    }
    if ( k >= LODWORD(v108->max_length) )
      goto LABEL_111;
    if ( !v106 )
      goto LABEL_110;
    System_Collections_Generic_Dictionary_object__int___Add(
      v106,
      (Il2CppObject *)v108->m_Items[k],
      k,
      (const MethodInfo_34E975C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  }
  v109 = ByteReader__ReadCSV((ByteReader_o *)v6, v15);
  if ( v109 )
  {
    v116 = (BetterList_T__o *)v109;
    do
    {
      if ( !v116->fields.size )
        break;
      v117 = BetterList_object___get_Item(v116, 0, (const MethodInfo_33A6228 *)Method_BetterList_string__get_Item__);
      if ( !System_String__IsNullOrEmpty((System_String_o *)v117, 0) )
      {
        if ( !Localization_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
        Localization__AddCSV(
          (BetterList_string__o *)v116,
          (System_String_array *)v23,
          (System_Collections_Generic_Dictionary_string__int__o *)v106,
          v119);
      }
      v116 = (BetterList_T__o *)ByteReader__ReadCSV((ByteReader_o *)v6, v118);
    }
    while ( v116 );
  }
  v120 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v120 = Localization_TypeInfo;
  }
  v121 = v120->static_fields;
  if ( v121->mMerging )
    return 1;
  if ( !v120->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v120);
    v120 = Localization_TypeInfo;
    v121 = Localization_TypeInfo->static_fields;
  }
  onLocalize = v121->onLocalize;
  if ( !onLocalize )
    return 1;
  if ( !v120->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v120);
    v121 = Localization_TypeInfo->static_fields;
    onLocalize = v121->onLocalize;
  }
  v121->onLocalize = 0;
  v121->mMerging = 1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v121->onLocalize, 0, v110, v111, v112, v113, v114, v115);
  if ( !onLocalize )
LABEL_110:
    sub_1C7BD40(CSV, v15);
  ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
    onLocalize->fields.method_code,
    onLocalize->fields.method);
  v123 = Localization_TypeInfo->static_fields;
  v123->onLocalize = onLocalize;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v123->onLocalize, (int32_t)onLocalize, v124, v125, v126, v127, v128, v129);
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

  if ( (byte_4CF2DA8 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Resources_Load_TextAsset___);
    sub_1C7BAE8(&StringLiteral_8508/*"Localization"*/);
    byte_4CF2DA8 = 1;
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
                                   StringLiteral_8508/*"Localization"*/,
                                   loadFunction->fields.method);
  }
  else
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_8508/*"Localization"*/,
               (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_TextAsset___);
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
  if ( Localization__LoadCSV_49801692(v5, 0, v2) )
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
              (const MethodInfo_320C160 *)Method_UnityEngine_Resources_Load_TextAsset___);
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
    sub_1C7BD40(v7, v8);
  }
  return 0;
}


System_String_o *Localization__Localize(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_4CF2DB7 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DB7 = 1;
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
  GrandQuestFolderBoardItem_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct Localization_OnLocalizeNotification_o *onLocalize; // x8

  if ( (byte_4CF2DB2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&UIRoot_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    sub_1C7BAE8(&StringLiteral_9946/*"OnLocalize"*/);
    byte_4CF2DB2 = 1;
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
            (const MethodInfo_34F215C *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
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
      sub_1C7BD48(mDictionary);
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
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
  v13 = (GrandQuestFolderBoardItem_o *)Localization_TypeInfo->static_fields;
  v13->fields.sortStr1 = language;
  v13 = (GrandQuestFolderBoardItem_o *)((char *)v13 + 56);
  LODWORD(v13[-1].fields._ClosedMessage_k__BackingField) = v9;
  sub_1C7BA8C(v13, (int32_t)language, v14, v15, v16, v17, v18, v19);
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_8379/*"Language"*/,
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
    sub_1C7BD40(mDictionary, method);
  }
LABEL_27:
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
  UIRoot__Broadcast((System_String_o *)StringLiteral_9946/*"OnLocalize"*/, 0);
  LOBYTE(Count) = 1;
  return Count;
}


void Localization__Set(System_String_o *languageName, System_Byte_array *bytes, const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_Dictionary_string__string__o *Dictionary; // x20

  if ( (byte_4CF2DAB & 1) == 0 )
  {
    sub_1C7BAE8(&ByteReader_TypeInfo);
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DAB = 1;
  }
  v5 = sub_1C7BD34(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = bytes;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)bytes, v6, v7, v8, v9, v10, v11);
  Dictionary = ByteReader__ReadDictionary((ByteReader_o *)v5, v12);
  if ( !Localization_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
  Localization__Set_49802696(languageName, Dictionary, v13);
}


void Localization__Set_49802696(
        System_String_o *languageName,
        System_Collections_Generic_Dictionary_string__string__o *dictionary,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Localization_c *v10; // x0
  struct Localization_StaticFields *static_fields; // x0
  struct Localization_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct Localization_StaticFields *v19; // x8
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_String_array *v28; // x20
  struct Localization_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct Localization_OnLocalizeNotification_o *onLocalize; // x8

  if ( (byte_4CF2DB3 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&UIRoot_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    sub_1C7BAE8(&StringLiteral_9946/*"OnLocalize"*/);
    byte_4CF2DB3 = 1;
  }
  v10 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v10 = Localization_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->mLanguage = languageName;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->mLanguage,
    (int32_t)languageName,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_8379/*"Language"*/,
    Localization_TypeInfo->static_fields->mLanguage,
    0);
  v12 = Localization_TypeInfo->static_fields;
  v12->mOldDictionary = dictionary;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->mOldDictionary, (int32_t)dictionary, v13, v14, v15, v16, v17, v18);
  v19 = Localization_TypeInfo->static_fields;
  v19->localizationHasBeenSet = 1;
  v19->mLanguageIndex = -1;
  v20 = sub_1C7BB90(string___TypeInfo, 1);
  if ( !v20 )
    goto LABEL_14;
  v28 = (struct System_String_array *)v20;
  if ( !*(_DWORD *)(v20 + 24) )
    sub_1C7BD48(v20);
  *(_QWORD *)(v20 + 32) = languageName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)languageName, v22, v23, v24, v25, v26, v27);
  v29 = Localization_TypeInfo->static_fields;
  v29->mLanguages = v28;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v29->mLanguages, (int32_t)v28, v30, v31, v32, v33, v34, v35);
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
    sub_1C7BD40(v20, v21);
  }
LABEL_11:
  if ( !UIRoot_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo);
  UIRoot__Broadcast((System_String_o *)StringLiteral_9946/*"OnLocalize"*/, 0);
}


void Localization__Set_49807264(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  Localization_c *v5; // x0
  System_Collections_Generic_Dictionary_object__object__o *mOldDictionary; // x0
  bool v7; // w0
  Localization_c *v8; // x8
  bool v9; // w21

  if ( (byte_4CF2DB4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DB4 = 1;
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
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
    sub_1C7BD40(mOldDictionary, value);
  if ( v9 )
    System_Collections_Generic_Dictionary_object__object___set_Item(
      mOldDictionary,
      (Il2CppObject *)key,
      (Il2CppObject *)value,
      (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
  else
    System_Collections_Generic_Dictionary_object__object___Add(
      mOldDictionary,
      (Il2CppObject *)key,
      (Il2CppObject *)value,
      (const MethodInfo_34F248C *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


System_Collections_Generic_Dictionary_string__string____o *Localization__get_dictionary(const MethodInfo *method)
{
  Localization_c *v1; // x0
  const MethodInfo *v2; // x1
  System_String_o *String; // x19

  if ( (byte_4CF2DA3 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    sub_1C7BAE8(&StringLiteral_6061/*"English"*/);
    byte_4CF2DA3 = 1;
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
               (System_String_o *)StringLiteral_8379/*"Language"*/,
               (System_String_o *)StringLiteral_6061/*"English"*/,
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

  if ( (byte_4CF2DA5 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    sub_1C7BAE8(&StringLiteral_6061/*"English"*/);
    byte_4CF2DA5 = 1;
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
               (System_String_o *)StringLiteral_8379/*"Language"*/,
               (System_String_o *)StringLiteral_6061/*"English"*/,
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1
  Localization_c *v12; // x0

  if ( (byte_4CF2DA6 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8379/*"Language"*/);
    sub_1C7BAE8(&StringLiteral_6061/*"English"*/);
    byte_4CF2DA6 = 1;
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
               (System_String_o *)StringLiteral_8379/*"Language"*/,
               (System_String_o *)StringLiteral_6061/*"English"*/,
               0);
    static_fields = Localization_TypeInfo->static_fields;
    static_fields->mLanguage = String;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->mLanguage, (int32_t)String, v5, v6, v7, v8, v9, v10);
    Localization__LoadAndSelect(Localization_TypeInfo->static_fields->mLanguage, v11);
  }
  v12 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v12 = Localization_TypeInfo;
  }
  return v12->static_fields->mLanguage;
}


void Localization__set_dictionary(
        System_Collections_Generic_Dictionary_string__string____o *value,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Localization_c *v9; // x0
  GrandQuestFolderBoardItem_o *static_fields; // x0

  if ( (byte_4CF2DA4 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DA4 = 1;
  }
  v9 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v9 = Localization_TypeInfo;
  }
  static_fields = (GrandQuestFolderBoardItem_o *)v9->static_fields;
  static_fields->fields.sortValue0B = (int64_t)value;
  static_fields = (GrandQuestFolderBoardItem_o *)((char *)static_fields + 40);
  LOBYTE(static_fields[-1].fields._IconId_k__BackingField) = value != 0;
  sub_1C7BA8C(static_fields, (int32_t)value, v2, v3, v4, v5, v6, v7);
}


void Localization__set_language(System_String_o *value, const MethodInfo *method)
{
  Localization_c *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Localization_c *v10; // x0
  struct Localization_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CF2DA7 & 1) == 0 )
  {
    sub_1C7BAE8(&Localization_TypeInfo);
    byte_4CF2DA7 = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !Localization_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
    v3 = Localization_TypeInfo;
  }
  if ( System_String__op_Inequality(v3->static_fields->mLanguage, value, 0) )
  {
    v10 = Localization_TypeInfo;
    if ( !Localization_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
      v10 = Localization_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->mLanguage = value;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->mLanguage, (int32_t)value, v4, v5, v6, v7, v8, v9);
    Localization__LoadAndSelect(value, v12);
  }
}


void Localization_LoadFunction___ctor(
        Localization_LoadFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AB8CC4;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AB8CA4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AB8C54;
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
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v6, callback, object);
}


System_Byte_array *Localization_LoadFunction__EndInvoke(
        Localization_LoadFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (System_Byte_array *)sub_1C7BAA0(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB8DA8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB8D68;
}


System_IAsyncResult_o *Localization_OnLocalizeNotification__BeginInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


void Localization_OnLocalizeNotification__EndInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void Localization_OnLocalizeNotification__Invoke(Localization_OnLocalizeNotification_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}