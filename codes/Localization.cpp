void Localization___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  struct Localization_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_object__object__o *v8; // x19
  struct Localization_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_Dictionary_object__object__o *v16; // x19
  struct Localization_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct Localization_StaticFields *v24; // x8

  if ( (byte_593CE08 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CE08 = 1;
  }
  static_fields = Localization_TypeInfo->static_fields;
  static_fields->mLanguages = 0;
  static_fields = (struct Localization_StaticFields *)((char *)static_fields + 24);
  static_fields[-1].mMerging = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)static_fields, 0, v1, v2, v3, v4, v5, v6);
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  v9 = Localization_TypeInfo->static_fields;
  v9->mOldDictionary = (struct System_Collections_Generic_Dictionary_string__string__o *)v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->mOldDictionary, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__string____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
  v17 = Localization_TypeInfo->static_fields;
  v17->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->mDictionary, (int32_t)v16, v18, v19, v20, v21, v22, v23);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  Il2CppObject *v10; // x21
  bool v11; // w8
  Localization_c *v12; // x0
  int v13; // w9
  __int64 v14; // x1
  Il2CppObject *v15; // x19
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0

  v6 = (BetterList_T__o *)newValues;
  if ( (byte_593CDFF & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_string__get_Item__);
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&StringLiteral_565/*"' is already present"*/);
    newValues = (BetterList_string__o *)sub_21FFC50(&StringLiteral_8834/*"Localization key '"*/);
    byte_593CDFF = 1;
  }
  if ( !v6 )
    goto LABEL_23;
  if ( v6->fields.size < 2 )
    return;
  Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
  if ( System_String__IsNullOrEmpty((System_String_o *)Item, 0) )
    return;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v8);
  newValues = (BetterList_string__o *)Localization__ExtractStrings(
                                        (BetterList_string__o *)v6,
                                        newLanguages,
                                        languageIndices,
                                        v9);
  if ( !Localization_TypeInfo->static_fields->mDictionary )
    goto LABEL_23;
  v10 = (Il2CppObject *)newValues;
  v11 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo->static_fields->mDictionary,
          Item,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
  v12 = Localization_TypeInfo;
  v13 = *(&Localization_TypeInfo->_2.cctor_finished + 1);
  if ( v11 )
  {
    if ( !v13 )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, newLanguages);
      v12 = Localization_TypeInfo;
    }
    newValues = (BetterList_string__o *)v12->static_fields->mDictionary;
    if ( newValues )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        (System_Collections_Generic_Dictionary_object__object__o *)newValues,
        Item,
        v10,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__string____set_Item__);
      if ( !newLanguages )
      {
        v15 = (Il2CppObject *)System_String__Concat_75481624(
                                (System_String_o *)StringLiteral_8834/*"Localization key '"*/,
                                (System_String_o *)Item,
                                (System_String_o *)StringLiteral_565/*"' is already present"*/,
                                0);
        if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v14);
        UnityEngine_Debug__LogWarning(v15, 0);
      }
      return;
    }
LABEL_23:
    sub_21FFECC(newValues, newLanguages);
  }
  if ( !v13 )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, newLanguages);
    v12 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v12->static_fields->mDictionary;
  if ( !mDictionary )
    sub_21FFECC(0, newLanguages);
  System_Collections_Generic_Dictionary_object__object___Add(
    mDictionary,
    Item,
    v10,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
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

  if ( (byte_593CE07 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__);
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&StringLiteral_190/*" Mobile"*/);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    sub_21FFC50(&StringLiteral_6298/*"English"*/);
    byte_593CE07 = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v3 = Localization_TypeInfo;
  }
  if ( !v3->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8691/*"Language"*/,
               (System_String_o *)StringLiteral_6298/*"English"*/,
               0);
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v4);
    Localization__set_language(String, v4);
  }
  v6 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_190/*" Mobile"*/, 0);
  v8 = Localization_TypeInfo;
  v9 = (Il2CppObject *)v6;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
    v8 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->mDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         v9,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
  {
    return 1;
  }
  v11 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
    v11 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         v9,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__) )
  {
    return 1;
  }
  v12 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
    v12 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v12->static_fields->mDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mDictionary,
         (Il2CppObject *)key,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string____ContainsKey__) )
  {
    return 1;
  }
  v14 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
    v14 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v14->static_fields->mOldDictionary;
  if ( !mDictionary )
