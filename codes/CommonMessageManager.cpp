void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4183E7C & 1) == 0 )
  {
    sub_B2C35C(&ScriptMessageManager_TypeInfo, method);
    byte_4183E7C = 1;
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
  int32_t m_stringLength; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_String_o *v17; // x22
  int32_t v18; // w26
  int32_t v19; // w1
  uint16_t Chars; // w0
  System_String_o *v21; // x0
  int v22; // w21
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  int32_t size; // w8
  bool v26; // vf
  int v27; // w8
  int32_t v28; // w21
  System_String_o *v29; // x0
  WarBoardManager_TaskList_o *v30; // x2
  System_String_o *v31; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x1
  int32_t v33; // w8
  int v34; // w8
  int32_t v35; // w8
  System_String_o *v36; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x1
  System_String_o *v38; // x1
  __int16 v40[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4183E7A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__set_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1505/*"="*/, v10);
    sub_B2C35C(&StringLiteral_80/*" "*/, v11);
    sub_B2C35C(&StringLiteral_699/*","*/, v12);
    sub_B2C35C(&StringLiteral_288/*"\""*/, v13);
    this = (CommonMessageManager_o *)sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_4183E7A = 1;
  }
  v40[0] = 0;
  if ( !data )
    goto LABEL_49;
  m_stringLength = data->fields.m_stringLength;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( m_stringLength >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = v18++;
      Chars = System_String__get_Chars(data, v19, 0LL);
      v40[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars == 44 || Chars == 61 )
        {
          this = (CommonMessageManager_o *)System_String__op_Inequality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( !v16 )
            goto LABEL_49;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            size = v16->fields._size;
            v26 = __OFSUB__(size, 1);
            v27 = size - 1;
            if ( v27 < 0 == v26
              && System_String__op_Equality(
                   (System_String_o *)v16->fields._items->m_Items[v27],
                   (System_String_o *)StringLiteral_80/*" "*/,
                   0LL) )
            {
              v28 = v16->fields._size;
              v29 = System_Char__ToString((uint16_t)v40, 0LL);
              if ( v29 )
                v30 = (WarBoardManager_TaskList_o *)v29;
              else
                v30 = (WarBoardManager_TaskList_o *)StringLiteral_1/*""*/;
              System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16,
                v28 - 1,
                v30,
                (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_string__set_Item__);
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
          this = (CommonMessageManager_o *)System_String__op_Inequality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( !v16 )
            goto LABEL_49;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v33 = v16->fields._size;
            v26 = __OFSUB__(v33, 1);
            v34 = v33 - 1;
            if ( v34 < 0 == v26 )
            {
              if ( System_String__op_Equality(
                     (System_String_o *)v16->fields._items->m_Items[v34],
                     (System_String_o *)StringLiteral_1505/*"="*/,
                     0LL) )
              {
                goto LABEL_41;
              }
              v35 = v16->fields._size;
              if ( !v35 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( System_String__op_Equality(
                     (System_String_o *)v16->fields._items->m_Items[v35 - 1],
                     (System_String_o *)StringLiteral_699/*","*/,
                     0LL) )
              {
                goto LABEL_41;
              }
            }
LABEL_37:
            v36 = System_Char__ToString((uint16_t)v40, 0LL);
            if ( v36 )
              v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)v36;
            else
              v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v16,
              v37,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            goto LABEL_41;
          }
LABEL_28:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          v31 = System_Char__ToString((uint16_t)v40, 0LL);
          if ( v31 )
            v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)v31;
          else
            v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            v32,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          v17 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_41;
        }
        if ( Chars == 34 )
        {
          v21 = System_Char__ToString((uint16_t)v40, 0LL);
          v17 = System_String__Concat_44305532(v17, v21, 0LL);
          if ( v18 < m_stringLength )
          {
            do
            {
              v22 = v18 + 1;
              v40[0] = System_String__get_Chars(data, v18, 0LL);
              if ( v40[0] == 34 )
                break;
              v23 = System_Char__ToString((uint16_t)v40, 0LL);
              v17 = System_String__Concat_44305532(v17, v23, 0LL);
              ++v18;
            }
            while ( v22 < m_stringLength );
            v18 = v22;
          }
          v24 = (System_String_o *)StringLiteral_288/*"\""*/;
          goto LABEL_25;
        }
      }
      v24 = System_Char__ToString((uint16_t)v40, 0LL);
LABEL_25:
      v17 = System_String__Concat_44305532(v17, v24, 0LL);
