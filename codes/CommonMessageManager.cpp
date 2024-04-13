void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4D49 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4D49 = 1;
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
  int32_t m_stringLength; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  System_String_o *v40; // x22
  int32_t v41; // w26
  int32_t v42; // w1
  uint16_t Chars; // w0
  System_String_o *v44; // x0
  int v45; // w21
  System_String_o *v46; // x0
  System_String_o *v47; // x1
  int32_t size; // w8
  bool v49; // vf
  int v50; // w8
  int32_t v51; // w21
  System_String_o *v52; // x0
  WarBoardManager_TaskList_o *v53; // x2
  System_String_o *v54; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v55; // x1
  int32_t v56; // w8
  int v57; // w8
  int32_t v58; // w8
  System_String_o *v59; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x1
  System_String_o *v61; // x1
  __int16 v63[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E4D47 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__set_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1526/*"="*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_707/*","*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_294/*"\""*/, v32, v33, v34);
    this = (CommonMessageManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v35, v36, v37);
    byte_42E4D47 = 1;
  }
  v63[0] = 0;
  if ( !data )
    goto LABEL_49;
  m_stringLength = data->fields.m_stringLength;
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v40 = (System_String_o *)StringLiteral_1/*""*/;
  if ( m_stringLength >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      v42 = v41++;
      Chars = System_String__get_Chars(data, v42, 0LL);
      v63[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars == 44 || Chars == 61 )
        {
          this = (CommonMessageManager_o *)System_String__op_Inequality(v40, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( !v39 )
            goto LABEL_49;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            size = v39->fields._size;
            v49 = __OFSUB__(size, 1);
            v50 = size - 1;
            if ( v50 < 0 == v49
              && System_String__op_Equality(
                   (System_String_o *)v39->fields._items->m_Items[v50],
                   (System_String_o *)StringLiteral_81/*" "*/,
                   0LL) )
            {
              v51 = v39->fields._size;
              v52 = System_Char__ToString((uint16_t)v63, 0LL);
              if ( v52 )
                v53 = (WarBoardManager_TaskList_o *)v52;
              else
                v53 = (WarBoardManager_TaskList_o *)StringLiteral_1/*""*/;
              System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
                (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v39,
                v51 - 1,
                v53,
                (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_string__set_Item__);
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
          this = (CommonMessageManager_o *)System_String__op_Inequality(v40, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( !v39 )
            goto LABEL_49;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v56 = v39->fields._size;
            v49 = __OFSUB__(v56, 1);
            v57 = v56 - 1;
            if ( v57 < 0 == v49 )
            {
              if ( System_String__op_Equality(
                     (System_String_o *)v39->fields._items->m_Items[v57],
                     (System_String_o *)StringLiteral_1526/*"="*/,
                     0LL) )
              {
                goto LABEL_41;
              }
              v58 = v39->fields._size;
              if ( !v58 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              if ( System_String__op_Equality(
                     (System_String_o *)v39->fields._items->m_Items[v58 - 1],
                     (System_String_o *)StringLiteral_707/*","*/,
                     0LL) )
              {
                goto LABEL_41;
              }
            }
LABEL_37:
            v59 = System_Char__ToString((uint16_t)v63, 0LL);
            if ( v59 )
              v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)v59;
            else
              v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v39,
              v60,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            goto LABEL_41;
          }
LABEL_28:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          v54 = System_Char__ToString((uint16_t)v63, 0LL);
          if ( v54 )
            v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
          else
            v55 = (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v39,
            v55,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          v40 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_41;
        }
        if ( Chars == 34 )
        {
          v44 = System_Char__ToString((uint16_t)v63, 0LL);
          v40 = System_String__Concat_44577788(v40, v44, 0LL);
          if ( v41 < m_stringLength )
          {
            do
            {
              v45 = v41 + 1;
              v63[0] = System_String__get_Chars(data, v41, 0LL);
              if ( v63[0] == 34 )
                break;
              v46 = System_Char__ToString((uint16_t)v63, 0LL);
              v40 = System_String__Concat_44577788(v40, v46, 0LL);
              ++v41;
            }
            while ( v45 < m_stringLength );
            v41 = v45;
          }
          v47 = (System_String_o *)StringLiteral_294/*"\""*/;
          goto LABEL_25;
        }
      }
      v47 = System_Char__ToString((uint16_t)v63, 0LL);
LABEL_25:
      v40 = System_String__Concat_44577788(v40, v47, 0LL);
LABEL_41:
      if ( v41 >= m_stringLength )
      {
        v61 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_44;
      }
    }
  }
  v61 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_44:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v40, v61, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v39 )
      return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_49:
    sub_B5D69C(this, data);
  }
  if ( !v39 )
    goto LABEL_49;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v39,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v39,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  System_Array_o *v75; // x21
  _BOOL8 v76; // x0
  __int64 v77; // x1
  System_String_array *v78; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x21
  System_Collections_Generic_List_int__o *v81; // x20
  int max_length; // w8
  int32_t v83; // w22
  System_String_o *v84; // x28
  int32_t v85; // w24
  System_String_o *v86; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v87; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x21
  System_String_o *v89; // x27
  System_String_o **v90; // x5
  System_String_o *v91; // x0
  bool v92; // w0
  System_String_o *v93; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v94; // x8
  int32_t v95; // w23
  struct System_String_array *executeDataList; // x8
  __int64 v97; // x0
  const MethodInfo *v98; // [xsp+0h] [xbp-80h]
  System_String_o *a; // [xsp+8h] [xbp-78h]
  int32_t lastMessageIndex; // [xsp+14h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+20h] [xbp-60h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+28h] [xbp-58h] BYREF
  System_RuntimeFieldHandle_o v104; // 0:w1.4

  if ( (byte_42E4D45 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)scriptData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v30, v31, v32);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54,
      v33,
      v34,
      v35);
    sub_B5D5C4(&StringLiteral_319/*"#"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_888/*"//"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_19497/*"i"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_20338/*"k"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_21886/*"q"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_427/*"%"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_447/*"&"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_20484/*"line"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_22904/*"talkStart"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_19657/*"image"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_16002/*"[r]"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_22900/*"talkName"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_1/*""*/, v72, v73, v74);
    byte_42E4D45 = 1;
  }
  tagDataList = 0LL;
  lineDataList = 0LL;
  scriptDataList = 0LL;
  lastMessageIndex = 0;
  v75 = (System_Array_o *)sub_B5D5DC(char___TypeInfo, 5LL);
  v104.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v75, v104, 0LL);
  if ( !scriptData )
    goto LABEL_73;
  v78 = System_String__Split_44638572(scriptData, (System_Char_array *)v75, 1, 0LL);
  v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v79,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v79;
  v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v80,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v80;
  v81 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v81,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  lineDataList = v81;
  lastMessageIndex = -1;
  if ( !v78 )
    goto LABEL_73;
  max_length = v78->max_length;
  if ( max_length >= 1 )
  {
    v83 = 0;
    a = (System_String_o *)StringLiteral_1/*""*/;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v83 >= (unsigned int)max_length )
        {
          v97 = sub_B5D6C8(v76);
          sub_B5D668(v97, 0LL);
        }
        v84 = v78->m_Items[v83];
        v85 = v83;
        if ( !v84 )
          goto LABEL_73;
        ++v83;
        if ( v84->fields.m_stringLength >= 1 )
        {
          v86 = (System_String_o *)StringLiteral_1/*""*/;
          v76 = System_String__StartsWith(v84, (System_String_o *)StringLiteral_888/*"//"*/, 0LL);
          if ( !v76 )
          {
            v76 = System_String__StartsWith(v84, this->fields.codeCommentString, 0LL);
            if ( !v76 )
              break;
          }
        }