LABEL_26:
    sub_21FFECC(mDictionary, v7);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           mDictionary,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
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
  unsigned __int64 v11; // x22
  __int64 max_length; // x26
  int32_t v13; // w0
  unsigned int v14; // w23
  Il2CppObject *v15; // x28
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BetterList_string__o *v22; // x1
  Il2CppClass **v23; // x0
  BetterList_string__o *v24; // x20
  __int64 v25; // x8
  int32_t size; // w8
  int32_t v27; // w9
  __int64 v28; // x23
  MissionNaviTransitionBoardItem_o *v29; // x22
  __int64 v30; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF

  v6 = (BetterList_T__o *)added;
  if ( (byte_593CE00 & 1) == 0 )
  {
    sub_21FFC50(&Method_BetterList_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_21FFC50(&Localization_TypeInfo);
    added = (BetterList_string__o *)sub_21FFC50(&string___TypeInfo);
    byte_593CE00 = 1;
  }
  value = 0;
  if ( newLanguages )
  {
    if ( v6 )
    {
      Item = BetterList_object___get_Item(v6, 0, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
      v8 = Localization_TypeInfo;
      v9 = Item;
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, newLanguages);
        v8 = Localization_TypeInfo;
      }
      added = (BetterList_string__o *)v8->static_fields->mDictionary;
      if ( added )
      {
        added = (BetterList_string__o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                          (System_Collections_Generic_Dictionary_object__object__o *)added,
                                          v9,
                                          &value,
                                          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
        if ( ((unsigned __int8)added & 1) != 0 )
        {
LABEL_13:
          if ( (int)newLanguages->max_length >= 1 )
          {
            v11 = 0;
            max_length = (unsigned int)newLanguages->max_length;
            while ( v11 < LODWORD(newLanguages->max_length) )
            {
              if ( !languageIndices )
                goto LABEL_35;
              v13 = System_Collections_Generic_Dictionary_object__int___get_Item(
                      (System_Collections_Generic_Dictionary_object__int__o *)languageIndices,
                      (Il2CppObject *)newLanguages->m_Items[v11++],
                      (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
              v14 = v13;
              v15 = value;
              added = (BetterList_string__o *)BetterList_object___get_Item(
                                                v6,
                                                v11,
                                                (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
              if ( !v15 )
                goto LABEL_35;
              if ( v14 >= LODWORD(v15[1].monitor) )
                goto LABEL_34;
              v22 = added;
              v23 = &v15->klass + (int)v14;
              v23[4] = (Il2CppClass *)v22;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v22, v16, v17, v18, v19, v20, v21);
              if ( max_length == v11 )
                return (System_String_array *)value;
            }
            goto LABEL_34;
          }
          return (System_String_array *)value;
        }
        added = (BetterList_string__o *)Localization_TypeInfo;
        if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo, newLanguages);
          added = (BetterList_string__o *)Localization_TypeInfo;
        }
        v10 = *(_QWORD *)(*(_QWORD *)&added[5].fields.size + 24LL);
        if ( v10 )
        {
          added = (BetterList_string__o *)sub_21FFD10(string___TypeInfo, *(unsigned int *)(v10 + 24));
          value = (Il2CppObject *)added;
          goto LABEL_13;
        }
      }
    }
LABEL_35:
    sub_21FFECC(added, newLanguages);
  }
  added = (BetterList_string__o *)Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, newLanguages);
    added = (BetterList_string__o *)Localization_TypeInfo;
  }
  v25 = *(_QWORD *)(*(_QWORD *)&added[5].fields.size + 24LL);
  if ( !v25 )
    goto LABEL_35;
  added = (BetterList_string__o *)sub_21FFD10(string___TypeInfo, *(unsigned int *)(v25 + 24));
  if ( !v6 )
    goto LABEL_35;
  v24 = added;
  if ( !added )
    goto LABEL_35;
  size = added->fields.size;
  v27 = v6->fields.size;
  if ( v27 >= size + 1 )
    v28 = (unsigned int)(size + 1);
  else
    v28 = (unsigned int)v27;
  if ( (int)v28 >= 2 )
  {
    v29 = (MissionNaviTransitionBoardItem_o *)&added[1];
    v30 = 1;
    while ( 1 )
    {
      added = (BetterList_string__o *)BetterList_object___get_Item(
                                        v6,
                                        v30,
                                        (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
      if ( v30 - 1 >= (unsigned __int64)(unsigned int)v24->fields.size )
        break;
      v29->klass = (MissionNaviTransitionBoardItem_c *)added;
      sub_21FFBF4(v29, (int32_t)added, v31, v32, v33, v34, v35, v36);
      ++v30;
      v29 = (MissionNaviTransitionBoardItem_o *)((char *)v29 + 8);
      if ( v30 == v28 )
        return (System_String_array *)v24;
    }
LABEL_34:
    sub_21FFED4(added);
  }
  return (System_String_array *)v24;
}


System_String_o *Localization__Format(System_String_o *key, System_Object_array *parameters, const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_593CE05 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CE05 = 1;
  }
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, parameters);
  v5 = Localization__Get(key, (const MethodInfo *)parameters);
  return System_String__Format_75484712(v5, parameters, 0);
}


System_String_o *Localization__Get(System_String_o *key, const MethodInfo *method)
{
  Localization_c *v3; // x0
  const MethodInfo *v4; // x1
  System_String_o *String; // x20
  void *language; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Localization_c *v14; // x8
  System_String_o *v15; // x20
  unsigned __int64 i; // x22
  struct System_String_array *mLanguages; // x9
  __int64 v19; // x8
  __int64 v20; // x1
  __int64 v21; // x1
  Il2CppObject *v22; // x20
  System_String_o *v23; // x0
  Localization_c *v24; // x8
  Il2CppObject *v25; // x20
  struct Localization_StaticFields *static_fields; // x9
  Il2CppObject *v27; // x22
  int32_t monitor; // w10
  int32_t mLanguageIndex; // w9
  Il2CppClass **v30; // x8
  struct Localization_StaticFields *v31; // x8
  bool v32; // w8
  Il2CppObject *v33; // x20
  int32_t v34; // w9
  int32_t v35; // w8
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *v37; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_593CE04 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&StringLiteral_190/*" Mobile"*/);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    sub_21FFC50(&StringLiteral_9854/*"No localization data present"*/);
    sub_21FFC50(&StringLiteral_8692/*"Language not found: "*/);
    sub_21FFC50(&StringLiteral_6298/*"English"*/);
    byte_593CE04 = 1;
  }
  v3 = Localization_TypeInfo;
  v37 = 0;
  value = 0;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v3 = Localization_TypeInfo;
  }
  if ( !v3->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8691/*"Language"*/,
               (System_String_o *)StringLiteral_6298/*"English"*/,
               0);
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v4);
    Localization__LoadDictionary(String, v4);
    v3 = Localization_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = Localization_TypeInfo;
  }
  if ( v3->static_fields->mLanguages )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v3, method);
    language = Localization__get_language((const MethodInfo *)v3);
    v14 = Localization_TypeInfo;
    v15 = (System_String_o *)language;
    if ( Localization_TypeInfo->static_fields->mLanguageIndex == -1 )
    {
      for ( i = 0; ; ++i )
      {
        if ( !*(&v14->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v14, v7);
          v14 = Localization_TypeInfo;
        }
        mLanguages = v14->static_fields->mLanguages;
        if ( !mLanguages )
          goto LABEL_84;
        if ( (__int64)i >= SLODWORD(mLanguages->max_length) )
          goto LABEL_31;
        if ( !*(&v14->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v14, v7);
          mLanguages = Localization_TypeInfo->static_fields->mLanguages;
          if ( !mLanguages )
            goto LABEL_84;
        }
        if ( i >= LODWORD(mLanguages->max_length) )
          goto LABEL_85;
        language = (void *)System_String__op_Equality(mLanguages->m_Items[i], v15, 0);
        v14 = Localization_TypeInfo;
        if ( ((unsigned __int8)language & 1) != 0 )
          break;
      }
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
        v14 = Localization_TypeInfo;
      }
      v14->static_fields->mLanguageIndex = i;
    }
