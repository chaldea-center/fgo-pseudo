void __fastcall RubyLabelHelper___ctor(
        RubyLabelHelper_o *this,
        UILabel_o *label,
        UnityEngine_GameObject_o *inputMainPrefab,
        UnityEngine_GameObject_o *inputRubyPrefab,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_int__o *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_bool__o *v37; // x23
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_bool__o *v41; // x23
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x23
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Collections_Generic_List_object__o *v49; // x23
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  UnityEngine_Object_o **p_rubyPrefab; // x19
  __int64 v52; // x1
  UnityEngine_Object_o *v53; // x20

  if ( (byte_4B10FBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, label, inputMainPrefab);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UILabel___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_UILabel__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    byte_4B10FBB = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       label,
                                                       inputMainPrefab,
                                                       inputRubyPrefab);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v25;
  sub_1BCA784(&this->fields.mainTextList, v25);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v29;
  sub_1BCA784(&this->fields.rubyTextList, v29);
  v33 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.textPositionYList = v33;
  sub_1BCA784(&this->fields.textPositionYList, v33);
  v37 = (System_Collections_Generic_List_bool__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v34,
                                                     v35,
                                                     v36);
  System_Collections_Generic_List_bool____ctor(
    v37,
    (const MethodInfo_35583C4 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyFlagList = v37;
  sub_1BCA784(&this->fields.rubyFlagList, v37);
  v41 = (System_Collections_Generic_List_bool__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_bool__TypeInfo,
                                                     v38,
                                                     v39,
                                                     v40);
  System_Collections_Generic_List_bool____ctor(
    v41,
    (const MethodInfo_35583C4 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v41;
  sub_1BCA784(&this->fields.rubyLineList, v41);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UILabel__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v45;
  sub_1BCA784(&this->fields.mainList, v45);
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UILabel__TypeInfo,
                                                       v46,
                                                       v47,
                                                       v48);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v49;
  sub_1BCA784(&this->fields.rubyList, v49);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.messageLabel = label;
  sub_1BCA784(&this->fields, label);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_1BCA784(&this->fields.mainPrefab, inputMainPrefab);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = (UnityEngine_Object_o **)&this->fields.rubyPrefab;
  sub_1BCA784(p_rubyPrefab, inputRubyPrefab);
  v53 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
  UnityEngine_Object__op_Inequality(v53, 0LL, 0LL);
  UnityEngine_Object__op_Inequality(*p_rubyPrefab, 0LL, 0LL);
}


System_String_o *__fastcall RubyLabelHelper__GetFormalText(
        RubyLabelHelper_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_String_o *v20; // x22
  System_Collections_Generic_List_char__o *v21; // x21
  System_String_o *Chars; // x0
  __int64 v23; // x1
  int32_t v24; // w23
  char v25; // w19
  char v26; // w29
  char v27; // w26
  System_String_o *v28; // x24
  __int64 v29; // x1
  System_String_o *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x0
  struct System_Char_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  System_String_o *v36; // x1
  System_String_o *v37; // x0
  const MethodInfo *v38; // x2
  struct UILabel_o *messageLabel; // x8
  RubyLabelHelper_o *v41; // [xsp+0h] [xbp-70h]
  __int16 v42[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B10FC0 & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, labelText, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_char__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_char___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_char__TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15990/*"[#"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v18, v19);
    byte_4B10FC0 = 1;
  }
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  v42[0] = 0;
  v21 = (System_Collections_Generic_List_char__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_char__TypeInfo,
                                                     labelText,
                                                     method,
                                                     v3);
  System_Collections_Generic_List_char____ctor(
    v21,
    (const MethodInfo_355D46C *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_43;
  v41 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 1;
    v28 = v20;
    while ( 1 )
    {
      v42[0] = System_String__get_Chars(labelText, v24, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo, v29);
      v30 = System_Char__ToString((uint16_t)v42, 0LL);
      v20 = System_String__Concat_62401220(v20, v30, 0LL);
      if ( (v26 & 1) != 0 )
      {
        v42[0] = System_String__get_Chars(labelText, v24, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v31);
        v32 = System_Char__ToString((uint16_t)v42, 0LL);
        v28 = System_String__Concat_62401220(v28, v32, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v24, 0LL);
      if ( !v21 )
        goto LABEL_43;
      items = v21->fields._items;
      v34 = Method_System_Collections_Generic_List_char__Add__;
      ++v21->fields._version;
      if ( !items )
        goto LABEL_43;
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v21,
          (uint16_t)Chars,
          *(const MethodInfo_355DCC0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = size + 1;
        items->m_Items[size + 2] = (unsigned __int16)Chars;
      }
      if ( System_String__get_Chars(labelText, v24, 0LL) == 91
        && System_String__get_Chars(labelText, v24 + 1, 0LL) == 35 )
      {
        v27 = 0;
      }
      else
      {
        if ( (v25 & 1) == 0 )
        {
          v25 = 0;
          goto LABEL_35;
        }
        Chars = (System_String_o *)System_String__get_Chars(labelText, v24, 0LL);
        v42[0] = (__int16)Chars;
        switch ( (unsigned __int16)Chars )
        {
          case ']':
            if ( (v26 & 1) != 0 )
            {
              Chars = System_String__Concat_62401220((System_String_o *)StringLiteral_1541/*":"*/, v28, 0LL);
              if ( !v20 )
                goto LABEL_43;
              v36 = Chars;
            }
            else
            {
              if ( !v20 )
                goto LABEL_43;
              v36 = (System_String_o *)StringLiteral_16236/*"]"*/;
            }
            v37 = System_String__Replace_62420848(v20, v36, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            v28 = (System_String_o *)StringLiteral_1/*""*/;
            v20 = v37;
            v25 = 0;
            v26 = 0;
            goto LABEL_35;
          case ':':
            v25 = 1;
            v26 = 1;
            goto LABEL_35;
          case '#':
            if ( !v20 )
              goto LABEL_43;
            v20 = System_String__Replace_62420848(
                    v20,
                    (System_String_o *)StringLiteral_15990/*"[#"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            break;
        }
      }
      v25 = 1;
LABEL_35:
      if ( ++v24 >= labelText->fields._stringLength )
        goto LABEL_38;
    }
  }
  v27 = 1;
LABEL_38:
  Chars = (System_String_o *)WrapControlText__textAdjust(v41->fields.messageLabel, v20, 22, 0, 0, 0LL);
  if ( (v27 & 1) != 0 )
  {
    messageLabel = v41->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_43:
    sub_1BCAA3C(Chars, v23);
  }
  return RubyLabelHelper__TextFormalAdjust(v41, (System_Collections_Generic_IReadOnlyList_char__o *)v21, v38);
}


void __fastcall RubyLabelHelper__ReleasePrefabs(RubyLabelHelper_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Generic_List_UILabel__o *rubyList; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_Object_o *v26; // x20
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t size; // w2
  int v29; // w9
  struct System_Collections_Generic_List_string__o *rubyTextList; // x8
  int32_t v31; // w2
  int v32; // w9
  struct System_Collections_Generic_List_int__o *textPositionYList; // x8
  int v34; // w9
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x8
  int v36; // w9
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x8
  int v38; // w9
  struct System_Collections_Generic_List_UILabel__o *mainList; // x8
  int32_t v40; // w2
  int v41; // w9
  struct System_Collections_Generic_List_UILabel__o *v42; // x8
  int32_t v43; // w2
  int v44; // w9
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B10FBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UILabel__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Clear__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B10FBC = 1;
  }
  memset(&v46, 0, sizeof(v46));
  rubyList = this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v46.fields._current )
      sub_1BCAA3C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v46.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  rubyList = this->fields.mainList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v46 = v45;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v46.fields._current )
      sub_1BCAA3C(0LL, v24);
    v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)v46.fields._current,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    UnityEngine_Object__Destroy_70154244(v26, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  mainTextList = this->fields.mainTextList;
  if ( !mainTextList )
    goto LABEL_35;
  size = mainTextList->fields._size;
  v29 = mainTextList->fields._version + 1;
  mainTextList->fields._size = 0;
  mainTextList->fields._version = v29;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mainTextList->fields._items, 0, size, 0LL);
  rubyTextList = this->fields.rubyTextList;
  if ( !rubyTextList )
    goto LABEL_35;
  v31 = rubyTextList->fields._size;
  v32 = rubyTextList->fields._version + 1;
  rubyTextList->fields._size = 0;
  rubyTextList->fields._version = v32;
  if ( v31 >= 1 )
    System_Array__Clear((System_Array_o *)rubyTextList->fields._items, 0, v31, 0LL);
  textPositionYList = this->fields.textPositionYList;
  if ( !textPositionYList )
    goto LABEL_35;
  v34 = textPositionYList->fields._version + 1;
  textPositionYList->fields._size = 0;
  textPositionYList->fields._version = v34;
  rubyFlagList = this->fields.rubyFlagList;
  if ( !rubyFlagList )
    goto LABEL_35;
  v36 = rubyFlagList->fields._version + 1;
  rubyFlagList->fields._size = 0;
  rubyFlagList->fields._version = v36;
  rubyLineList = this->fields.rubyLineList;
  if ( !rubyLineList )
    goto LABEL_35;
  v38 = rubyLineList->fields._version + 1;
  rubyLineList->fields._size = 0;
  rubyLineList->fields._version = v38;
  mainList = this->fields.mainList;
  if ( !mainList )
    goto LABEL_35;
  v40 = mainList->fields._size;
  v41 = mainList->fields._version + 1;
  mainList->fields._size = 0;
  mainList->fields._version = v41;
  if ( v40 >= 1 )
    System_Array__Clear((System_Array_o *)mainList->fields._items, 0, v40, 0LL);
  v42 = this->fields.rubyList;
  if ( !v42 )
LABEL_35:
    sub_1BCAA3C(rubyList, method);
  v43 = v42->fields._size;
  v44 = v42->fields._version + 1;
  v42->fields._size = 0;
  v42->fields._version = v44;
  if ( v43 >= 1 )
    System_Array__Clear((System_Array_o *)v42->fields._items, 0, v43, 0LL);
}


void __fastcall RubyLabelHelper__SetMainObject(RubyLabelHelper_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 messageLabel; // x0
  int32_t v21; // w20
  int v22; // w23
  float v23; // s0
  float v24; // s8
  float v25; // s0
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t v27; // w24
  int32_t v28; // w21
  int v29; // w26
  int32_t v30; // w22
  float v31; // s9
  int v32; // w27
  float v33; // s10
  float v34; // s8
  float v35; // s12
  Il2CppObject *mainPrefab; // x23
  __int64 v37; // x1
  Il2CppObject *Component_object; // x25
  UILabel_o *v39; // x23
  struct UILabel_o *v40; // x8
  int32_t Item; // w8
  bool v42; // zf
  _BOOL4 v43; // w8
  float v44; // s13
  UnityEngine_Transform_o *v45; // x24
  const MethodInfo *v46; // x4
  float v47; // s0
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  float v51; // s8
  __int64 v52; // x8
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B10FBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Transform___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UILabel__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    byte_4B10FBE = 1;
  }
  messageLabel = (__int64)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_35;
  v21 = *(_DWORD *)(messageLabel + 424);
  v22 = *(_DWORD *)(messageLabel + 528);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)messageLabel + 664LL))(
    messageLabel,
    *(_QWORD *)(*(_QWORD *)messageLabel + 672LL));
  messageLabel = (__int64)this->fields.messageLabel;
  if ( !messageLabel
    || (v24 = v23,
        LODWORD(v25) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)messageLabel, 0LL),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_35:
    sub_1BCAA3C(messageLabel, method);
  }
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = (float)(((v21 - 15) & ~((v21 - 15) >> 31)) + 2 * v22);
  v32 = v22 + v21;
  v33 = v24 * v25;
  v34 = 0.0;
  v35 = 0.0;
  while ( v30 < mainTextList->fields._size )
  {
    messageLabel = (__int64)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)messageLabel,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
      messageLabel = (__int64)UnityEngine_Object__Instantiate_object__49903816(
                                mainPrefab,
                                (UnityEngine_Transform_o *)Component_object,
                                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      if ( messageLabel )
      {
        messageLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)messageLabel,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        if ( this->fields.mainTextList )
        {
          v39 = (UILabel_o *)messageLabel;
          messageLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this->fields.mainTextList,
                                    v30,
                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( v39 )
          {
            UILabel__set_text(v39, (System_String_o *)messageLabel, 0LL);
            UILabel__set_fontSize(v39, v21, 0LL);
            v40 = this->fields.messageLabel;
            if ( v40 )
            {
              UIWidget__set_depth((UIWidget_o *)v39, v40->fields.mDepth, 0LL);
              messageLabel = (__int64)this->fields.textPositionYList;
              if ( messageLabel )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         (System_Collections_Generic_List_int__o *)messageLabel,
                         v30,
                         (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
                messageLabel = (__int64)this->fields.rubyLineList;
                v42 = v27 == Item;
                v43 = v27 == Item;
                v44 = v42 ? v34 : 0.0;
                if ( messageLabel )
                {
                  v29 &= v43;
                  if ( !(v29 & 1 | !System_Collections_Generic_List_bool___get_Item(
                                      (System_Collections_Generic_List_bool__o *)messageLabel,
                                      v30,
                                      (const MethodInfo_3558928 *)Method_System_Collections_Generic_List_bool__get_Item__)) )
                  {
                    v35 = v35 + v31;
                    v29 = 1;
                    this->fields.addSize.fields.y = v35;
                  }
                  messageLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v39, 0LL);
                  if ( this->fields.textPositionYList )
                  {
                    v45 = (UnityEngine_Transform_o *)messageLabel;
                    messageLabel = System_Collections_Generic_List_int___get_Item(
                                     this->fields.textPositionYList,
                                     v30,
                                     (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
                    if ( v45 )
                    {
                      v53.fields.y = (float)-(v32 * messageLabel) - v35;
                      v53.fields.x = v44 - v33;
                      v53.fields.z = 0.0;
                      UnityEngine_Transform__set_localPosition(v45, v53, 0LL);
                      messageLabel = (__int64)this->fields.rubyFlagList;
                      if ( messageLabel )
                      {
                        if ( System_Collections_Generic_List_bool___get_Item(
                               (System_Collections_Generic_List_bool__o *)messageLabel,
                               v30,
                               (const MethodInfo_3558928 *)Method_System_Collections_Generic_List_bool__get_Item__) )
                        {
                          messageLabel = (__int64)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v39,
                                                    0LL);
                          if ( !messageLabel )
                            goto LABEL_35;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0LL);
                          RubyLabelHelper__SetRubyObject(this, v28++, localPosition, v21, v39, v46);
                        }
                        messageLabel = (__int64)this->fields.textPositionYList;
                        if ( messageLabel )
                        {
                          v27 = System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)messageLabel,
                                  v30,
                                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
                          LODWORD(v47) = *(_QWORD *)&UILabel__get_printedSize(v39, 0LL);
                          messageLabel = (__int64)this->fields.mainList;
                          if ( messageLabel )
                          {
                            v48 = *(_QWORD *)(messageLabel + 16);
                            v49 = Method_System_Collections_Generic_List_UILabel__Add__;
                            ++*(_DWORD *)(messageLabel + 28);
                            if ( v48 )
                            {
                              v50 = *(int *)(messageLabel + 24);
                              v51 = v47;
                              if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)messageLabel,
                                  (Il2CppObject *)v39,
                                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v52 = v48 + 8 * v50;
                                *(_DWORD *)(messageLabel + 24) = v50 + 1;
                                *(_QWORD *)(v52 + 32) = v39;
                                messageLabel = sub_1BCA784(v52 + 32, v39);
                              }
                              mainTextList = this->fields.mainTextList;
                              v34 = v44 + v51;
                              ++v30;
                              if ( mainTextList )
                                continue;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_35;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RubyLabelHelper__SetRubyObject(
        RubyLabelHelper_o *this,
        int32_t idx,
        UnityEngine_Vector3_o mainPosition,
        int32_t fontSize,
        UILabel_o *mainLabel,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s8
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Component_o *messageLabel; // x0
  Il2CppObject *rubyPrefab; // x21
  __int64 v30; // x1
  Il2CppObject *Component_object; // x24
  UILabel_o *v32; // x21
  float v33; // s0
  int32_t v34; // w24
  Il2CppObject *Item; // x0
  struct System_String_o *mText; // x8
  int v37; // w27
  struct System_Collections_Generic_List_string__o *rubyTextList; // x25
  Il2CppObject *v39; // x0
  Il2CppObject *v40; // x0
  int32_t v41; // w8
  int v42; // w23
  int32_t v43; // w8
  Il2CppObject *v44; // x0
  struct UILabel_o *v45; // x8
  float v46; // s10
  float v47; // s11
  float v48; // s0
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 klass_low; // x10
  __int64 v52; // x8
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_4B10FBF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Transform___, *(_QWORD *)&idx, *(_QWORD *)&fontSize);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UILabel__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__set_Item__, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_25580/*"・"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v26, v27);
    byte_4B10FBF = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_40;
  rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       messageLabel,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49903816(
                                              rubyPrefab,
                                              (UnityEngine_Transform_o *)Component_object,
                                              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  if ( !messageLabel )
    goto LABEL_40;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_40;
  v32 = (UILabel_o *)messageLabel;
  v33 = UILabel__get_printedSize(mainLabel, 0LL).fields.x;
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  v34 = v33 == INFINITY ? 0x80000000 : (int)v33;
  if ( !messageLabel )
    goto LABEL_40;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)messageLabel,
           idx,
           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  messageLabel = (UnityEngine_Component_o *)System_String__op_Equality(
                                              (System_String_o *)Item,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v37 = -1;
      while ( ++v37 < mText->fields._stringLength )
      {
        rubyTextList = this->fields.rubyTextList;
        if ( rubyTextList )
        {
          v39 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this->fields.rubyTextList,
                  idx,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
          v40 = (Il2CppObject *)System_String__Concat_62401220(
                                  (System_String_o *)v39,
                                  (System_String_o *)StringLiteral_25580/*"・"*/,
                                  0LL);
          System_Collections_Generic_List_object___set_Item(
            (System_Collections_Generic_List_object__o *)rubyTextList,
            idx,
            v40,
            (const MethodInfo_35A19E0 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_40;
      }
      if ( v32 )
      {
        UILabel__set_fontSize(v32, fontSize, 0LL);
        if ( fontSize >= 0 )
          v43 = fontSize;
        else
          v43 = fontSize + 1;
        v42 = (v43 >> 1) + 5;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1BCAA3C(messageLabel, *(_QWORD *)&idx);
  }
  if ( !v32 )
    goto LABEL_40;
  if ( fontSize >= 0 )
    v41 = fontSize;
  else
    v41 = fontSize + 1;
  UILabel__set_fontSize(v32, v41 >> 1, 0LL);
  v42 = v32->fields.mFontSize + 1;
LABEL_29:
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  if ( !messageLabel )
    goto LABEL_40;
  v44 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)messageLabel,
          idx,
          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  UILabel__set_text(v32, (System_String_o *)v44, 0LL);
  v45 = this->fields.messageLabel;
  if ( !v45 )
    goto LABEL_40;
  UIWidget__set_depth((UIWidget_o *)v32, v45->fields.mDepth, 0LL);
  LODWORD(v46) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  LODWORD(v47) = *(_QWORD *)&UILabel__get_printedSize(v32, 0LL);
  v48 = UILabel__get_printedSize(v32, 0LL).fields.x;
  if ( v48 <= UILabel__get_printedSize(mainLabel, 0LL).fields.x )
    x = x + (float)((float)(v46 - v47) * 0.5);
  else
    UILabel__SetCondensedScale(v32, v34, 0LL);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v32, 0LL);
  if ( !messageLabel )
    goto LABEL_40;
  v53.fields.y = y + (float)v42;
  v53.fields.z = 0.0;
  v53.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v53, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyList;
  if ( !messageLabel )
    goto LABEL_40;
  v49 = *(_QWORD *)&messageLabel->fields.m_CachedPtr;
  v50 = Method_System_Collections_Generic_List_UILabel__Add__;
  ++HIDWORD(messageLabel[1].klass);
  if ( !v49 )
    goto LABEL_40;
  klass_low = SLODWORD(messageLabel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v49 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)messageLabel,
      (Il2CppObject *)v32,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = v49 + 8 * klass_low;
    LODWORD(messageLabel[1].klass) = klass_low + 1;
    *(_QWORD *)(v52 + 32) = v32;
    sub_1BCA784(v52 + 32, v32);
  }
}


void __fastcall RubyLabelHelper__SetText(RubyLabelHelper_o *this, System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_String_o *FormalText; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  UnityEngine_Behaviour_o *messageLabel; // x0

  RubyLabelHelper__ReleasePrefabs(this, (const MethodInfo *)text);
  FormalText = RubyLabelHelper__GetFormalText(this, text, v5);
  RubyLabelHelper__SetTextObjectList(this, FormalText, v7);
  if ( !this->fields.notRubyFlag )
  {
    RubyLabelHelper__SetMainObject(this, v8);
    messageLabel = (UnityEngine_Behaviour_o *)this->fields.messageLabel;
    if ( !messageLabel )
      sub_1BCAA3C(0LL, v9);
    UnityEngine_Behaviour__set_enabled(messageLabel, 0, 0LL);
  }
}


void __fastcall RubyLabelHelper__SetTextObjectList(
        RubyLabelHelper_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  RubyLabelHelper_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x22
  int rubyPrefab; // w8
  char v15; // w20
  int32_t v16; // w21
  System_String_o *v17; // x25
  System_String_o *v18; // x23
  bool continueRuby; // w26
  int32_t v20; // w24
  bool v21; // w28
  uint16_t Chars; // w0
  struct UILabel_o *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  UILabel_c **v26; // x8
  System_String_o *v27; // x0
  __int64 v28; // x1
  struct UILabel_o *messageLabel; // x8
  _QWORD *v30; // x9
  __int64 rubyPrefab_low; // x10
  UILabel_c **v32; // x8
  System_String_o *v33; // x1
  System_String_o *v34; // x0
  struct UILabel_o *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  UILabel_c **v38; // x8
  struct UILabel_o *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  struct UILabel_o *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  struct UILabel_o *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  struct UILabel_o *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct UILabel_o *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  struct UILabel_o *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct UILabel_o *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  UILabel_c **v60; // x8
  struct UILabel_o *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  struct UILabel_o *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  struct UILabel_o *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  struct UILabel_o *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  UILabel_c **v73; // x8
  RubyLabelHelper_o *v74; // [xsp+0h] [xbp-70h]
  __int16 v75[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4B10FBD & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, message, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_bool__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v9, v10);
    this = (RubyLabelHelper_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B10FBD = 1;
  }
  v75[0] = 0;
  v13 = (Il2CppObject *)StringLiteral_1/*""*/;
  v4->fields.notRubyFlag = 1;
  v4->fields.continueRuby = 0;
  if ( !message || (this = (RubyLabelHelper_o *)System_String__Split(message, 0xAu, 0, 0LL)) == 0LL )
LABEL_116:
    sub_1BCAA3C(this, message);
  rubyPrefab = (int)this->fields.rubyPrefab;
  if ( rubyPrefab >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = (System_String_o *)v13;
    v74 = this;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)rubyPrefab )
        sub_1BCAA44(this, message);
      v18 = (System_String_o *)*((_QWORD *)&this->fields.mainPrefab + v16);
      continueRuby = v4->fields.continueRuby;
      if ( !v18 )
        goto LABEL_116;
      if ( v18->fields._stringLength >= 1 )
      {
        v20 = 0;
        v21 = v4->fields.continueRuby;
        while ( 1 )
        {
          Chars = System_String__get_Chars(v18, v20, 0LL);
          v75[0] = Chars;
          if ( Chars <= 0x5Au )
            break;
          if ( Chars == 91 )
          {
            if ( System_String__get_Chars(v18, v20 + 1, 0LL) != 35 )
            {
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo, v28);
              v34 = System_Char__ToString((uint16_t)v75, 0LL);
              v17 = System_String__Concat_62401220(v17, v34, 0LL);
              goto LABEL_83;
            }
            v4->fields.continueRuby = 1;
            if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            {
              this = (RubyLabelHelper_o *)v4->fields.mainTextList;
              if ( !this )
                goto LABEL_116;
              messageLabel = this->fields.messageLabel;
              v30 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !messageLabel )
                goto LABEL_116;
              rubyPrefab_low = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)rubyPrefab_low >= LODWORD(messageLabel->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v17,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v32 = &messageLabel->klass + rubyPrefab_low;
                LODWORD(this->fields.rubyPrefab) = rubyPrefab_low + 1;
                v32[4] = (UILabel_c *)v17;
                sub_1BCA784(v32 + 4, v17);
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
              if ( !this )
                goto LABEL_116;
              v48 = this->fields.messageLabel;
              v49 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v48 )
                goto LABEL_116;
              v50 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v50 >= LODWORD(v48->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  continueRuby,
                  *(const MethodInfo_3558C28 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v50 + 1;
                *((_BYTE *)&v48->fields.leftAnchor + v50) = continueRuby;
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
              if ( !this )
                goto LABEL_116;
              v51 = this->fields.messageLabel;
              v52 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v51 )
                goto LABEL_116;
              v53 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v53 >= LODWORD(v51->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  1,
                  *(const MethodInfo_3558C28 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v53 + 1;
                *((_BYTE *)&v51->fields.leftAnchor + v53) = 1;
              }
              this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
              if ( !this )
                goto LABEL_116;
              v54 = this->fields.messageLabel;
              v55 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v54 )
                goto LABEL_116;
              v56 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v56 >= LODWORD(v54->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)this,
                  v16,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v56 + 1;
                *((_DWORD *)&v54->fields.leftAnchor + v56) = v16;
              }
              v17 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v4->fields.notRubyFlag = 0;
            continueRuby = 1;
LABEL_82:
            v21 = 1;
            goto LABEL_83;
          }
          if ( Chars != 93 )
            goto LABEL_33;
          if ( !v21 )
            goto LABEL_24;
          this = (RubyLabelHelper_o *)v4->fields.mainTextList;
          if ( !this )
            goto LABEL_116;
          v23 = this->fields.messageLabel;
          v24 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v23 )
            goto LABEL_116;
          v25 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v25 >= LODWORD(v23->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v17,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &v23->klass + v25;
            LODWORD(this->fields.rubyPrefab) = v25 + 1;
            v26[4] = (UILabel_c *)v17;
            sub_1BCA784(v26 + 4, v17);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
          if ( !this )
            goto LABEL_116;
          v35 = this->fields.messageLabel;
          v36 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v35 )
            goto LABEL_116;
          v37 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v37 >= LODWORD(v35->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v13,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &v35->klass + v37;
            LODWORD(this->fields.rubyPrefab) = v37 + 1;
            v38[4] = (UILabel_c *)v13;
            sub_1BCA784(v38 + 4, v13);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
          if ( !this )
            goto LABEL_116;
          v39 = this->fields.messageLabel;
          v40 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v39 )
            goto LABEL_116;
          v41 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v41 >= LODWORD(v39->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              continueRuby,
              *(const MethodInfo_3558C28 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v41 + 1;
            *((_BYTE *)&v39->fields.leftAnchor + v41) = continueRuby;
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
          if ( !this )
            goto LABEL_116;
          v42 = this->fields.messageLabel;
          v43 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v42 )
            goto LABEL_116;
          v44 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v44 >= LODWORD(v42->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              1,
              *(const MethodInfo_3558C28 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v44 + 1;
            *((_BYTE *)&v42->fields.leftAnchor + v44) = 1;
          }
          this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
          if ( !this )
            goto LABEL_116;
          v45 = this->fields.messageLabel;
          v46 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v45 )
            goto LABEL_116;
          v47 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              v16,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v47 + 1;
            *((_DWORD *)&v45->fields.leftAnchor + v47) = v16;
          }
          continueRuby = 0;
          v21 = 0;
          v15 = 0;
          v13 = (Il2CppObject *)StringLiteral_1/*""*/;
          v4->fields.continueRuby = 0;
          v17 = (System_String_o *)v13;