LABEL_29:
        max_length = v78->max_length;
        if ( v83 >= max_length )
          goto LABEL_61;
      }
      if ( !System_String__StartsWith(v84, this->fields.codeTalkString, 0LL) )
      {
        v76 = System_String__StartsWith(v84, this->fields.codeVoiceString, 0LL);
        if ( v76 )
          goto LABEL_29;
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v90,
          v84,
          v83,
          v98);
        goto LABEL_17;
      }
      v87 = v80;
      v88 = v79;
      v89 = (System_String_o *)StringLiteral_22900/*"talkName"*/;
      v86 = System_String__Substring(v84, 1, 0LL);
      if ( !v89 )
      {
        v79 = v88;
        v80 = v87;
LABEL_17:
        v76 = System_String__op_Inequality(v86, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( v76 )
        {
          v76 = System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && v76 )
          {
            if ( !v79 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_22904/*"talkStart"*/,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v80 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v80,
              (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v81 )
              goto LABEL_73;
            System_Collections_Generic_List_int___Add(
              v81,
              v83,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              0LL,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          }
          else
          {
            if ( !v79 )
              goto LABEL_73;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v79,
              0LL,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            if ( !v80 )
              goto LABEL_73;
          }
          lastMessageIndex = v80->fields._size;
          if ( !v86 )
            goto LABEL_73;
          v91 = System_String__Replace_44585024(
                  v86,
                  this->fields.codeReturnString,
                  (System_String_o *)StringLiteral_16002/*"[r]"*/,
                  0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v80,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v91,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v81 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v81,
            v83,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        goto LABEL_29;
      }
      v76 = System_String__op_Equality(v89, (System_String_o *)StringLiteral_20338/*"k"*/, 0LL);
      v83 = v85 + 1;
      if ( v76 || (v76 = System_String__op_Equality(v89, (System_String_o *)StringLiteral_21886/*"q"*/, 0LL)) )
      {
        if ( (lastMessageIndex & 0x80000000) == 0 )
        {
          if ( !v88 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v88,
            0LL,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v87 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v87,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_16002/*"[r]"*/,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v81 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v81,
            v83,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          lastMessageIndex = -1;
          v76 = (_BOOL8)v88;
          goto LABEL_58;
        }
      }
      else if ( System_String__op_Equality(v89, (System_String_o *)StringLiteral_22900/*"talkName"*/, 0LL) )
      {
        v92 = System_String__op_Equality(v89, (System_String_o *)StringLiteral_22900/*"talkName"*/, 0LL);
        v93 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v92 )
          v93 = v86;
        a = v93;
      }
      else if ( System_String__op_Equality(v89, (System_String_o *)StringLiteral_19497/*"i"*/, 0LL)
             || System_String__op_Equality(v89, (System_String_o *)StringLiteral_19657/*"image"*/, 0LL)
             || System_String__op_Equality(v89, (System_String_o *)StringLiteral_20484/*"line"*/, 0LL)
             || System_String__StartsWith(v89, (System_String_o *)StringLiteral_427/*"%"*/, 0LL)
             || System_String__StartsWith(v89, (System_String_o *)StringLiteral_447/*"&"*/, 0LL)
             || System_String__StartsWith(v89, (System_String_o *)StringLiteral_319/*"#"*/, 0LL) )
      {
        v76 = System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( (lastMessageIndex & 0x80000000) != 0 && v76 )
        {
          if ( !v88 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v88,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_22904/*"talkStart"*/,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v87 )
            goto LABEL_73;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v87,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_1/*""*/,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v81 )
            goto LABEL_73;
          System_Collections_Generic_List_int___Add(
            v81,
            v83,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          v94 = v87;
        }
        else
        {
          v94 = v87;
          if ( !v87 )
            goto LABEL_73;
        }
        lastMessageIndex = v94->fields._size;
      }
      v76 = (_BOOL8)v88;
      if ( !v88 )
        goto LABEL_73;
LABEL_58:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v76,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      if ( !v87 )
        goto LABEL_73;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v87,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      if ( !v81 )
        goto LABEL_73;
      System_Collections_Generic_List_int___Add(
        v81,
        v83,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v78->max_length;
      v79 = v88;
      v80 = v87;
      if ( v83 >= max_length )
      {
LABEL_61:
        v95 = v85 + 1;
        goto LABEL_63;
      }
    }
  }
  v95 = 0;
LABEL_63:
  if ( (lastMessageIndex & 0x80000000) == 0 )
  {
    if ( v79 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v79,
        0LL,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      if ( v80 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v80,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_16002/*"[r]"*/,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v81 )
        {
          System_Collections_Generic_List_int___Add(
            v81,
            v95,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          goto LABEL_69;
        }
      }
    }
LABEL_73:
    sub_B5D69C(v76, v77);
  }
  if ( !v79 )
    goto LABEL_73;
LABEL_69:
  this->fields.executeTagList = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v79,
                                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  sub_B5D560(&this->fields.executeTagList);
  if ( !v80 )
    goto LABEL_73;
  this->fields.executeDataList = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v80,
                                                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  sub_B5D560(&this->fields.executeDataList);
  if ( !v81 )
    goto LABEL_73;
  this->fields.executeLineList = System_Collections_Generic_List_int___ToArray(
                                   v81,
                                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  sub_B5D560(&this->fields.executeLineList);
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int32_t m_stringLength; // w23
  System_String_o *v112; // x27
  const MethodInfo_3056FC0 **v113; // x24
  int32_t v114; // w19
  int32_t v115; // w1
  const MethodInfo_3056FC0 **v116; // x22
  uint16_t Chars; // w0
  int v118; // w24
  System_Collections_Generic_List_string__o *v119; // x28
  System_String_o *v120; // x27
  System_String_o *v121; // x28
  int v122; // w24
  System_String_o *v124; // x0
  int v125; // w26
  System_String_o *v126; // x0
  System_String_o *v127; // x0
  int v128; // w24
  System_String_o *v129; // x0
  __int64 *v130; // x8
  int32_t v131; // w8
  CommonMessageManager_o *v132; // x28
  System_String_o *v133; // x22
  System_String_o *v134; // x1
  __int64 *v135; // x8
  int32_t v136; // w8
  System_Collections_Generic_List_string__o **v137; // x27
  const MethodInfo_3056FC0 *v138; // x2
  __int64 *v139; // x8
  System_String_o *v140; // x1
  System_Collections_Generic_List_string__o *v141; // x21
  CommonMessageManager_o *v142; // [xsp+8h] [xbp-78h]
  CommonMessageManager_o **v143; // [xsp+18h] [xbp-68h]
  __int16 v146[2]; // [xsp+2Ch] [xbp-54h] BYREF

  v143 = (CommonMessageManager_o **)tagDataList;
  v142 = this;
  if ( (byte_42E4D46 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_string__Add__,
      (_DWORD)tagDataList,
      (_DWORD)scriptDataList,
      lineDataList);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17677/*"clear"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_19035/*"font"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_18878/*"f"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_22516/*"speed"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_20338/*"k"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_21886/*"q"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_23491/*"voiceStop"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16911/*"bgm"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_16913/*"bgmStop"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_23625/*"wt"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_22235/*"seStop"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_21690/*"page"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_18571/*"end"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_20322/*"jingle"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_22229/*"se"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_20421/*"l"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_23485/*"voice"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_22983/*"time "*/, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_19036/*"fontSize"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_22233/*"seLoop"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_294/*"\""*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_16002/*"[r]"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_1/*""*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_22173/*"s"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_16899/*"betweenHeight"*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_20323/*"jingleStop"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_22491/*"soundStopAll"*/, v105, v106, v107);
    this = (CommonMessageManager_o *)sub_B5D5C4(&StringLiteral_973/*"0"*/, v108, v109, v110);
    byte_42E4D46 = 1;
  }
  v146[0] = 0;
  if ( !analysData )
    goto LABEL_156;
  m_stringLength = analysData->fields.m_stringLength;
  v112 = (System_String_o *)StringLiteral_1/*""*/;
  if ( m_stringLength >= 1 )
  {
    v113 = (const MethodInfo_3056FC0 **)&Method_System_Collections_Generic_List_string__Add__;
    v114 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v115 = v114;
        v116 = v113;
        ++v114;
        Chars = System_String__get_Chars(analysData, v115, 0LL);
        v118 = Chars;
        v146[0] = Chars;
        if ( Chars == 91 )
          break;
        v127 = System_Char__ToString((uint16_t)v146, 0LL);
        v112 = System_String__Concat_44577788(v112, v127, 0LL);
        if ( v118 == 34 )
        {
          if ( v114 < m_stringLength )
          {
            do
            {
              v128 = v114 + 1;
              v146[0] = System_String__get_Chars(analysData, v114, 0LL);
              if ( v146[0] == 34 )
                break;
              v129 = System_Char__ToString((uint16_t)v146, 0LL);
              v112 = System_String__Concat_44577788(v112, v129, 0LL);
              ++v114;
            }
            while ( v128 < m_stringLength );
            v114 = v128;
          }
          v113 = v116;
          v112 = System_String__Concat_44577788(v112, (System_String_o *)StringLiteral_294/*"\""*/, 0LL);
        }
        else
        {
          v113 = v116;
        }
        if ( v114 >= m_stringLength )
        {
          v140 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_148;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v112, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_156;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v143;
        if ( !*v143 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          0LL,
          *v116);
        if ( !v112 )
          goto LABEL_156;
        v119 = *scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_44585024(
                                           v112,
                                           v142->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16002/*"[r]"*/,
                                           0LL);
        if ( !v119 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v119,
          (EventMissionProgressRequest_Argument_ProgressData_o *)this,
          *v116);
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_156;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)this,
          line,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      v120 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v114 >= m_stringLength )
      {
        v121 = 0LL;
      }
      else
      {
        v121 = 0LL;
        v122 = 0;
        LODWORD(tagDataList) = v114;
        do
        {
          v114 = (_DWORD)tagDataList + 1;
          this = (CommonMessageManager_o *)System_String__get_Chars(analysData, (int32_t)tagDataList, 0LL);
          v146[0] = (__int16)this;
          if ( (unsigned __int16)this == 91 )
          {
            ++v122;
          }
          else if ( (unsigned __int16)this == 93 )
          {
            if ( --v122 < 0 )
              break;
          }
          else if ( (unsigned __int16)this == 32 && v121 == 0LL )
          {
            v121 = v120;
          }
          v124 = System_Char__ToString((uint16_t)v146, 0LL);
          this = (CommonMessageManager_o *)System_String__Concat_44577788(v120, v124, 0LL);
          v120 = (System_String_o *)this;
          if ( v146[0] == 34 )
          {
            if ( v114 < m_stringLength )
            {
              do
              {
                v125 = v114 + 1;
                v146[0] = System_String__get_Chars(analysData, v114, 0LL);
                if ( v146[0] == 34 )
                  break;
                v126 = System_Char__ToString((uint16_t)v146, 0LL);
                v120 = System_String__Concat_44577788(v120, v126, 0LL);
                ++v114;
              }
              while ( v125 < m_stringLength );
              v114 = v125;
            }
            this = (CommonMessageManager_o *)System_String__Concat_44577788(
                                               v120,
                                               (System_String_o *)StringLiteral_294/*"\""*/,
                                               0LL);
            v120 = (System_String_o *)this;
          }
          tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)v114;
        }
        while ( v114 < m_stringLength );
      }
      if ( !v121 )
        v121 = v120;
      v113 = v116;
      if ( !v121 )
        goto LABEL_133;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash_21231600(v121, 0LL);
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
              v130 = (__int64 *)&StringLiteral_22173/*"s"*/;
              goto LABEL_114;
            }
            v139 = &StringLiteral_21886/*"q"*/;
          }
          else
          {
            if ( (_DWORD)this != -301188886 )
            {
              if ( (_DWORD)this != -281374168 )
                goto LABEL_133;
              v130 = &StringLiteral_20322/*"jingle"*/;
              goto LABEL_114;
            }
            v139 = &StringLiteral_20338/*"k"*/;
          }
          this = (CommonMessageManager_o *)System_String__op_Equality(v121, (System_String_o *)*v139, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_133;
          if ( (*lastMessageIndex & 0x80000000) == 0 )
            *lastMessageIndex = -1;
          this = *v143;
          if ( !*v143 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            0LL,
            *v116);
          this = (CommonMessageManager_o *)*scriptDataList;
          if ( !*scriptDataList )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_16002/*"[r]"*/,
            *v116);
          this = (CommonMessageManager_o *)*lineDataList;
          if ( !*lineDataList )
            goto LABEL_156;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            line,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          this = *v143;
          if ( !*v143 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
            *v116);
          this = (CommonMessageManager_o *)*scriptDataList;
          if ( !*scriptDataList )
            goto LABEL_156;
          v138 = *v116;
          tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
          goto LABEL_138;
        }
        switch ( (_DWORD)this )
        {
          case 0xC73F3BA9:
            v130 = &StringLiteral_23491/*"voiceStop"*/;
            break;
          case 0xE30C2799:
            v130 = &StringLiteral_18878/*"f"*/;
            break;
          case 0xE90C310B:
            v130 = &StringLiteral_20421/*"l"*/;
            break;
          default:
            goto LABEL_133;
        }