LABEL_31:
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v7);
      v14 = Localization_TypeInfo;
    }
    language = v14->static_fields;
    if ( *((_DWORD *)language + 12) == -1 )
    {
      if ( !*(&v14->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v14, v7);
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
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)language + 56), v20, v8, v9, v10, v11, v12, v13);
      v22 = (Il2CppObject *)System_String__Concat_75438412((System_String_o *)StringLiteral_8692/*"Language not found: "*/, v15, 0);
      if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v21);
      UnityEngine_Debug__LogWarning(v22, 0);
    }
    v23 = System_String__Concat_75438412(key, (System_String_o *)StringLiteral_190/*" Mobile"*/, 0);
    v24 = Localization_TypeInfo;
    v25 = (Il2CppObject *)v23;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
      v24 = Localization_TypeInfo;
    }
    static_fields = v24->static_fields;
    if ( static_fields->mLanguageIndex != -1 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v7);
        static_fields = Localization_TypeInfo->static_fields;
      }
      language = static_fields->mDictionary;
      if ( !language )
        goto LABEL_84;
      language = (void *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                           (System_Collections_Generic_Dictionary_object__object__o *)language,
                           v25,
                           &value,
                           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
      v24 = Localization_TypeInfo;
      if ( ((unsigned __int8)language & 1) != 0 )
      {
        if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
          v24 = Localization_TypeInfo;
        }
        v27 = value;
        if ( !value )
          goto LABEL_84;
        monitor = (int32_t)value[1].monitor;
        mLanguageIndex = v24->static_fields->mLanguageIndex;
        if ( mLanguageIndex < monitor )
        {
          if ( !*(&v24->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v24, v7);
            monitor = (int32_t)v27[1].monitor;
            mLanguageIndex = Localization_TypeInfo->static_fields->mLanguageIndex;
          }
          if ( mLanguageIndex < (unsigned int)monitor )
          {
            v30 = &v27->klass + mLanguageIndex;
            return (System_String_o *)v30[4];
          }
          goto LABEL_85;
        }
      }
    }
    if ( !*(&v24->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v24, v7);
      v24 = Localization_TypeInfo;
    }
    language = v24->static_fields->mOldDictionary;
    if ( language )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)language,
             v25,
             &v37,
             (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
      {
        return (System_String_o *)v37;
      }
      language = Localization_TypeInfo;
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
        language = Localization_TypeInfo;
      }
      v31 = (struct Localization_StaticFields *)*((_QWORD *)language + 23);
      if ( v31->mLanguageIndex != -1 )
      {
        if ( !*((_DWORD *)language + 57) )
        {
          j_il2cpp_runtime_class_init_0(language, v7);
          v31 = Localization_TypeInfo->static_fields;
        }
        language = v31->mDictionary;
        if ( !language )
          goto LABEL_84;
        v32 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                (System_Collections_Generic_Dictionary_object__object__o *)language,
                (Il2CppObject *)key,
                &value,
                (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string____TryGetValue__);
        language = Localization_TypeInfo;
        if ( v32 )
        {
          if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v7);
            language = Localization_TypeInfo;
          }
          v33 = value;
          if ( !value )
            goto LABEL_84;
          v34 = (int32_t)value[1].monitor;
          v35 = *(_DWORD *)(*((_QWORD *)language + 23) + 48LL);
          if ( v35 < v34 )
          {
            if ( !*((_DWORD *)language + 57) )
            {
              j_il2cpp_runtime_class_init_0(language, v7);
              v34 = (int32_t)v33[1].monitor;
              v35 = Localization_TypeInfo->static_fields->mLanguageIndex;
            }
            if ( v35 < (unsigned int)v34 )
            {
              v30 = &v33->klass + v35;
              return (System_String_o *)v30[4];
            }
LABEL_85:
            sub_21FFED4(language);
          }
        }
      }
      if ( !*((_DWORD *)language + 57) )
      {
        j_il2cpp_runtime_class_init_0(language, v7);
        language = Localization_TypeInfo;
      }
      language = *(void **)(*((_QWORD *)language + 23) + 32LL);
      if ( language )
      {
        if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
               (System_Collections_Generic_Dictionary_object__object__o *)language,
               (Il2CppObject *)key,
               &v37,
               (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
        {
          return (System_String_o *)v37;
        }
        else
        {
          return key;
        }
      }
    }
LABEL_84:
    sub_21FFECC(language, v7);
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
  UnityEngine_Debug__LogError((Il2CppObject *)StringLiteral_9854/*"No localization data present"*/, 0);
  return 0;
}


bool Localization__HasLanguage(System_String_o *languageName, const MethodInfo *method)
{
  Localization_c *v3; // x0
  struct System_String_array *mLanguages; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x22
  bool v8; // w23
  struct System_String_array *v9; // x8

  if ( (byte_593CDFD & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CDFD = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v3 = Localization_TypeInfo;
  }
  mLanguages = v3->static_fields->mLanguages;
  if ( !mLanguages )
    goto LABEL_17;
  max_length = mLanguages->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = (unsigned int)max_length;
    v8 = 1;
    while ( 1 )
    {
      v3 = Localization_TypeInfo;
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
        v3 = Localization_TypeInfo;
      }
      v9 = v3->static_fields->mLanguages;
      if ( !v9 )
        break;
      if ( v6 >= LODWORD(v9->max_length) )
        sub_21FFED4(v3);
      if ( !System_String__op_Equality(v9->m_Items[v6], languageName, 0) )
      {
        v8 = ++v6 < v7;
        if ( v7 != v6 )
          continue;
      }
      return v8;
    }
LABEL_17:
    sub_21FFECC(v3, method);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_Dictionary_string__string__o *Dictionary; // x20

  if ( (byte_593CDF9 & 1) == 0 )
  {
    sub_21FFC50(&ByteReader_TypeInfo);
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CDF9 = 1;
  }
  v3 = (ByteReader_o *)sub_21FFEBC(ByteReader_TypeInfo);
  ByteReader___ctor_56127824(v3, asset, v4);
  if ( !asset || (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)asset, 0), !v3) )
    sub_21FFECC(name, v6);
  v7 = name;
  Dictionary = ByteReader__ReadDictionary(v3, v6);
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v8);
  Localization__Set_56142184(v7, Dictionary, v9);
}


bool Localization__LoadAndSelect(System_String_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  Localization_c *v4; // x0
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0
  const MethodInfo *v6; // x1
  Localization_c *v7; // x0
  Localization_c *v9; // x0

  if ( (byte_593CDF8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    byte_593CDF8 = 1;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    v4 = Localization_TypeInfo;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v3);
      v4 = Localization_TypeInfo;
    }
    mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v4->static_fields->mDictionary;
    if ( !mDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_object__object___get_Count(
            mDictionary,
            (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__) )
    {
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v6);
      if ( !Localization__LoadDictionary(value, v6) )
        return 0;
    }
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v6);
    if ( Localization__SelectLanguage(value, v6) )
      return 1;
  }
  v7 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v3);
    v7 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_26;
  if ( System_Collections_Generic_Dictionary_object__object___get_Count(
         mDictionary,
         (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) > 0 )
    return 1;
  v9 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v3);
    v9 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v9->static_fields->mOldDictionary;
  if ( !mDictionary
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          mDictionary,
          (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__),
        (mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo->static_fields->mDictionary) == 0) )
  {
LABEL_26:
    sub_21FFECC(mDictionary, v3);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    mDictionary,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
  if ( System_String__IsNullOrEmpty(value, 0) )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_8691/*"Language"*/, 0);
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
  if ( (byte_593CDFB & 1) == 0 )
  {
    asset = (UnityEngine_TextAsset_o *)sub_21FFC50(&Localization_TypeInfo);
    byte_593CDFB = 1;
  }
  if ( !v4 )
    sub_21FFECC(asset, merge);
  bytes = UnityEngine_TextAsset__get_bytes(v4, 0);
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v5);
  return Localization__LoadCSV_56142720(bytes, v5, merge, v6);
}