LABEL_41:
      if ( v18 >= m_stringLength )
      {
        v38 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_44;
      }
    }
  }
  v38 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_44:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v17, v38, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v16 )
      return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_49:
    sub_B2C434(this, data);
  }
  if ( !v16 )
    goto LABEL_49;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v16,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  System_Array_o *v28; // x21
  _BOOL8 v29; // x0
  __int64 v30; // x1
  System_String_array *v31; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_Collections_Generic_List_int__o *v34; // x20
  int max_length; // w8
  int32_t v36; // w22
  System_String_o *v37; // x28
  int32_t v38; // w24
  System_String_o *v39; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x21
  System_String_o *v42; // x27
  System_String_o **v43; // x5
  System_String_o *v44; // x0
  bool v45; // w0
  System_String_o *v46; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x8
  int32_t v48; // w23
  struct System_String_array *v49; // x0
  struct System_String_array *v50; // x0
  struct System_Int32_array *v51; // x0
  struct System_String_array *executeDataList; // x8
  __int64 v53; // x0
  const MethodInfo *v54; // [xsp+0h] [xbp-80h]
  System_String_o *a; // [xsp+8h] [xbp-78h]
  int32_t lastMessageIndex; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+28h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v60; // 0:w1.4

  if ( (byte_4183E78 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, scriptData);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
      v14);
    sub_B2C35C(&StringLiteral_313/*"#"*/, v15);
    sub_B2C35C(&StringLiteral_875/*"//"*/, v16);
    sub_B2C35C(&StringLiteral_19254/*"i"*/, v17);
    sub_B2C35C(&StringLiteral_20084/*"k"*/, v18);
    sub_B2C35C(&StringLiteral_21596/*"q"*/, v19);
    sub_B2C35C(&StringLiteral_421/*"%"*/, v20);
    sub_B2C35C(&StringLiteral_441/*"&"*/, v21);
    sub_B2C35C(&StringLiteral_20228/*"line"*/, v22);
    sub_B2C35C(&StringLiteral_22599/*"talkStart"*/, v23);
    sub_B2C35C(&StringLiteral_19412/*"image"*/, v24);
    sub_B2C35C(&StringLiteral_15811/*"[r]"*/, v25);
    sub_B2C35C(&StringLiteral_22595/*"talkName"*/, v26);
    sub_B2C35C(&StringLiteral_1/*""*/, v27);
    byte_4183E78 = 1;
  }
  tagDataList = 0LL;
  lineDataList = 0LL;
  scriptDataList = 0LL;
  lastMessageIndex = 0;
  v28 = (System_Array_o *)sub_B2C374(char___TypeInfo, 5LL);
  v60.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v28, v60, 0LL);
  if ( !scriptData )
    goto LABEL_73;
  v31 = System_String__Split_44366316(scriptData, (System_Char_array *)v28, 1, 0LL);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  tagDataList = (System_Collections_Generic_List_string__o *)v32;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  scriptDataList = (System_Collections_Generic_List_string__o *)v33;
  v34 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v34;
  lastMessageIndex = -1;
  if ( !v31 )
    goto LABEL_73;
  max_length = v31->max_length;
  if ( max_length >= 1 )
  {
    v36 = 0;
    a = (System_String_o *)StringLiteral_1/*""*/;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v36 >= (unsigned int)max_length )
        {
          v53 = sub_B2C460(v29);
          sub_B2C400(v53, 0LL);
        }
        v37 = v31->m_Items[v36];
        v38 = v36;
        if ( !v37 )
          goto LABEL_73;
        ++v36;
        if ( v37->fields.m_stringLength >= 1 )
        {
          v39 = (System_String_o *)StringLiteral_1/*""*/;
          v29 = System_String__StartsWith(v37, (System_String_o *)StringLiteral_875/*"//"*/, 0LL);
          if ( !v29 )
          {
            v29 = System_String__StartsWith(v37, this->fields.codeCommentString, 0LL);
            if ( !v29 )
              break;
          }
        }