LABEL_114:
        this = (CommonMessageManager_o *)System_String__op_Equality(v121, (System_String_o *)*v130, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_133;
        if ( !v120 )
          goto LABEL_156;
        tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v121->fields.m_stringLength + 1);
        v137 = (System_Collections_Generic_List_string__o **)(v120->fields.m_stringLength <= (int)tagDataList
                                                            ? StringLiteral_1/*""*/
                                                            : System_String__Substring(v120, (int32_t)tagDataList, 0LL));
        this = *v143;
        if ( !*v143 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
          *v116);
        this = (CommonMessageManager_o *)*scriptDataList;
        if ( !*scriptDataList )
          goto LABEL_156;
        v138 = *v116;
        tagDataList = v137;
        goto LABEL_138;
      }
      if ( (unsigned int)this > 0x815DFA76 )
      {
        switch ( (_DWORD)this )
        {
          case 0x892E4CA0:
            v130 = &StringLiteral_23499/*"wait"*/;
            break;
          case 0x9859D490:
            v130 = &StringLiteral_16899/*"betweenHeight"*/;
            break;
          case 0xA8F18501:
            v130 = &StringLiteral_19036/*"fontSize"*/;
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
            v130 = &StringLiteral_23485/*"voice"*/;
            goto LABEL_114;
          }
LABEL_133:
          if ( !*scriptDataList )
            goto LABEL_156;
          *lastMessageIndex = (*scriptDataList)->fields._size;
          this = *v143;
          if ( !*v143 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            0LL,
            *v116);
          v132 = (CommonMessageManager_o *)*scriptDataList;
          this = (CommonMessageManager_o *)System_String__Concat_44580072(
                                             (System_String_o *)StringLiteral_15824/*"["*/,
                                             v120,
                                             (System_String_o *)StringLiteral_16061/*"]"*/,
                                             0LL);
          if ( !v132 )
            goto LABEL_156;
LABEL_136:
          tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_137:
          v138 = *v113;
          this = v132;
LABEL_138:
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)tagDataList,
            v138);
          this = (CommonMessageManager_o *)*lineDataList;
          if ( !*lineDataList )
            goto LABEL_156;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)this,
            line,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          goto LABEL_140;
        }
        v135 = &StringLiteral_21690/*"page"*/;
