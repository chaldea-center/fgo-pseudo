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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x2
  __int64 IsNullOrEmpty; // x0
  __int64 v24; // x2
  System_String_array *v25; // x1
  int max_length; // w8
  System_String_array *v27; // x20
  int i; // w24
  System_String_o *v29; // x21
  System_String_array *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_int__o *v35; // x21
  System_String_o *v36; // x22
  __int64 v37; // x8
  System_String_array *v38; // x22
  unsigned __int64 v39; // x19
  System_String_o *v40; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_fields; // [xsp+0h] [xbp-60h]
  int32_t result[2]; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FACC2 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, strInfo);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40FACC2 = 1;
  }
  *(_QWORD *)result = 0LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                   v11,
                                                                                                   v12,
                                                                                                   v13,
                                                                                                   v14);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v15,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  this->fields.playedEffectList = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v15;
  p_fields = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  IsNullOrEmpty = sub_B17014(char___TypeInfo, 1LL, v22);
  if ( !IsNullOrEmpty )
    goto LABEL_35;
  v25 = (System_String_array *)IsNullOrEmpty;
  if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
    goto LABEL_34;
  *(_WORD *)(IsNullOrEmpty + 32) = 59;
  if ( !strInfo
    || (IsNullOrEmpty = (__int64)System_String__Split(strInfo, (System_Char_array *)IsNullOrEmpty, 0LL)) == 0 )
  {
LABEL_35:
    sub_B170D4();
  }
  max_length = *(_DWORD *)(IsNullOrEmpty + 24);
  v27 = (System_String_array *)IsNullOrEmpty;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        goto LABEL_34;
      v29 = v27->m_Items[i];
      IsNullOrEmpty = sub_B17014(char___TypeInfo, 1LL, v24);
      if ( !IsNullOrEmpty )
        goto LABEL_35;
      v25 = (System_String_array *)IsNullOrEmpty;
      if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
        goto LABEL_34;
      *(_WORD *)(IsNullOrEmpty + 32) = 58;
      if ( !v29 )
        goto LABEL_35;
      v30 = System_String__Split(v29, (System_Char_array *)IsNullOrEmpty, 0LL);
      result[1] = 0;
      v35 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v31,
                                                        v32,
                                                        v33,
                                                        v34);
      System_Collections_Generic_List_int____ctor(
        v35,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v30 )
        goto LABEL_35;
      if ( !v30->max_length )
        goto LABEL_34;
      IsNullOrEmpty = System_Int32__TryParse(v30->m_Items[0], &result[1], 0LL);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        if ( v30->max_length <= 1 )
          goto LABEL_34;
        IsNullOrEmpty = System_String__IsNullOrEmpty(v30->m_Items[1], 0LL);
        if ( (IsNullOrEmpty & 1) == 0 )
        {
          if ( v30->max_length <= 1 )
            goto LABEL_34;
          v36 = v30->m_Items[1];
          IsNullOrEmpty = sub_B17014(char___TypeInfo, 1LL, v24);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v25 = (System_String_array *)IsNullOrEmpty;
          if ( !*(_DWORD *)(IsNullOrEmpty + 24) )
            goto LABEL_34;
          *(_WORD *)(IsNullOrEmpty + 32) = 44;
          if ( !v36 )
            goto LABEL_35;
          IsNullOrEmpty = (__int64)System_String__Split(v36, (System_Char_array *)IsNullOrEmpty, 0LL);
          if ( !IsNullOrEmpty )
            goto LABEL_35;
          v37 = *(_QWORD *)(IsNullOrEmpty + 24);
          v38 = (System_String_array *)IsNullOrEmpty;
          if ( (int)v37 >= 1 )
          {
            v39 = 0LL;
            while ( v39 < (unsigned int)v37 )
            {
              v40 = v38->m_Items[v39];
              result[0] = 0;
              IsNullOrEmpty = System_Int32__TryParse(v40, result, 0LL);
              if ( (IsNullOrEmpty & 1) != 0 )
              {
                if ( !v35 )
                  goto LABEL_35;
                System_Collections_Generic_List_int___Add(
                  v35,
                  result[0],
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
              }
              LODWORD(v37) = v38->max_length;
              if ( (__int64)++v39 >= (int)v37 )
                goto LABEL_30;
            }
LABEL_34:
            sub_B17100(IsNullOrEmpty, v25, v24);
            sub_B170A0();
          }
        }
LABEL_30:
        if ( !*p_fields )
          goto LABEL_35;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          *p_fields,
          result[1],
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v35,
          (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
      }
      max_length = v27->max_length;
    }
  }
}


