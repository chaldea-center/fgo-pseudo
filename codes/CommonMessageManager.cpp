void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_438756C & 1) == 0 )
  {
    sub_B775C4(&ScriptMessageManager_TypeInfo);
    byte_438756C = 1;
  }
  this->fields.playSpeed = 2;
  if ( (BYTE3(ScriptMessageManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
  }
  ScriptMessageManager___ctor((ScriptMessageManager_o *)this, 0LL);
}


System_String_array *__fastcall CommonMessageManager__AnalysParam(
        CommonMessageManager_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  int32_t m_stringLength; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_o *v6; // x22
  int32_t v7; // w26
  int32_t v8; // w1
  uint16_t Chars; // w0
  System_String_o *v10; // x0
  int v11; // w21
  System_String_o *v12; // x0
  System_String_o *v13; // x1
  int32_t size; // w8
  bool v15; // vf
  int v16; // w8
  int32_t v17; // w21
  System_String_o *v18; // x0
  WarBoardManager_TaskList_o *v19; // x2
  System_String_o *v20; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  int32_t v22; // w8
  int v23; // w8
  int32_t v24; // w8
  System_String_o *v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x1
  System_String_o *v27; // x1
  __int16 v29[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438756A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&StringLiteral_1533/*"="*/);
    sub_B775C4(&StringLiteral_82/*" "*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    sub_B775C4(&StringLiteral_298/*"\""*/);
    this = (CommonMessageManager_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438756A = 1;
  }
  v29[0] = 0;
  if ( !data )
    goto LABEL_49;
  m_stringLength = data->fields.m_stringLength;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( m_stringLength >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      Chars = System_String__get_Chars(data, v8, 0LL);
      v29[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars == 44 || Chars == 61 )
        {
          this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( !v5 )
            goto LABEL_49;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            size = v5->fields._size;
            v15 = __OFSUB__(size, 1);
            v16 = size - 1;
            if ( v16 < 0 == v15
              && System_String__op_Equality(
                   (System_String_o *)v5->fields._items->m_Items[v16],
                   (System_String_o *)StringLiteral_82/*" "*/,
                   0LL) )
            {
              v17 = v5->fields._size;
              v18 = System_Char__ToString((uint16_t)v29, 0LL);
              if ( v18 )
                v19 = (WarBoardManager_TaskList_o *)v18;
              else
                v19 = (WarBoardManager_TaskList_o *)StringLiteral_1/*""*/;
              System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v5,
                v17 - 1,
                v19,
                (const MethodInfo_3052FF0 *)Method_System_Collections_Generic_List_string__set_Item__);
              goto LABEL_41;
            }
            goto LABEL_37;
          }
          goto LABEL_28;
        }
      }
      else
      {
        if ( Chars == 32 )
        {
          this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( !v5 )
            goto LABEL_49;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v22 = v5->fields._size;
            v15 = __OFSUB__(v22, 1);
            v23 = v22 - 1;
            if ( v23 < 0 == v15 )
            {
              if ( System_String__op_Equality(
                     (System_String_o *)v5->fields._items->m_Items[v23],
                     (System_String_o *)StringLiteral_1533/*"="*/,
                     0LL) )
              {
                goto LABEL_41;
              }
              v24 = v5->fields._size;
              if ( !v24 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
              if ( System_String__op_Equality(
                     (System_String_o *)v5->fields._items->m_Items[v24 - 1],
                     (System_String_o *)StringLiteral_714/*","*/,
                     0LL) )
              {
                goto LABEL_41;
              }
            }
LABEL_37:
            v25 = System_Char__ToString((uint16_t)v29, 0LL);
            if ( v25 )
              v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25;
            else
              v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v26,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
            goto LABEL_41;
          }
LABEL_28:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          v20 = System_Char__ToString((uint16_t)v29, 0LL);
          if ( v20 )
            v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)v20;
          else
            v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v21,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          v6 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_41;
        }
        if ( Chars == 34 )
        {
          v10 = System_Char__ToString((uint16_t)v29, 0LL);
          v6 = System_String__Concat_44901936(v6, v10, 0LL);
          if ( v7 < m_stringLength )
          {
            do
            {
              v11 = v7 + 1;
              v29[0] = System_String__get_Chars(data, v7, 0LL);
              if ( v29[0] == 34 )
                break;
              v12 = System_Char__ToString((uint16_t)v29, 0LL);
              v6 = System_String__Concat_44901936(v6, v12, 0LL);
              ++v7;
            }
            while ( v11 < m_stringLength );
            v7 = v11;
          }
          v13 = (System_String_o *)StringLiteral_298/*"\""*/;
          goto LABEL_25;
        }
      }
      v13 = System_Char__ToString((uint16_t)v29, 0LL);
LABEL_25:
      v6 = System_String__Concat_44901936(v6, v13, 0LL);