// local variable allocation has failed, the output may be wrong!
bool Localization__LoadCSV_56141188(System_Byte_array *bytes, bool merge, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_593CDFC & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CDFC = 1;
  }
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, merge);
  return Localization__LoadCSV_56142720(bytes, (UnityEngine_TextAsset_o *)merge, merge, v3);
}


bool Localization__LoadCSV_56142720(
        System_Byte_array *bytes,
        UnityEngine_TextAsset_o *asset,
        bool merge,
        const MethodInfo *method)
{
  __int64 v6; // x24
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1
  void *CSV; // x0
  const MethodInfo *v15; // x1
  BetterList_T__o *v16; // x20
  __int64 v17; // x1
  Localization_c *v18; // x0
  bool IsNullOrEmpty; // w8
  struct Localization_StaticFields *static_fields; // x8
  struct System_String_array *mLanguages; // x8
  __int64 v22; // x0
  __int64 v23; // x21
  unsigned __int64 v24; // x22
  MissionNaviTransitionBoardItem_o *v25; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  signed __int64 size; // x8
  int32_t i; // w22
  const MethodInfo *v34; // x1
  Il2CppObject *Item; // x23
  Localization_c *v36; // x0
  struct Localization_StaticFields *v37; // x0
  struct System_String_array *v38; // x8
  struct System_String_array *v39; // t1
  il2cpp_array_size_t max_length; // x26
  struct System_String_array *v41; // x23
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  Il2CppClass *v48; // x1
  Il2CppClass **v49; // x0
  System_Collections_Generic_Dictionary_object__object__o *v50; // x23
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *v60; // x1
  MissionNaviTransitionBoardItem_o *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  Localization_c *v71; // x0
  struct Localization_StaticFields *v72; // x0
  __int64 v74; // x0
  struct Localization_StaticFields *v75; // x8
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x1
  Il2CppObject *v83; // x0
  System_String_o *String; // x0
  __int64 v85; // x1
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  Localization_c *v92; // x8
  System_String_o *v93; // x21
  struct Localization_StaticFields *v94; // x0
  unsigned __int64 v95; // x21
  __int64 v96; // x22
  Localization_c *v97; // x0
  struct System_String_array *v98; // x23
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  struct Localization_StaticFields *v105; // x8
  struct System_String_array *v106; // x9
  Localization_c *v107; // x0
  System_Collections_Generic_Dictionary_object__int__o *v108; // x20
  unsigned __int64 j; // x22
  struct System_String_array *v110; // x8
  BetterList_string__o *v111; // x0
  __int64 v112; // x1
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  BetterList_T__o *v119; // x22
  Il2CppObject *v120; // x0
  const MethodInfo *v121; // x1
  const MethodInfo *v122; // x3
  Localization_c *v123; // x0
  struct Localization_StaticFields *v124; // x8
  struct Localization_OnLocalizeNotification_o *onLocalize; // x19
  struct Localization_StaticFields *v126; // x0
  System_String_o *v127; // x2
  System_String_o *v128; // x3
  int32_t v129; // w4
  int32_t v130; // w5
  bool v131; // w6
  bool v132; // w7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v133; // [xsp+10h] [xbp-C0h] BYREF
  System_Object_array *array; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v135; // [xsp+40h] [xbp-90h] BYREF

  if ( (byte_593CDFE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Resize_string___);
    sub_21FFC50(&Method_BetterList_string__RemoveAt__);
    sub_21FFC50(&Method_BetterList_string__get_Item__);
    sub_21FFC50(&ByteReader_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__string____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__string____get_Value__);
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    byte_593CDFE = 1;
  }
  array = 0;
  memset(&v135, 0, sizeof(v135));
  if ( !bytes )
    return 0;
  v6 = sub_21FFEBC(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = bytes;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)bytes, v7, v8, v9, v10, v11, v12);
  CSV = ByteReader__ReadCSV((ByteReader_o *)v6, v13);
  if ( !CSV )
    goto LABEL_107;
  v16 = (BetterList_T__o *)CSV;
  if ( *((int *)CSV + 6) < 2 )
    return 0;
  BetterList_object___RemoveAt(
    (BetterList_T__o *)CSV,
    0,
    (const MethodInfo_3E3C66C *)Method_BetterList_string__RemoveAt__);
  v18 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v17);
    v18 = Localization_TypeInfo;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v18->static_fields->mLanguage, 0);
  CSV = Localization_TypeInfo;
  if ( IsNullOrEmpty )
  {
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v15);
      CSV = Localization_TypeInfo;
    }
    *(_BYTE *)(*((_QWORD *)CSV + 23) + 16LL) = 0;
  }
  if ( !*((_DWORD *)CSV + 57) )
  {
    j_il2cpp_runtime_class_init_0(CSV, v15);
    CSV = Localization_TypeInfo;
  }
  static_fields = (struct Localization_StaticFields *)*((_QWORD *)CSV + 23);
  if ( !static_fields->localizationHasBeenSet )
    goto LABEL_111;
  if ( !merge )
  {
    if ( !*((_DWORD *)CSV + 57) )
    {
      j_il2cpp_runtime_class_init_0(CSV, v15);
      CSV = Localization_TypeInfo;
      static_fields = Localization_TypeInfo->static_fields;
    }
    if ( !static_fields->mMerging )
      goto LABEL_111;
  }
  if ( !*((_DWORD *)CSV + 57) )
  {
    j_il2cpp_runtime_class_init_0(CSV, v15);
    CSV = Localization_TypeInfo;
  }
  mLanguages = *(struct System_String_array **)(*((_QWORD *)CSV + 23) + 24LL);
  if ( !mLanguages )
    goto LABEL_111;
  if ( !*((_DWORD *)CSV + 57) )
  {
    j_il2cpp_runtime_class_init_0(CSV, v15);
    CSV = Localization_TypeInfo;
    mLanguages = Localization_TypeInfo->static_fields->mLanguages;
    if ( !mLanguages )
      goto LABEL_107;
  }
  if ( mLanguages->max_length )
  {
    v22 = sub_21FFD10(string___TypeInfo, (unsigned int)v16->fields.size);
    v23 = v22;
    if ( v16->fields.size >= 1 )
    {
      v24 = 0;
      v25 = (MissionNaviTransitionBoardItem_o *)(v22 + 32);
      do
      {
        CSV = BetterList_object___get_Item(v16, v24, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
        if ( !v23 )
          goto LABEL_107;
        if ( v24 >= *(unsigned int *)(v23 + 24) )
          goto LABEL_108;
        v25->klass = (MissionNaviTransitionBoardItem_c *)CSV;
        sub_21FFBF4(v25, (int32_t)CSV, v26, v27, v28, v29, v30, v31);
        size = v16->fields.size;
        ++v24;
        v25 = (MissionNaviTransitionBoardItem_o *)((char *)v25 + 8);
      }
      while ( (__int64)v24 < size );
      if ( (int)size >= 1 )
      {
        for ( i = 0; i < v16->fields.size; ++i )
        {
          Item = BetterList_object___get_Item(v16, i, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
          if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v34);
          if ( !Localization__HasLanguage((System_String_o *)Item, v34) )
          {
            v36 = Localization_TypeInfo;
            if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v15);
              v36 = Localization_TypeInfo;
            }
            v37 = v36->static_fields;
            v39 = v37->mLanguages;
            CSV = &v37->mLanguages;
            v38 = v39;
            if ( !v39 )
              goto LABEL_107;
            max_length = v38->max_length;
            System_Array__Resize_object_(
              (System_Object_array **)CSV,
              max_length + 1,
              (const MethodInfo_3775044 *)Method_System_Array_Resize_string___);
            v41 = Localization_TypeInfo->static_fields->mLanguages;
            CSV = BetterList_object___get_Item(v16, i, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
            if ( !v41 )
              goto LABEL_107;
            if ( (unsigned int)max_length >= LODWORD(v41->max_length) )
              goto LABEL_108;
            v48 = (Il2CppClass *)CSV;
            v49 = &v41->obj.klass + (int)max_length;
            v49[4] = v48;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v48, v42, v43, v44, v45, v46, v47);
            v50 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__string____TypeInfo);
            System_Collections_Generic_Dictionary_object__object____ctor(
              v50,
              (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__string_____ctor__);
            CSV = Localization_TypeInfo->static_fields->mDictionary;
            if ( !CSV )
              goto LABEL_107;
            System_Collections_Generic_Dictionary_object__object___GetEnumerator(
              &v133,
              (System_Collections_Generic_Dictionary_object__object__o *)CSV,
              (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator__);
            v135 = v133;
            v133.fields._dictionary = 0;
            *(_QWORD *)&v133.fields._version = &v135;
            while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                      &v135,
                      (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext__) )
            {
              current = v135.fields._current;
              array = (System_Object_array *)v135.fields._current.fields.value;
              System_Array__Resize_object_(
                &array,
                max_length + 1,
                (const MethodInfo_3775044 *)Method_System_Array_Resize_string___);
              if ( !array )
                sub_21FFECC(v52, v53);
              if ( (unsigned int)max_length >= LODWORD(array->max_length) )
                sub_21FFED4(v52);
              v60 = array->m_Items[0];
              v61 = (MissionNaviTransitionBoardItem_o *)&array->m_Items[(int)max_length];
              v61->klass = (MissionNaviTransitionBoardItem_c *)v60;
              sub_21FFBF4(v61, (int32_t)v60, v54, v55, v56, v57, v58, v59);
              if ( !v50 )
                sub_21FFECC(v62, v63);
              System_Collections_Generic_Dictionary_object__object___Add(
                v50,
                current.fields.key,
                &array->obj,
                (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__string____Add__);
            }
            System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
              &v135,
              (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose__);
            v71 = Localization_TypeInfo;
            if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v64);
              v71 = Localization_TypeInfo;
            }
            v72 = v71->static_fields;
            v72->mDictionary = (struct System_Collections_Generic_Dictionary_string__string____o *)v50;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v72->mDictionary,
              (int32_t)v50,
              v65,
              v66,
              v67,
              v68,
              v69,
              v70);
          }
        }
      }
    }
  }
  else
  {
LABEL_111:
    if ( !*((_DWORD *)CSV + 57) )
    {
      j_il2cpp_runtime_class_init_0(CSV, v15);
      CSV = Localization_TypeInfo;
    }
    CSV = *(void **)(*((_QWORD *)CSV + 23) + 40LL);
    if ( !CSV )
      goto LABEL_107;
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)CSV,
      (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__string____Clear__);
    v74 = sub_21FFD10(string___TypeInfo, (unsigned int)v16->fields.size);
    v75 = Localization_TypeInfo->static_fields;
    v75->mLanguages = (struct System_String_array *)v74;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v75->mLanguages, v74, v76, v77, v78, v79, v80, v81);
    if ( !Localization_TypeInfo->static_fields->localizationHasBeenSet )
    {
      v83 = BetterList_object___get_Item(v16, 0, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
      String = UnityEngine_PlayerPrefs__GetString((System_String_o *)StringLiteral_8691/*"Language"*/, (System_String_o *)v83, 0);
      v92 = Localization_TypeInfo;
      v93 = String;
      if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v85);
        v92 = Localization_TypeInfo;
      }
      v94 = v92->static_fields;
      v94->mLanguage = v93;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v94->mLanguage, (int32_t)v93, v86, v87, v88, v89, v90, v91);
      Localization_TypeInfo->static_fields->localizationHasBeenSet = 1;
    }
    if ( v16->fields.size >= 1 )
    {
      v95 = 0;
      v96 = 32;
      do
      {
        v97 = Localization_TypeInfo;
        if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v82);
          v97 = Localization_TypeInfo;
        }
        v98 = v97->static_fields->mLanguages;
        CSV = BetterList_object___get_Item(v16, v95, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
        if ( !v98 )
          goto LABEL_107;
        if ( v95 >= LODWORD(v98->max_length) )
          goto LABEL_108;
        *(Il2CppClass **)((char *)&v98->obj.klass + v96) = (Il2CppClass *)CSV;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)((char *)v98 + v96),
          (int32_t)CSV,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
        v105 = Localization_TypeInfo->static_fields;
        v106 = v105->mLanguages;
        if ( !v106 )
          goto LABEL_107;
        if ( v95 >= LODWORD(v106->max_length) )