LABEL_83:
          if ( ++v20 >= v18->fields._stringLength )
            goto LABEL_86;
        }
        if ( Chars == 35 )
        {
          if ( !v21 )
          {
LABEL_24:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo, message);
            v27 = System_Char__ToString((uint16_t)v75, 0LL);
            v17 = System_String__Concat_62401220(v17, v27, 0LL);
            v21 = 0;
            goto LABEL_83;
          }
          goto LABEL_82;
        }
        if ( Chars == 58 )
        {
          if ( !v21 )
            goto LABEL_24;
          v21 = 1;
        }
        else
        {
LABEL_33:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, message);
          v33 = System_Char__ToString((uint16_t)v75, 0LL);
          if ( (v15 & 1) == 0 )
          {
            v17 = System_String__Concat_62401220(v17, v33, 0LL);
            v15 = 0;
            goto LABEL_83;
          }
          v13 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)v13, v33, 0LL);
        }
        v15 = 1;
        goto LABEL_83;
      }
      v21 = v4->fields.continueRuby;
LABEL_86:
      if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        break;
LABEL_114:
      this = v74;
      ++v16;
      rubyPrefab = (int)v74->fields.rubyPrefab;
      if ( v16 >= rubyPrefab )
        return;
    }
    this = (RubyLabelHelper_o *)v4->fields.mainTextList;
    if ( !this )
      goto LABEL_116;
    v57 = this->fields.messageLabel;
    v58 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v57 )
      goto LABEL_116;
    v59 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v17,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      v60 = &v57->klass + v59;
      LODWORD(this->fields.rubyPrefab) = v59 + 1;
      v60[4] = (UILabel_c *)v17;
      sub_1BCA784(v60 + 4, v17);
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
    if ( !this )
      goto LABEL_116;
    v61 = this->fields.messageLabel;
    v62 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v61 )
      goto LABEL_116;
    v63 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v63 >= LODWORD(v61->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        continueRuby,
        *(const MethodInfo_3558C28 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v63 + 1;
      *((_BYTE *)&v61->fields.leftAnchor + v63) = continueRuby;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
    if ( !this )
      goto LABEL_116;
    v64 = this->fields.messageLabel;
    v65 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v64 )
      goto LABEL_116;
    v66 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v66 >= LODWORD(v64->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        v21,
        *(const MethodInfo_3558C28 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v66 + 1;
      *((_BYTE *)&v64->fields.leftAnchor + v66) = v21;
    }
    this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
    if ( !this )
      goto LABEL_116;
    v67 = this->fields.messageLabel;
    v68 = Method_System_Collections_Generic_List_int__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v67 )
      goto LABEL_116;
    v69 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v69 >= LODWORD(v67->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)this,
        v16,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      if ( !v21 )
      {
LABEL_113:
        v17 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_114;
      }
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v69 + 1;
      *((_DWORD *)&v67->fields.leftAnchor + v69) = v16;
      if ( !v21 )
        goto LABEL_113;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
    if ( !this )
      goto LABEL_116;
    v70 = this->fields.messageLabel;
    v71 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v70 )
      goto LABEL_116;
    v72 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v72 >= LODWORD(v70->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v13,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &v70->klass + v72;
      LODWORD(this->fields.rubyPrefab) = v72 + 1;
      v73[4] = (UILabel_c *)v13;
      sub_1BCA784(v73 + 4, v13);
    }
    goto LABEL_113;
  }
}