LABEL_41:
      if ( v7 >= m_stringLength )
      {
        v27 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_44;
      }
    }
  }
  v27 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_44:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v6, v27, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_49:
    sub_B7769C(this, data);
  }
  if ( !v5 )
    goto LABEL_49;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
  System_Array_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array *v8; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_Generic_List_int__o *v11; // x20
  int max_length; // w8
  int32_t v13; // w22
  System_String_o *v14; // x28
  int32_t v15; // w24
  System_String_o *v16; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  System_String_o *v19; // x27
  System_String_o **v20; // x5
  System_String_o *v21; // x0
  bool v22; // w0
  System_String_o *v23; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x8
  int32_t v25; // w23
  struct System_String_array *executeDataList; // x8
  __int64 v27; // x0
  const MethodInfo *v28; // [xsp+0h] [xbp-80h]
  System_String_o *a; // [xsp+8h] [xbp-78h]
  int32_t lastMessageIndex; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+28h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v34; // 0:w1.4

  if ( (byte_4387568 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_B775C4(&StringLiteral_323/*"#"*/);
    sub_B775C4(&StringLiteral_895/*"//"*/);
    sub_B775C4(&StringLiteral_19645/*"i"*/);
    sub_B775C4(&StringLiteral_20493/*"k"*/);
    sub_B775C4(&StringLiteral_22052/*"q"*/);
    sub_B775C4(&StringLiteral_432/*"%"*/);
    sub_B775C4(&StringLiteral_452/*"&"*/);
    sub_B775C4(&StringLiteral_20639/*"line"*/);
    sub_B775C4(&StringLiteral_23076/*"talkStart"*/);
    sub_B775C4(&StringLiteral_19806/*"image"*/);
    sub_B775C4(&StringLiteral_16103/*"[r]"*/);
    sub_B775C4(&StringLiteral_23072/*"talkName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387568 = 1;
  }
  tagDataList = 0LL;
  lineDataList = 0LL;
  scriptDataList = 0LL;
  lastMessageIndex = 0;
  v5 = (System_Array_o *)sub_B775DC(char___TypeInfo, 5LL);
  v34.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v5, v34, 0LL);
  if ( !scriptData )
    goto LABEL_73;
  v8 = System_String__Split_44962720(scriptData, (System_Char_array *)v5, 1, 0LL);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  tagDataList = (System_Collections_Generic_List_string__o *)v9;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  scriptDataList = (System_Collections_Generic_List_string__o *)v10;
  v11 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  lineDataList = v11;
  lastMessageIndex = -1;
  if ( !v8 )
    goto LABEL_73;
  max_length = v8->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    a = (System_String_o *)StringLiteral_1/*""*/;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v13 >= (unsigned int)max_length )
        {
          v27 = sub_B776C8(v6);
          sub_B77668(v27, 0LL);
        }
        v14 = v8->m_Items[v13];
        v15 = v13;
        if ( !v14 )
          goto LABEL_73;
        ++v13;
        if ( v14->fields.m_stringLength >= 1 )
        {
          v16 = (System_String_o *)StringLiteral_1/*""*/;
          v6 = System_String__StartsWith(v14, (System_String_o *)StringLiteral_895/*"//"*/, 0LL);
          if ( (v6 & 1) == 0 )
          {
            v6 = System_String__StartsWith(v14, this->fields.codeCommentString, 0LL);
            if ( (v6 & 1) == 0 )
              break;
          }
        }
LABEL_29:
        max_length = v8->max_length;
        if ( v13 >= max_length )
          goto LABEL_61;
      }
      if ( !System_String__StartsWith(v14, this->fields.codeTalkString, 0LL) )
      {
        v6 = System_String__StartsWith(v14, this->fields.codeVoiceString, 0LL);
        if ( (v6 & 1) != 0 )
          goto LABEL_29;
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v20,
          v14,
          v13,
          v28);
        goto LABEL_17;
      }
      v17 = v10;
      v18 = v9;
      v19 = (System_String_o *)StringLiteral_23072/*"talkName"*/;
      v16 = System_String__Substring(v14, 1, 0LL);
      if ( !v19 )
      {
        v9 = v18;
        v10 = v17;
LABEL_17:
        v6 = System_String__op_Inequality(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( (v6 & 1) != 0 )
        {
          v6 = System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && (v6 & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_23076/*"talkStart"*/,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v10 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v11 )
              goto LABEL_73;
            System_Collections_Generic_List_int___Add(
              v11,
              v13,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              0LL,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          }
          else
          {
            if ( !v9 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v9,
              0LL,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v10 )
              goto LABEL_73;
          }
          lastMessageIndex = v10->fields._size;
          if ( !v16 )
            goto LABEL_73;
          v21 = System_String__Replace_44909172(
                  v16,
                  this->fields.codeReturnString,
                  (System_String_o *)StringLiteral_16103/*"[r]"*/,
                  0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v10,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v11 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v11,
            v13,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        goto LABEL_29;
      }
      v6 = System_String__op_Equality(v19, (System_String_o *)StringLiteral_20493/*"k"*/, 0LL);
      v13 = v15 + 1;
      if ( (v6 & 1) != 0
        || (v6 = System_String__op_Equality(v19, (System_String_o *)StringLiteral_22052/*"q"*/, 0LL), (v6 & 1) != 0) )
      {
        if ( (lastMessageIndex & 0x80000000) == 0 )
        {
          if ( !v18 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            0LL,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v17 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_16103/*"[r]"*/,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v11 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v11,
            v13,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          lastMessageIndex = -1;
          v6 = (__int64)v18;
          goto LABEL_58;
        }
      }
      else if ( System_String__op_Equality(v19, (System_String_o *)StringLiteral_23072/*"talkName"*/, 0LL) )
      {
        v22 = System_String__op_Equality(v19, (System_String_o *)StringLiteral_23072/*"talkName"*/, 0LL);
        v23 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v22 )
          v23 = v16;
        a = v23;
      }
      else if ( System_String__op_Equality(v19, (System_String_o *)StringLiteral_19645/*"i"*/, 0LL)
             || System_String__op_Equality(v19, (System_String_o *)StringLiteral_19806/*"image"*/, 0LL)
             || System_String__op_Equality(v19, (System_String_o *)StringLiteral_20639/*"line"*/, 0LL)
             || System_String__StartsWith(v19, (System_String_o *)StringLiteral_432/*"%"*/, 0LL)
             || System_String__StartsWith(v19, (System_String_o *)StringLiteral_452/*"&"*/, 0LL)
             || System_String__StartsWith(v19, (System_String_o *)StringLiteral_323/*"#"*/, 0LL) )
      {
        v6 = System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( (lastMessageIndex & 0x80000000) != 0 && (v6 & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v18,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_23076/*"talkStart"*/,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v17 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v11 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v11,
            v13,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          v24 = v17;
        }
        else
        {
          v24 = v17;
          if ( !v17 )
            goto LABEL_73;
        }
        lastMessageIndex = v24->fields._size;
      }
      v6 = (__int64)v18;
      if ( !v18 )
        goto LABEL_73;
LABEL_58:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      if ( !v17 )
        goto LABEL_73;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      if ( !v11 )
        goto LABEL_73;
      System_Collections_Generic_List_int___Add(
        v11,
        v13,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v8->max_length;
      v9 = v18;
      v10 = v17;
      if ( v13 >= max_length )
      {
LABEL_61:
        v25 = v15 + 1;
        goto LABEL_63;
      }
    }
  }
  v25 = 0;
LABEL_63:
  if ( (lastMessageIndex & 0x80000000) == 0 )
  {
    if ( v9 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        0LL,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v10 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_16103/*"[r]"*/,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v11 )
        {
          System_Collections_Generic_List_int___Add(
            v11,
            v25,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          goto LABEL_69;
        }
      }
    }
LABEL_73:
    sub_B7769C(v6, v7);
  }
  if ( !v9 )
    goto LABEL_73;
LABEL_69:
  this->fields.executeTagList = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                                (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v6 = sub_B77560(&this->fields.executeTagList);
  if ( !v10 )
    goto LABEL_73;
  this->fields.executeDataList = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                                 (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v6 = sub_B77560(&this->fields.executeDataList);
  if ( !v11 )
    goto LABEL_73;
  this->fields.executeLineList = System_Collections_Generic_List_int___ToArray(
                                   v11,
                                   (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v6 = sub_B77560(&this->fields.executeLineList);
  executeDataList = this->fields.executeDataList;
  if ( !executeDataList )
    goto LABEL_73;
  this->fields.executeIndexMax = *(_QWORD *)&executeDataList->max_length;
}


void __fastcall CommonMessageManager__AnalysText(
        CommonMessageManager_o *this,
        System_Collections_Generic_List_string__o **tagDataList,
        System_Collections_Generic_List_string__o **scriptDataList,
        System_Collections_Generic_List_int__o **lineDataList,
        int32_t *lastMessageIndex,
        System_String_o **talkName,
        System_String_o *analysData,
        int32_t line,
        const MethodInfo *method)
{
  int32_t m_stringLength; // w23
  System_String_o *v13; // x27
  const MethodInfo_3053298 **v14; // x24
  int32_t v15; // w19
  int32_t v16; // w1
  const MethodInfo_3053298 **v17; // x22
  uint16_t Chars; // w0
  int v19; // w24
  System_Collections_Generic_List_string__o *v20; // x28
  System_String_o *v21; // x27
  System_String_o *v22; // x28
  int v23; // w24
  System_String_o *v25; // x0
  int v26; // w26
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int v29; // w24
  System_String_o *v30; // x0
  __int64 *v31; // x8
  int32_t v32; // w8
  CommonMessageManager_o *v33; // x28
  System_String_o *v34; // x22
  System_String_o *v35; // x1
  __int64 *v36; // x8
  int32_t v37; // w8
  System_Collections_Generic_List_string__o **v38; // x27
  const MethodInfo_3053298 *v39; // x2
  __int64 *v40; // x8
  System_String_o *v41; // x1
  System_Collections_Generic_List_string__o *v42; // x21
  CommonMessageManager_o *v43; // [xsp+8h] [xbp-78h]
  CommonMessageManager_o **v44; // [xsp+18h] [xbp-68h]
  __int16 v47[2]; // [xsp+2Ch] [xbp-54h] BYREF

  v44 = (CommonMessageManager_o **)tagDataList;
  v43 = this;
  if ( (byte_4387569 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B775C4(&StringLiteral_17807/*"clear"*/);
    sub_B775C4(&StringLiteral_19175/*"font"*/);
    sub_B775C4(&StringLiteral_19016/*"f"*/);
    sub_B775C4(&StringLiteral_22687/*"speed"*/);
    sub_B775C4(&StringLiteral_20493/*"k"*/);
    sub_B775C4(&StringLiteral_22052/*"q"*/);
    sub_B775C4(&StringLiteral_23665/*"voiceStop"*/);
    sub_B775C4(&StringLiteral_17037/*"bgm"*/);
    sub_B775C4(&StringLiteral_17039/*"bgmStop"*/);
    sub_B775C4(&StringLiteral_23799/*"wt"*/);
    sub_B775C4(&StringLiteral_22404/*"seStop"*/);
    sub_B775C4(&StringLiteral_21850/*"page"*/);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    sub_B775C4(&StringLiteral_18709/*"end"*/);
    sub_B775C4(&StringLiteral_20477/*"jingle"*/);
    sub_B775C4(&StringLiteral_22398/*"se"*/);
    sub_B775C4(&StringLiteral_20576/*"l"*/);
    sub_B775C4(&StringLiteral_23659/*"voice"*/);
    sub_B775C4(&StringLiteral_23155/*"time "*/);
    sub_B775C4(&StringLiteral_19176/*"fontSize"*/);
    sub_B775C4(&StringLiteral_22402/*"seLoop"*/);
    sub_B775C4(&StringLiteral_298/*"\""*/);
    sub_B775C4(&StringLiteral_16103/*"[r]"*/);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_22342/*"s"*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    sub_B775C4(&StringLiteral_17025/*"betweenHeight"*/);
    sub_B775C4(&StringLiteral_20478/*"jingleStop"*/);
    sub_B775C4(&StringLiteral_22662/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_4387569 = 1;
  }
  v47[0] = 0;
  if ( !analysData )
    goto LABEL_156;
  m_stringLength = analysData->fields.m_stringLength;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( m_stringLength >= 1 )
  {
    v14 = (const MethodInfo_3053298 **)&Method_System_Collections_Generic_List_string__Add__;
    v15 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = v15;
        v17 = v14;
        ++v15;
        Chars = System_String__get_Chars(analysData, v16, 0LL);
        v19 = Chars;
        v47[0] = Chars;
        if ( Chars == 91 )
          break;
        v28 = System_Char__ToString((uint16_t)v47, 0LL);
        v13 = System_String__Concat_44901936(v13, v28, 0LL);
        if ( v19 == 34 )
        {
          if ( v15 < m_stringLength )
          {
            do
            {
              v29 = v15 + 1;
              v47[0] = System_String__get_Chars(analysData, v15, 0LL);
              if ( v47[0] == 34 )
                break;
              v30 = System_Char__ToString((uint16_t)v47, 0LL);
              v13 = System_String__Concat_44901936(v13, v30, 0LL);
              ++v15;
            }
            while ( v29 < m_stringLength );
            v15 = v29;
          }
          v14 = v17;
          v13 = System_String__Concat_44901936(v13, (System_String_o *)StringLiteral_298/*"\""*/, 0LL);
        }
        else
        {
          v14 = v17;
        }
        if ( v15 >= m_stringLength )
        {
          v41 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_148;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_156;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v44;
        if ( !*v44 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          0LL,
          *v17);
        if ( !v13 )
          goto LABEL_156;
        v20 = *scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_44909172(
                                           v13,
                                           v43->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16103/*"[r]"*/,
                                           0LL);
        if ( !v20 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          *v17);
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_156;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)this,
          line,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v21 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v15 >= m_stringLength )
      {
        v22 = 0LL;
      }
      else
      {
        v22 = 0LL;
        v23 = 0;
        LODWORD(tagDataList) = v15;
        do
        {
          v15 = (_DWORD)tagDataList + 1;
          this = (CommonMessageManager_o *)System_String__get_Chars(analysData, (int32_t)tagDataList, 0LL);
          v47[0] = (__int16)this;
          if ( (unsigned __int16)this == 91 )
          {
            ++v23;
          }
          else if ( (unsigned __int16)this == 93 )
          {
            if ( --v23 < 0 )
              break;
          }
          else if ( (unsigned __int16)this == 32 && v22 == 0LL )
          {
            v22 = v21;
          }
          v25 = System_Char__ToString((uint16_t)v47, 0LL);
          this = (CommonMessageManager_o *)System_String__Concat_44901936(v21, v25, 0LL);
          v21 = (System_String_o *)this;
          if ( v47[0] == 34 )
          {
            if ( v15 < m_stringLength )
            {
              do
              {
                v26 = v15 + 1;
                v47[0] = System_String__get_Chars(analysData, v15, 0LL);
                if ( v47[0] == 34 )
                  break;
                v27 = System_Char__ToString((uint16_t)v47, 0LL);
                v21 = System_String__Concat_44901936(v21, v27, 0LL);
                ++v15;
              }
              while ( v26 < m_stringLength );
              v15 = v26;
            }
            this = (CommonMessageManager_o *)System_String__Concat_44901936(
                                               v21,
                                               (System_String_o *)StringLiteral_298/*"\""*/,
                                               0LL);
            v21 = (System_String_o *)this;
          }
          tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)v15;
        }
        while ( v15 < m_stringLength );
      }
      if ( !v22 )
        v22 = v21;
      v14 = v17;
      if ( !v22 )
        goto LABEL_133;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash_28503548(v22, 0LL);
      if ( (unsigned int)this <= 0x7B80C780 )
        break;
      if ( (unsigned int)this > 0xA8F18501 )
      {
        if ( (unsigned int)this > 0xE90C310B )
        {
          if ( (unsigned int)this > 0xEF3A9228 )
          {
            if ( (_DWORD)this != -200523172 )
            {
              if ( (_DWORD)this != -166967934 )
                goto LABEL_133;
              v31 = (__int64 *)&StringLiteral_22342/*"s"*/;
              goto LABEL_114;
            }
            v40 = &StringLiteral_22052/*"q"*/;
          }
          else
          {
            if ( (_DWORD)this != -301188886 )
            {
              if ( (_DWORD)this != -281374168 )
                goto LABEL_133;
              v31 = &StringLiteral_20477/*"jingle"*/;
              goto LABEL_114;
            }
            v40 = &StringLiteral_20493/*"k"*/;
          }
          this = (CommonMessageManager_o *)System_String__op_Equality(v22, (System_String_o *)*v40, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_133;
          if ( (*lastMessageIndex & 0x80000000) == 0 )
            *lastMessageIndex = -1;
          this = *v44;
          if ( !*v44 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            0LL,
            *v17);
          this = (CommonMessageManager_o *)*scriptDataList;
          if ( !*scriptDataList )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_16103/*"[r]"*/,
            *v17);
          this = (CommonMessageManager_o *)*lineDataList;
          if ( !*lineDataList )
            goto LABEL_156;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            line,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          this = *v44;
          if ( !*v44 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            *v17);
          this = (CommonMessageManager_o *)*scriptDataList;
          if ( !*scriptDataList )
            goto LABEL_156;
          v39 = *v17;
          tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
          goto LABEL_138;
        }
        switch ( (_DWORD)this )
        {
          case 0xC73F3BA9:
            v31 = &StringLiteral_23665/*"voiceStop"*/;
            break;
          case 0xE30C2799:
            v31 = &StringLiteral_19016/*"f"*/;
            break;
          case 0xE90C310B:
            v31 = &StringLiteral_20576/*"l"*/;
            break;
          default:
            goto LABEL_133;
        }
LABEL_114:
        this = (CommonMessageManager_o *)System_String__op_Equality(v22, (System_String_o *)*v31, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_133;
        if ( !v21 )
          goto LABEL_156;
        tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v22->fields.m_stringLength + 1);
        v38 = (System_Collections_Generic_List_string__o **)(v21->fields.m_stringLength <= (int)tagDataList
                                                           ? StringLiteral_1/*""*/
                                                           : System_String__Substring(v21, (int32_t)tagDataList, 0LL));
        this = *v44;
        if ( !*v44 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          *v17);
        this = (CommonMessageManager_o *)*scriptDataList;
        if ( !*scriptDataList )
          goto LABEL_156;
        v39 = *v17;
        tagDataList = v38;
        goto LABEL_138;
      }
      if ( (unsigned int)this > 0x815DFA76 )
      {
        switch ( (_DWORD)this )
        {
          case 0x892E4CA0:
            v31 = &StringLiteral_23673/*"wait"*/;
            break;
          case 0x9859D490:
            v31 = &StringLiteral_17025/*"betweenHeight"*/;
            break;
          case 0xA8F18501:
            v31 = &StringLiteral_19176/*"fontSize"*/;
            break;
          default:
            goto LABEL_133;
        }
        goto LABEL_114;
      }
      if ( (_DWORD)this != -2128831035 )
      {
        if ( (_DWORD)this != -2124547466 )
        {
          if ( (_DWORD)this == 2140916217 )
          {
            v31 = &StringLiteral_23659/*"voice"*/;
            goto LABEL_114;
          }
LABEL_133:
          if ( !*scriptDataList )
            goto LABEL_156;
          *lastMessageIndex = (*scriptDataList)->fields._size;
          this = *v44;
          if ( !*v44 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            0LL,
            *v17);
          v33 = (CommonMessageManager_o *)*scriptDataList;
          this = (CommonMessageManager_o *)System_String__Concat_44904220(
                                             (System_String_o *)StringLiteral_15925/*"["*/,
                                             v21,
                                             (System_String_o *)StringLiteral_16162/*"]"*/,
                                             0LL);
          if ( !v33 )
            goto LABEL_156;
LABEL_136:
          tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_137:
          v39 = *v14;
          this = v33;
LABEL_138:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)tagDataList,
            v39);
          this = (CommonMessageManager_o *)*lineDataList;
          if ( !*lineDataList )
            goto LABEL_156;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            line,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          goto LABEL_140;
        }
        v36 = &StringLiteral_21850/*"page"*/;
LABEL_99:
        this = (CommonMessageManager_o *)System_String__op_Equality(v22, (System_String_o *)*v36, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_133;
        this = *v44;
        if ( !*v44 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
          *v17);
        if ( !v21 )
          goto LABEL_156;
        v37 = v22->fields.m_stringLength;
        v33 = (CommonMessageManager_o *)*scriptDataList;
        if ( v21->fields.m_stringLength <= v37 + 1 )
        {
          tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
          if ( !v33 )
            goto LABEL_156;
        }
        else
        {
          this = (CommonMessageManager_o *)System_String__Substring(v21, v37 + 1, 0LL);
          tagDataList = (System_Collections_Generic_List_string__o **)this;
          if ( !v33 )
            goto LABEL_156;
        }
        goto LABEL_137;
      }
      if ( v22->fields.m_stringLength )
        goto LABEL_133;
LABEL_140:
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v15 >= m_stringLength )
        goto LABEL_148;
    }
    if ( (unsigned int)this > 0x4B4794E6 )
    {
      if ( (unsigned int)this > 0x667B7330 )
      {
        switch ( (_DWORD)this )
        {
          case 0x6A8E75AA:
            v31 = &StringLiteral_18709/*"end"*/;
            break;
          case 0x6EE5B7E7:
            v31 = &StringLiteral_22662/*"soundStopAll"*/;
            break;
          case 0x7B80C780:
            v31 = &StringLiteral_22687/*"speed"*/;
            break;
          default:
            goto LABEL_133;
        }
      }
      else
      {
        switch ( (_DWORD)this )
        {
          case 0x5C6E1222:
            v36 = &StringLiteral_17807/*"clear"*/;
            goto LABEL_99;
          case 0x5DB2D891:
            v31 = &StringLiteral_17037/*"bgm"*/;
            break;
          case 0x667B7330:
            v31 = &StringLiteral_20478/*"jingleStop"*/;
            break;
          default:
            goto LABEL_133;
        }
      }
    }
    else if ( (unsigned int)this > 0x3B958991 )
    {
      switch ( (_DWORD)this )
      {
        case 0x3C520AA5:
          v31 = &StringLiteral_22398/*"se"*/;
          break;
        case 0x47410F2B:
          v31 = &StringLiteral_22402/*"seLoop"*/;
          break;
        case 0x4B4794E6:
          this = (CommonMessageManager_o *)System_String__op_Equality(v22, (System_String_o *)StringLiteral_23799/*"wt"*/, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_133;
          this = *v44;
          if ( !*v44 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_23673/*"wait"*/,
            *v17);
          if ( !v21 )
            goto LABEL_156;
          v32 = v22->fields.m_stringLength;
          v33 = (CommonMessageManager_o *)*scriptDataList;
          v34 = (System_String_o *)StringLiteral_23155/*"time "*/;
          v35 = v21->fields.m_stringLength <= v32 + 1
              ? (System_String_o *)StringLiteral_980/*"0"*/
              : System_String__Substring(v21, v32 + 1, 0LL);
          this = (CommonMessageManager_o *)System_String__Concat_44901936(v34, v35, 0LL);
          if ( !v33 )
            goto LABEL_156;
          goto LABEL_136;
        default:
          goto LABEL_133;
      }
    }
    else
    {
      switch ( (_DWORD)this )
      {
        case 0x274E1290:
          v31 = &StringLiteral_19175/*"font"*/;
          break;
        case 0x34A684A5:
          v31 = &StringLiteral_22404/*"seStop"*/;
          break;
        case 0x3B958991:
          v31 = &StringLiteral_17039/*"bgmStop"*/;
          goto LABEL_114;
        default:
          goto LABEL_133;
      }
    }
    goto LABEL_114;
  }
  v41 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_148:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v13, v41, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v44;
      if ( *v44 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          0LL,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v13 )
        {
          v42 = *scriptDataList;
          this = (CommonMessageManager_o *)System_String__Replace_44909172(
                                             v13,
                                             v43->fields.codeReturnString,
                                             (System_String_o *)StringLiteral_16103/*"[r]"*/,
                                             0LL);
          if ( v42 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
            this = (CommonMessageManager_o *)*lineDataList;
            if ( *lineDataList )
            {
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)this,
                line,
                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
              return;
            }
          }
        }
      }
    }