LABEL_108:
          sub_21FFED4(CSV);
        if ( System_String__op_Equality(*(System_String_o **)((char *)&v106->obj.klass + v96), v105->mLanguage, 0) )
        {
          v107 = Localization_TypeInfo;
          if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v82);
            v107 = Localization_TypeInfo;
          }
          v107->static_fields->mLanguageIndex = v95;
        }
        ++v95;
        v96 += 8;
      }
      while ( (__int64)v95 < v16->fields.size );
    }
    v23 = 0;
  }
  v108 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v108,
    (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  for ( j = 0; ; ++j )
  {
    CSV = Localization_TypeInfo;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v15);
      CSV = Localization_TypeInfo;
    }
    v110 = *(struct System_String_array **)(*((_QWORD *)CSV + 23) + 24LL);
    if ( !v110 )
      goto LABEL_107;
    if ( (__int64)j >= SLODWORD(v110->max_length) )
      break;
    if ( !*((_DWORD *)CSV + 57) )
    {
      j_il2cpp_runtime_class_init_0(CSV, v15);
      v110 = Localization_TypeInfo->static_fields->mLanguages;
      if ( !v110 )
        goto LABEL_107;
    }
    if ( j >= LODWORD(v110->max_length) )
      goto LABEL_108;
    if ( !v108 )
      goto LABEL_107;
    System_Collections_Generic_Dictionary_object__int___Add(
      v108,
      (Il2CppObject *)v110->m_Items[j],
      j,
      (const MethodInfo_3FC08F4 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  }
  v111 = ByteReader__ReadCSV((ByteReader_o *)v6, v15);
  if ( v111 )
  {
    v119 = (BetterList_T__o *)v111;
    do
    {
      if ( !v119->fields.size )
        break;
      v120 = BetterList_object___get_Item(v119, 0, (const MethodInfo_3E3C040 *)Method_BetterList_string__get_Item__);
      if ( !System_String__IsNullOrEmpty((System_String_o *)v120, 0) )
      {
        if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v121);
        Localization__AddCSV(
          (BetterList_string__o *)v119,
          (System_String_array *)v23,
          (System_Collections_Generic_Dictionary_string__int__o *)v108,
          v122);
      }
      v119 = (BetterList_T__o *)ByteReader__ReadCSV((ByteReader_o *)v6, v121);
    }
    while ( v119 );
  }
  v123 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v112);
    v123 = Localization_TypeInfo;
  }
  v124 = v123->static_fields;
  if ( v124->mMerging )
    return 1;
  if ( !*(&v123->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v123, v112);
    v123 = Localization_TypeInfo;
    v124 = Localization_TypeInfo->static_fields;
  }
  onLocalize = v124->onLocalize;
  if ( !onLocalize )
    return 1;
  if ( !*(&v123->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v123, v112);
    v124 = Localization_TypeInfo->static_fields;
    onLocalize = v124->onLocalize;
  }
  v124->onLocalize = 0;
  v124->mMerging = 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v124->onLocalize, 0, v113, v114, v115, v116, v117, v118);
  if ( !onLocalize )
