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
  int klass; // w8
  System_String_o *v11; // x20
  int i; // w23
  System_String_array *v13; // x22
  System_Collections_Generic_List_int__o *v14; // x21
  il2cpp_array_size_t v15; // x8
  System_String_o *v16; // x22
  unsigned __int64 v17; // x28
  System_String_o *v18; // x0
  int32_t v19; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C40255 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C40255 = 1;
  }
  *(_QWORD *)result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  sub_1C36FFC(p_fields, (int32_t)v5, v7, v8);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0)) == 0 )
LABEL_32:
    sub_1C372B4(IsNullOrEmpty);
  klass = (int)IsNullOrEmpty[1].klass;
  v11 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v11[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v13 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0);
      result[1] = 0;
      v14 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v14,
        (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v13 )
        goto LABEL_32;
      if ( !LODWORD(v13->max_length) )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v13->m_Items[0], &result[1], 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( LODWORD(v13->max_length) <= 1 )
          goto LABEL_31;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v13->m_Items[1], 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( LODWORD(v13->max_length) <= 1 )
            goto LABEL_31;
          IsNullOrEmpty = v13->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0);
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          v15 = (il2cpp_array_size_t)IsNullOrEmpty[1].klass;
          v16 = IsNullOrEmpty;
          if ( (int)v15 >= 1 )
          {
            v17 = 0;
            while ( v17 < (unsigned int)v15 )
            {
              v18 = (System_String_o *)*((_QWORD *)&v16[1].monitor + v17);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v18, result, 0);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_32;
                v19 = result[0];
                items = v14->fields._items;
                v21 = Method_System_Collections_Generic_List_int__Add__;
                ++v14->fields._version;
                if ( !items )
                  goto LABEL_32;
                size = v14->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v14,
                    v19,
                    *(const MethodInfo_3786000 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                }
                else
                {
                  v14->fields._size = size + 1;
                  items->m_Items[size] = v19;
                }
              }
              LODWORD(v15) = v16[1].klass;
              if ( (__int64)++v17 >= (int)v15 )
                goto LABEL_27;
            }
LABEL_31:
            sub_1C372BC(IsNullOrEmpty);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v14,
          (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v11[1].klass;
    }
  }
}


System_String_o *EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x19
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_Text_StringBuilder_o *appended; // x0
  char v9; // w20
  System_String_o *v10; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+60h] [xbp-90h] BYREF
  __int64 v15; // [xsp+98h] [xbp-58h] BYREF

  if ( (byte_4C40256 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&StringLiteral_1457/*":"*/);
    sub_1C37058(&StringLiteral_1492/*";"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    byte_4C40256 = 1;
  }
  v15 = 0;
  memset(&v14, 0, sizeof(v14));
  memset(&v13, 0, sizeof(v13));
  v3 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v14 = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v14,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v14.fields._current;
    HIDWORD(v15) = v14.fields._current.fields.key;
    v6 = System_Int32__ToString((int32_t)&v15 + 4, 0);
    v7 = System_String__Concat_63561656(v6, (System_String_o *)StringLiteral_1457/*":"*/, 0);
    if ( !v3 )
      sub_1C372B4(v7);
    appended = System_Text_StringBuilder__Append_63646720(v3, v7, 0);
    if ( !current.fields.value )
      sub_1C372B4(appended);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v9 = 0;
    *(_OWORD *)&v13.fields._list = *(_OWORD *)&v12.fields._dictionary;
    *(_QWORD *)&v13.fields._current = v12.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v13,
              (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      LODWORD(v15) = v13.fields._current;
      if ( (v9 & 1) != 0 )
        System_Text_StringBuilder__Append_63646720(v3, (System_String_o *)StringLiteral_811/*","*/, 0);
      v10 = System_Int32__ToString((int32_t)&v15, 0);
      v9 = 1;
      System_Text_StringBuilder__Append_63646720(v3, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v13,
      (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_63646720(v3, (System_String_o *)StringLiteral_1492/*";"*/, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v14,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v3 )
LABEL_18:
    sub_1C372B4(playedEffectList);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                              v3,
                              v3->klass->vtable._3_ToString.method);
}