void __fastcall EventRaidDefeatedEffectInfo___ctor(
        EventRaidDefeatedEffectInfo_o *this,
        System_String_o *strInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v5; // x21
  PartyOrganizationUtility_o *p_fields; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_String_o *IsNullOrEmpty; // x0
  __int64 v14; // x1
  int klass; // w8
  System_String_o *v16; // x20
  int i; // w23
  System_String_array *v18; // x22
  System_Collections_Generic_List_int__o *v19; // x21
  System_String_c *v20; // x8
  System_String_o *v21; // x22
  unsigned __int64 v22; // x28
  System_String_o *v23; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  int32_t result[2]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BD9968 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BD9968 = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  sub_1C21DDC(p_fields, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  if ( !strInfo || (IsNullOrEmpty = (System_String_o *)System_String__Split(strInfo, 0x3Bu, 0, 0LL)) == 0LL )
LABEL_32:
    sub_1C22094(IsNullOrEmpty, v14);
  klass = (int)IsNullOrEmpty[1].klass;
  v16 = IsNullOrEmpty;
  if ( klass >= 1 )
  {
    for ( i = 0; i < klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)*((_QWORD *)&v16[1].monitor + i);
      if ( !IsNullOrEmpty )
        goto LABEL_32;
      v18 = System_String__Split(IsNullOrEmpty, 0x3Au, 0, 0LL);
      result[1] = 0;
      v19 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v19,
        (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v18 )
        goto LABEL_32;
      if ( !v18->max_length )
        goto LABEL_31;
      IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v18->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v18->max_length <= 1 )
          goto LABEL_31;
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(v18->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v18->max_length <= 1 )
            goto LABEL_31;
          IsNullOrEmpty = v18->m_Items[1];
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          IsNullOrEmpty = (System_String_o *)System_String__Split(IsNullOrEmpty, 0x2Cu, 0, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_32;
          v20 = IsNullOrEmpty[1].klass;
          v21 = IsNullOrEmpty;
          if ( (int)v20 >= 1 )
          {
            v22 = 0LL;
            while ( v22 < (unsigned int)v20 )
            {
              v23 = (System_String_o *)*((_QWORD *)&v21[1].monitor + v22);
              result[0] = 0;
              IsNullOrEmpty = (System_String_o *)System_Int32__TryParse(v23, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v19 )
                  goto LABEL_32;
                v14 = (unsigned int)result[0];
                items = v19->fields._items;
                v25 = Method_System_Collections_Generic_List_int__Add__;
                ++v19->fields._version;
                if ( !items )
                  goto LABEL_32;
                size = v19->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v19,
                    v14,
                    *(const MethodInfo_3632090 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
                }
                else
                {
                  v19->fields._size = size + 1;
                  items->m_Items[size + 1] = v14;
                }
              }
              LODWORD(v20) = v21[1].klass;
              if ( (__int64)++v22 >= (int)v20 )
                goto LABEL_27;
            }
LABEL_31:
            sub_1C2209C(IsNullOrEmpty, v14);
          }
        }
LABEL_27:
        IsNullOrEmpty = (System_String_o *)p_fields->klass;
        if ( !p_fields->klass )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)IsNullOrEmpty,
          result[1],
          (Il2CppObject *)v19,
          (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      klass = (int)v16[1].klass;
    }
  }
}


System_String_o *__fastcall EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  Il2CppObject *value; // x20
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

  if ( (byte_4BD9969 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&StringLiteral_1546/*":"*/);
    sub_1C21E38(&StringLiteral_1581/*";"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BD9969 = 1;
  }
  v17 = 0LL;
  memset(&v16, 0, sizeof(v16));
  memset(&v15, 0, sizeof(v15));
  v3 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_int__object__o *)playedEffectList,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v16 = v14;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v16,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    value = v16.fields._current.fields.value;
    HIDWORD(v17) = v16.fields._current.fields.key;
    v7 = System_Int32__ToString((int32_t)&v17 + 4, 0LL);
    v8 = System_String__Concat_63115476(v7, (System_String_o *)StringLiteral_1546/*":"*/, 0LL);
    if ( !v3 )
      sub_1C22094(v8, v8);
    appended = System_Text_StringBuilder__Append_62276628(v3, v8, 0LL);
    if ( !value )
      sub_1C22094(appended, v10);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_int__o *)value,
      (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v11 = 0;
    *(_OWORD *)&v15.fields._list = *(_OWORD *)&v14.fields._dictionary;
    *(_QWORD *)&v15.fields._current = v14.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v15,
              (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      LODWORD(v17) = v15.fields._current;
      if ( (v11 & 1) != 0 )
        System_Text_StringBuilder__Append_62276628(v3, (System_String_o *)StringLiteral_866/*","*/, 0LL);
      v12 = System_Int32__ToString((int32_t)&v17, 0LL);
      v11 = 1;
      System_Text_StringBuilder__Append_62276628(v3, v12, 0LL);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v15,
      (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    System_Text_StringBuilder__Append_62276628(v3, (System_String_o *)StringLiteral_1581/*";"*/, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v16,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( !v3 )
LABEL_18:
    sub_1C22094(playedEffectList, v4);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v3->klass->vtable._3_ToString.method)(
                              v3,
                              v3->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}