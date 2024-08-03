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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_int__object__o *v12; // x21
  ServantStatusBattleListViewItem_o *p_fields; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v17; // x1
  int klass; // w8
  System_String_o *v19; // x20
  int i; // w23
  System_String_array *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_int__o *v24; // x21
  System_String_c *v25; // x8
  System_String_o *v26; // x22
  unsigned __int64 v27; // x28
  System_String_o *v28; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F993B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, strInfo);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_49F993B = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                  v10,
                                                                  v11);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v12;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  sub_1B6406C(p_fields, (int32_t)v12, v14, v15);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0LL)) == 0LL )
LABEL_32:
    sub_1B64324(IsNullOrEmpty);
  klass = (int)IsNullOrEmpty[1].klass;
  v19 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v19[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v21 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0LL);
      result[1] = 0;
      v24 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v22,
                                                        v23);
      System_Collections_Generic_List_int____ctor(
        v24,
        (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v21 )
        goto LABEL_32;
      if ( !v21->max_length )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v21->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v21->max_length <= 1 )
          goto LABEL_31;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v21->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v21->max_length <= 1 )
            goto LABEL_31;
          IsNullOrEmpty = v21->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          v25 = IsNullOrEmpty[1].klass;
          v26 = IsNullOrEmpty;
          if ( (int)v25 >= 1 )
          {
            v27 = 0LL;
            while ( v27 < (unsigned int)v25 )
            {
              v28 = (System_String_o *)*((_QWORD *)&v26[1].monitor + v27);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v28, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v24 )
                  goto LABEL_32;
                v17 = (unsigned int)result[0];
                items = v24->fields._items;
                v30 = Method_System_Collections_Generic_List_int__Add__;
                ++v24->fields._version;
                if ( !items )
                  goto LABEL_32;
                size = v24->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v24,
                    v17,
                    *(const MethodInfo_348FEDC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                }
                else
                {
                  v24->fields._size = size + 1;
                  items->m_Items[size + 1] = v17;
                }
              }
              LODWORD(v25) = v26[1].klass;
              if ( (__int64)++v27 >= (int)v25 )
                goto LABEL_27;
            }
LABEL_31:
            sub_1B6432C(IsNullOrEmpty, v17);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v24,
          (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v19[1].klass;
    }
  }
}


System_String_o *__fastcall EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v16; // x1
  System_Text_StringBuilder_o *v17; // x19
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  Il2CppObject *value; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_Text_StringBuilder_o *appended; // x0
  char v23; // w20
  System_String_o *v24; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v27; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+60h] [xbp-90h] BYREF
  __int64 v29; // [xsp+98h] [xbp-58h] BYREF

  if ( (byte_49F993C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_1546/*":"*/, v14);
    sub_1B640C8(&StringLiteral_1581/*";"*/, v15);
    sub_1B640C8(&StringLiteral_869/*","*/, v16);
    byte_49F993C = 1;
  }
  v29 = 0LL;
  memset(&v28, 0, sizeof(v28));
  memset(&v27, 0, sizeof(v27));
  v17 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor(v17, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v28 = v26;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v28,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    value = v28.fields._current.fields.value;
    HIDWORD(v29) = v28.fields._current.fields.key;
    v20 = System_Int32__ToString((int32_t)&v29 + 4, 0LL);
    v21 = System_String__Concat_61375396(v20, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
    if ( !v17 )
      sub_1B64324(v21);
    appended = System_Text_StringBuilder__Append_60536548(v17, v21, 0LL);
    if ( !value )
      sub_1B64324(appended);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_int__o *)value,
      (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v23 = 0;
    *(_OWORD *)&v27.fields._list = *(_OWORD *)&v26.fields._dictionary;
    *(_QWORD *)&v27.fields._current = v26.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v27,
              (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      LODWORD(v29) = v27.fields._current;
      if ( (v23 & 1) != 0 )
        System_Text_StringBuilder__Append_60536548(v17, (System_String_o *)StringLiteral_869/*","*/, 0LL);
      v24 = System_Int32__ToString((int32_t)&v29, 0LL);
      v23 = 1;
      System_Text_StringBuilder__Append_60536548(v17, v24, 0LL);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v27,
      (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_60536548(v17, (System_String_o *)StringLiteral_1581/*";"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v28,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v17 )
LABEL_18:
    sub_1B64324(playedEffectList);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                              v17,
                              v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}