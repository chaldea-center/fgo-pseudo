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
  ServantStatusBattleListViewItem_o *p_fields; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  int klass; // w8
  System_String_o *v17; // x20
  int i; // w23
  System_String_array *v19; // x22
  System_Collections_Generic_List_int__o *v20; // x21
  System_String_c *v21; // x8
  System_String_o *v22; // x22
  unsigned __int64 v23; // x28
  System_String_o *v24; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FBA2D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, strInfo);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v5);
    sub_1B64870(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49FBA2D = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_312528C *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v10;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  sub_1B64814(p_fields, (int32_t)v10, v12, v13);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0LL)) == 0LL )
LABEL_32:
    sub_1B64ACC(IsNullOrEmpty, v15);
  klass = (int)IsNullOrEmpty[1].klass;
  v17 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v17[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v19 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0LL);
      result[1] = 0;
      v20 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v20,
        (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v19 )
        goto LABEL_32;
      if ( !v19->max_length )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v19->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v19->max_length <= 1 )
          goto LABEL_31;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v19->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v19->max_length <= 1 )
            goto LABEL_31;
          IsNullOrEmpty = v19->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          v21 = IsNullOrEmpty[1].klass;
          v22 = IsNullOrEmpty;
          if ( (int)v21 >= 1 )
          {
            v23 = 0LL;
            while ( v23 < (unsigned int)v21 )
            {
              v24 = (System_String_o *)*((_QWORD *)&v22[1].monitor + v23);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v24, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v20 )
                  goto LABEL_32;
                v15 = (unsigned int)result[0];
                items = v20->fields._items;
                v26 = Method_System_Collections_Generic_List_int__Add__;
                ++v20->fields._version;
                if ( !items )
                  goto LABEL_32;
                size = v20->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v20,
                    v15,
                    *(const MethodInfo_34921B8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                }
                else
                {
                  v20->fields._size = size + 1;
                  items->m_Items[size + 1] = v15;
                }
              }
              LODWORD(v21) = v22[1].klass;
              if ( (__int64)++v23 >= (int)v21 )
                goto LABEL_27;
            }
LABEL_31:
            sub_1B64AD4(IsNullOrEmpty, v15);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v20,
          (const MethodInfo_3125C60 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v17[1].klass;
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

  if ( (byte_49FBA2E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v4);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v8);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v9);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1B64870(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B64870(&StringLiteral_1545/*":"*/, v13);
    sub_1B64870(&StringLiteral_1580/*";"*/, v14);
    sub_1B64870(&StringLiteral_869/*","*/, v15);
    byte_49FBA2E = 1;
  }
  v30 = 0LL;
  memset(&v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  v16 = (System_Text_StringBuilder_o *)sub_1B64ABC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_3126098 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v29 = v27;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v29,
            (const MethodInfo_326BF50 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    value = v29.fields._current.fields.value;
    HIDWORD(v30) = v29.fields._current.fields.key;
    v20 = System_Int32__ToString((int32_t)&v30 + 4, 0LL);
    v21 = System_String__Concat_61383576(v20, (System_String_o *)StringLiteral_1545/*":"*/, 0LL);
    if ( !v16 )
      sub_1B64ACC(v21, v21);
    appended = System_Text_StringBuilder__Append_60545472(v16, v21, 0LL);
    if ( !value )
      sub_1B64ACC(appended, v23);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v27,
      (System_Collections_Generic_List_int__o *)value,
      (const MethodInfo_3492D2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v24 = 0;
    *(_OWORD *)&v28.fields._list = *(_OWORD *)&v27.fields._dictionary;
    *(_QWORD *)&v28.fields._current = v27.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v28,
              (const MethodInfo_32282C0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      LODWORD(v30) = v28.fields._current;
      if ( (v24 & 1) != 0 )
        System_Text_StringBuilder__Append_60545472(v16, (System_String_o *)StringLiteral_869/*","*/, 0LL);
      v25 = System_Int32__ToString((int32_t)&v30, 0LL);
      v24 = 1;
      System_Text_StringBuilder__Append_60545472(v16, v25, 0LL);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v28,
      (const MethodInfo_32282BC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_60545472(v16, (System_String_o *)StringLiteral_1580/*";"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v29,
    (const MethodInfo_326C074 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v16 )
LABEL_18:
    sub_1B64ACC(playedEffectList, v17);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                              v16,
                              v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}