LABEL_107:
    sub_21FFECC(CSV, v15);
  ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
    onLocalize->fields.method_code,
    onLocalize->fields.method);
  v126 = Localization_TypeInfo->static_fields;
  v126->onLocalize = onLocalize;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v126->onLocalize,
    (int32_t)onLocalize,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  Localization_TypeInfo->static_fields->mMerging = 0;
  return 1;
}


bool Localization__LoadDictionary(System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Localization_c *v4; // x0
  struct Localization_StaticFields *static_fields; // x8
  System_Byte_array *v6; // x20
  struct Localization_LoadFunction_o *loadFunction; // x8
  _BOOL8 v8; // x0
  System_Byte_array *bytes; // x0
  __int64 v10; // x1
  Il2CppObject *object; // x21
  __int64 v12; // x1
  Localization_c *v13; // x0
  __int64 v14; // x1
  Localization_c *v15; // x0
  struct Localization_LoadFunction_o *v16; // x8
  System_Byte_array *v17; // x0
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  Il2CppObject *v20; // x21

  if ( (byte_593CDF7 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_TextAsset___);
    sub_21FFC50(&StringLiteral_8833/*"Localization"*/);
    byte_593CDF7 = 1;
  }
  v4 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v4 = Localization_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->localizationHasBeenSet )
  {
    v6 = 0;
    goto LABEL_22;
  }
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, method);
    v4 = Localization_TypeInfo;
    static_fields = Localization_TypeInfo->static_fields;
  }
  loadFunction = static_fields->loadFunction;
  if ( loadFunction )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      loadFunction = Localization_TypeInfo->static_fields->loadFunction;
      if ( !loadFunction )
        goto LABEL_48;
    }
    bytes = (System_Byte_array *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))loadFunction->fields.invoke_impl)(
                                   loadFunction->fields.method_code,
                                   StringLiteral_8833/*"Localization"*/,
                                   loadFunction->fields.method);
  }
  else
  {
    object = UnityEngine_Resources__Load_object_(
               (System_String_o *)StringLiteral_8833/*"Localization"*/,
               (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_TextAsset___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)object, 0, 0);
    v6 = 0;
    if ( !v8 )
      goto LABEL_19;
    if ( !object )
      goto LABEL_48;
    bytes = UnityEngine_TextAsset__get_bytes((UnityEngine_TextAsset_o *)object, 0);
  }
  v6 = bytes;
LABEL_19:
  v4 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v4 = Localization_TypeInfo;
  }
  v4->static_fields->localizationHasBeenSet = 1;
LABEL_22:
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method);
  if ( Localization__LoadCSV_56141188(v6, 0, v2) )
    return 1;
  if ( System_String__IsNullOrEmpty(value, 0) )
  {
    v13 = Localization_TypeInfo;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v12);
      v13 = Localization_TypeInfo;
    }
    value = v13->static_fields->mLanguage;
  }
  if ( !System_String__IsNullOrEmpty(value, 0) )
  {
    v15 = Localization_TypeInfo;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v14);
      v15 = Localization_TypeInfo;
    }
    v16 = v15->static_fields->loadFunction;
    if ( v16 )
    {
      if ( *(&v15->_2.cctor_finished + 1)
        || (j_il2cpp_runtime_class_init_0(v15, v14), (v16 = Localization_TypeInfo->static_fields->loadFunction) != 0) )
      {
        v17 = (System_Byte_array *)((__int64 (__fastcall *)(intptr_t, System_String_o *, intptr_t))v16->fields.invoke_impl)(
                                     v16->fields.method_code,
                                     value,
                                     v16->fields.method);
LABEL_41:
        v6 = v17;
        goto LABEL_42;
      }
    }
    else
    {
      v20 = UnityEngine_Resources__Load_object_(
              value,
              (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_TextAsset___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
      if ( !v8 )
      {
LABEL_42:
        if ( v6 )
        {
          if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
          Localization__Set(value, v6, v18);
          return 1;
        }
        return 0;
      }
      if ( v20 )
      {
        v17 = UnityEngine_TextAsset__get_bytes((UnityEngine_TextAsset_o *)v20, 0);
        goto LABEL_41;
      }
    }
LABEL_48:
    sub_21FFECC(v8, method);
  }
  return 0;
}


System_String_o *Localization__Localize(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_593CE06 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CE06 = 1;
  }
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
  return Localization__Get(key, method);
}