LABEL_99:
        this = (CommonMessageManager_o *)System_String__op_Equality(v121, (System_String_o *)*v135, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_133;
        this = *v143;
        if ( !*v143 )
          goto LABEL_156;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v121,
          *v116);
        if ( !v120 )
          goto LABEL_156;
        v136 = v121->fields.m_stringLength;
        v132 = (CommonMessageManager_o *)*scriptDataList;
        if ( v120->fields.m_stringLength <= v136 + 1 )
        {
          tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
          if ( !v132 )
            goto LABEL_156;
        }
        else
        {
          this = (CommonMessageManager_o *)System_String__Substring(v120, v136 + 1, 0LL);
          tagDataList = (System_Collections_Generic_List_string__o **)this;
          if ( !v132 )
            goto LABEL_156;
        }
        goto LABEL_137;
      }
      if ( v121->fields.m_stringLength )
        goto LABEL_133;
LABEL_140:
      v112 = (System_String_o *)StringLiteral_1/*""*/;
      v140 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v114 >= m_stringLength )
        goto LABEL_148;
    }
    if ( (unsigned int)this > 0x4B4794E6 )
    {
      if ( (unsigned int)this > 0x667B7330 )
      {
        switch ( (_DWORD)this )
        {
          case 0x6A8E75AA:
            v130 = &StringLiteral_18571/*"end"*/;
            break;
          case 0x6EE5B7E7:
            v130 = &StringLiteral_22491/*"soundStopAll"*/;
            break;
          case 0x7B80C780:
            v130 = &StringLiteral_22516/*"speed"*/;
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
            v135 = &StringLiteral_17677/*"clear"*/;
            goto LABEL_99;
          case 0x5DB2D891:
            v130 = &StringLiteral_16911/*"bgm"*/;
            break;
          case 0x667B7330:
            v130 = &StringLiteral_20323/*"jingleStop"*/;
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
          v130 = &StringLiteral_22229/*"se"*/;
          break;
        case 0x47410F2B:
          v130 = &StringLiteral_22233/*"seLoop"*/;
          break;
        case 0x4B4794E6:
          this = (CommonMessageManager_o *)System_String__op_Equality(v121, (System_String_o *)StringLiteral_23625/*"wt"*/, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_133;
          this = *v143;
          if ( !*v143 )
            goto LABEL_156;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_23499/*"wait"*/,
            *v116);
          if ( !v120 )
            goto LABEL_156;
          v131 = v121->fields.m_stringLength;
          v132 = (CommonMessageManager_o *)*scriptDataList;
          v133 = (System_String_o *)StringLiteral_22983/*"time "*/;
          v134 = v120->fields.m_stringLength <= v131 + 1
               ? (System_String_o *)StringLiteral_973/*"0"*/
               : System_String__Substring(v120, v131 + 1, 0LL);
          this = (CommonMessageManager_o *)System_String__Concat_44577788(v133, v134, 0LL);
          if ( !v132 )
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
          v130 = &StringLiteral_19035/*"font"*/;
          break;
        case 0x34A684A5:
          v130 = &StringLiteral_22235/*"seStop"*/;
          break;
        case 0x3B958991:
          v130 = &StringLiteral_16913/*"bgmStop"*/;
          goto LABEL_114;
        default:
          goto LABEL_133;
      }
    }
    goto LABEL_114;
  }
  v140 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_148:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v112, v140, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v143;
      if ( *v143 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          0LL,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        if ( v112 )
        {
          v141 = *scriptDataList;
          this = (CommonMessageManager_o *)System_String__Replace_44585024(
                                             v112,
                                             v142->fields.codeReturnString,
                                             (System_String_o *)StringLiteral_16002/*"[r]"*/,
                                             0LL);
          if ( v141 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v141,
              (EventMissionProgressRequest_Argument_ProgressData_o *)this,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
            this = (CommonMessageManager_o *)*lineDataList;
            if ( *lineDataList )
            {
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)this,
                line,
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              return;
            }
          }
        }
      }
    }
