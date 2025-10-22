void EventRaidDefeatedEffectInfo___ctor(
        EventRaidDefeatedEffectInfo_o *this,
        System_String_o *strInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x21
  CGThumbnailListItem_o *p_fields; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  int klass; // w8
  System_String_o *v12; // x20
  int i; // w23
  System_String_array *v14; // x22
  System_Collections_Generic_List_int__o *v15; // x21
  il2cpp_array_size_t v16; // x8
  System_String_o *v17; // x22
  unsigned __int64 v18; // x28
  System_String_o *v19; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C53FF2 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C53FF2 = 1;
  }
  *(_QWORD *)result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  sub_1C3E508(p_fields, (int32_t)v5, v7, v8);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0)) == 0 )
LABEL_32:
    sub_1C3E7C0(IsNullOrEmpty, v10);
  klass = (int)IsNullOrEmpty[1].klass;
  v12 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v12[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v14 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0);
      result[1] = 0;
      v15 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v15,
        (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v14 )
        goto LABEL_32;
      if ( !LODWORD(v14->max_length) )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v14->m_Items[0], &result[1], 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( LODWORD(v14->max_length) <= 1 )
          goto LABEL_31;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v14->m_Items[1], 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( LODWORD(v14->max_length) <= 1 )
            goto LABEL_31;
          IsNullOrEmpty = v14->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0);
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          v16 = (il2cpp_array_size_t)IsNullOrEmpty[1].klass;
          v17 = IsNullOrEmpty;
          if ( (int)v16 >= 1 )
          {
            v18 = 0;
            while ( v18 < (unsigned int)v16 )
            {
              v19 = (System_String_o *)*((_QWORD *)&v17[1].monitor + v18);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v19, result, 0);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_32;
                v10 = (unsigned int)result[0];
                items = v15->fields._items;
                v21 = Method_System_Collections_Generic_List_int__Add__;
                ++v15->fields._version;
                if ( !items )
                  goto LABEL_32;
                size = v15->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v15,
                    v10,
                    *(const MethodInfo_379843C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v15->fields._size = size + 1;
                  items->m_Items[size] = v10;
                }
              }
              LODWORD(v16) = v17[1].klass;
              if ( (__int64)++v18 >= (int)v16 )
                goto LABEL_27;
            }
LABEL_31:
            sub_1C3E7C8(IsNullOrEmpty, v10);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v15,
          (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v12[1].klass;
    }
  }
}


System_String_o *EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v10; // x1
  char v11; // w20
  System_String_o *v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v15; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v16; // [xsp+60h] [xbp-90h] BYREF
  __int64 v17; // [xsp+98h] [xbp-58h] BYREF

  if ( (byte_4C53FF3 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&StringLiteral_1456/*":"*/);
    sub_1C3E564(&StringLiteral_1491/*";"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    byte_4C53FF3 = 1;
  }
  v17 = 0;
  memset(&v16, 0, sizeof(v16));
  memset(&v15, 0, sizeof(v15));
  v3 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_340C874 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v16 = v14;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v16,
            (const MethodInfo_3563834 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v16.fields._current;
    HIDWORD(v17) = v16.fields._current.fields.key;
    v7 = System_Int32__ToString((int32_t)&v17 + 4, 0);
    v8 = System_String__Concat_63636468(v7, (System_String_o *)StringLiteral_1456/*":"*/, 0);
    if ( !v3 )
      sub_1C3E7C0(v8, v8);
    appended = System_Text_StringBuilder__Append_63721532(v3, v8, 0);
    if ( !current.fields.value )
      sub_1C3E7C0(appended, v10);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v11 = 0;
    *(_OWORD *)&v15.fields._list = *(_OWORD *)&v14.fields._dictionary;
    *(_QWORD *)&v15.fields._current = v14.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v15,
              (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      LODWORD(v17) = v15.fields._current;
      if ( (v11 & 1) != 0 )
        System_Text_StringBuilder__Append_63721532(v3, (System_String_o *)StringLiteral_811/*","*/, 0);
      v12 = System_Int32__ToString((int32_t)&v17, 0);
      v11 = 1;
      System_Text_StringBuilder__Append_63721532(v3, v12, 0);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v15,
      (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_63721532(v3, (System_String_o *)StringLiteral_1491/*";"*/, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v16,
    (const MethodInfo_3563958 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v3 )
LABEL_18:
    sub_1C3E7C0(playedEffectList, v4);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                              v3,
                              v3->klass->vtable._3_ToString.method);
}