LABEL_156:
    sub_B7769C(this, tagDataList);
  }
}


void __fastcall CommonMessageManager__EndExecuteScript(CommonMessageManager_o *this, const MethodInfo *method)
{
  System_Action_o *callbackFunc; // x19
  struct System_Action_o **p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  if ( callbackFunc )
  {
    p_callbackFunc = &this->fields.callbackFunc;
    *p_callbackFunc = 0LL;
    sub_B77560(p_callbackFunc);
    System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4387566 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11805/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_B775C4(&StringLiteral_11814/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_B775C4(&StringLiteral_11808/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_B775C4(&StringLiteral_11813/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4387566 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this->fields.codeCommentString = LocalizationManager__Get((System_String_o *)StringLiteral_11805/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  sub_B77560(&this->fields.codeCommentString);
  this->fields.codeTalkString = LocalizationManager__Get((System_String_o *)StringLiteral_11813/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  sub_B77560(&this->fields.codeTalkString);
  this->fields.codeVoiceString = LocalizationManager__Get((System_String_o *)StringLiteral_11814/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  sub_B77560(&this->fields.codeVoiceString);
  this->fields.codeReturnString = LocalizationManager__Get((System_String_o *)StringLiteral_11808/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  sub_B77560(&this->fields.codeReturnString);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0LL);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetTalkNameBack((ScriptMessageCommonManager_o *)this, 0LL, 0LL);
  ScriptMessageCommonManager__InitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)this, 1, 0LL);
  this->fields.isDispLastTouchMark = 1;
}


void __fastcall CommonMessageManager__OnClickWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  System_Action_o *touchCallbackFunc; // x19

  ScriptMessageCommonManager__OnClickWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_B77560(&this->fields.touchCallbackFunc);
    System_Action__Invoke(touchCallbackFunc, 0LL);
  }
}


void __fastcall CommonMessageManager__OnPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  System_Action_o *touchCallbackFunc; // x19

  ScriptMessageCommonManager__OnPressWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_B77560(&this->fields.touchCallbackFunc);
    System_Action__Invoke(touchCallbackFunc, 0LL);
  }
}


bool __fastcall CommonMessageManager__ProcessScript(
        CommonMessageManager_o *this,
        float delta,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CommonMessageManager_o *v5; // x19
  int state; // w8
  System_String_o **p_waitType; // x20
  System_String_o **p_waitMessage; // x21
  __int64 executeIndex; // x8
  struct System_String_array *executeTagList; // x9
  struct System_String_array *executeDataList; // x10
  struct System_Int32_array *executeLineList; // x11
  System_String_o *v13; // x25
  System_String_o *v14; // x24
  System_String_array *v15; // x0
  System_String_array *v16; // x23
  __int64 *v17; // x8
  struct System_String_o **v18; // x0
  System_String_o *v19; // x23
  uint32_t v20; // w0
  __int64 *v21; // x8
  System_String_o **v22; // x8
  __int64 *v23; // x8
  System_String_o *v24; // x1
  int32_t playSpeed; // w8
  const MethodInfo *v26; // x2
  __int64 *v27; // x8
  __int64 *v28; // x8
  __int64 v29; // x9
  float v30; // s0
  ScriptMessageCommonManager_o *v31; // x0
  System_String_o *v32; // x1
  __int64 v33; // x9
  float v34; // s0
  ScriptMessageCommonManager_o *v35; // x0
  __int64 v36; // x9
  System_String_o *v37; // x1
  ScriptMessageCommonManager_o *v38; // x0
  System_String_o *v39; // x2
  _BOOL4 isBusy; // w20
  __int64 *v42; // x8
  __int64 v43; // x0
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_438756B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20900/*"messageOn"*/);
    sub_B775C4(&StringLiteral_17807/*"clear"*/);
    sub_B775C4(&StringLiteral_19175/*"font"*/);
    sub_B775C4(&StringLiteral_21854/*"page3"*/);
    sub_B775C4(&StringLiteral_20898/*"messageOff"*/);
    sub_B775C4(&StringLiteral_21853/*"page2"*/);
    sub_B775C4(&StringLiteral_19016/*"f"*/);
    sub_B775C4(&StringLiteral_22687/*"speed"*/);
    sub_B775C4(&StringLiteral_20493/*"k"*/);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_22052/*"q"*/);
    sub_B775C4(&StringLiteral_21860/*"parameter error"*/);
    sub_B775C4(&StringLiteral_23216/*"touch2"*/);
    sub_B775C4(&StringLiteral_21850/*"page"*/);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    sub_B775C4(&StringLiteral_21859/*"parameter be unnecessary"*/);
    sub_B775C4(&StringLiteral_18709/*"end"*/);
    sub_B775C4(&StringLiteral_20892/*"message2"*/);
    sub_B775C4(&StringLiteral_20576/*"l"*/);
    sub_B775C4(&StringLiteral_19176/*"fontSize"*/);
    sub_B775C4(&StringLiteral_20889/*"message"*/);
    sub_B775C4(&StringLiteral_23072/*"talkName"*/);
    sub_B775C4(&StringLiteral_23215/*"touch"*/);
    sub_B775C4(&StringLiteral_20893/*"message3"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_22342/*"s"*/);
    sub_B775C4(&StringLiteral_17025/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_B775C4(&StringLiteral_17809/*"clear2"*/);
    byte_438756B = 1;
  }
  state = v5->fields.state;
  if ( !state )
    return 0;
  p_waitType = &v5->fields.waitType;
  p_waitMessage = &v5->fields.waitMessage;
  p_waitTalkName = &v5->fields.waitTalkName;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( state != 4 )
      {
        if ( state != 3 )
          goto LABEL_175;
        executeIndex = v5->fields.executeIndex;
        if ( (int)executeIndex >= v5->fields.executeIndexMax )
        {
          CommonMessageManager__EndExecuteScript(v5, method);
          goto LABEL_175;
        }
        if ( v5->fields.playSpeed == 1 )
          goto LABEL_175;
        executeTagList = v5->fields.executeTagList;
        if ( !executeTagList )
          goto LABEL_191;
        if ( (unsigned int)executeIndex >= executeTagList->max_length )
          goto LABEL_190;
        executeDataList = v5->fields.executeDataList;
        if ( !executeDataList )
          goto LABEL_191;
        if ( (unsigned int)executeIndex >= executeDataList->max_length )
          goto LABEL_190;
        executeLineList = v5->fields.executeLineList;
        if ( !executeLineList )
LABEL_191:
          sub_B7769C(this, method);
        if ( (unsigned int)executeIndex >= executeLineList->max_length )
          goto LABEL_190;
        v13 = executeDataList->m_Items[executeIndex];
        v14 = executeTagList->m_Items[executeIndex];
        v15 = CommonMessageManager__AnalysParam(this, v13, v3);
        if ( !v14 )
        {
          if ( v5->fields.isBusy )
            goto LABEL_183;
          v5->fields.state = 4;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_20889/*"message"*/;
          sub_B77560(&v5->fields.waitType);
          v5->fields.waitMessage = v13;
          v18 = &v5->fields.waitMessage;
          goto LABEL_41;
        }
        v16 = v15;
        this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash_28503548(v14, 0LL);
        if ( (unsigned int)this <= 0x84F7AC69 )
        {
          if ( (unsigned int)this <= 0x5C6E1222 )
          {
            if ( (unsigned int)this <= 0x20BD548D )
            {
              if ( (_DWORD)this == 452920428 )
              {
                this = (CommonMessageManager_o *)System_String__op_Equality(
                                                   v14,
                                                   (System_String_o *)StringLiteral_23072/*"talkName"*/,
                                                   0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_42;
                v18 = &v5->fields.waitTalkName;
                *p_waitTalkName = v13;
                goto LABEL_41;
              }
              if ( (_DWORD)this != 549278861 )
                goto LABEL_42;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_20900/*"messageOn"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_42;
              if ( !v16 )
                goto LABEL_191;
              v17 = &StringLiteral_21860/*"parameter error"*/;
              if ( !*(_QWORD *)&v16->max_length )
              {
                ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
                ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
                v5->fields.state = 4;
                v5->fields.waitType = (struct System_String_o *)StringLiteral_20889/*"message"*/;
                sub_B77560(&v5->fields.waitType);
                v18 = &v5->fields.waitMessage;
                v5->fields.waitMessage = 0LL;
LABEL_41:
                this = (CommonMessageManager_o *)sub_B77560(v18);
                goto LABEL_42;
              }
LABEL_172:
              if ( *v17 )
              {
                v5->fields.state = 11;
                goto LABEL_175;
              }
              goto LABEL_42;
            }
            if ( (_DWORD)this != 659427984 )
            {
              if ( (_DWORD)this != 1550717474 )
                goto LABEL_42;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_17807/*"clear"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_42;
              if ( !v16 )
                goto LABEL_191;
              v17 = &StringLiteral_21859/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v16->max_length )
                goto LABEL_172;
              v5->fields.state = 4;
              v23 = &StringLiteral_17807/*"clear"*/;
              goto LABEL_157;
            }
            v28 = &StringLiteral_19175/*"font"*/;
LABEL_148:
            this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v28, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v16 )
              goto LABEL_191;
            v36 = *(_QWORD *)&v16->max_length;
            if ( (_DWORD)v36 == 1 )
            {
              v37 = v16->m_Items[0];
              v38 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              if ( (int)v36 >= 3 )
              {
                v37 = v16->m_Items[0];
                v39 = v16->m_Items[2];
                v38 = (ScriptMessageCommonManager_o *)v5;
                goto LABEL_170;
              }
              v17 = &StringLiteral_21860/*"parameter error"*/;
              if ( v36 )
                goto LABEL_172;
              v38 = (ScriptMessageCommonManager_o *)v5;
              v37 = 0LL;
            }
            v39 = 0LL;
LABEL_170:
            ScriptMessageCommonManager__SetFontSize(v38, v37, v39, 0LL);
            goto LABEL_42;
          }
          if ( (unsigned int)this > 0x7B80C780 )
          {
            if ( (_DWORD)this != -2124547466 )
            {
              if ( (_DWORD)this != -2064143255 )
                goto LABEL_42;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_20898/*"messageOff"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_42;
              if ( !v16 )
                goto LABEL_191;
              v17 = &StringLiteral_21860/*"parameter error"*/;
              if ( !*(_QWORD *)&v16->max_length )
              {
                ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
                ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
                goto LABEL_42;
              }
              goto LABEL_172;
            }
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_21850/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v16 )
              goto LABEL_191;
            v17 = &StringLiteral_21859/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v16->max_length )
              goto LABEL_172;
            v5->fields.state = 4;
            v23 = &StringLiteral_21850/*"page"*/;
            goto LABEL_157;
          }
          if ( (_DWORD)this == 1787721130 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_18709/*"end"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v16 )
              goto LABEL_191;
            v17 = &StringLiteral_21859/*"parameter be unnecessary"*/;
            if ( !*(_QWORD *)&v16->max_length )
            {
              CommonMessageManager__EndExecuteScript(v5, method);
              goto LABEL_42;
            }
            goto LABEL_172;
          }
          if ( (_DWORD)this != 2072037248 )
            goto LABEL_42;
          v22 = (System_String_o **)&StringLiteral_22687/*"speed"*/;