LABEL_156:
    sub_B5D69C(this, tagDataList);
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
    sub_B5D560(p_callbackFunc);
    System_Action__Invoke(callbackFunc, 0LL);
  }
}


void __fastcall CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
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

  if ( (byte_42E4D43 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_11722/*"SCRIPT_ACTION_CODE_COMMENT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11731/*"SCRIPT_ACTION_CODE_VOICE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11725/*"SCRIPT_ACTION_CODE_RETURN"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11730/*"SCRIPT_ACTION_CODE_TALK"*/, v14, v15, v16);
    byte_42E4D43 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this->fields.codeCommentString = LocalizationManager__Get((System_String_o *)StringLiteral_11722/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  sub_B5D560(&this->fields.codeCommentString);
  this->fields.codeTalkString = LocalizationManager__Get((System_String_o *)StringLiteral_11730/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  sub_B5D560(&this->fields.codeTalkString);
  this->fields.codeVoiceString = LocalizationManager__Get((System_String_o *)StringLiteral_11731/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  sub_B5D560(&this->fields.codeVoiceString);
  this->fields.codeReturnString = LocalizationManager__Get((System_String_o *)StringLiteral_11725/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  sub_B5D560(&this->fields.codeReturnString);
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
    sub_B5D560(&this->fields.touchCallbackFunc);
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
    sub_B5D560(&this->fields.touchCallbackFunc);
    System_Action__Invoke(touchCallbackFunc, 0LL);
  }
}


bool __fastcall CommonMessageManager__ProcessScript(
        CommonMessageManager_o *this,
        float delta,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  CommonMessageManager_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int state; // w8
  System_String_o **p_waitType; // x20
  System_String_o **p_waitMessage; // x21
  __int64 executeIndex; // x8
  struct System_String_array *executeTagList; // x9
  struct System_String_array *executeDataList; // x10
  struct System_Int32_array *executeLineList; // x11
  System_String_o *v95; // x25
  System_String_o *v96; // x24
  System_String_array *v97; // x0
  System_String_array *v98; // x23
  __int64 *v99; // x8
  struct System_String_o **v100; // x0
  System_String_o *v101; // x23
  uint32_t v102; // w0
  __int64 *v103; // x8
  System_String_o **v104; // x8
  __int64 *v105; // x8
  System_String_o *v106; // x1
  int32_t playSpeed; // w8
  const MethodInfo *v108; // x2
  __int64 *v109; // x8
  __int64 *v110; // x8
  __int64 v111; // x9
  float v112; // s0
  ScriptMessageCommonManager_o *v113; // x0
  System_String_o *v114; // x1
  __int64 v115; // x9
  float v116; // s0
  ScriptMessageCommonManager_o *v117; // x0
  __int64 v118; // x9
  System_String_o *v119; // x1
  ScriptMessageCommonManager_o *v120; // x0
  System_String_o *v121; // x2
  _BOOL4 isBusy; // w20
  __int64 *v124; // x8
  __int64 v125; // x0
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v6 = this;
  if ( (byte_42E4D48 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20744/*"messageOn"*/, (_DWORD)method, (_DWORD)v3, v4);
    sub_B5D5C4(&StringLiteral_17677/*"clear"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19035/*"font"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_21694/*"page3"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_20742/*"messageOff"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21693/*"page2"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18878/*"f"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_22516/*"speed"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_20338/*"k"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21886/*"q"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_21700/*"parameter error"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_23043/*"touch2"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_21690/*"page"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_21699/*"parameter be unnecessary"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_18571/*"end"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_20736/*"message2"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_20421/*"l"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_19036/*"fontSize"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_20733/*"message"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_22900/*"talkName"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_23042/*"touch"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_20737/*"message3"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_1/*""*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_22173/*"s"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_16899/*"betweenHeight"*/, v82, v83, v84);
    this = (CommonMessageManager_o *)sub_B5D5C4(&StringLiteral_17679/*"clear2"*/, v85, v86, v87);
    byte_42E4D48 = 1;
  }
  state = v6->fields.state;
  if ( !state )
    return 0;
  p_waitType = &v6->fields.waitType;
  p_waitMessage = &v6->fields.waitMessage;
  p_waitTalkName = &v6->fields.waitTalkName;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( state != 4 )
      {
        if ( state != 3 )
          goto LABEL_175;
        executeIndex = v6->fields.executeIndex;
        if ( (int)executeIndex >= v6->fields.executeIndexMax )
        {
          CommonMessageManager__EndExecuteScript(v6, method);
          goto LABEL_175;
        }
        if ( v6->fields.playSpeed == 1 )
          goto LABEL_175;
        executeTagList = v6->fields.executeTagList;
        if ( !executeTagList )
          goto LABEL_191;
        if ( (unsigned int)executeIndex >= executeTagList->max_length )
          goto LABEL_190;
        executeDataList = v6->fields.executeDataList;
        if ( !executeDataList )
          goto LABEL_191;
        if ( (unsigned int)executeIndex >= executeDataList->max_length )
          goto LABEL_190;
        executeLineList = v6->fields.executeLineList;
        if ( !executeLineList )
LABEL_191:
          sub_B5D69C(this, method);
        if ( (unsigned int)executeIndex >= executeLineList->max_length )
          goto LABEL_190;
        v95 = executeDataList->m_Items[executeIndex];
        v96 = executeTagList->m_Items[executeIndex];
        v97 = CommonMessageManager__AnalysParam(this, v95, v3);
        if ( !v96 )
        {
          if ( v6->fields.isBusy )
            goto LABEL_183;
          v6->fields.state = 4;
          v6->fields.waitType = (struct System_String_o *)StringLiteral_20733/*"message"*/;
          sub_B5D560(&v6->fields.waitType);
          v6->fields.waitMessage = v95;
          v100 = &v6->fields.waitMessage;
          goto LABEL_41;
        }
        v98 = v97;
        this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash_21231600(v96, 0LL);
        if ( (unsigned int)this <= 0x84F7AC69 )
        {
          if ( (unsigned int)this <= 0x5C6E1222 )
          {
            if ( (unsigned int)this <= 0x20BD548D )
            {
              if ( (_DWORD)this == 452920428 )
              {
                this = (CommonMessageManager_o *)System_String__op_Equality(
                                                   v96,
                                                   (System_String_o *)StringLiteral_22900/*"talkName"*/,
                                                   0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_42;
                v100 = &v6->fields.waitTalkName;
                *p_waitTalkName = v95;
                goto LABEL_41;
              }
              if ( (_DWORD)this != 549278861 )
                goto LABEL_42;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v96,
                                                 (System_String_o *)StringLiteral_20744/*"messageOn"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_42;
              if ( !v98 )
                goto LABEL_191;
              v99 = &StringLiteral_21700/*"parameter error"*/;
              if ( !*(_QWORD *)&v98->max_length )
              {
                ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v6, 0LL);
                ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v6, 0LL);
                v6->fields.state = 4;
                v6->fields.waitType = (struct System_String_o *)StringLiteral_20733/*"message"*/;
                sub_B5D560(&v6->fields.waitType);
                v100 = &v6->fields.waitMessage;
                v6->fields.waitMessage = 0LL;
LABEL_41:
                sub_B5D560(v100);
                goto LABEL_42;
              }
LABEL_172:
              if ( *v99 )
              {
                v6->fields.state = 11;
                goto LABEL_175;
              }
              goto LABEL_42;
            }
            if ( (_DWORD)this != 659427984 )
            {
              if ( (_DWORD)this != 1550717474 )
                goto LABEL_42;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v96,
                                                 (System_String_o *)StringLiteral_17677/*"clear"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_42;
              if ( !v98 )
                goto LABEL_191;
              v99 = &StringLiteral_21699/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v98->max_length )
                goto LABEL_172;
              v6->fields.state = 4;
              v105 = &StringLiteral_17677/*"clear"*/;
              goto LABEL_157;
            }
            v110 = &StringLiteral_19035/*"font"*/;
LABEL_148:
            this = (CommonMessageManager_o *)System_String__op_Equality(v96, (System_String_o *)*v110, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v98 )
              goto LABEL_191;
            v118 = *(_QWORD *)&v98->max_length;
            if ( (_DWORD)v118 == 1 )
            {
              v119 = v98->m_Items[0];
              v120 = (ScriptMessageCommonManager_o *)v6;
            }
            else
            {
              if ( (int)v118 >= 3 )
              {
                v119 = v98->m_Items[0];
                v121 = v98->m_Items[2];
                v120 = (ScriptMessageCommonManager_o *)v6;
                goto LABEL_170;
              }
              v99 = &StringLiteral_21700/*"parameter error"*/;
              if ( v118 )
                goto LABEL_172;
              v120 = (ScriptMessageCommonManager_o *)v6;
              v119 = 0LL;
            }
            v121 = 0LL;
LABEL_170:
            ScriptMessageCommonManager__SetFontSize(v120, v119, v121, 0LL);
            goto LABEL_42;
          }
          if ( (unsigned int)this > 0x7B80C780 )
          {
            if ( (_DWORD)this != -2124547466 )
            {
              if ( (_DWORD)this != -2064143255 )
                goto LABEL_42;
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v96,
                                                 (System_String_o *)StringLiteral_20742/*"messageOff"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                goto LABEL_42;
              if ( !v98 )
                goto LABEL_191;
              v99 = &StringLiteral_21700/*"parameter error"*/;
              if ( !*(_QWORD *)&v98->max_length )
              {
                ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v6, 0LL);
                ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v6, 0LL);
                goto LABEL_42;
              }
              goto LABEL_172;
            }
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v96,
                                               (System_String_o *)StringLiteral_21690/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v98 )
              goto LABEL_191;
            v99 = &StringLiteral_21699/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v98->max_length )
              goto LABEL_172;
            v6->fields.state = 4;
            v105 = &StringLiteral_21690/*"page"*/;
            goto LABEL_157;
          }
          if ( (_DWORD)this == 1787721130 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v96,
                                               (System_String_o *)StringLiteral_18571/*"end"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v98 )
              goto LABEL_191;
            v99 = &StringLiteral_21699/*"parameter be unnecessary"*/;
            if ( !*(_QWORD *)&v98->max_length )
            {
              CommonMessageManager__EndExecuteScript(v6, method);
              goto LABEL_42;
            }
            goto LABEL_172;
          }
          if ( (_DWORD)this != 2072037248 )
            goto LABEL_42;
          v104 = (System_String_o **)&StringLiteral_22516/*"speed"*/;
LABEL_106:
          this = (CommonMessageManager_o *)System_String__op_Equality(v96, *v104, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
            goto LABEL_42;
          if ( !v98 )
            goto LABEL_191;
          v111 = *(_QWORD *)&v98->max_length;
          if ( (_DWORD)v111 == 1 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v98->m_Items[0],
                                               (System_String_o *)StringLiteral_755/*"-"*/,
                                               0LL);
            v112 = -1.0;
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v98->max_length )
                goto LABEL_190;
              v112 = System_Single__Parse(v98->m_Items[0], 0LL);
            }
            v113 = (ScriptMessageCommonManager_o *)v6;
          }
          else
          {
            v99 = &StringLiteral_21700/*"parameter error"*/;
            if ( v111 )
              goto LABEL_172;
            v113 = (ScriptMessageCommonManager_o *)v6;
            v112 = -1.0;
          }
          ScriptMessageCommonManager__SetSpeed(v113, v112, 0LL);
          goto LABEL_42;
        }
        if ( (unsigned int)this > 0xE30C2799 )
        {
          if ( (unsigned int)this > 0xEE0C38EA )
          {
            if ( (_DWORD)this == -200523172 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v96,
                                                 (System_String_o *)StringLiteral_21886/*"q"*/,
                                                 0LL);
              goto LABEL_42;
            }
            if ( (_DWORD)this != -166967934 )
            {
LABEL_42:
              ++v6->fields.executeIndex;
              goto LABEL_127;
            }
            v104 = (System_String_o **)&StringLiteral_22173/*"s"*/;
            goto LABEL_106;
          }
          if ( (_DWORD)this != -385076981 )
          {
            if ( (_DWORD)this != -301188886 )
              goto LABEL_42;
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v96,
                                               (System_String_o *)StringLiteral_20338/*"k"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            if ( !v98 )
              goto LABEL_191;
            v99 = &StringLiteral_21699/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v98->max_length )
              goto LABEL_172;
            v6->fields.state = 4;
            v105 = &StringLiteral_23042/*"touch"*/;
LABEL_157:
            v6->fields.waitType = (struct System_String_o *)*v105;
            goto LABEL_158;
          }
          v103 = &StringLiteral_20421/*"l"*/;
        }
        else
        {
          if ( (unsigned int)this > 0x9859D490 )
          {
            if ( (_DWORD)this == -1460566783 )
            {
              v110 = &StringLiteral_19036/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_42;
              v110 = &StringLiteral_18878/*"f"*/;
            }
            goto LABEL_148;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v96,
                                               (System_String_o *)StringLiteral_23499/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_42;
            v6->fields.state = 4;
            if ( !v98 )
              goto LABEL_191;
            if ( (int)v98->max_length < 1 )
            {
              v99 = &StringLiteral_21700/*"parameter error"*/;
              goto LABEL_172;
            }
            *p_waitType = v98->m_Items[0];
LABEL_158:
            v100 = &v6->fields.waitType;
            goto LABEL_41;
          }
          if ( (_DWORD)this != -1738943344 )
            goto LABEL_42;
          v103 = &StringLiteral_16899/*"betweenHeight"*/;
        }
        this = (CommonMessageManager_o *)System_String__op_Equality(v96, (System_String_o *)*v103, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_42;
        if ( !v98 )
          goto LABEL_191;
        v115 = *(_QWORD *)&v98->max_length;
        if ( (_DWORD)v115 == 1 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(
                                             v98->m_Items[0],
                                             (System_String_o *)StringLiteral_755/*"-"*/,
                                             0LL);
          v116 = -1.0;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( !v98->max_length )
            {
LABEL_190:
              v125 = sub_B5D6C8(this);
              sub_B5D668(v125, 0LL);
            }
            v116 = System_Single__Parse(v98->m_Items[0], 0LL);
          }
          v117 = (ScriptMessageCommonManager_o *)v6;
        }
        else
        {
          v99 = &StringLiteral_21700/*"parameter error"*/;
          if ( v115 )
            goto LABEL_172;
          v117 = (ScriptMessageCommonManager_o *)v6;
          v116 = -1.0;
        }
        ScriptMessageCommonManager__SetBetweenLineHeight(v117, v116, 0LL);
        goto LABEL_42;
      }
      v101 = *p_waitType;
      if ( !*p_waitType )
        goto LABEL_175;
      v102 = PrivateImplementationDetails___ComputeStringHash_21231600(*p_waitType, 0LL);
      if ( v102 > 0x698989D8 )
        break;
      if ( v102 > 0xD841B5E )
      {
        if ( v102 == 619841764 )
        {
          if ( !System_String__op_Equality(v101, (System_String_o *)StringLiteral_20733/*"message"*/, 0LL) )
            goto LABEL_175;
          if ( !ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v6, 0LL) )
          {
            if ( *p_waitTalkName )
              CommonMessageManager__SetTalkName(v6, *p_waitTalkName, v108);
            v114 = *p_waitMessage;
            if ( !*p_waitMessage )
              v114 = (System_String_o *)StringLiteral_1/*""*/;
            ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v6, v114, 0, 0, 0LL);
            playSpeed = v6->fields.playSpeed;
            v6->fields.isCancelInput = 0;
LABEL_118:
            if ( playSpeed == 3 )
              this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                                 (ScriptMessageCommonManager_o *)v6,
                                                 0,
                                                 0LL);
            goto LABEL_120;
          }
          if ( v6->fields.isBusy )
            goto LABEL_183;
          if ( v6->fields.isCancelInput )
            v6->fields.isCancelInput = 0;
          v109 = &StringLiteral_20736/*"message2"*/;
        }
        else
        {
          if ( v102 != 1550717474 )
          {
            if ( v102 == 1770621400 && System_String__op_Equality(v101, (System_String_o *)StringLiteral_23042/*"touch"*/, 0LL) )
            {
              if ( v6->fields.isBusy )
              {
LABEL_183:
                ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v6, delta > 0.0, 0LL);
                return !v6->fields.isBusy && v6->fields.state == 3;
              }
              ScriptMessageCommonManager__WaitNextTouch(
                (ScriptMessageCommonManager_o *)v6,
                v6->fields.isDispLastTouchMark,
                0LL);
              v124 = &StringLiteral_23043/*"touch2"*/;
              goto LABEL_189;
            }
            goto LABEL_175;
          }
          if ( !System_String__op_Equality(v101, (System_String_o *)StringLiteral_17677/*"clear"*/, 0LL) )
            goto LABEL_175;
          if ( v6->fields.isBusy )
            goto LABEL_183;
          if ( v6->fields.isCancelInput )
            v6->fields.isCancelInput = 0;
          else
            ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v6, 1, 0LL);
          v109 = &StringLiteral_17679/*"clear2"*/;
        }
        goto LABEL_125;
      }
      if ( v102 == 256629 )
      {
        if ( !System_String__op_Equality(v101, (System_String_o *)StringLiteral_20737/*"message3"*/, 0LL) || v6->fields.isScroll )
          goto LABEL_175;
        v106 = *p_waitMessage;
        if ( !*p_waitMessage )
          v106 = (System_String_o *)StringLiteral_1/*""*/;
        ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v6, v106, 0, 0, 0LL);
        playSpeed = v6->fields.playSpeed;
        goto LABEL_118;
      }
      if ( v102 != 226761566
        || !System_String__op_Equality(v101, (System_String_o *)StringLiteral_23043/*"touch2"*/, 0LL)
        || v6->fields.isWaitNextTouchRequest )
      {
        goto LABEL_175;
      }
      ScriptMessageCommonManager__ClearCount((ScriptMessageCommonManager_o *)v6, 0LL);
      v6->fields.isCancelInput = 1;