bool Localization__SelectLanguage(System_String_o *language, const MethodInfo *method)
{
  Localization_c *v3; // x0
  struct Localization_StaticFields *static_fields; // x8
  System_Collections_Generic_Dictionary_object__object__o *mDictionary; // x0
  int32_t Count; // w0
  il2cpp_array_size_t max_length; // x8
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  __int64 v10; // x22
  il2cpp_array_size_t v11; // x8
  Localization_c *v12; // x0
  MissionNaviTransitionBoardItem_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  struct Localization_OnLocalizeNotification_o *onLocalize; // x8

  if ( (byte_593CE01 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&UIRoot_TypeInfo);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    sub_21FFC50(&StringLiteral_10309/*"OnLocalize"*/);
    byte_593CE01 = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v3 = Localization_TypeInfo;
  }
  static_fields = v3->static_fields;
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)static_fields->mDictionary;
  static_fields->mLanguageIndex = -1;
  if ( !mDictionary )
    goto LABEL_30;
  Count = System_Collections_Generic_Dictionary_object__object___get_Count(
            mDictionary,
            (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__string____get_Count__);
  if ( !Count )
    return Count;
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo;
  }
  max_length = mDictionary[2].fields._entries->max_length;
  if ( !max_length )
    goto LABEL_30;
  v8 = *(_QWORD *)(max_length + 24);
  if ( (int)v8 < 1 )
  {
LABEL_18:
    LOBYTE(Count) = 0;
    return Count;
  }
  v9 = 0;
  v10 = (unsigned int)v8;
  while ( 1 )
  {
    mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
      mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)Localization_TypeInfo;
    }
    v11 = mDictionary[2].fields._entries->max_length;
    if ( !v11 )
      goto LABEL_30;
    if ( v9 >= *(unsigned int *)(v11 + 24) )
      sub_21FFED4(mDictionary);
    if ( System_String__op_Equality(*(System_String_o **)(v11 + 8 * v9 + 32), language, 0) )
      break;
    if ( v10 == ++v9 )
      goto LABEL_18;
  }
  v12 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v12 = Localization_TypeInfo;
  }
  mDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v12->static_fields->mOldDictionary;
  if ( !mDictionary )
    goto LABEL_30;
  System_Collections_Generic_Dictionary_object__object___Clear(
    mDictionary,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__string__Clear__);
  v13 = (MissionNaviTransitionBoardItem_o *)Localization_TypeInfo->static_fields;
  v13->fields.sortStr1 = language;
  v13 = (MissionNaviTransitionBoardItem_o *)((char *)v13 + 56);
  v13[-1].fields._BoardType_k__BackingField = v9;
  sub_21FFBF4(v13, (int32_t)language, v14, v15, v16, v17, v18, v19);
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_8691/*"Language"*/,
    Localization_TypeInfo->static_fields->mLanguage,
    0);
  onLocalize = Localization_TypeInfo->static_fields->onLocalize;
  if ( onLocalize )
  {
    if ( *(&Localization_TypeInfo->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v20),
          (onLocalize = Localization_TypeInfo->static_fields->onLocalize) != 0) )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
        onLocalize->fields.method_code,
        onLocalize->fields.method);
      goto LABEL_26;
    }
LABEL_30:
    sub_21FFECC(mDictionary, method);
  }
LABEL_26:
  if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, v20);
  UIRoot__Broadcast((System_String_o *)StringLiteral_10309/*"OnLocalize"*/, 0);
  LOBYTE(Count) = 1;
  return Count;
}


void Localization__Set(System_String_o *languageName, System_Byte_array *bytes, const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_Dictionary_string__string__o *Dictionary; // x20

  if ( (byte_593CDFA & 1) == 0 )
  {
    sub_21FFC50(&ByteReader_TypeInfo);
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CDFA = 1;
  }
  v5 = sub_21FFEBC(ByteReader_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_QWORD *)(v5 + 16) = bytes;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)bytes, v6, v7, v8, v9, v10, v11);
  Dictionary = ByteReader__ReadDictionary((ByteReader_o *)v5, v12);
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v13);
  Localization__Set_56142184(languageName, Dictionary, v14);
}


void Localization__Set_56142184(
        System_String_o *languageName,
        System_Collections_Generic_Dictionary_string__string__o *dictionary,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Localization_c *v10; // x0
  struct Localization_StaticFields *static_fields; // x0
  struct Localization_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppClass *v19; // x0
  struct Localization_StaticFields *v20; // x8
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_String_array *v29; // x20
  struct Localization_StaticFields *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  struct Localization_OnLocalizeNotification_o *onLocalize; // x8

  if ( (byte_593CE02 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&UIRoot_TypeInfo);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    sub_21FFC50(&StringLiteral_10309/*"OnLocalize"*/);
    byte_593CE02 = 1;
  }
  v10 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, dictionary);
    v10 = Localization_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->mLanguage = languageName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->mLanguage,
    (int32_t)languageName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_8691/*"Language"*/,
    Localization_TypeInfo->static_fields->mLanguage,
    0);
  v12 = Localization_TypeInfo->static_fields;
  v12->mOldDictionary = dictionary;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->mOldDictionary,
    (int32_t)dictionary,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = string___TypeInfo;
  v20 = Localization_TypeInfo->static_fields;
  v20->localizationHasBeenSet = 1;
  v20->mLanguageIndex = -1;
  v21 = sub_21FFD10(v19, 1);
  if ( !v21 )
    goto LABEL_14;
  v29 = (struct System_String_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    sub_21FFED4(v21);
  *(_QWORD *)(v21 + 32) = languageName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 32), (int32_t)languageName, v23, v24, v25, v26, v27, v28);
  v30 = Localization_TypeInfo->static_fields;
  v30->mLanguages = v29;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30->mLanguages, (int32_t)v29, v31, v32, v33, v34, v35, v36);
  onLocalize = Localization_TypeInfo->static_fields->onLocalize;
  if ( onLocalize )
  {
    if ( *(&Localization_TypeInfo->_2.cctor_finished + 1)
      || (j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v37),
          (onLocalize = Localization_TypeInfo->static_fields->onLocalize) != 0) )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onLocalize->fields.invoke_impl)(
        onLocalize->fields.method_code,
        onLocalize->fields.method);
      goto LABEL_11;
    }
LABEL_14:
    sub_21FFECC(v21, v22);
  }
LABEL_11:
  if ( !*(&UIRoot_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIRoot_TypeInfo, v37);
  UIRoot__Broadcast((System_String_o *)StringLiteral_10309/*"OnLocalize"*/, 0);
}