LABEL_29:
        max_length = v31->max_length;
        if ( v36 >= max_length )
          goto LABEL_61;
      }
      if ( !System_String__StartsWith(v37, this->fields.codeTalkString, 0LL) )
      {
        v29 = System_String__StartsWith(v37, this->fields.codeVoiceString, 0LL);
        if ( v29 )
          goto LABEL_29;
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v43,
          v37,
          v36,
          v54);
        goto LABEL_17;
      }
      v40 = v33;
      v41 = v32;
      v42 = (System_String_o *)StringLiteral_22595/*"talkName"*/;
      v39 = System_String__Substring(v37, 1, 0LL);
      if ( !v42 )
      {
        v32 = v41;
        v33 = v40;
LABEL_17:
        v29 = System_String__op_Inequality(v39, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( v29 )
        {
          v29 = System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && v29 )
          {
            if ( !v32 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_22599/*"talkStart"*/,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v33 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v33,
              (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v34 )
              goto LABEL_73;
            System_Collections_Generic_List_int___Add(
              v34,
              v36,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              0LL,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          }
          else
          {
            if ( !v32 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v32,
              0LL,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v33 )
              goto LABEL_73;
          }
          lastMessageIndex = v33->fields._size;
          if ( !v39 )
            goto LABEL_73;
          v44 = System_String__Replace_44312768(
                  v39,
                  this->fields.codeReturnString,
                  (System_String_o *)StringLiteral_15811/*"[r]"*/,
                  0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v34 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v34,
            v36,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        goto LABEL_29;
      }
      v29 = System_String__op_Equality(v42, (System_String_o *)StringLiteral_20084/*"k"*/, 0LL);
      v36 = v38 + 1;
      if ( v29 || (v29 = System_String__op_Equality(v42, (System_String_o *)StringLiteral_21596/*"q"*/, 0LL)) )
      {
        if ( (lastMessageIndex & 0x80000000) == 0 )
        {
          if ( !v41 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v41,
            0LL,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v40 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v40,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_15811/*"[r]"*/,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v34 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v34,
            v36,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          lastMessageIndex = -1;
          v29 = (_BOOL8)v41;
          goto LABEL_58;
        }
      }
      else if ( System_String__op_Equality(v42, (System_String_o *)StringLiteral_22595/*"talkName"*/, 0LL) )
      {
        v45 = System_String__op_Equality(v42, (System_String_o *)StringLiteral_22595/*"talkName"*/, 0LL);
        v46 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v45 )
          v46 = v39;
        a = v46;
      }
      else if ( System_String__op_Equality(v42, (System_String_o *)StringLiteral_19254/*"i"*/, 0LL)
             || System_String__op_Equality(v42, (System_String_o *)StringLiteral_19412/*"image"*/, 0LL)
             || System_String__op_Equality(v42, (System_String_o *)StringLiteral_20228/*"line"*/, 0LL)
             || System_String__StartsWith(v42, (System_String_o *)StringLiteral_421/*"%"*/, 0LL)
             || System_String__StartsWith(v42, (System_String_o *)StringLiteral_441/*"&"*/, 0LL)
             || System_String__StartsWith(v42, (System_String_o *)StringLiteral_313/*"#"*/, 0LL) )
      {
        v29 = System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( (lastMessageIndex & 0x80000000) != 0 && v29 )
        {
          if ( !v41 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v41,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_22599/*"talkStart"*/,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v40 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v40,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v34 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v34,
            v36,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          v47 = v40;
        }
        else
        {
          v47 = v40;
          if ( !v40 )
            goto LABEL_73;
        }
        lastMessageIndex = v47->fields._size;
      }
      v29 = (_BOOL8)v41;
      if ( !v41 )
        goto LABEL_73;
LABEL_58:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      if ( !v40 )
        goto LABEL_73;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v40,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      if ( !v34 )
        goto LABEL_73;
      System_Collections_Generic_List_int___Add(
        v34,
        v36,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v31->max_length;
      v32 = v41;
      v33 = v40;
      if ( v36 >= max_length )
      {
LABEL_61:
        v48 = v38 + 1;
        goto LABEL_63;
      }
    }
  }
  v48 = 0;
LABEL_63:
  if ( (lastMessageIndex & 0x80000000) == 0 )
  {
    if ( v32 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v32,
        0LL,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v33 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v33,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_15811/*"[r]"*/,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v34 )
        {
          System_Collections_Generic_List_int___Add(
            v34,
            v48,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          goto LABEL_69;
        }
      }
    }
LABEL_73:
    sub_B2C434(v29, v30);
  }
  if ( !v32 )
    goto LABEL_73;
LABEL_69:
  v49 = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v49;
  sub_B2C2F8(&this->fields.executeTagList, v49);
  if ( !v33 )
    goto LABEL_73;
  v50 = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeDataList = v50;
  sub_B2C2F8(&this->fields.executeDataList, v50);
  if ( !v34 )
    goto LABEL_73;
  v51 = System_Collections_Generic_List_int___ToArray(
          v34,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.executeLineList = v51;
  sub_B2C2F8(&this->fields.executeLineList, v51);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  int32_t m_stringLength; // w23
  System_String_o *v46; // x27
  const MethodInfo_2EF4460 **v47; // x24
  int32_t v48; // w19
  int32_t v49; // w1
  const MethodInfo_2EF4460 **v50; // x22
  uint16_t Chars; // w0
  int v52; // w24
  System_Collections_Generic_List_string__o *v53; // x28
  System_String_o *v54; // x27
  System_String_o *v55; // x28
  int v56; // w24
  System_String_o *v58; // x0
  int v59; // w26
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  int v62; // w24
  System_String_o *v63; // x0
  __int64 *v64; // x8
  int32_t v65; // w8
  CommonMessageManager_o *v66; // x28
  System_String_o *v67; // x22
  System_String_o *v68; // x1
  __int64 *v69; // x8
  int32_t v70; // w8
  System_Collections_Generic_List_string__o **v71; // x27
  const MethodInfo_2EF4460 *v72; // x2
  __int64 *v73; // x8
  System_String_o *v74; // x1
  System_Collections_Generic_List_string__o *v75; // x21
  CommonMessageManager_o *v76; // [xsp+8h] [xbp-78h]
  CommonMessageManager_o **v77; // [xsp+18h] [xbp-68h]
  __int16 v80[2]; // [xsp+2Ch] [xbp-54h] BYREF

  v77 = (CommonMessageManager_o **)tagDataList;
  v76 = this;
  if ( (byte_4183E79 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, tagDataList);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v13);
    sub_B2C35C(&StringLiteral_17458/*"clear"*/, v14);
    sub_B2C35C(&StringLiteral_18799/*"font"*/, v15);
    sub_B2C35C(&StringLiteral_18645/*"f"*/, v16);
    sub_B2C35C(&StringLiteral_22214/*"speed"*/, v17);
    sub_B2C35C(&StringLiteral_20084/*"k"*/, v18);
    sub_B2C35C(&StringLiteral_21596/*"q"*/, v19);
    sub_B2C35C(&StringLiteral_23182/*"voiceStop"*/, v20);
    sub_B2C35C(&StringLiteral_16705/*"bgm"*/, v21);
    sub_B2C35C(&StringLiteral_16707/*"bgmStop"*/, v22);
    sub_B2C35C(&StringLiteral_23314/*"wt"*/, v23);
    sub_B2C35C(&StringLiteral_21936/*"seStop"*/, v24);
    sub_B2C35C(&StringLiteral_21406/*"page"*/, v25);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v26);
    sub_B2C35C(&StringLiteral_18342/*"end"*/, v27);
    sub_B2C35C(&StringLiteral_20068/*"jingle"*/, v28);
    sub_B2C35C(&StringLiteral_21930/*"se"*/, v29);
    sub_B2C35C(&StringLiteral_20166/*"l"*/, v30);
    sub_B2C35C(&StringLiteral_23177/*"voice"*/, v31);
    sub_B2C35C(&StringLiteral_22678/*"time "*/, v32);
    sub_B2C35C(&StringLiteral_18800/*"fontSize"*/, v33);
    sub_B2C35C(&StringLiteral_21934/*"seLoop"*/, v34);
    sub_B2C35C(&StringLiteral_288/*"\""*/, v35);
    sub_B2C35C(&StringLiteral_15811/*"[r]"*/, v36);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v37);
    sub_B2C35C(&StringLiteral_1/*""*/, v38);
    sub_B2C35C(&StringLiteral_21875/*"s"*/, v39);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v40);
    sub_B2C35C(&StringLiteral_16693/*"betweenHeight"*/, v41);
    sub_B2C35C(&StringLiteral_20069/*"jingleStop"*/, v42);
    sub_B2C35C(&StringLiteral_22189/*"soundStopAll"*/, v43);
    this = (CommonMessageManager_o *)sub_B2C35C(&StringLiteral_953/*"0"*/, v44);
    byte_4183E79 = 1;
  }
  v80[0] = 0;
  if ( !analysData )
    goto LABEL_156;
  m_stringLength = analysData->fields.m_stringLength;
  v46 = (System_String_o *)StringLiteral_1/*""*/;
  if ( m_stringLength >= 1 )
  {
    v47 = (const MethodInfo_2EF4460 **)&Method_System_Collections_Generic_List_string__Add__;
    v48 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v49 = v48;
        v50 = v47;
        ++v48;
        Chars = System_String__get_Chars(analysData, v49, 0LL);
        v52 = Chars;
        v80[0] = Chars;
        if ( Chars == 91 )
          break;
        v61 = System_Char__ToString((uint16_t)v80, 0LL);
        v46 = System_String__Concat_44305532(v46, v61, 0LL);
        if ( v52 == 34 )
        {
          if ( v48 < m_stringLength )
          {
            do
            {
              v62 = v48 + 1;
              v80[0] = System_String__get_Chars(analysData, v48, 0LL);
              if ( v80[0] == 34 )
                break;
              v63 = System_Char__ToString((uint16_t)v80, 0LL);
              v46 = System_String__Concat_44305532(v46, v63, 0LL);
              ++v48;
            }
            while ( v62 < m_stringLength );
            v48 = v62;
          }
          v47 = v50;
          v46 = System_String__Concat_44305532(v46, (System_String_o *)StringLiteral_288/*"\""*/, 0LL);
        }
        else
        {
          v47 = v50;
        }
        if ( v48 >= m_stringLength )
        {
          v74 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_148;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v46, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_156;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v77;
        if ( !*v77 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          0LL,
          *v50);
        if ( !v46 )
          goto LABEL_156;
        v53 = *scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_44312768(
                                           v46,
                                           v76->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_15811/*"[r]"*/,
                                           0LL);
        if ( !v53 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          *v50);
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_156;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)this,
          line,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v54 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v48 >= m_stringLength )
      {
        v55 = 0LL;
      }
      else
      {
        v55 = 0LL;
        v56 = 0;
        LODWORD(tagDataList) = v48;
        do
        {
          v48 = (_DWORD)tagDataList + 1;
          this = (CommonMessageManager_o *)System_String__get_Chars(analysData, (int32_t)tagDataList, 0LL);
          v80[0] = (__int16)this;
          if ( (unsigned __int16)this == 91 )
          {
            ++v56;
          }
          else if ( (unsigned __int16)this == 93 )
          {
            if ( --v56 < 0 )
              break;
          }
          else if ( (unsigned __int16)this == 32 && v55 == 0LL )
          {
            v55 = v54;
          }
          v58 = System_Char__ToString((uint16_t)v80, 0LL);
          this = (CommonMessageManager_o *)System_String__Concat_44305532(v54, v58, 0LL);
          v54 = (System_String_o *)this;
          if ( v80[0] == 34 )
          {
            if ( v48 < m_stringLength )
            {
              do
              {
                v59 = v48 + 1;
                v80[0] = System_String__get_Chars(analysData, v48, 0LL);
                if ( v80[0] == 34 )
                  break;
                v60 = System_Char__ToString((uint16_t)v80, 0LL);
                v54 = System_String__Concat_44305532(v54, v60, 0LL);
                ++v48;
              }
              while ( v59 < m_stringLength );
              v48 = v59;
            }
            this = (CommonMessageManager_o *)System_String__Concat_44305532(
                                               v54,
                                               (System_String_o *)StringLiteral_288/*"\""*/,
                                               0LL);
            v54 = (System_String_o *)this;
          }
          tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)v48;
        }
        while ( v48 < m_stringLength );
      }
      if ( !v55 )
        v55 = v54;
      v47 = v50;
      if ( !v55 )
        goto LABEL_133;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash_21099092(v55, 0LL);
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
              v64 = (__int64 *)&StringLiteral_21875/*"s"*/;
              goto LABEL_114;
            }
            v73 = &StringLiteral_21596/*"q"*/;
          }
          else
          {
            if ( (_DWORD)this != -301188886 )
            {
              if ( (_DWORD)this != -281374168 )
                goto LABEL_133;
              v64 = &StringLiteral_20068/*"jingle"*/;
              goto LABEL_114;
            }
            v73 = &StringLiteral_20084/*"k"*/;
          }
          this = (CommonMessageManager_o *)System_String__op_Equality(v55, (System_String_o *)*v73, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_133;
          if ( (*lastMessageIndex & 0x80000000) == 0 )
            *lastMessageIndex = -1;
          this = *v77;
          if ( !*v77 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            0LL,
            *v50);
          this = (CommonMessageManager_o *)*scriptDataList;
          if ( !*scriptDataList )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_15811/*"[r]"*/,
            *v50);
          this = (CommonMessageManager_o *)*lineDataList;
          if ( !*lineDataList )
            goto LABEL_156;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            line,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          this = *v77;
          if ( !*v77 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
            *v50);
          this = (CommonMessageManager_o *)*scriptDataList;
          if ( !*scriptDataList )
            goto LABEL_156;
          v72 = *v50;
          tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
          goto LABEL_138;
        }
        switch ( (_DWORD)this )
        {
          case 0xC73F3BA9:
            v64 = &StringLiteral_23182/*"voiceStop"*/;
            break;
          case 0xE30C2799:
            v64 = &StringLiteral_18645/*"f"*/;
            break;
          case 0xE90C310B:
            v64 = &StringLiteral_20166/*"l"*/;
            break;
          default:
            goto LABEL_133;
        }