LABEL_106:
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, *v22, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_42;
          if ( !v16 )
            goto LABEL_191;
          v29 = *(_QWORD *)&v16->max_length;
          if ( (_DWORD)v29 == 1 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v16->m_Items[0],
                                               (System_String_o *)StringLiteral_762/*"-"*/,
                                               0LL);
            v30 = -1.0;
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v16->max_length )
                goto LABEL_190;
              v30 = System_Single__Parse(v16->m_Items[0], 0LL);
            }
            v31 = (ScriptMessageCommonManager_o *)v5;
          }
          else
          {
            v17 = &StringLiteral_21860/*"parameter error"*/;
            if ( v29 )
              goto LABEL_172;
            v31 = (ScriptMessageCommonManager_o *)v5;
            v30 = -1.0;
          }
          ScriptMessageCommonManager__SetSpeed(v31, v30, 0LL);
          goto LABEL_42;
        }
        if ( (unsigned int)this > 0xE30C2799 )
        {
          if ( (unsigned int)this > 0xEE0C38EA )
          {
            if ( (_DWORD)this == -200523172 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_22052/*"q"*/,
                                                 0LL);
              goto LABEL_42;
            }
            if ( (_DWORD)this != -166967934 )
            {
LABEL_42:
              ++v5->fields.executeIndex;
              goto LABEL_127;
            }
            v22 = (System_String_o **)&StringLiteral_22342/*"s"*/;
            goto LABEL_106;
          }
          if ( (_DWORD)this != -385076981 )
          {
            if ( (_DWORD)this != -301188886 )
              goto LABEL_42;
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_20493/*"k"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v16 )
              goto LABEL_191;
            v17 = &StringLiteral_21859/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v16->max_length )
              goto LABEL_172;
            v5->fields.state = 4;
            v23 = &StringLiteral_23215/*"touch"*/;
LABEL_157:
            v5->fields.waitType = (struct System_String_o *)*v23;
            goto LABEL_158;
          }
          v21 = &StringLiteral_20576/*"l"*/;
        }
        else
        {
          if ( (unsigned int)this > 0x9859D490 )
          {
            if ( (_DWORD)this == -1460566783 )
            {
              v28 = &StringLiteral_19176/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_42;
              v28 = &StringLiteral_19016/*"f"*/;
            }
            goto LABEL_148;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_23673/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            v5->fields.state = 4;
            if ( !v16 )
              goto LABEL_191;
            if ( (int)v16->max_length < 1 )
            {
              v17 = &StringLiteral_21860/*"parameter error"*/;
              goto LABEL_172;
            }
            *p_waitType = v16->m_Items[0];
LABEL_158:
            v18 = &v5->fields.waitType;
            goto LABEL_41;
          }
          if ( (_DWORD)this != -1738943344 )
            goto LABEL_42;
          v21 = &StringLiteral_17025/*"betweenHeight"*/;
        }
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v21, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_42;
        if ( !v16 )
          goto LABEL_191;
        v33 = *(_QWORD *)&v16->max_length;
        if ( (_DWORD)v33 == 1 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(
                                             v16->m_Items[0],
                                             (System_String_o *)StringLiteral_762/*"-"*/,
                                             0LL);
          v34 = -1.0;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v16->max_length )
            {
LABEL_190:
              v43 = sub_B776C8(this);
              sub_B77668(v43, 0LL);
            }
            v34 = System_Single__Parse(v16->m_Items[0], 0LL);
          }
          v35 = (ScriptMessageCommonManager_o *)v5;
        }
        else
        {
          v17 = &StringLiteral_21860/*"parameter error"*/;
          if ( v33 )
            goto LABEL_172;
          v35 = (ScriptMessageCommonManager_o *)v5;
          v34 = -1.0;
        }
        ScriptMessageCommonManager__SetBetweenLineHeight(v35, v34, 0LL);
        goto LABEL_42;
      }
      v19 = *p_waitType;
      if ( !*p_waitType )
        goto LABEL_175;
      v20 = PrivateImplementationDetails___ComputeStringHash_28503548(*p_waitType, 0LL);
      if ( v20 > 0x698989D8 )
        break;
      if ( v20 > 0xD841B5E )
      {
        if ( v20 == 619841764 )
        {
          if ( !System_String__op_Equality(v19, (System_String_o *)StringLiteral_20889/*"message"*/, 0LL) )
            goto LABEL_175;
          if ( !ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
          {
            if ( *p_waitTalkName )
              CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v26);
            v32 = *p_waitMessage;
            if ( !*p_waitMessage )
              v32 = (System_String_o *)StringLiteral_1/*""*/;
            ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v32, 0, 0, 0LL);
            playSpeed = v5->fields.playSpeed;
            v5->fields.isCancelInput = 0;
LABEL_118:
            if ( playSpeed == 3 )
              this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                                 (ScriptMessageCommonManager_o *)v5,
                                                 0,
                                                 0LL);
            goto LABEL_120;
          }
          if ( v5->fields.isBusy )
            goto LABEL_183;
          if ( v5->fields.isCancelInput )
            v5->fields.isCancelInput = 0;
          v27 = &StringLiteral_20892/*"message2"*/;
        }
        else
        {
          if ( v20 != 1550717474 )
          {
            if ( v20 == 1770621400 && System_String__op_Equality(v19, (System_String_o *)StringLiteral_23215/*"touch"*/, 0LL) )
            {
              if ( v5->fields.isBusy )
              {
LABEL_183:
                ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
                return !v5->fields.isBusy && v5->fields.state == 3;
              }
              ScriptMessageCommonManager__WaitNextTouch(
                (ScriptMessageCommonManager_o *)v5,
                v5->fields.isDispLastTouchMark,
                0LL);
              v42 = &StringLiteral_23216/*"touch2"*/;
              goto LABEL_189;
            }
            goto LABEL_175;
          }
          if ( !System_String__op_Equality(v19, (System_String_o *)StringLiteral_17807/*"clear"*/, 0LL) )
            goto LABEL_175;
          if ( v5->fields.isBusy )
            goto LABEL_183;
          if ( v5->fields.isCancelInput )
            v5->fields.isCancelInput = 0;
          else
            ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
          v27 = &StringLiteral_17809/*"clear2"*/;
        }
        goto LABEL_125;
      }
      if ( v20 == 256629 )
      {
        if ( !System_String__op_Equality(v19, (System_String_o *)StringLiteral_20893/*"message3"*/, 0LL) || v5->fields.isScroll )
          goto LABEL_175;
        v24 = *p_waitMessage;
        if ( !*p_waitMessage )
          v24 = (System_String_o *)StringLiteral_1/*""*/;
        ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v24, 0, 0, 0LL);
        playSpeed = v5->fields.playSpeed;
        goto LABEL_118;
      }
      if ( v20 != 226761566
        || !System_String__op_Equality(v19, (System_String_o *)StringLiteral_23216/*"touch2"*/, 0LL)
        || v5->fields.isWaitNextTouchRequest )
      {
        goto LABEL_175;
      }
      ScriptMessageCommonManager__ClearCount((ScriptMessageCommonManager_o *)v5, 0LL);
      v5->fields.isCancelInput = 1;