void Localization__Set_56146632(System_String_o *key, System_String_o *value, const MethodInfo *method)
{
  Localization_c *v5; // x0
  System_Collections_Generic_Dictionary_object__object__o *mOldDictionary; // x0
  bool v7; // w8
  Localization_c *v8; // x0
  int v9; // w9

  if ( (byte_593CE03 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CE03 = 1;
  }
  v5 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, value);
    v5 = Localization_TypeInfo;
  }
  mOldDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v5->static_fields->mOldDictionary;
  if ( !mOldDictionary )
    goto LABEL_15;
  v7 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         mOldDictionary,
         (Il2CppObject *)key,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__string__ContainsKey__);
  v8 = Localization_TypeInfo;
  v9 = *(&Localization_TypeInfo->_2.cctor_finished + 1);
  if ( v7 )
  {
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, value);
      v8 = Localization_TypeInfo;
    }
    mOldDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->mOldDictionary;
    if ( mOldDictionary )
    {
      System_Collections_Generic_Dictionary_object__object___set_Item(
        mOldDictionary,
        (Il2CppObject *)key,
        (Il2CppObject *)value,
        (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
      return;
    }
LABEL_15:
    sub_21FFECC(mOldDictionary, value);
  }
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, value);
    v8 = Localization_TypeInfo;
  }
  mOldDictionary = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->mOldDictionary;
  if ( !mOldDictionary )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_object__object___Add(
    mOldDictionary,
    (Il2CppObject *)key,
    (Il2CppObject *)value,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
}


System_Collections_Generic_Dictionary_string__string____o *Localization__get_dictionary(const MethodInfo *method)
{
  __int64 v1; // x1
  Localization_c *v2; // x0
  const MethodInfo *v3; // x1
  System_String_o *String; // x19

  if ( (byte_593CDF2 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    sub_21FFC50(&StringLiteral_6298/*"English"*/);
    byte_593CDF2 = 1;
  }
  v2 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v1);
    v2 = Localization_TypeInfo;
  }
  if ( !v2->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8691/*"Language"*/,
               (System_String_o *)StringLiteral_6298/*"English"*/,
               0);
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v3);
    Localization__LoadDictionary(String, v3);
    v2 = Localization_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = Localization_TypeInfo;
  }
  return v2->static_fields->mDictionary;
}


bool Localization__get_isActive(const MethodInfo *method)
{
  return 1;
}


System_String_array *Localization__get_knownLanguages(const MethodInfo *method)
{
  __int64 v1; // x1
  Localization_c *v2; // x0
  const MethodInfo *v3; // x1
  System_String_o *String; // x19

  if ( (byte_593CDF4 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    sub_21FFC50(&StringLiteral_6298/*"English"*/);
    byte_593CDF4 = 1;
  }
  v2 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v1);
    v2 = Localization_TypeInfo;
  }
  if ( !v2->static_fields->localizationHasBeenSet )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_8691/*"Language"*/,
               (System_String_o *)StringLiteral_6298/*"English"*/,
               0);
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v3);
    Localization__LoadDictionary(String, v3);
    v2 = Localization_TypeInfo;
  }
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = Localization_TypeInfo;
  }
  return v2->static_fields->mLanguages;
}


System_String_o *Localization__get_language(const MethodInfo *method)
{
  __int64 v1; // x1
  Localization_c *v2; // x0
  __int64 v3; // x1
  Localization_c *v4; // x0
  struct Localization_StaticFields *static_fields; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x1
  System_String_o *String; // x0
  struct Localization_StaticFields *v9; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  Localization_c *v17; // x0

  if ( (byte_593CDF5 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&StringLiteral_8691/*"Language"*/);
    sub_21FFC50(&StringLiteral_6298/*"English"*/);
    byte_593CDF5 = 1;
  }
  v2 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v1);
    v2 = Localization_TypeInfo;
  }
  if ( System_String__IsNullOrEmpty(v2->static_fields->mLanguage, 0) )
  {
    v4 = Localization_TypeInfo;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v3);
      v4 = Localization_TypeInfo;
    }
    static_fields = v4->static_fields;
    v6 = (System_String_o *)StringLiteral_8691/*"Language"*/;
    v7 = (System_String_o *)StringLiteral_6298/*"English"*/;
    static_fields->localizationHasBeenSet = 1;
    String = UnityEngine_PlayerPrefs__GetString(v6, v7, 0);
    v9 = Localization_TypeInfo->static_fields;
    v9->mLanguage = String;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->mLanguage, (int32_t)String, v10, v11, v12, v13, v14, v15);
    Localization__LoadAndSelect(Localization_TypeInfo->static_fields->mLanguage, v16);
  }
  v17 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v3);
    v17 = Localization_TypeInfo;
  }
  return v17->static_fields->mLanguage;
}


void Localization__set_dictionary(
        System_Collections_Generic_Dictionary_string__string____o *value,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Localization_c *v9; // x0
  MissionNaviTransitionBoardItem_o *static_fields; // x0

  if ( (byte_593CDF3 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CDF3 = 1;
  }
  v9 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v9 = Localization_TypeInfo;
  }
  static_fields = (MissionNaviTransitionBoardItem_o *)v9->static_fields;
  static_fields->fields.sortValue0B = (int64_t)value;
  static_fields = (MissionNaviTransitionBoardItem_o *)((char *)static_fields + 40);
  LOBYTE(static_fields[-1].fields._ClosedMessage_k__BackingField) = value != 0;
  sub_21FFBF4(static_fields, (int32_t)value, v2, v3, v4, v5, v6, v7);
}


void Localization__set_language(System_String_o *value, const MethodInfo *method)
{
  Localization_c *v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Localization_c *v11; // x0
  struct Localization_StaticFields *static_fields; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593CDF6 & 1) == 0 )
  {
    sub_21FFC50(&Localization_TypeInfo);
    byte_593CDF6 = 1;
  }
  v3 = Localization_TypeInfo;
  if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Localization_TypeInfo, method);
    v3 = Localization_TypeInfo;
  }
  if ( System_String__op_Inequality(v3->static_fields->mLanguage, value, 0) )
  {
    v11 = Localization_TypeInfo;
    if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v4);
      v11 = Localization_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->mLanguage = value;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->mLanguage, (int32_t)value, v5, v6, v7, v8, v9, v10);
    Localization__LoadAndSelect(value, v13);
  }
}


void Localization_LoadFunction___ctor(
        Localization_LoadFunction_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2003F00;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2003EE4;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)&loc_2003E94;
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
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


System_Byte_array *Localization_LoadFunction__EndInvoke(
        Localization_LoadFunction_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  return (System_Byte_array *)sub_21FFC08(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2003FE4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2003FA4;
}


System_IAsyncResult_o *Localization_OnLocalizeNotification__BeginInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void Localization_OnLocalizeNotification__EndInvoke(
        Localization_OnLocalizeNotification_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void Localization_OnLocalizeNotification__Invoke(Localization_OnLocalizeNotification_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}