LABEL_114:
        this = (CommonMessageManager_o *)System_String__op_Equality(v55, (System_String_o *)*v64, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_133;
        if ( !v54 )
          goto LABEL_156;
        tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v55->fields.m_stringLength + 1);
        v71 = (System_Collections_Generic_List_string__o **)(v54->fields.m_stringLength <= (int)tagDataList
                                                           ? StringLiteral_1/*""*/
                                                           : System_String__Substring(v54, (int32_t)tagDataList, 0LL));
        this = *v77;
        if ( !*v77 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
          *v50);
        this = (CommonMessageManager_o *)*scriptDataList;
        if ( !*scriptDataList )
          goto LABEL_156;
        v72 = *v50;
        tagDataList = v71;
        goto LABEL_138;
      }
      if ( (unsigned int)this > 0x815DFA76 )
      {
        switch ( (_DWORD)this )
        {
          case 0x892E4CA0:
            v64 = &StringLiteral_23190/*"wait"*/;
            break;
          case 0x9859D490:
            v64 = &StringLiteral_16693/*"betweenHeight"*/;
            break;
          case 0xA8F18501:
            v64 = &StringLiteral_18800/*"fontSize"*/;
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
            v64 = &StringLiteral_23177/*"voice"*/;
            goto LABEL_114;
          }
LABEL_133:
          if ( !*scriptDataList )
            goto LABEL_156;
          *lastMessageIndex = (*scriptDataList)->fields._size;
          this = *v77;
          if ( !*v77 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            0LL,
            *v50);
          v66 = (CommonMessageManager_o *)*scriptDataList;
          this = (CommonMessageManager_o *)System_String__Concat_44307816(
                                             (System_String_o *)StringLiteral_15634/*"["*/,
                                             v54,
                                             (System_String_o *)StringLiteral_15870/*"]"*/,
                                             0LL);
          if ( !v66 )
            goto LABEL_156;
LABEL_136:
          tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_137:
          v72 = *v47;
          this = v66;
LABEL_138:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)tagDataList,
            v72);
          this = (CommonMessageManager_o *)*lineDataList;
          if ( !*lineDataList )
            goto LABEL_156;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            line,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          goto LABEL_140;
        }
        v69 = &StringLiteral_21406/*"page"*/;
