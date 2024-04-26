void __fastcall EventRaidDefeatedEffectInfo___ctor(
        EventRaidDefeatedEffectInfo_o *this,
        System_String_o *strInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v5; // x22
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Char_array *IsNullOrEmpty; // x0
  System_Char_array *v13; // x1
  int max_length; // w8
  System_Char_array *v15; // x20
  int i; // w24
  System_String_o *v17; // x21
  System_String_array *v18; // x22
  System_Collections_Generic_List_int__o *v19; // x21
  System_String_o *v20; // x22
  __int64 v21; // x8
  System_Char_array *v22; // x22
  unsigned __int64 v23; // x19
  System_String_o *v24; // x0
  __int64 v25; // x0
  EventRaidDefeatedEffectInfo_Fields *p_fields; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43525C0 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_43525C0 = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v5,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  p_fields = &this->fields;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  IsNullOrEmpty = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_35;
  v13 = IsNullOrEmpty;
  if ( !IsNullOrEmpty->max_length )
    goto LABEL_34;
  IsNullOrEmpty->m_Items[2] = 59;
  if ( !strInfo || (IsNullOrEmpty = (System_Char_array *)System_String__Split(strInfo, IsNullOrEmpty, 0LL)) == 0LL )
LABEL_35:
    sub_B7076C(IsNullOrEmpty, v13);
  max_length = IsNullOrEmpty->max_length;
  v15 = IsNullOrEmpty;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_34;
      v17 = *(System_String_o **)&v15->m_Items[4 * i + 2];
      IsNullOrEmpty = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !IsNullOrEmpty )
        goto LABEL_35;
      v13 = IsNullOrEmpty;
      if ( !IsNullOrEmpty->max_length )
        goto LABEL_34;
      IsNullOrEmpty->m_Items[2] = 58;
      if ( !v17 )
        goto LABEL_35;
      v18 = System_String__Split(v17, IsNullOrEmpty, 0LL);
      result[1] = 0;
      v19 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v19,
        (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v18 )
        goto LABEL_35;
      if ( !v18->max_length )
        goto LABEL_34;
      IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v18->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v18->max_length <= 1 )
          goto LABEL_34;
        IsNullOrEmpty = (System_Char_array *)System_String__IsNullOrEmpty(v18->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v18->max_length <= 1 )
            goto LABEL_34;
          v20 = v18->m_Items[1];
          IsNullOrEmpty = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v13 = IsNullOrEmpty;
          if ( !IsNullOrEmpty->max_length )
            goto LABEL_34;
          IsNullOrEmpty->m_Items[2] = 44;
          if ( !v20 )
            goto LABEL_35;
          IsNullOrEmpty = (System_Char_array *)System_String__Split(v20, IsNullOrEmpty, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v21 = *(_QWORD *)&IsNullOrEmpty->max_length;
          v22 = IsNullOrEmpty;
          if ( (int)v21 >= 1 )
          {
            v23 = 0LL;
            while ( v23 < (unsigned int)v21 )
            {
              v24 = *(System_String_o **)&v22->m_Items[4 * v23 + 2];
              result[0] = 0;
              IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v24, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v19 )
                  goto LABEL_35;
                System_Collections_Generic_List_int___Add(
                  v19,
                  result[0],
                  (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
              }
              LODWORD(v21) = v22->max_length;
              if ( (__int64)++v23 >= (int)v21 )
                goto LABEL_30;
            }
LABEL_34:
            v25 = sub_B70798(IsNullOrEmpty);
            sub_B70738(v25, 0LL);
          }
        }
LABEL_30:
        IsNullOrEmpty = (System_Char_array *)p_fields->playedEffectList;
        if ( !p_fields->playedEffectList )
          goto LABEL_35;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)IsNullOrEmpty,
          result[1],
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v19,
          (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      max_length = v15->max_length;
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
  int v6; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v11; // x1
  char v12; // w20
  System_String_o *v13; // x1
  int v14; // w8
  int v15; // w21
  _WORD v17[24]; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v18; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+40h] [xbp-A0h] BYREF
  int key; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v21; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_43525C1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&StringLiteral_1250/*":"*/);
    sub_B70694(&StringLiteral_1287/*";"*/);
    sub_B70694(&StringLiteral_712/*","*/);
    byte_43525C1 = 1;
  }
  key = 0;
  memset(&v19, 0, sizeof(v19));
  memset(&v21, 0, sizeof(v21));
  v18 = 0LL;
  v3 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v3, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)playedEffectList,
    (const MethodInfo_2FC6B4C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v21 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v17;
  v6 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v21,
            (const MethodInfo_2832CC4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v21.fields.current;
    key = (int)v21.fields.current.fields.key;
    v8 = System_Int32__ToString((int32_t)&key, 0LL);
    v9 = System_String__Concat_44758168(v8, (System_String_o *)StringLiteral_1250/*":"*/, 0LL);
    if ( !v3 )
      sub_B7076C(v9, v9);
    appended = System_Text_StringBuilder__Append_42601980(v3, v9, 0LL);
    if ( !current.fields.value )
      sub_B7076C(appended, v11);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v17,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v12 = 0;
    v19 = *(System_Collections_Generic_List_Enumerator_int__o *)v17;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v19,
              (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      HIDWORD(v18) = v19.fields.current;
      if ( (v12 & 1) != 0 )
        System_Text_StringBuilder__Append_42601980(v3, (System_String_o *)StringLiteral_712/*","*/, 0LL);
      v13 = System_Int32__ToString((int32_t)&v18 + 4, 0LL);
      v12 = 1;
      System_Text_StringBuilder__Append_42601980(v3, v13, 0LL);
    }
    *(_DWORD *)&v17[2 * v6 + 20] = 149;
    LODWORD(v18) = v18 + 1;
    v6 = v18;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v19,
      (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v6 )
    {
      v14 = v6 - 1;
      if ( *(_DWORD *)&v17[2 * v6 + 18] == 149 )
      {
        --v6;
        LODWORD(v18) = v14;
      }
    }
    System_Text_StringBuilder__Append_42601980(v3, (System_String_o *)StringLiteral_1287/*";"*/, 0LL);
  }
  *(_DWORD *)&v17[2 * v6 + 20] = 189;
  LODWORD(v18) = v18 + 1;
  v15 = v18;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v21,
    (const MethodInfo_2832E30 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v15 && *(_DWORD *)&v17[2 * v15 + 18] == 189 )
    LODWORD(v18) = v15 - 1;
  if ( !v3 )
LABEL_24:
    sub_B7076C(playedEffectList, v4);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v3->klass->vtable._3_ToString.method)(
                              v3,
                              v3->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}