System_String_o *__fastcall RubyLabelHelper__TextFormalAdjust(
        RubyLabelHelper_o *this,
        System_Collections_Generic_IReadOnlyList_char__o *localMainTextList,
        const MethodInfo *method)
{
  RubyLabelHelper_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x22
  int32_t v12; // w21
  unsigned int i; // w23
  System_Collections_Generic_IReadOnlyList_char__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  struct UILabel_o *messageLabel; // x8
  unsigned __int16 v23; // w24
  uint16_t Chars; // w0
  System_Collections_Generic_IReadOnlyList_char__c *v25; // x8
  uint16_t v26; // w25
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  System_String_o *v30; // x0
  struct UILabel_o *v31; // x8
  struct System_String_o *mText; // x9
  System_Collections_Generic_IReadOnlyList_char__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  unsigned int v41; // w24
  struct UILabel_o *v42; // x8
  struct System_String_o *v43; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  System_String_o *v49; // x0
  struct UILabel_o *v50; // x8
  unsigned __int16 v51; // w26
  struct UILabel_o *v52; // x8
  __int64 v53; // x1
  System_String_o *v54; // x0
  struct UILabel_o *v55; // x8
  struct System_String_o *v56; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  struct UILabel_o *v61; // x8
  __int64 v62; // x1
  System_String_o *v63; // x0
  struct UILabel_o *v64; // x8
  struct System_String_o *v65; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x1
  System_String_o *v71; // x0
  __int16 v73[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4B10FC1 & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, localMainTextList, method);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyList_char__TypeInfo, v7, v8);
    this = (RubyLabelHelper_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B10FC1 = 1;
  }
  v73[0] = 0;
  if ( !localMainTextList )