LABEL_99:
        this = (CommonMessageManager_o *)System_String__op_Equality(v55, (System_String_o *)*v69, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_133;
        this = *v77;
        if ( !*v77 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
          *v50);
        if ( !v54 )
          goto LABEL_156;
        v70 = v55->fields.m_stringLength;
        v66 = (CommonMessageManager_o *)*scriptDataList;
        if ( v54->fields.m_stringLength <= v70 + 1 )
        {
          tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
          if ( !v66 )
            goto LABEL_156;
        }
        else
        {
          this = (CommonMessageManager_o *)System_String__Substring(v54, v70 + 1, 0LL);
          tagDataList = (System_Collections_Generic_List_string__o **)this;
          if ( !v66 )
            goto LABEL_156;
        }
        goto LABEL_137;
      }
      if ( v55->fields.m_stringLength )
        goto LABEL_133;
LABEL_140:
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      v74 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v48 >= m_stringLength )
        goto LABEL_148;
    }
    if ( (unsigned int)this > 0x4B4794E6 )
    {
      if ( (unsigned int)this > 0x667B7330 )
      {
        switch ( (_DWORD)this )
        {
          case 0x6A8E75AA:
            v64 = &StringLiteral_18342/*"end"*/;
            break;
          case 0x6EE5B7E7:
            v64 = &StringLiteral_22189/*"soundStopAll"*/;
            break;
          case 0x7B80C780:
            v64 = &StringLiteral_22214/*"speed"*/;
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
            v69 = &StringLiteral_17458/*"clear"*/;
            goto LABEL_99;
          case 0x5DB2D891:
            v64 = &StringLiteral_16705/*"bgm"*/;
            break;
          case 0x667B7330:
            v64 = &StringLiteral_20069/*"jingleStop"*/;
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
          v64 = &StringLiteral_21930/*"se"*/;
          break;
        case 0x47410F2B:
          v64 = &StringLiteral_21934/*"seLoop"*/;
          break;
        case 0x4B4794E6:
          this = (CommonMessageManager_o *)System_String__op_Equality(v55, (System_String_o *)StringLiteral_23314/*"wt"*/, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_133;
          this = *v77;
          if ( !*v77 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_23190/*"wait"*/,
            *v50);
          if ( !v54 )
            goto LABEL_156;
          v65 = v55->fields.m_stringLength;
          v66 = (CommonMessageManager_o *)*scriptDataList;
          v67 = (System_String_o *)StringLiteral_22678/*"time "*/;
          v68 = v54->fields.m_stringLength <= v65 + 1
              ? (System_String_o *)StringLiteral_953/*"0"*/
              : System_String__Substring(v54, v65 + 1, 0LL);
          this = (CommonMessageManager_o *)System_String__Concat_44305532(v67, v68, 0LL);
          if ( !v66 )
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
          v64 = &StringLiteral_18799/*"font"*/;
          break;
        case 0x34A684A5:
          v64 = &StringLiteral_21936/*"seStop"*/;
          break;
        case 0x3B958991:
          v64 = &StringLiteral_16707/*"bgmStop"*/;
          goto LABEL_114;
        default:
          goto LABEL_133;
      }
    }
    goto LABEL_114;
  }
  v74 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_148:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v46, v74, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v77;
      if ( *v77 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          0LL,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v46 )
        {
          v75 = *scriptDataList;
          this = (CommonMessageManager_o *)System_String__Replace_44312768(
                                             v46,
                                             v76->fields.codeReturnString,
                                             (System_String_o *)StringLiteral_15811/*"[r]"*/,
                                             0LL);
          if ( v75 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v75,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
            this = (CommonMessageManager_o *)*lineDataList;
            if ( *lineDataList )
            {
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)this,
                line,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              return;
            }
          }
        }
      }
    }
