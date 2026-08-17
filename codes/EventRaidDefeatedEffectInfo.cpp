void EventRaidDefeatedEffectInfo___ctor(
        EventRaidDefeatedEffectInfo_o *this,
        System_String_o *strInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x21
  MissionNaviTransitionBoardItem_o *p_fields; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  int klass; // w8
  System_String_o *v16; // x20
  int i; // w27
  System_String_array *v18; // x22
  System_Collections_Generic_List_int__o *v19; // x21
  il2cpp_array_size_t v20; // x8
  System_String_o *v21; // x22
  unsigned __int64 v22; // x28
  System_String_o *v23; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596D97B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596D97B = 1;
  }
  *(_QWORD *)result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  sub_2213A04(p_fields, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0)) == 0 )
LABEL_31:
    sub_2213CDC(IsNullOrEmpty, v14);
  klass = (int)IsNullOrEmpty[1].klass;
  v16 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_32;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v16[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_31;
      v18 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0);
      result[1] = 0;
      v19 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v19,
        (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v18 )
        goto LABEL_31;
      if ( !LODWORD(v18->max_length) )
        goto LABEL_32;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v18->m_Items[0], &result[1], 0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( (v18->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_32;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v18->m_Items[1], 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( (v18->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_32;
          IsNullOrEmpty = v18->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_31;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0);
          if ( !IsNullOrEmpty )
            goto LABEL_31;
          v20 = (il2cpp_array_size_t)IsNullOrEmpty[1].klass;
          v21 = IsNullOrEmpty;
          if ( (int)v20 >= 1 )
          {
            v22 = 0;
            while ( v22 < (unsigned int)v20 )
            {
              v23 = (System_String_o *)*((_QWORD *)&v21[1].monitor + v22);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v23, result, 0);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v19 )
                  goto LABEL_31;
                items = v19->fields._items;
                v14 = (unsigned int)result[0];
                v25 = Method_System_Collections_Generic_List_int__Add__;
                ++v19->fields._version;
                if ( !items )
                  goto LABEL_31;
                size = v19->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v14,
                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v19->fields._size = size + 1;
                  items->m_Items[size] = v14;
                }
              }
              LODWORD(v20) = v21[1].klass;
              if ( (__int64)++v22 >= (int)v20 )
                goto LABEL_27;
            }
LABEL_32:
            sub_2213CE4(IsNullOrEmpty);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_31;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v19,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v16[1].klass;
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
  __int128 v11; // q0
  char v12; // w20
  System_String_o *v13; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+10h] [xbp-E0h] BYREF
  int32_t v16; // [xsp+3Ch] [xbp-B4h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v17; // [xsp+40h] [xbp-B0h] BYREF
  int key; // [xsp+5Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_596D97C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    sub_2213A60(&StringLiteral_1568/*";"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    byte_596D97C = 1;
  }
  key = 0;
  memset(&v17, 0, sizeof(v17));
  memset(&v19, 0, sizeof(v19));
  v16 = 0;
  v3 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v19 = v15;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v19,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v19.fields._current;
    key = (int)v19.fields._current.fields.key;
    v7 = System_Int32__ToString((int32_t)&key, 0);
    v8 = System_String__Concat_75651716(v7, (System_String_o *)StringLiteral_1533/*":"*/, 0);
    if ( !v3 )
      sub_2213CDC(v8, v8);
    appended = System_Text_StringBuilder__Append_75735064(v3, v8, 0);
    if ( !current.fields.value )
      sub_2213CDC(appended, v10);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v11 = *(_OWORD *)&v15.fields._dictionary;
    v12 = 0;
    v15.fields._dictionary = 0;
    *(_QWORD *)&v15.fields._version = &v17;
    *(_OWORD *)&v17.fields._list = v11;
    *(_QWORD *)&v17.fields._current = v15.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v17,
              (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      v16 = v17.fields._current;
      if ( (v12 & 1) != 0 )
        System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)StringLiteral_869/*","*/, 0);
      v13 = System_Int32__ToString((int32_t)&v16, 0);
      v12 = 1;
      System_Text_StringBuilder__Append_75735064(v3, v13, 0);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v17,
      (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_75735064(v3, (System_String_o *)StringLiteral_1568/*";"*/, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v19,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v3 )
LABEL_18:
    sub_2213CDC(playedEffectList, v4);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v3->klass->vtable._3_ToString.methodPtr)(
                              v3,
                              v3->klass->vtable._3_ToString.method);
}