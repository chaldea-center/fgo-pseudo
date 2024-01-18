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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Char_array *IsNullOrEmpty; // x0
  System_Char_array *v19; // x1
  int max_length; // w8
  System_Char_array *v21; // x20
  int i; // w24
  System_String_o *v23; // x21
  System_String_array *v24; // x22
  System_Collections_Generic_List_int__o *v25; // x21
  System_String_o *v26; // x22
  __int64 v27; // x8
  System_Char_array *v28; // x22
  unsigned __int64 v29; // x19
  System_String_o *v30; // x0
  __int64 v31; // x0
  EventRaidDefeatedEffectInfo_Fields *p_fields; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418870F & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, strInfo);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_418870F = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v11,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v11;
  p_fields = &this->fields;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  IsNullOrEmpty = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_35;
  v19 = IsNullOrEmpty;
  if ( !IsNullOrEmpty->max_length )
    goto LABEL_34;
  IsNullOrEmpty->m_Items[2] = 59;
  if ( !strInfo || (IsNullOrEmpty = (System_Char_array *)System_String__Split(strInfo, IsNullOrEmpty, 0LL)) == 0LL )
LABEL_35:
    sub_B2C434(IsNullOrEmpty, v19);
  max_length = IsNullOrEmpty->max_length;
  v21 = IsNullOrEmpty;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_34;
      v23 = *(System_String_o **)&v21->m_Items[4 * i + 2];
      IsNullOrEmpty = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
      if ( !IsNullOrEmpty )
        goto LABEL_35;
      v19 = IsNullOrEmpty;
      if ( !IsNullOrEmpty->max_length )
        goto LABEL_34;
      IsNullOrEmpty->m_Items[2] = 58;
      if ( !v23 )
        goto LABEL_35;
      v24 = System_String__Split(v23, IsNullOrEmpty, 0LL);
      result[1] = 0;
      v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v25,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v24 )
        goto LABEL_35;
      if ( !v24->max_length )
        goto LABEL_34;
      IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v24->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v24->max_length <= 1 )
          goto LABEL_34;
        IsNullOrEmpty = (System_Char_array *)System_String__IsNullOrEmpty(v24->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v24->max_length <= 1 )
            goto LABEL_34;
          v26 = v24->m_Items[1];
          IsNullOrEmpty = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v19 = IsNullOrEmpty;
          if ( !IsNullOrEmpty->max_length )
            goto LABEL_34;
          IsNullOrEmpty->m_Items[2] = 44;
          if ( !v26 )
            goto LABEL_35;
          IsNullOrEmpty = (System_Char_array *)System_String__Split(v26, IsNullOrEmpty, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v27 = *(_QWORD *)&IsNullOrEmpty->max_length;
          v28 = IsNullOrEmpty;
          if ( (int)v27 >= 1 )
          {
            v29 = 0LL;
            while ( v29 < (unsigned int)v27 )
            {
              v30 = *(System_String_o **)&v28->m_Items[4 * v29 + 2];
              result[0] = 0;
              IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v30, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v25 )
                  goto LABEL_35;
                System_Collections_Generic_List_int___Add(
                  v25,
                  result[0],
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
              LODWORD(v27) = v28->max_length;
              if ( (__int64)++v29 >= (int)v27 )
                goto LABEL_30;
            }
LABEL_34:
            v31 = sub_B2C460(IsNullOrEmpty);
            sub_B2C400(v31, 0LL);
          }
        }
LABEL_30:
        IsNullOrEmpty = (System_Char_array *)p_fields->playedEffectList;
        if ( !p_fields->playedEffectList )
          goto LABEL_35;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)IsNullOrEmpty,
          result[1],
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v25,
          (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      max_length = v21->max_length;
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
  int v19; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v24; // x1
  char v25; // w20
  System_String_o *v26; // x1
  int v27; // w8
  int v28; // w21
  _WORD v30[24]; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v31; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+40h] [xbp-A0h] BYREF
  int key; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_4188710 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v13);
    sub_B2C35C(&StringLiteral_1262/*";"*/, v14);
    sub_B2C35C(&StringLiteral_699/*","*/, v15);
    byte_4188710 = 1;
  }
  key = 0;
  memset(&v32, 0, sizeof(v32));
  memset(&v34, 0, sizeof(v34));
  v31 = 0LL;
  v16 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v30,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)playedEffectList,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v34 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v30;
  v19 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v34,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v34.fields.current;
    key = (int)v34.fields.current.fields.key;
    v21 = System_Int32__ToString((int32_t)&key, 0LL);
    v22 = System_String__Concat_44305532(v21, (System_String_o *)StringLiteral_1225/*":"*/, 0LL);
    if ( !v16 )
      sub_B2C434(v22, v22);
    appended = System_Text_StringBuilder__Append_42408700(v16, v22, 0LL);
    if ( !current.fields.value )
      sub_B2C434(appended, v24);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v30,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v25 = 0;
    v32 = *(System_Collections_Generic_List_Enumerator_int__o *)v30;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v32,
              (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      HIDWORD(v31) = v32.fields.current;
      if ( (v25 & 1) != 0 )
        System_Text_StringBuilder__Append_42408700(v16, (System_String_o *)StringLiteral_699/*","*/, 0LL);
      v26 = System_Int32__ToString((int32_t)&v31 + 4, 0LL);
      v25 = 1;
      System_Text_StringBuilder__Append_42408700(v16, v26, 0LL);
    }
    *(_DWORD *)&v30[2 * v19 + 20] = 149;
    LODWORD(v31) = v31 + 1;
    v19 = v31;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v32,
      (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v19 )
    {
      v27 = v19 - 1;
      if ( *(_DWORD *)&v30[2 * v19 + 18] == 149 )
      {
        --v19;
        LODWORD(v31) = v27;
      }
    }
    System_Text_StringBuilder__Append_42408700(v16, (System_String_o *)StringLiteral_1262/*";"*/, 0LL);
  }
  *(_DWORD *)&v30[2 * v19 + 20] = 189;
  LODWORD(v31) = v31 + 1;
  v28 = v31;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v34,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v28 && *(_DWORD *)&v30[2 * v28 + 18] == 189 )
    LODWORD(v31) = v28 - 1;
  if ( !v16 )
LABEL_24:
    sub_B2C434(playedEffectList, v17);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v16->klass->vtable._3_ToString.method)(
                              v16,
                              v16->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}