LABEL_120:
      state = 3;
      v5->fields.state = 3;
    }
    if ( v20 > 0x91466F30 )
      break;
    if ( v20 != -2124547466 )
    {
      if ( v20 != -1857654992
        || !System_String__op_Equality(v19, (System_String_o *)StringLiteral_17809/*"clear2"*/, 0LL)
        || v5->fields.isWaitNextTouchRequest )
      {
        goto LABEL_175;
      }
LABEL_87:
      ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
      goto LABEL_120;
    }
    if ( !System_String__op_Equality(v19, (System_String_o *)StringLiteral_21850/*"page"*/, 0LL) )
      goto LABEL_175;
    if ( v5->fields.isBusy )
      goto LABEL_183;
    if ( v5->fields.isCancelInput )
      v5->fields.isCancelInput = 0;
    else
      ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
    v27 = &StringLiteral_21853/*"page2"*/;
LABEL_125:
    *p_waitType = (System_String_o *)*v27;
LABEL_126:
    this = (CommonMessageManager_o *)sub_B77560(&v5->fields.waitType);
LABEL_127:
    state = v5->fields.state;
  }
  if ( v20 == -336528737 )
  {
    if ( !System_String__op_Equality(v19, (System_String_o *)StringLiteral_21854/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_175;
    goto LABEL_87;
  }
  if ( v20 == -16520990 )
  {
    if ( !System_String__op_Equality(v19, (System_String_o *)StringLiteral_20892/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_175;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    v5->fields.waitType = (struct System_String_o *)StringLiteral_20893/*"message3"*/;
    goto LABEL_126;
  }
  if ( v20 == -353306356
    && System_String__op_Equality(v19, (System_String_o *)StringLiteral_21853/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v42 = &StringLiteral_21854/*"page3"*/;
LABEL_189:
    v5->fields.waitType = (struct System_String_o *)*v42;
    sub_B77560(&v5->fields.waitType);
  }
LABEL_175:
  isBusy = v5->fields.isBusy;
  ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
  if ( !isBusy )
    return 0;
  return !v5->fields.isBusy && v5->fields.state == 3;
}


void __fastcall CommonMessageManager__Quit(CommonMessageManager_o *this, const MethodInfo *method)
{
  CommonMessageManager__EndExecuteScript(this, method);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0LL);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0LL);
}


void __fastcall CommonMessageManager__SetMessageBlock(
        CommonMessageManager_o *this,
        System_String_o *messageBlock,
        bool isDispLastTouchMark,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2

  ScriptMessageCommonManager__ResetScroll((ScriptMessageCommonManager_o *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_B77560(&this->fields.callbackFunc);
  CommonMessageManager__AnalysScript(this, messageBlock, v9);
  this->fields.executeIndex = 0;
  this->fields.isCancelInput = 0;
  this->fields.state = 3;
  this->fields.isDispLastTouchMark = isDispLastTouchMark;
}


void __fastcall CommonMessageManager__SetMessageSpeed(
        CommonMessageManager_o *this,
        int32_t playSpeed,
        const MethodInfo *method)
{
  this->fields.playSpeed = playSpeed;
}


void __fastcall CommonMessageManager__SetTalkName(
        CommonMessageManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t charaIndex; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *charaName; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *className; // [xsp+18h] [xbp-28h] BYREF
  System_String_o *imageName; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_4387567 & 1) == 0 )
  {
    sub_B775C4(&ScriptMessageLabel_TypeInfo);
    byte_4387567 = 1;
  }
  imageName = 0LL;
  charaName = 0LL;
  className = 0LL;
  charaIndex = 0;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  ScriptMessageLabel__GetTalkName(&imageName, &className, &charaName, &charaIndex, name, 0LL);
  ScriptMessageCommonManager__SetTalkName(
    (ScriptMessageCommonManager_o *)this,
    0LL,
    className,
    charaName,
    charaIndex,
    0LL);
}


void __fastcall CommonMessageManager__SetTouchCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  this->fields.touchCallbackFunc = callback;
  sub_B77560(&this->fields.touchCallbackFunc);
}


void __fastcall CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0LL); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}