LABEL_156:
    sub_B2C434(this, tagDataList);
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
    sub_B2C2F8(p_callbackFunc, 0LL);
    System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_String_o *v7; // x0
  struct System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  struct System_String_o *v10; // x0

  if ( (byte_4183E76 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_11589/*"SCRIPT_ACTION_CODE_COMMENT"*/, v3);
    sub_B2C35C(&StringLiteral_11598/*"SCRIPT_ACTION_CODE_VOICE"*/, v4);
    sub_B2C35C(&StringLiteral_11592/*"SCRIPT_ACTION_CODE_RETURN"*/, v5);
    sub_B2C35C(&StringLiteral_11597/*"SCRIPT_ACTION_CODE_TALK"*/, v6);
    byte_4183E76 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11589/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  this->fields.codeCommentString = v7;
  sub_B2C2F8(&this->fields.codeCommentString, v7);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11597/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  this->fields.codeTalkString = v8;
  sub_B2C2F8(&this->fields.codeTalkString, v8);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11598/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  this->fields.codeVoiceString = v9;
  sub_B2C2F8(&this->fields.codeVoiceString, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_11592/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  this->fields.codeReturnString = v10;
  sub_B2C2F8(&this->fields.codeReturnString, v10);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0LL);
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
    sub_B2C2F8(&this->fields.touchCallbackFunc, 0LL);
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
    sub_B2C2F8(&this->fields.touchCallbackFunc, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  int state; // w8
  System_String_o **p_waitType; // x20
  System_String_o **p_waitMessage; // x21
  __int64 executeIndex; // x8
  struct System_String_array *executeTagList; // x9
  struct System_String_array *executeDataList; // x10
  struct System_Int32_array *executeLineList; // x11
  System_String_o *v40; // x25
  System_String_o *v41; // x24
  System_String_array *v42; // x0
  System_String_array *v43; // x23
  __int64 *v44; // x8
  __int64 v45; // x1
  struct System_String_o **v46; // x0
  System_String_o *v47; // x1
  System_String_o *v48; // x23
  uint32_t v49; // w0
  __int64 v50; // x1
  __int64 *v51; // x8
  __int64 v52; // x1
  System_String_o **v53; // x8
  __int64 *v54; // x8
  System_String_o *v55; // x1
  int32_t playSpeed; // w8
  const MethodInfo *v57; // x2
  __int64 *v58; // x8
  __int64 *v59; // x8
  __int64 v60; // x9
  float v61; // s0
  ScriptMessageCommonManager_o *v62; // x0
  System_String_o *v63; // x1
  __int64 v64; // x9
  float v65; // s0
  ScriptMessageCommonManager_o *v66; // x0
  __int64 v67; // x9
  System_String_o *v68; // x1
  ScriptMessageCommonManager_o *v69; // x0
  System_String_o *v70; // x2
  _BOOL4 isBusy; // w20
  __int64 *v73; // x8
  __int64 v74; // x1
  __int64 v75; // x0
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4183E7B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20482/*"messageOn"*/, method);
    sub_B2C35C(&StringLiteral_17458/*"clear"*/, v6);
    sub_B2C35C(&StringLiteral_18799/*"font"*/, v7);
    sub_B2C35C(&StringLiteral_21410/*"page3"*/, v8);
    sub_B2C35C(&StringLiteral_20480/*"messageOff"*/, v9);
    sub_B2C35C(&StringLiteral_21409/*"page2"*/, v10);
    sub_B2C35C(&StringLiteral_18645/*"f"*/, v11);
    sub_B2C35C(&StringLiteral_22214/*"speed"*/, v12);
    sub_B2C35C(&StringLiteral_20084/*"k"*/, v13);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v14);
    sub_B2C35C(&StringLiteral_21596/*"q"*/, v15);
    sub_B2C35C(&StringLiteral_21416/*"parameter error"*/, v16);
    sub_B2C35C(&StringLiteral_22738/*"touch2"*/, v17);
    sub_B2C35C(&StringLiteral_21406/*"page"*/, v18);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v19);
    sub_B2C35C(&StringLiteral_21415/*"parameter be unnecessary"*/, v20);
    sub_B2C35C(&StringLiteral_18342/*"end"*/, v21);
    sub_B2C35C(&StringLiteral_20476/*"message2"*/, v22);
    sub_B2C35C(&StringLiteral_20166/*"l"*/, v23);
    sub_B2C35C(&StringLiteral_18800/*"fontSize"*/, v24);
    sub_B2C35C(&StringLiteral_20473/*"message"*/, v25);
    sub_B2C35C(&StringLiteral_22595/*"talkName"*/, v26);
    sub_B2C35C(&StringLiteral_22737/*"touch"*/, v27);
    sub_B2C35C(&StringLiteral_20477/*"message3"*/, v28);
    sub_B2C35C(&StringLiteral_1/*""*/, v29);
    sub_B2C35C(&StringLiteral_21875/*"s"*/, v30);
    sub_B2C35C(&StringLiteral_16693/*"betweenHeight"*/, v31);
    this = (CommonMessageManager_o *)sub_B2C35C(&StringLiteral_17460/*"clear2"*/, v32);
    byte_4183E7B = 1;
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
          goto LABEL_176;
        executeIndex = v5->fields.executeIndex;
        if ( (int)executeIndex >= v5->fields.executeIndexMax )
        {
          CommonMessageManager__EndExecuteScript(v5, method);
          goto LABEL_176;
        }
        if ( v5->fields.playSpeed == 1 )
          goto LABEL_176;
        executeTagList = v5->fields.executeTagList;
        if ( !executeTagList )
          goto LABEL_192;
        if ( (unsigned int)executeIndex >= executeTagList->max_length )
          goto LABEL_191;
        executeDataList = v5->fields.executeDataList;
        if ( !executeDataList )
          goto LABEL_192;
        if ( (unsigned int)executeIndex >= executeDataList->max_length )
          goto LABEL_191;
        executeLineList = v5->fields.executeLineList;
        if ( !executeLineList )