LABEL_120:
      state = 3;
      v6->fields.state = 3;
    }
    if ( v102 > 0x91466F30 )
      break;
    if ( v102 != -2124547466 )
    {
      if ( v102 != -1857654992
        || !System_String__op_Equality(v101, (System_String_o *)StringLiteral_17679/*"clear2"*/, 0LL)
        || v6->fields.isWaitNextTouchRequest )
      {
        goto LABEL_175;
      }
LABEL_87:
      ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v6, 0LL);
      goto LABEL_120;
    }
    if ( !System_String__op_Equality(v101, (System_String_o *)StringLiteral_21690/*"page"*/, 0LL) )
      goto LABEL_175;
    if ( v6->fields.isBusy )
      goto LABEL_183;
    if ( v6->fields.isCancelInput )
      v6->fields.isCancelInput = 0;
    else
      ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v6, 1, 0LL);
    v109 = &StringLiteral_21693/*"page2"*/;
LABEL_125:
    *p_waitType = (System_String_o *)*v109;
LABEL_126:
    sub_B5D560(&v6->fields.waitType);
LABEL_127:
    state = v6->fields.state;
  }
  if ( v102 == -336528737 )
  {
    if ( !System_String__op_Equality(v101, (System_String_o *)StringLiteral_21694/*"page3"*/, 0LL) || v6->fields.isScroll )
      goto LABEL_175;
    goto LABEL_87;
  }
  if ( v102 == -16520990 )
  {
    if ( !System_String__op_Equality(v101, (System_String_o *)StringLiteral_20736/*"message2"*/, 0LL)
      || v6->fields.isWaitNextTouchRequest )
    {
      goto LABEL_175;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v6, v6->fields.playSpeed == 3, 0, 0LL);
    v6->fields.waitType = (struct System_String_o *)StringLiteral_20737/*"message3"*/;
    goto LABEL_126;
  }
  if ( v102 == -353306356
    && System_String__op_Equality(v101, (System_String_o *)StringLiteral_21693/*"page2"*/, 0LL)
    && !v6->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v6, v6->fields.playSpeed == 3, 0LL);
    v124 = &StringLiteral_21694/*"page3"*/;
LABEL_189:
    v6->fields.waitType = (struct System_String_o *)*v124;
    sub_B5D560(&v6->fields.waitType);
  }
LABEL_175:
  isBusy = v6->fields.isBusy;
  ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v6, delta > 0.0, 0LL);
  if ( !isBusy )
    return 0;
  return !v6->fields.isBusy && v6->fields.state == 3;
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
  sub_B5D560(&this->fields.callbackFunc);
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
  __int64 v3; // x3
  int32_t charaIndex; // [xsp+Ch] [xbp-34h] BYREF
  System_String_o *charaName; // [xsp+10h] [xbp-30h] BYREF
  System_String_o *className; // [xsp+18h] [xbp-28h] BYREF
  System_String_o *imageName; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42E4D44 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E4D44 = 1;
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
  sub_B5D560(&this->fields.touchCallbackFunc);
}


void __fastcall CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0LL); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}