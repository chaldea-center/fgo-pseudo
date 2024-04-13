void __fastcall EventRaidDefeatedEffectInfo___ctor(
        EventRaidDefeatedEffectInfo_o *this,
        System_String_o *strInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Char_array *IsNullOrEmpty; // x0
  System_Char_array *v32; // x1
  int max_length; // w8
  System_Char_array *v34; // x20
  int i; // w24
  System_String_o *v36; // x21
  System_String_array *v37; // x22
  System_Collections_Generic_List_int__o *v38; // x21
  System_String_o *v39; // x22
  __int64 v40; // x8
  System_Char_array *v41; // x22
  unsigned __int64 v42; // x19
  System_String_o *v43; // x0
  __int64 v44; // x0
  EventRaidDefeatedEffectInfo_Fields *p_fields; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8E3A & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)strInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    byte_42E8E3A = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v24;
  p_fields = &this->fields;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  IsNullOrEmpty = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !IsNullOrEmpty )
    goto LABEL_35;
  v32 = IsNullOrEmpty;
  if ( !IsNullOrEmpty->max_length )
    goto LABEL_34;
  IsNullOrEmpty->m_Items[2] = 59;
  if ( !strInfo || (IsNullOrEmpty = (System_Char_array *)System_String__Split(strInfo, IsNullOrEmpty, 0LL)) == 0LL )
LABEL_35:
    sub_B5D69C(IsNullOrEmpty, v32);
  max_length = IsNullOrEmpty->max_length;
  v34 = IsNullOrEmpty;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_34;
      v36 = *(System_String_o **)&v34->m_Items[4 * i + 2];
      IsNullOrEmpty = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !IsNullOrEmpty )
        goto LABEL_35;
      v32 = IsNullOrEmpty;
      if ( !IsNullOrEmpty->max_length )
        goto LABEL_34;
      IsNullOrEmpty->m_Items[2] = 58;
      if ( !v36 )
        goto LABEL_35;
      v37 = System_String__Split(v36, IsNullOrEmpty, 0LL);
      result[1] = 0;
      v38 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v38,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      if ( !v37 )
        goto LABEL_35;
      if ( !v37->max_length )
        goto LABEL_34;
      IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v37->m_Items[0], &result[1], 0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
      {
        if ( v37->max_length <= 1 )
          goto LABEL_34;
        IsNullOrEmpty = (System_Char_array *)System_String__IsNullOrEmpty(v37->m_Items[1], 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
        {
          if ( v37->max_length <= 1 )
            goto LABEL_34;
          v39 = v37->m_Items[1];
          IsNullOrEmpty = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v32 = IsNullOrEmpty;
          if ( !IsNullOrEmpty->max_length )
            goto LABEL_34;
          IsNullOrEmpty->m_Items[2] = 44;
          if ( !v39 )
            goto LABEL_35;
          IsNullOrEmpty = (System_Char_array *)System_String__Split(v39, IsNullOrEmpty, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v40 = *(_QWORD *)&IsNullOrEmpty->max_length;
          v41 = IsNullOrEmpty;
          if ( (int)v40 >= 1 )
          {
            v42 = 0LL;
            while ( v42 < (unsigned int)v40 )
            {
              v43 = *(System_String_o **)&v41->m_Items[4 * v42 + 2];
              result[0] = 0;
              IsNullOrEmpty = (System_Char_array *)System_Int32__TryParse(v43, result, 0LL);
              if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
              {
                if ( !v38 )
                  goto LABEL_35;
                System_Collections_Generic_List_int___Add(
                  v38,
                  result[0],
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
              LODWORD(v40) = v41->max_length;
              if ( (__int64)++v42 >= (int)v40 )
                goto LABEL_30;
            }
LABEL_34:
            v44 = sub_B5D6C8(IsNullOrEmpty);
            sub_B5D668(v44, 0LL);
          }
        }
LABEL_30:
        IsNullOrEmpty = (System_Char_array *)p_fields->playedEffectList;
        if ( !p_fields->playedEffectList )
          goto LABEL_35;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)IsNullOrEmpty,
          result[1],
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v38,
          (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      max_length = v34->max_length;
    }
  }
}


System_String_o *__fastcall EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  System_Text_StringBuilder_o *v44; // x19
  __int64 v45; // x1
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  int v47; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v52; // x1
  char v53; // w20
  System_String_o *v54; // x1
  int v55; // w8
  int v56; // w21
  _WORD v58[24]; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v59; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v60; // [xsp+40h] [xbp-A0h] BYREF
  int key; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_42E8E3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v29, v30, v31);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1282/*";"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_707/*","*/, v41, v42, v43);
    byte_42E8E3B = 1;
  }
  key = 0;
  memset(&v60, 0, sizeof(v60));
  memset(&v62, 0, sizeof(v62));
  v59 = 0LL;
  v44 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v44, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v58,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)playedEffectList,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v62 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v58;
  v47 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v62,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v62.fields.current;
    key = (int)v62.fields.current.fields.key;
    v49 = System_Int32__ToString((int32_t)&key, 0LL);
    v50 = System_String__Concat_44577788(v49, (System_String_o *)StringLiteral_1245/*":"*/, 0LL);
    if ( !v44 )
      sub_B5D69C(v50, v50);
    appended = System_Text_StringBuilder__Append_42953744(v44, v50, 0LL);
    if ( !current.fields.value )
      sub_B5D69C(appended, v52);
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v58,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v53 = 0;
    v60 = *(System_Collections_Generic_List_Enumerator_int__o *)v58;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v60,
              (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      HIDWORD(v59) = v60.fields.current;
      if ( (v53 & 1) != 0 )
        System_Text_StringBuilder__Append_42953744(v44, (System_String_o *)StringLiteral_707/*","*/, 0LL);
      v54 = System_Int32__ToString((int32_t)&v59 + 4, 0LL);
      v53 = 1;
      System_Text_StringBuilder__Append_42953744(v44, v54, 0LL);
    }
    *(_DWORD *)&v58[2 * v47 + 20] = 149;
    LODWORD(v59) = v59 + 1;
    v47 = v59;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v60,
      (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v47 )
    {
      v55 = v47 - 1;
      if ( *(_DWORD *)&v58[2 * v47 + 18] == 149 )
      {
        --v47;
        LODWORD(v59) = v55;
      }
    }
    System_Text_StringBuilder__Append_42953744(v44, (System_String_o *)StringLiteral_1282/*";"*/, 0LL);
  }
  *(_DWORD *)&v58[2 * v47 + 20] = 189;
  LODWORD(v59) = v59 + 1;
  v56 = v59;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v62,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v56 && *(_DWORD *)&v58[2 * v56 + 18] == 189 )
    LODWORD(v59) = v56 - 1;
  if ( !v44 )
LABEL_24:
    sub_B5D69C(playedEffectList, v45);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v44->klass->vtable._3_ToString.method)(
                              v44,
                              v44->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}