LABEL_192:
          sub_B2C434(this, method);
        if ( (unsigned int)executeIndex >= executeLineList->max_length )
          goto LABEL_191;
        v40 = executeDataList->m_Items[executeIndex];
        v41 = executeTagList->m_Items[executeIndex];
        v42 = CommonMessageManager__AnalysParam(this, v40, v3);
        if ( !v41 )
        {
          if ( v5->fields.isBusy )
            goto LABEL_184;
          v5->fields.state = 4;
          v50 = StringLiteral_20473/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_20473/*"message"*/;
          sub_B2C2F8(&v5->fields.waitType, v50);
          v5->fields.waitMessage = v40;
          v46 = &v5->fields.waitMessage;
          goto LABEL_41;
        }
        v43 = v42;
        this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash_21099092(v41, 0LL);
        if ( (unsigned int)this <= 0x84F7AC69 )
        {
          if ( (unsigned int)this <= 0x5C6E1222 )
          {
            if ( (unsigned int)this <= 0x20BD548D )
            {
              if ( (_DWORD)this != 452920428 )
              {
                if ( (_DWORD)this != 549278861 )
                  goto LABEL_43;
                this = (CommonMessageManager_o *)System_String__op_Equality(
                                                   v41,
                                                   (System_String_o *)StringLiteral_20482/*"messageOn"*/,
                                                   0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_43;
                if ( !v43 )
                  goto LABEL_192;
                v44 = &StringLiteral_21416/*"parameter error"*/;
                if ( !*(_QWORD *)&v43->max_length )
                {
                  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
                  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
                  v5->fields.state = 4;
                  v45 = StringLiteral_20473/*"message"*/;
                  v5->fields.waitType = (struct System_String_o *)StringLiteral_20473/*"message"*/;
                  sub_B2C2F8(&v5->fields.waitType, v45);
                  v46 = &v5->fields.waitMessage;
                  v47 = 0LL;
                  v5->fields.waitMessage = 0LL;
LABEL_42:
                  sub_B2C2F8(v46, v47);
                  goto LABEL_43;
                }
LABEL_173:
                if ( *v44 )
                {
                  v5->fields.state = 11;
                  goto LABEL_176;
                }
                goto LABEL_43;
              }
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v41,
                                                 (System_String_o *)StringLiteral_22595/*"talkName"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_43;
              v46 = &v5->fields.waitTalkName;
              *p_waitTalkName = v40;
LABEL_41:
              v47 = v40;
              goto LABEL_42;
            }
            if ( (_DWORD)this != 659427984 )
            {
              if ( (_DWORD)this != 1550717474 )
                goto LABEL_43;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v41,
                                                 (System_String_o *)StringLiteral_17458/*"clear"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_43;
              if ( !v43 )
                goto LABEL_192;
              v44 = &StringLiteral_21415/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v43->max_length )
                goto LABEL_173;
              v5->fields.state = 4;
              v54 = &StringLiteral_17458/*"clear"*/;
              goto LABEL_158;
            }
            v59 = &StringLiteral_18799/*"font"*/;
LABEL_149:
            this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v59, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            if ( !v43 )
              goto LABEL_192;
            v67 = *(_QWORD *)&v43->max_length;
            if ( (_DWORD)v67 == 1 )
            {
              v68 = v43->m_Items[0];
              v69 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              if ( (int)v67 >= 3 )
              {
                v68 = v43->m_Items[0];
                v70 = v43->m_Items[2];
                v69 = (ScriptMessageCommonManager_o *)v5;
                goto LABEL_171;
              }
              v44 = &StringLiteral_21416/*"parameter error"*/;
              if ( v67 )
                goto LABEL_173;
              v69 = (ScriptMessageCommonManager_o *)v5;
              v68 = 0LL;
            }
            v70 = 0LL;
LABEL_171:
            ScriptMessageCommonManager__SetFontSize(v69, v68, v70, 0LL);
            goto LABEL_43;
          }
          if ( (unsigned int)this > 0x7B80C780 )
          {
            if ( (_DWORD)this != -2124547466 )
            {
              if ( (_DWORD)this != -2064143255 )
                goto LABEL_43;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v41,
                                                 (System_String_o *)StringLiteral_20480/*"messageOff"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_43;
              if ( !v43 )
                goto LABEL_192;
              v44 = &StringLiteral_21416/*"parameter error"*/;
              if ( !*(_QWORD *)&v43->max_length )
              {
                ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
                ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
                goto LABEL_43;
              }
              goto LABEL_173;
            }
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_21406/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            if ( !v43 )
              goto LABEL_192;
            v44 = &StringLiteral_21415/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v43->max_length )
              goto LABEL_173;
            v5->fields.state = 4;
            v54 = &StringLiteral_21406/*"page"*/;
            goto LABEL_158;
          }
          if ( (_DWORD)this == 1787721130 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_18342/*"end"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            if ( !v43 )
              goto LABEL_192;
            v44 = &StringLiteral_21415/*"parameter be unnecessary"*/;
            if ( !*(_QWORD *)&v43->max_length )
            {
              CommonMessageManager__EndExecuteScript(v5, method);
              goto LABEL_43;
            }
            goto LABEL_173;
          }
          if ( (_DWORD)this != 2072037248 )
            goto LABEL_43;
          v53 = (System_String_o **)&StringLiteral_22214/*"speed"*/;
LABEL_107:
          this = (CommonMessageManager_o *)System_String__op_Equality(v41, *v53, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_43;
          if ( !v43 )
            goto LABEL_192;
          v60 = *(_QWORD *)&v43->max_length;
          if ( (_DWORD)v60 == 1 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v43->m_Items[0],
                                               (System_String_o *)StringLiteral_747/*"-"*/,
                                               0LL);
            v61 = -1.0;
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v43->max_length )
                goto LABEL_191;
              v61 = System_Single__Parse(v43->m_Items[0], 0LL);
            }
            v62 = (ScriptMessageCommonManager_o *)v5;
          }
          else
          {
            v44 = &StringLiteral_21416/*"parameter error"*/;
            if ( v60 )
              goto LABEL_173;
            v62 = (ScriptMessageCommonManager_o *)v5;
            v61 = -1.0;
          }
          ScriptMessageCommonManager__SetSpeed(v62, v61, 0LL);
          goto LABEL_43;
        }
        if ( (unsigned int)this > 0xE30C2799 )
        {
          if ( (unsigned int)this > 0xEE0C38EA )
          {
            if ( (_DWORD)this == -200523172 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v41,
                                                 (System_String_o *)StringLiteral_21596/*"q"*/,
                                                 0LL);
              goto LABEL_43;
            }
            if ( (_DWORD)this != -166967934 )
            {
LABEL_43:
              ++v5->fields.executeIndex;
              goto LABEL_128;
            }
            v53 = (System_String_o **)&StringLiteral_21875/*"s"*/;
            goto LABEL_107;
          }
          if ( (_DWORD)this != -385076981 )
          {
            if ( (_DWORD)this != -301188886 )
              goto LABEL_43;
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_20084/*"k"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            if ( !v43 )
              goto LABEL_192;
            v44 = &StringLiteral_21415/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v43->max_length )
              goto LABEL_173;
            v5->fields.state = 4;
            v54 = &StringLiteral_22737/*"touch"*/;
LABEL_158:
            v47 = (System_String_o *)*v54;
            v5->fields.waitType = (struct System_String_o *)*v54;
            goto LABEL_159;
          }
          v51 = &StringLiteral_20166/*"l"*/;
        }
        else
        {
          if ( (unsigned int)this > 0x9859D490 )
          {
            if ( (_DWORD)this == -1460566783 )
            {
              v59 = &StringLiteral_18800/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_43;
              v59 = &StringLiteral_18645/*"f"*/;
            }
            goto LABEL_149;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v41,
                                               (System_String_o *)StringLiteral_23190/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_43;
            v5->fields.state = 4;
            if ( !v43 )
              goto LABEL_192;
            if ( (int)v43->max_length < 1 )
            {
              v44 = &StringLiteral_21416/*"parameter error"*/;
              goto LABEL_173;
            }
            v47 = v43->m_Items[0];
            *p_waitType = v47;
LABEL_159:
            v46 = &v5->fields.waitType;
            goto LABEL_42;
          }
          if ( (_DWORD)this != -1738943344 )
            goto LABEL_43;
          v51 = &StringLiteral_16693/*"betweenHeight"*/;
        }
        this = (CommonMessageManager_o *)System_String__op_Equality(v41, (System_String_o *)*v51, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_43;
        if ( !v43 )
          goto LABEL_192;
        v64 = *(_QWORD *)&v43->max_length;
        if ( (_DWORD)v64 == 1 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(
                                             v43->m_Items[0],
                                             (System_String_o *)StringLiteral_747/*"-"*/,
                                             0LL);
          v65 = -1.0;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v43->max_length )
            {
LABEL_191:
              v75 = sub_B2C460(this);
              sub_B2C400(v75, 0LL);
            }
            v65 = System_Single__Parse(v43->m_Items[0], 0LL);
          }
          v66 = (ScriptMessageCommonManager_o *)v5;
        }
        else
        {
          v44 = &StringLiteral_21416/*"parameter error"*/;
          if ( v64 )
            goto LABEL_173;
          v66 = (ScriptMessageCommonManager_o *)v5;
          v65 = -1.0;
        }
        ScriptMessageCommonManager__SetBetweenLineHeight(v66, v65, 0LL);
        goto LABEL_43;
      }
      v48 = *p_waitType;
      if ( !*p_waitType )
        goto LABEL_176;
      v49 = PrivateImplementationDetails___ComputeStringHash_21099092(*p_waitType, 0LL);
      if ( v49 > 0x698989D8 )
        break;
      if ( v49 > 0xD841B5E )
      {
        if ( v49 == 619841764 )
        {
          if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_20473/*"message"*/, 0LL) )
            goto LABEL_176;
          if ( !ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
          {
            if ( *p_waitTalkName )
              CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v57);
            v63 = *p_waitMessage;
            if ( !*p_waitMessage )
              v63 = (System_String_o *)StringLiteral_1/*""*/;
            ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v63, 0, 0, 0LL);
            playSpeed = v5->fields.playSpeed;
            v5->fields.isCancelInput = 0;
