void __fastcall EventRaidDefeatedEffectInfo___ctor(
        EventRaidDefeatedEffectInfo_o *this,
        System_String_o *strInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__object__o *v10; // x21
  CGThumbnailListItem_o *p_fields; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int klass; // w8
  System_String_o *v18; // x20
  int i; // w23
  System_String_array *v20; // x22
  System_Collections_Generic_List_int__o *v21; // x21
  System_String_c *v22; // x8
  System_String_o *v23; // x22
  unsigned __int64 v24; // x28
  System_String_o *v25; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B41DBB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, strInfo);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4B41DBB = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v10;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  sub_1BDB81C(p_fields, (int32_t)v10, v12, v13);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0LL)) == 0LL )
LABEL_32:
    sub_1BDBAD4(IsNullOrEmpty, v15);
  klass = (int)IsNullOrEmpty[1].klass;
  v18 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v18[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v20 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0LL);
      result[1] = 0;
      v21 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v21,
        (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v20 )
        goto LABEL_32;
      if ( !v20->max_length )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v20->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v20->max_length <= 1 )
          goto LABEL_31;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v20->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v20->max_length <= 1 )
            goto LABEL_31;
          IsNullOrEmpty = v20->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          v22 = IsNullOrEmpty[1].klass;
          v23 = IsNullOrEmpty;
          if ( (int)v22 >= 1 )
          {
            v24 = 0LL;
            while ( v24 < (unsigned int)v22 )
            {
              v25 = (System_String_o *)*((_QWORD *)&v23[1].monitor + v24);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v25, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v21 )
                  goto LABEL_32;
                v15 = (unsigned int)result[0];
                items = v21->fields._items;
                v27 = Method_System_Collections_Generic_List_int__Add__;
                ++v21->fields._version;
                if ( !items )
                  goto LABEL_32;
                size = v21->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v21,
                    v15,
                    *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                }
                else
                {
                  v21->fields._size = size + 1;
                  items->m_Items[size + 1] = v15;
                }
              }
              LODWORD(v22) = v23[1].klass;
              if ( (__int64)++v24 >= (int)v22 )
                goto LABEL_27;
            }
LABEL_31:
            sub_1BDBADC(IsNullOrEmpty, v15, v16);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v21,
          (const MethodInfo_333B320 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v18[1].klass;
    }
  }
}


System_String_o *__fastcall EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Text_StringBuilder_o *v16; // x19
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  Il2CppObject *value; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v23; // x1
  char v24; // w20
  System_String_o *v25; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v27; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v28; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+60h] [xbp-90h] BYREF
  __int64 v30; // [xsp+98h] [xbp-58h] BYREF

  if ( (byte_4B41DBC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_1479/*":"*/, v13);
    sub_1BDB878(&StringLiteral_1514/*";"*/, v14);
    sub_1BDB878(&StringLiteral_820/*","*/, v15);
    byte_4B41DBC = 1;
  }
  v30 = 0LL;
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  v16 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_333B758 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v29 = v27;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v29,
            (const MethodInfo_348DA98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    value = v29.fields._current.fields.value;
    HIDWORD(v30) = v29.fields._current.fields.key;
    v20 = System_Int32__ToString((int32_t)&v30 + 4, 0LL);
    v21 = System_String__Concat_62572260(v20, (System_String_o *)StringLiteral_1479/*":"*/, 0LL);
    if ( !v16 )
      sub_1BDBAD4(v21, v21);
    appended = System_Text_StringBuilder__Append_62657444(v16, v21, 0LL);
    if ( !value )
      sub_1BDBAD4(appended, v23);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_int__o *)value,
      (const MethodInfo_36B9874 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v24 = 0;
    *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields._dictionary;
    *(_QWORD *)&v28.fields._current = v27.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v28,
              (const MethodInfo_34661D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      LODWORD(v30) = v28.fields._current;
      if ( (v24 & 1) != 0 )
        System_Text_StringBuilder__Append_62657444(v16, (System_String_o *)StringLiteral_820/*","*/, 0LL);
      v25 = System_Int32__ToString((int32_t)&v30, 0LL);
      v24 = 1;
      System_Text_StringBuilder__Append_62657444(v16, v25, 0LL);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v28,
      (const MethodInfo_34661D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_62657444(v16, (System_String_o *)StringLiteral_1514/*";"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v29,
    (const MethodInfo_348DBBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v16 )
LABEL_18:
    sub_1BDBAD4(playedEffectList, v17);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                              v16,
                              v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}