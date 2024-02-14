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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Char_array *IsNullOrEmpty; // x0
  int max_length; // w8
  System_Char_array *v22; // x20
  int i; // w24
  System_String_o *v24; // x21
  System_String_array *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_int__o *v28; // x21
  System_String_o *v29; // x22
  __int64 v30; // x8
  System_Char_array *v31; // x22
  unsigned __int64 v32; // x19
  System_String_o *v33; // x0
  __int64 v34; // x0
  EventRaidDefeatedEffectInfo_Fields *p_fields; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42149CB & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, strInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_42149CB = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                   v11,
                                                                                                   v12);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v13,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v13;
  p_fields = &this->fields;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  IsNullOrEmpty = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_35;
  if ( !IsNullOrEmpty->max_length )
    goto LABEL_34;
  IsNullOrEmpty->m_Items[2] = 59;
  if ( !strInfo || (IsNullOrEmpty = (System_Char_array *)System_String__Split(strInfo, IsNullOrEmpty, 0LL)) == 0LL )
LABEL_35:
    sub_B0D97C(IsNullOrEmpty);
  max_length = IsNullOrEmpty->max_length;
  v22 = IsNullOrEmpty;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_34;
      v24 = *(System_String_o **)&v22->m_Items[4 * i + 2];
      IsNullOrEmpty = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !IsNullOrEmpty )
        goto LABEL_35;
      if ( !IsNullOrEmpty->max_length )
        goto LABEL_34;
      IsNullOrEmpty->m_Items[2] = 58;
      if ( !v24 )
        goto LABEL_35;
      v25 = System_String__Split(v24, IsNullOrEmpty, 0LL);
      result[1] = 0;
      v28 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v26,
                                                        v27);
      System_Collections_Generic_List_int____ctor(
        v28,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v25 )
        goto LABEL_35;
      if ( !v25->max_length )
        goto LABEL_34;
      IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v25->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v25->max_length <= 1 )
          goto LABEL_34;
        IsNullOrEmpty = (System_Char_array *)System_String__IsNullOrEmpty(v25->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v25->max_length <= 1 )
            goto LABEL_34;
          v29 = v25->m_Items[1];
          IsNullOrEmpty = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          if ( !IsNullOrEmpty->max_length )
            goto LABEL_34;
          IsNullOrEmpty->m_Items[2] = 44;
          if ( !v29 )
            goto LABEL_35;
          IsNullOrEmpty = (System_Char_array *)System_String__Split(v29, IsNullOrEmpty, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v30 = *(_QWORD *)&IsNullOrEmpty->max_length;
          v31 = IsNullOrEmpty;
          if ( (int)v30 >= 1 )
          {
            v32 = 0LL;
            while ( v32 < (unsigned int)v30 )
            {
              v33 = *(System_String_o **)&v31->m_Items[4 * v32 + 2];
              result[0] = 0;
              IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v33, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_35;
                System_Collections_Generic_List_int___Add(
                  v28,
                  result[0],
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              }
              LODWORD(v30) = v31->max_length;
              if ( (__int64)++v32 >= (int)v30 )
                goto LABEL_30;
            }
LABEL_34:
            v34 = sub_B0D9A8(IsNullOrEmpty);
            sub_B0D948(v34, 0LL);
          }
        }
LABEL_30:
        IsNullOrEmpty = (System_Char_array *)p_fields->playedEffectList;
        if ( !p_fields->playedEffectList )
          goto LABEL_35;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)IsNullOrEmpty,
          result[1],
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v28,
          (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      max_length = v22->max_length;
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
  int v19; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_Text_StringBuilder_o *appended; // x0
  char v24; // w20
  System_String_o *v25; // x1
  int v26; // w8
  int v27; // w21
  _WORD v29[24]; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v30; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v31; // [xsp+40h] [xbp-A0h] BYREF
  int key; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_42149CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v14);
    sub_B0D8A4(&StringLiteral_1269/*";"*/, v15);
    sub_B0D8A4(&StringLiteral_705/*","*/, v16);
    byte_42149CC = 1;
  }
  key = 0;
  memset(&v31, 0, sizeof(v31));
  memset(&v33, 0, sizeof(v33));
  v30 = 0LL;
  v17 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, method, v2);
  System_Text_StringBuilder___ctor(v17, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)playedEffectList,
    (const MethodInfo_2E90A0C *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v33 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v29;
  v19 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v33,
            (const MethodInfo_28107A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v33.fields.current;
    key = (int)v33.fields.current.fields.key;
    v21 = System_Int32__ToString((int32_t)&key, 0LL);
    v22 = System_String__Concat_43849904(v21, (System_String_o *)StringLiteral_1232/*":"*/, 0LL);
    if ( !v17 )
      sub_B0D97C(v22);
    appended = System_Text_StringBuilder__Append_42155400(v17, v22, 0LL);
    if ( !current.fields.value )
      sub_B0D97C(appended);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v29,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v24 = 0;
    v31 = *(System_Collections_Generic_List_Enumerator_int__o *)v29;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v31,
              (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      HIDWORD(v30) = v31.fields.current;
      if ( (v24 & 1) != 0 )
        System_Text_StringBuilder__Append_42155400(v17, (System_String_o *)StringLiteral_705/*","*/, 0LL);
      v25 = System_Int32__ToString((int32_t)&v30 + 4, 0LL);
      v24 = 1;
      System_Text_StringBuilder__Append_42155400(v17, v25, 0LL);
    }
    *(_DWORD *)&v29[2 * v19 + 20] = 149;
    LODWORD(v30) = v30 + 1;
    v19 = v30;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v31,
      (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v19 )
    {
      v26 = v19 - 1;
      if ( *(_DWORD *)&v29[2 * v19 + 18] == 149 )
      {
        --v19;
        LODWORD(v30) = v26;
      }
    }
    System_Text_StringBuilder__Append_42155400(v17, (System_String_o *)StringLiteral_1269/*";"*/, 0LL);
  }
  *(_DWORD *)&v29[2 * v19 + 20] = 189;
  LODWORD(v30) = v30 + 1;
  v27 = v30;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v33,
    (const MethodInfo_2810910 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v27 && *(_DWORD *)&v29[2 * v27 + 18] == 189 )
    LODWORD(v30) = v27 - 1;
  if ( !v17 )
LABEL_24:
    sub_B0D97C(playedEffectList);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                              v17,
                              v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}