LABEL_101:
    sub_1BCAA3C(this, localMainTextList);
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  v12 = 0;
  for ( i = 0; ; ++i )
  {
    klass = localMainTextList->klass;
    v15 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
    }
    if ( (int)i >= (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))p_method)(
                     localMainTextList,
                     *(_QWORD *)(p_method + 8)) )
      break;
    v18 = localMainTextList->klass;
    v19 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v20 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v21)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v21 + 8));
    messageLabel = v4->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_101;
    v23 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_101;
    Chars = System_String__get_Chars((System_String_o *)this, v12, 0LL);
    v25 = localMainTextList->klass;
    v26 = Chars;
    v27 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
    {
      v28 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v28 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_24;
      }
      v29 = (__int64)&v25->vtable[*v28].method;
    }
    else
    {
LABEL_24:
      v29 = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v29)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v29 + 8));
    if ( v23 == v26 )
    {
      v73[0] = (__int16)this;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo, localMainTextList);
      v30 = System_Char__ToString((uint16_t)v73, 0LL);
      this = (RubyLabelHelper_o *)System_String__Concat_62401220(v11, v30, 0LL);
      v31 = v4->fields.messageLabel;
      if ( !v31 )
        goto LABEL_101;
      mText = v31->fields.mText;
      if ( !mText )
        goto LABEL_101;
      v11 = (System_String_o *)this;
      if ( v12 < mText->fields._stringLength - 1 )
        ++v12;
    }
    else
    {
      if ( (unsigned __int16)this != 10 )
      {
        v37 = localMainTextList->klass;
        v38 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
        {
          v39 = &v37->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v39 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v38;
            v39 += 4;
            if ( !v38 )
              goto LABEL_47;
          }
          v40 = (__int64)&v37->vtable[*v39].method;
        }
        else
        {
LABEL_47:
          v40 = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        v73[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v40)(
                   localMainTextList,
                   i,
                   *(_QWORD *)(v40 + 8));
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v48);
        v49 = System_Char__ToString((uint16_t)v73, 0LL);
        v11 = System_String__Concat_62401220(v11, v49, 0LL);
        continue;
      }
      v31 = v4->fields.messageLabel;
      if ( !v31 )
        goto LABEL_101;
    }
    this = (RubyLabelHelper_o *)v31->fields.mText;
    if ( !this )
      goto LABEL_101;
    if ( System_String__get_Chars((System_String_o *)this, v12, 0LL) == 10 )
    {
      v33 = localMainTextList->klass;
      v34 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
      {
        v35 = &v33->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)v35 - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_42;
        }
        v36 = (__int64)&v33->vtable[*v35].method;
      }
      else
      {
LABEL_42:
        v36 = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v36)(
                                    localMainTextList,
                                    *(_QWORD *)(v36 + 8));
      v41 = i + 1;
      if ( (int)(i + 1) >= (int)this )
        goto LABEL_66;
      v42 = v4->fields.messageLabel;
      if ( !v42 )
        goto LABEL_101;
      v43 = v42->fields.mText;
      if ( !v43 )
        goto LABEL_101;
      if ( v43->fields._stringLength <= v12 + 1 )
        goto LABEL_66;
      v44 = localMainTextList->klass;
      v45 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
      {
        v46 = &v44->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v46 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_57;
        }
        v47 = (__int64)&v44->vtable[*v46].method;
      }
      else
      {
LABEL_57:
        v47 = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v47)(
                                    localMainTextList,
                                    v41,
                                    *(_QWORD *)(v47 + 8));
      v50 = v4->fields.messageLabel;
      if ( !v50 )
        goto LABEL_101;
      v51 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v50->fields.mText;
      if ( !this )
        goto LABEL_101;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v12 + 1, 0LL);
      if ( v51 == (unsigned __int16)this )
      {
LABEL_66:
        v52 = v4->fields.messageLabel;
        if ( !v52 )
          goto LABEL_101;
        this = (RubyLabelHelper_o *)v52->fields.mText;
        if ( !this )
          goto LABEL_101;
        v73[0] = System_String__get_Chars((System_String_o *)this, v12, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo, v53);
        v54 = System_Char__ToString((uint16_t)v73, 0LL);
        this = (RubyLabelHelper_o *)System_String__Concat_62401220(v11, v54, 0LL);
        v55 = v4->fields.messageLabel;
        if ( !v55 )
          goto LABEL_101;
        v56 = v55->fields.mText;
        if ( !v56 )
          goto LABEL_101;
        v11 = (System_String_o *)this;
        if ( v12 < v56->fields._stringLength - 1 )
          ++v12;
      }
      else
      {
        v57 = localMainTextList->klass;
        v58 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
        {
          v59 = &v57->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v59 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_79;
          }
          v60 = (__int64)&v57->vtable[*v59].method;
        }
        else
        {
LABEL_79:
          v60 = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v60)(
                                      localMainTextList,
                                      v41,
                                      *(_QWORD *)(v60 + 8));
        if ( (unsigned __int16)this == 10 )
        {
          v61 = v4->fields.messageLabel;
          if ( !v61 )
            goto LABEL_101;
          this = (RubyLabelHelper_o *)v61->fields.mText;
          if ( !this )
            goto LABEL_101;
          v73[0] = System_String__get_Chars((System_String_o *)this, v12, 0LL);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, v62);
          v63 = System_Char__ToString((uint16_t)v73, 0LL);
          this = (RubyLabelHelper_o *)System_String__Concat_62401220(v11, v63, 0LL);
          v64 = v4->fields.messageLabel;
          if ( !v64 )
            goto LABEL_101;
          v65 = v64->fields.mText;
          if ( !v65 )
            goto LABEL_101;
          v11 = (System_String_o *)this;
          if ( v12 < v65->fields._stringLength - 1 )
            ++v12;
        }
        else
        {
          v66 = localMainTextList->klass;
          v67 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
          {
            v68 = &v66->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v68 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
            {
              --v67;
              v68 += 4;
              if ( !v67 )
                goto LABEL_95;
            }
            v69 = (__int64)&v66->vtable[*v68].method;
          }
          else
          {
LABEL_95:
            v69 = sub_1C1C7C0(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
          }
          v73[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v69)(
                     localMainTextList,
                     v41,
                     *(_QWORD *)(v69 + 8));
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo, v70);
          v71 = System_Char__ToString((uint16_t)v73, 0LL);
          v11 = System_String__Concat_62401220(v11, v71, 0LL);
          ++i;
        }
      }
    }
  }
  return v11;
}


UnityEngine_Vector2_o __fastcall RubyLabelHelper__get_Size(RubyLabelHelper_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1BCAA3C(0LL, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0LL);
  v5 = printedSize.fields.x + this->fields.addSize.fields.x;
  v6 = printedSize.fields.y + this->fields.addSize.fields.y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}