void __fastcall EventRaidDefeatedEffectInfo___ctor(
        EventRaidDefeatedEffectInfo_o *this,
        System_String_o *strInfo,
        const MethodInfo *method)
{
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
  __int64 v17; // x3
  System_Collections_Generic_Dictionary_int__object__o *v18; // x21
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_o *IsNullOrEmpty; // x0
  __int64 v27; // x1
  int klass; // w8
  System_String_o *v29; // x20
  int i; // w23
  System_String_array *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_int__o *v35; // x21
  System_String_c *v36; // x8
  System_String_o *v37; // x22
  unsigned __int64 v38; // x28
  System_String_o *v39; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B13672 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, strInfo, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    byte_4B13672 = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v18 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                  v15,
                                                                  v16,
                                                                  v17);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v18,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v18;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  sub_1BCA784(p_fields, (int64_t)v18, v20, v21, v22, v23, v24, v25);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0LL)) == 0LL )
LABEL_32:
    sub_1BCAA3C(IsNullOrEmpty, v27);
  klass = (int)IsNullOrEmpty[1].klass;
  v29 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v29[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v31 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0LL);
      result[1] = 0;
      v35 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v32,
                                                        v33,
                                                        v34);
      System_Collections_Generic_List_int____ctor(
        v35,
        (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v31 )
        goto LABEL_32;
      if ( !v31->max_length )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v31->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v31->max_length <= 1 )
          goto LABEL_31;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v31->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v31->max_length <= 1 )
            goto LABEL_31;
          IsNullOrEmpty = v31->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          v36 = IsNullOrEmpty[1].klass;
          v37 = IsNullOrEmpty;
          if ( (int)v36 >= 1 )
          {
            v38 = 0LL;
            while ( v38 < (unsigned int)v36 )
            {
              v39 = (System_String_o *)*((_QWORD *)&v37[1].monitor + v38);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v39, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v35 )
                  goto LABEL_32;
                v27 = (unsigned int)result[0];
                items = v35->fields._items;
                v41 = Method_System_Collections_Generic_List_int__Add__;
                ++v35->fields._version;
                if ( !items )
                  goto LABEL_32;
                size = v35->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v35,
                    v27,
                    *(const MethodInfo_3584C38 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                }
                else
                {
                  v35->fields._size = size + 1;
                  items->m_Items[size + 1] = v27;
                }
              }
              LODWORD(v36) = v37[1].klass;
              if ( (__int64)++v38 >= (int)v36 )
                goto LABEL_27;
            }
LABEL_31:
            sub_1BCAA44(IsNullOrEmpty, v27);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v35,
          (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v29[1].klass;
    }
  }
}


System_String_o *__fastcall EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  System_Text_StringBuilder_o *v31; // x19
  __int64 v32; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  Il2CppObject *value; // x20
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v38; // x1
  char v39; // w20
  System_String_o *v40; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v43; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+60h] [xbp-90h] BYREF
  __int64 v45; // [xsp+98h] [xbp-58h] BYREF

  if ( (byte_4B13673 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1576/*";"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v29, v30);
    byte_4B13673 = 1;
  }
  v45 = 0LL;
  memset(&v44, 0, sizeof(v44));
  memset(&v43, 0, sizeof(v43));
  v31 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, method, v2, v3);
  System_Text_StringBuilder___ctor(v31, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v44 = v42;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v44,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    value = v44.fields._current.fields.value;
    HIDWORD(v45) = v44.fields._current.fields.key;
    v35 = System_Int32__ToString((int32_t)&v45 + 4, 0LL);
    v36 = System_String__Concat_62401220(v35, (System_String_o *)StringLiteral_1541/*":"*/, 0LL);
    if ( !v31 )
      sub_1BCAA3C(v36, v36);
    appended = System_Text_StringBuilder__Append_61563116(v31, v36, 0LL);
    if ( !value )
      sub_1BCAA3C(appended, v38);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_int__o *)value,
      (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v39 = 0;
    *(_OWORD *)&v43.fields._list = *(_OWORD *)&v42.fields._dictionary;
    *(_QWORD *)&v43.fields._current = v42.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v43,
              (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      LODWORD(v45) = v43.fields._current;
      if ( (v39 & 1) != 0 )
        System_Text_StringBuilder__Append_61563116(v31, (System_String_o *)StringLiteral_863/*","*/, 0LL);
      v40 = System_Int32__ToString((int32_t)&v45, 0LL);
      v39 = 1;
      System_Text_StringBuilder__Append_61563116(v31, v40, 0LL);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v43,
      (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_61563116(v31, (System_String_o *)StringLiteral_1576/*";"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v44,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v31 )
LABEL_18:
    sub_1BCAA3C(playedEffectList, v32);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v31->klass->vtable._3_ToString.method)(
                              v31,
                              v31->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}