LABEL_119:
            if ( playSpeed == 3 )
              this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                                 (ScriptMessageCommonManager_o *)v5,
                                                 0,
                                                 0LL);
            goto LABEL_121;
          }
          if ( v5->fields.isBusy )
            goto LABEL_184;
          if ( v5->fields.isCancelInput )
            v5->fields.isCancelInput = 0;
          v58 = &StringLiteral_20476/*"message2"*/;
        }
        else
        {
          if ( v49 != 1550717474 )
          {
            if ( v49 == 1770621400 && System_String__op_Equality(v48, (System_String_o *)StringLiteral_22737/*"touch"*/, 0LL) )
            {
              if ( v5->fields.isBusy )
              {
LABEL_184:
                ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
                return !v5->fields.isBusy && v5->fields.state == 3;
              }
              ScriptMessageCommonManager__WaitNextTouch(
                (ScriptMessageCommonManager_o *)v5,
                v5->fields.isDispLastTouchMark,
                0LL);
              v73 = &StringLiteral_22738/*"touch2"*/;
              goto LABEL_190;
            }
            goto LABEL_176;
          }
          if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_17458/*"clear"*/, 0LL) )
            goto LABEL_176;
          if ( v5->fields.isBusy )
            goto LABEL_184;
          if ( v5->fields.isCancelInput )
            v5->fields.isCancelInput = 0;
          else
            ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
          v58 = &StringLiteral_17460/*"clear2"*/;
        }
        goto LABEL_126;
      }
      if ( v49 == 256629 )
      {
        if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_20477/*"message3"*/, 0LL) || v5->fields.isScroll )
          goto LABEL_176;
        v55 = *p_waitMessage;
        if ( !*p_waitMessage )
          v55 = (System_String_o *)StringLiteral_1/*""*/;
        ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v55, 0, 0, 0LL);
        playSpeed = v5->fields.playSpeed;
        goto LABEL_119;
      }
      if ( v49 != 226761566
        || !System_String__op_Equality(v48, (System_String_o *)StringLiteral_22738/*"touch2"*/, 0LL)
        || v5->fields.isWaitNextTouchRequest )
      {
        goto LABEL_176;
      }
      ScriptMessageCommonManager__ClearCount((ScriptMessageCommonManager_o *)v5, 0LL);
      v5->fields.isCancelInput = 1;
LABEL_121:
      state = 3;
      v5->fields.state = 3;
    }
    if ( v49 > 0x91466F30 )
      break;
    if ( v49 != -2124547466 )
    {
      if ( v49 != -1857654992
        || !System_String__op_Equality(v48, (System_String_o *)StringLiteral_17460/*"clear2"*/, 0LL)
        || v5->fields.isWaitNextTouchRequest )
      {
        goto LABEL_176;
      }
LABEL_88:
      ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
      goto LABEL_121;
    }
    if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_21406/*"page"*/, 0LL) )
      goto LABEL_176;
    if ( v5->fields.isBusy )
      goto LABEL_184;
    if ( v5->fields.isCancelInput )
      v5->fields.isCancelInput = 0;
    else
      ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
    v58 = &StringLiteral_21409/*"page2"*/;
LABEL_126:
    v52 = *v58;
    *p_waitType = (System_String_o *)*v58;
LABEL_127:
    sub_B2C2F8(&v5->fields.waitType, v52);
LABEL_128:
    state = v5->fields.state;
  }
  if ( v49 == -336528737 )
  {
    if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_21410/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_176;
    goto LABEL_88;
  }
  if ( v49 == -16520990 )
  {
    if ( !System_String__op_Equality(v48, (System_String_o *)StringLiteral_20476/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_176;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    v52 = StringLiteral_20477/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_20477/*"message3"*/;
    goto LABEL_127;
  }
  if ( v49 == -353306356
    && System_String__op_Equality(v48, (System_String_o *)StringLiteral_21409/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v73 = &StringLiteral_21410/*"page3"*/;
LABEL_190:
    v74 = *v73;
    v5->fields.waitType = (struct System_String_o *)*v73;
    sub_B2C2F8(&v5->fields.waitType, v74);
  }
LABEL_176:
  isBusy = v5->fields.isBusy;
  ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
  if ( !isBusy )
    return 0;
  return !v5->fields.isBusy && v5->fields.state == 3;
}


void __fastcall CommonMessageManager__Quit(CommonMessageManager_o *this, const MethodInfo *method)
{
  CommonMessageManager__EndExecuteScript(this, method);
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
  sub_B2C2F8(&this->fields.callbackFunc, callbackFunc);
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

  if ( (byte_4183E77 & 1) == 0 )
  {
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, name);
    byte_4183E77 = 1;
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
  sub_B2C2F8(&this->fields.touchCallbackFunc, callback);
}


void __fastcall CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0LL); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}