System_String_o *__fastcall EventRaidDefeatedEffectInfo__ConvertToStringData(
        EventRaidDefeatedEffectInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x1
  __int64 v18; // x1
  System_Text_StringBuilder_o *v19; // x19
  struct System_Collections_Generic_Dictionary_int__List_int___o *playedEffectList; // x0
  int v21; // w25
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  char v25; // w20
  System_String_o *v26; // x1
  int v27; // w8
  int v28; // w21
  _WORD v30[24]; // [xsp+8h] [xbp-D8h] BYREF
  __int64 v31; // [xsp+38h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v32; // [xsp+40h] [xbp-A0h] BYREF
  int key; // [xsp+5Ch] [xbp-84h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+60h] [xbp-80h] BYREF

  if ( (byte_40FACC3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Key__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_int___get_Value__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v16);
    sub_B16FFC(&StringLiteral_1260/*";"*/, v17);
    sub_B16FFC(&StringLiteral_698/*","*/, v18);
    byte_40FACC3 = 1;
  }
  key = 0;
  memset(&v32, 0, sizeof(v32));
  memset(&v34, 0, sizeof(v34));
  v31 = 0LL;
  v19 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, method, v2, v3, v4);
  System_Text_StringBuilder___ctor(v19, 0LL);
  playedEffectList = this->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v30,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)playedEffectList,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___GetEnumerator__);
  v34 = *(System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v30;
  v21 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v34,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___MoveNext__) )
  {
    current = v34.fields.current;
    key = (int)v34.fields.current.fields.key;
    v23 = System_Int32__ToString((int32_t)&key, 0LL);
    v24 = System_String__Concat_43743732(v23, (System_String_o *)StringLiteral_1223/*":"*/, 0LL);
    if ( !v19 )
      sub_B170D4();
    System_Text_StringBuilder__Append_41914240(v19, v24, 0LL);
    if ( !current.fields.value )
      sub_B170D4();
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v30,
      (System_Collections_Generic_List_int__o *)current.fields.value,
      (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v25 = 0;
    v32 = *(System_Collections_Generic_List_Enumerator_int__o *)v30;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v32,
              (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      HIDWORD(v31) = v32.fields.current;
      if ( (v25 & 1) != 0 )
        System_Text_StringBuilder__Append_41914240(v19, (System_String_o *)StringLiteral_698/*","*/, 0LL);
      v26 = System_Int32__ToString((int32_t)&v31 + 4, 0LL);
      v25 = 1;
      System_Text_StringBuilder__Append_41914240(v19, v26, 0LL);
    }
    *(_DWORD *)&v30[2 * v21 + 20] = 149;
    LODWORD(v31) = v31 + 1;
    v21 = v31;
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v32,
      (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( v21 )
    {
      v27 = v21 - 1;
      if ( *(_DWORD *)&v30[2 * v21 + 18] == 149 )
      {
        --v21;
        LODWORD(v31) = v27;
      }
    }
    System_Text_StringBuilder__Append_41914240(v19, (System_String_o *)StringLiteral_1260/*";"*/, 0LL);
  }
  *(_DWORD *)&v30[2 * v21 + 20] = 189;
  LODWORD(v31) = v31 + 1;
  v28 = v31;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v34,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_int___Dispose__);
  if ( v28 && *(_DWORD *)&v30[2 * v28 + 18] == 189 )
    LODWORD(v31) = v28 - 1;
  if ( !v19 )
LABEL_24:
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v19->klass->vtable._3_ToString.method)(
                              v19,
                              v19->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
}