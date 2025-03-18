void __fastcall RubyLabelHelper___ctor(
        RubyLabelHelper_o *this,
        UILabel_o *label,
        UnityEngine_GameObject_o *inputMainPrefab,
        UnityEngine_GameObject_o *inputRubyPrefab,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x23
  System_Collections_Generic_List_object__o *v18; // x23
  System_Collections_Generic_List_int__o *v19; // x23
  System_Collections_Generic_List_bool__o *v20; // x23
  System_Collections_Generic_List_bool__o *v21; // x23
  System_Collections_Generic_List_object__o *v22; // x23
  System_Collections_Generic_List_object__o *v23; // x23
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  UnityEngine_Object_o **p_rubyPrefab; // x19
  UnityEngine_Object_o *v26; // x20

  if ( (byte_4C1CB77 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, label);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UILabel___ctor__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_bool__TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_List_UILabel__TypeInfo, v13);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v16);
    byte_4C1CB77 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1C3B708(&this->fields.mainTextList);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_1C3B708(&this->fields.rubyTextList);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.textPositionYList = v19;
  sub_1C3B708(&this->fields.textPositionYList);
  v20 = (System_Collections_Generic_List_bool__o *)sub_1C3B9B0(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v20,
    (const MethodInfo_36423D4 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyFlagList = v20;
  sub_1C3B708(&this->fields.rubyFlagList);
  v21 = (System_Collections_Generic_List_bool__o *)sub_1C3B9B0(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v21,
    (const MethodInfo_36423D4 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v21;
  sub_1C3B708(&this->fields.rubyLineList);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v22;
  sub_1C3B708(&this->fields.mainList);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v23;
  sub_1C3B708(&this->fields.rubyList);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.messageLabel = label;
  sub_1C3B708(&this->fields);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_1C3B708(&this->fields.mainPrefab);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = (UnityEngine_Object_o **)&this->fields.rubyPrefab;
  sub_1C3B708(p_rubyPrefab);
  v26 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
  UnityEngine_Object__op_Inequality(*p_rubyPrefab, 0LL, 0LL);
}


System_String_o *__fastcall RubyLabelHelper__GetFormalText(
        RubyLabelHelper_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x22
  System_Collections_Generic_List_char__o *v13; // x21
  System_String_o *Chars; // x0
  __int64 v15; // x1
  int32_t v16; // w23
  char v17; // w19
  char v18; // w29
  char v19; // w26
  System_String_o *v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct System_Char_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  const MethodInfo *v28; // x2
  struct UILabel_o *messageLabel; // x8
  RubyLabelHelper_o *v31; // [xsp+0h] [xbp-70h]
  __int16 v32[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C1CB7C & 1) == 0 )
  {
    sub_1C3B764(&char_TypeInfo, labelText);
    sub_1C3B764(&Method_System_Collections_Generic_List_char__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_char___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_char__TypeInfo, v7);
    sub_1C3B764(&StringLiteral_16139/*"__item"*/, v8);
    sub_1C3B764(&StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v9);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v11);
    byte_4C1CB7C = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v32[0] = 0;
  v13 = (System_Collections_Generic_List_char__o *)sub_1C3B9B0(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v13,
    (const MethodInfo_364747C *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_43;
  v31 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 1;
    v20 = v12;
    while ( 1 )
    {
      v32[0] = System_String__get_Chars(labelText, v16, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v21 = System_Char__ToString((uint16_t)v32, 0LL);
      v12 = System_String__Concat_63368612(v12, v21, 0LL);
      if ( (v18 & 1) != 0 )
      {
        v32[0] = System_String__get_Chars(labelText, v16, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v22 = System_Char__ToString((uint16_t)v32, 0LL);
        v20 = System_String__Concat_63368612(v20, v22, 0LL);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v16, 0LL);
      if ( !v13 )
        goto LABEL_43;
      items = v13->fields._items;
      v24 = Method_System_Collections_Generic_List_char__Add__;
      ++v13->fields._version;
      if ( !items )
        goto LABEL_43;
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v13,
          (uint16_t)Chars,
          *(const MethodInfo_3647CD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size + 2] = (unsigned __int16)Chars;
      }
      if ( System_String__get_Chars(labelText, v16, 0LL) == 91
        && System_String__get_Chars(labelText, v16 + 1, 0LL) == 35 )
      {
        v19 = 0;
      }
      else
      {
        if ( (v17 & 1) == 0 )
        {
          v17 = 0;
          goto LABEL_35;
        }
        Chars = (System_String_o *)System_String__get_Chars(labelText, v16, 0LL);
        v32[0] = (__int16)Chars;
        switch ( (unsigned __int16)Chars )
        {
          case ']':
            if ( (v18 & 1) != 0 )
            {
              Chars = System_String__Concat_63368612((System_String_o *)StringLiteral_1525/*"</Exponent></RSAKeyValue>"*/, v20, 0LL);
              if ( !v12 )
                goto LABEL_43;
              v26 = Chars;
            }
            else
            {
              if ( !v12 )
                goto LABEL_43;
              v26 = (System_String_o *)StringLiteral_16386/*"align-items"*/;
            }
            v27 = System_String__Replace_63388240(v12, v26, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            v20 = (System_String_o *)StringLiteral_1/*""*/;
            v12 = v27;
            v17 = 0;
            v18 = 0;
            goto LABEL_35;
          case ':':
            v17 = 1;
            v18 = 1;
            goto LABEL_35;
          case '#':
            if ( !v12 )
              goto LABEL_43;
            v12 = System_String__Replace_63388240(
                    v12,
                    (System_String_o *)StringLiteral_16139/*"__item"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            break;
        }
      }
      v17 = 1;
LABEL_35:
      if ( ++v16 >= labelText->fields._stringLength )
        goto LABEL_38;
    }
  }
  v19 = 1;
LABEL_38:
  Chars = (System_String_o *)WrapControlText__textAdjust(v31->fields.messageLabel, v12, 22, 0, 0LL);
  if ( (v19 & 1) != 0 )
  {
    messageLabel = v31->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_43:
    sub_1C3B9C0(Chars, v15);
  }
  return RubyLabelHelper__TextFormalAdjust(v31, (System_Collections_Generic_IReadOnlyList_char__o *)v13, v28);
}


void __fastcall RubyLabelHelper__ReleasePrefabs(RubyLabelHelper_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UILabel__o *rubyList; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t size; // w2
  int v18; // w9
  struct System_Collections_Generic_List_string__o *rubyTextList; // x8
  int32_t v20; // w2
  int v21; // w9
  struct System_Collections_Generic_List_int__o *textPositionYList; // x8
  int v23; // w9
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x8
  int v25; // w9
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x8
  int v27; // w9
  struct System_Collections_Generic_List_UILabel__o *mainList; // x8
  int32_t v29; // w2
  int v30; // w9
  struct System_Collections_Generic_List_UILabel__o *v31; // x8
  int32_t v32; // w2
  int v33; // w9
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C1CB78 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_UILabel__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool__Clear__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1CB78 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  rubyList = this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v35.fields._current )
      sub_1C3B9C0(0LL, v12);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v35.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  rubyList = this->fields.mainList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v35.fields._current )
      sub_1C3B9C0(0LL, v14);
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)v35.fields._current,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71122748(v15, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  mainTextList = this->fields.mainTextList;
  if ( !mainTextList )
    goto LABEL_35;
  size = mainTextList->fields._size;
  v18 = mainTextList->fields._version + 1;
  mainTextList->fields._size = 0;
  mainTextList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mainTextList->fields._items, 0, size, 0LL);
  rubyTextList = this->fields.rubyTextList;
  if ( !rubyTextList )
    goto LABEL_35;
  v20 = rubyTextList->fields._size;
  v21 = rubyTextList->fields._version + 1;
  rubyTextList->fields._size = 0;
  rubyTextList->fields._version = v21;
  if ( v20 >= 1 )
    System_Array__Clear((System_Array_o *)rubyTextList->fields._items, 0, v20, 0LL);
  textPositionYList = this->fields.textPositionYList;
  if ( !textPositionYList )
    goto LABEL_35;
  v23 = textPositionYList->fields._version + 1;
  textPositionYList->fields._size = 0;
  textPositionYList->fields._version = v23;
  rubyFlagList = this->fields.rubyFlagList;
  if ( !rubyFlagList )
    goto LABEL_35;
  v25 = rubyFlagList->fields._version + 1;
  rubyFlagList->fields._size = 0;
  rubyFlagList->fields._version = v25;
  rubyLineList = this->fields.rubyLineList;
  if ( !rubyLineList )
    goto LABEL_35;
  v27 = rubyLineList->fields._version + 1;
  rubyLineList->fields._size = 0;
  rubyLineList->fields._version = v27;
  mainList = this->fields.mainList;
  if ( !mainList )
    goto LABEL_35;
  v29 = mainList->fields._size;
  v30 = mainList->fields._version + 1;
  mainList->fields._size = 0;
  mainList->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)mainList->fields._items, 0, v29, 0LL);
  v31 = this->fields.rubyList;
  if ( !v31 )
LABEL_35:
    sub_1C3B9C0(rubyList, method);
  v32 = v31->fields._size;
  v33 = v31->fields._version + 1;
  v31->fields._size = 0;
  v31->fields._version = v33;
  if ( v32 >= 1 )
    System_Array__Clear((System_Array_o *)v31->fields._items, 0, v32, 0LL);
}


void __fastcall RubyLabelHelper__SetMainObject(RubyLabelHelper_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 messageLabel; // x0
  int32_t v12; // w20
  int v13; // w23
  float v14; // s0
  float v15; // s8
  float v16; // s0
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t v18; // w24
  int32_t v19; // w21
  int v20; // w26
  int32_t v21; // w22
  float v22; // s9
  int v23; // w27
  float v24; // s10
  float v25; // s8
  float v26; // s12
  Il2CppObject *mainPrefab; // x23
  Il2CppObject *Component_object; // x25
  UILabel_o *v29; // x23
  struct UILabel_o *v30; // x8
  int32_t Item; // w8
  bool v32; // zf
  _BOOL4 v33; // w8
  float v34; // s13
  UnityEngine_Transform_o *v35; // x24
  const MethodInfo *v36; // x4
  float v37; // s0
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  float v41; // s8
  __int64 v42; // x8
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1CB7A & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Transform___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_UILabel__Add__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C1CB7A = 1;
  }
  messageLabel = (__int64)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_35;
  v12 = *(_DWORD *)(messageLabel + 424);
  v13 = *(_DWORD *)(messageLabel + 528);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)messageLabel + 664LL))(
    messageLabel,
    *(_QWORD *)(*(_QWORD *)messageLabel + 672LL));
  messageLabel = (__int64)this->fields.messageLabel;
  if ( !messageLabel
    || (v15 = v14,
        LODWORD(v16) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)messageLabel, 0LL),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_35:
    sub_1C3B9C0(messageLabel, method);
  }
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = (float)(((v12 - 15) & ~((v12 - 15) >> 31)) + 2 * v13);
  v23 = v13 + v12;
  v24 = v15 * v16;
  v25 = 0.0;
  v26 = 0.0;
  while ( v21 < mainTextList->fields._size )
  {
    messageLabel = (__int64)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)messageLabel,
                           (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      messageLabel = (__int64)UnityEngine_Object__Instantiate_object__50818788(
                                mainPrefab,
                                (UnityEngine_Transform_o *)Component_object,
                                (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
      if ( messageLabel )
      {
        messageLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)messageLabel,
                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        if ( this->fields.mainTextList )
        {
          v29 = (UILabel_o *)messageLabel;
          messageLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this->fields.mainTextList,
                                    v21,
                                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( v29 )
          {
            UILabel__set_text(v29, (System_String_o *)messageLabel, 0LL);
            UILabel__set_fontSize(v29, v12, 0LL);
            v30 = this->fields.messageLabel;
            if ( v30 )
            {
              UIWidget__set_depth((UIWidget_o *)v29, v30->fields.mDepth, 0LL);
              messageLabel = (__int64)this->fields.textPositionYList;
              if ( messageLabel )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         (System_Collections_Generic_List_int__o *)messageLabel,
                         v21,
                         (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
                messageLabel = (__int64)this->fields.rubyLineList;
                v32 = v18 == Item;
                v33 = v18 == Item;
                v34 = v32 ? v25 : 0.0;
                if ( messageLabel )
                {
                  v20 &= v33;
                  if ( !(v20 & 1 | !System_Collections_Generic_List_bool___get_Item(
                                      (System_Collections_Generic_List_bool__o *)messageLabel,
                                      v21,
                                      (const MethodInfo_3642938 *)Method_System_Collections_Generic_List_bool__get_Item__)) )
                  {
                    v26 = v26 + v22;
                    v20 = 1;
                    this->fields.addSize.fields.y = v26;
                  }
                  messageLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v29, 0LL);
                  if ( this->fields.textPositionYList )
                  {
                    v35 = (UnityEngine_Transform_o *)messageLabel;
                    messageLabel = System_Collections_Generic_List_int___get_Item(
                                     this->fields.textPositionYList,
                                     v21,
                                     (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
                    if ( v35 )
                    {
                      v43.fields.y = (float)-(v23 * messageLabel) - v26;
                      v43.fields.x = v34 - v24;
                      v43.fields.z = 0.0;
                      UnityEngine_Transform__set_localPosition(v35, v43, 0LL);
                      messageLabel = (__int64)this->fields.rubyFlagList;
                      if ( messageLabel )
                      {
                        if ( System_Collections_Generic_List_bool___get_Item(
                               (System_Collections_Generic_List_bool__o *)messageLabel,
                               v21,
                               (const MethodInfo_3642938 *)Method_System_Collections_Generic_List_bool__get_Item__) )
                        {
                          messageLabel = (__int64)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v29,
                                                    0LL);
                          if ( !messageLabel )
                            goto LABEL_35;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0LL);
                          RubyLabelHelper__SetRubyObject(this, v19++, localPosition, v12, v29, v36);
                        }
                        messageLabel = (__int64)this->fields.textPositionYList;
                        if ( messageLabel )
                        {
                          v18 = System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)messageLabel,
                                  v21,
                                  (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
                          LODWORD(v37) = *(_QWORD *)&UILabel__get_printedSize(v29, 0LL);
                          messageLabel = (__int64)this->fields.mainList;
                          if ( messageLabel )
                          {
                            v38 = *(_QWORD *)(messageLabel + 16);
                            v39 = Method_System_Collections_Generic_List_UILabel__Add__;
                            ++*(_DWORD *)(messageLabel + 28);
                            if ( v38 )
                            {
                              v40 = *(int *)(messageLabel + 24);
                              v41 = v37;
                              if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)messageLabel,
                                  (Il2CppObject *)v29,
                                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v42 = v38 + 8 * v40;
                                *(_DWORD *)(messageLabel + 24) = v40 + 1;
                                *(_QWORD *)(v42 + 32) = v29;
                                messageLabel = sub_1C3B708(v42 + 32);
                              }
                              mainTextList = this->fields.mainTextList;
                              v25 = v34 + v41;
                              ++v21;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Component_o *messageLabel; // x0
  Il2CppObject *rubyPrefab; // x21
  Il2CppObject *Component_object; // x24
  UILabel_o *v23; // x21
  float v24; // s0
  int32_t v25; // w24
  Il2CppObject *Item; // x0
  struct System_String_o *mText; // x8
  int v28; // w27
  struct System_Collections_Generic_List_string__o *rubyTextList; // x25
  Il2CppObject *v30; // x0
  Il2CppObject *v31; // x0
  int32_t v32; // w8
  int v33; // w23
  int32_t v34; // w8
  Il2CppObject *v35; // x0
  struct UILabel_o *v36; // x8
  float v37; // s10
  float v38; // s11
  float v39; // s0
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 klass_low; // x10
  __int64 v43; // x8
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_4C1CB7B & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Transform___, *(_QWORD *)&idx);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_UILabel__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__set_Item__, v15);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v16);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v17);
    sub_1C3B764(&StringLiteral_25847, v18);
    sub_1C3B764(&StringLiteral_1/*""*/, v19);
    byte_4C1CB7B = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_40;
  rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       messageLabel,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50818788(
                                              rubyPrefab,
                                              (UnityEngine_Transform_o *)Component_object,
                                              (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  if ( !messageLabel )
    goto LABEL_40;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_40;
  v23 = (UILabel_o *)messageLabel;
  v24 = UILabel__get_printedSize(mainLabel, 0LL).fields.x;
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  v25 = v24 == INFINITY ? 0x80000000 : (int)v24;
  if ( !messageLabel )
    goto LABEL_40;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)messageLabel,
           idx,
           (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
  messageLabel = (UnityEngine_Component_o *)System_String__op_Equality(
                                              (System_String_o *)Item,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0LL);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v28 = -1;
      while ( ++v28 < mText->fields._stringLength )
      {
        rubyTextList = this->fields.rubyTextList;
        if ( rubyTextList )
        {
          v30 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this->fields.rubyTextList,
                  idx,
                  (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
          v31 = (Il2CppObject *)System_String__Concat_63368612(
                                  (System_String_o *)v30,
                                  (System_String_o *)StringLiteral_25847,
                                  0LL);
          System_Collections_Generic_List_object___set_Item(
            (System_Collections_Generic_List_object__o *)rubyTextList,
            idx,
            v31,
            (const MethodInfo_368B9F0 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_40;
      }
      if ( v23 )
      {
        UILabel__set_fontSize(v23, fontSize, 0LL);
        if ( fontSize >= 0 )
          v34 = fontSize;
        else
          v34 = fontSize + 1;
        v33 = (v34 >> 1) + 5;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1C3B9C0(messageLabel, *(_QWORD *)&idx);
  }
  if ( !v23 )
    goto LABEL_40;
  if ( fontSize >= 0 )
    v32 = fontSize;
  else
    v32 = fontSize + 1;
  UILabel__set_fontSize(v23, v32 >> 1, 0LL);
  v33 = v23->fields.mFontSize + 1;
LABEL_29:
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  if ( !messageLabel )
    goto LABEL_40;
  v35 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)messageLabel,
          idx,
          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
  UILabel__set_text(v23, (System_String_o *)v35, 0LL);
  v36 = this->fields.messageLabel;
  if ( !v36 )
    goto LABEL_40;
  UIWidget__set_depth((UIWidget_o *)v23, v36->fields.mDepth, 0LL);
  LODWORD(v37) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0LL);
  LODWORD(v38) = *(_QWORD *)&UILabel__get_printedSize(v23, 0LL);
  v39 = UILabel__get_printedSize(v23, 0LL).fields.x;
  if ( v39 <= UILabel__get_printedSize(mainLabel, 0LL).fields.x )
    x = x + (float)((float)(v37 - v38) * 0.5);
  else
    UILabel__SetCondensedScale(v23, v25, 0, 0LL);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v23, 0LL);
  if ( !messageLabel )
    goto LABEL_40;
  v44.fields.y = y + (float)v33;
  v44.fields.z = 0.0;
  v44.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v44, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyList;
  if ( !messageLabel )
    goto LABEL_40;
  v40 = *(_QWORD *)&messageLabel->fields.m_CachedPtr;
  v41 = Method_System_Collections_Generic_List_UILabel__Add__;
  ++HIDWORD(messageLabel[1].klass);
  if ( !v40 )
    goto LABEL_40;
  klass_low = SLODWORD(messageLabel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v40 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)messageLabel,
      (Il2CppObject *)v23,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * klass_low;
    LODWORD(messageLabel[1].klass) = klass_low + 1;
    *(_QWORD *)(v43 + 32) = v23;
    sub_1C3B708(v43 + 32);
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
      sub_1C3B9C0(0LL, v9);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  int rubyPrefab; // w8
  char v13; // w20
  int32_t v14; // w21
  System_String_o *v15; // x25
  System_String_o *v16; // x23
  bool continueRuby; // w26
  int32_t v18; // w24
  bool v19; // w28
  uint16_t Chars; // w0
  struct UILabel_o *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  UILabel_c **v24; // x8
  System_String_o *v25; // x0
  struct UILabel_o *messageLabel; // x8
  _QWORD *v27; // x9
  __int64 rubyPrefab_low; // x10
  UILabel_c **v29; // x8
  System_String_o *v30; // x1
  System_String_o *v31; // x0
  struct UILabel_o *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  UILabel_c **v35; // x8
  struct UILabel_o *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
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
  UILabel_c **v57; // x8
  struct UILabel_o *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  struct UILabel_o *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  struct UILabel_o *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  struct UILabel_o *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  UILabel_c **v70; // x8
  RubyLabelHelper_o *v71; // [xsp+0h] [xbp-70h]
  __int16 v72[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C1CB79 & 1) == 0 )
  {
    sub_1C3B764(&char_TypeInfo, message);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_bool__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v7);
    this = (RubyLabelHelper_o *)sub_1C3B764(&StringLiteral_1/*""*/, v8);
    byte_4C1CB79 = 1;
  }
  v72[0] = 0;
  v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  v4->fields.notRubyFlag = 1;
  v4->fields.continueRuby = 0;
  if ( !message || (this = (RubyLabelHelper_o *)System_String__Split(message, 0xAu, 0, 0LL)) == 0LL )
LABEL_116:
    sub_1C3B9C0(this, message);
  rubyPrefab = (int)this->fields.rubyPrefab;
  if ( rubyPrefab >= 1 )
  {
    v13 = 0;
    v14 = 0;
    v15 = (System_String_o *)v9;
    v71 = this;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)rubyPrefab )
        sub_1C3B9C8(this, message, v10, v11);
      v16 = (System_String_o *)*((_QWORD *)&this->fields.mainPrefab + v14);
      continueRuby = v4->fields.continueRuby;
      if ( !v16 )
        goto LABEL_116;
      if ( v16->fields._stringLength >= 1 )
      {
        v18 = 0;
        v19 = v4->fields.continueRuby;
        while ( 1 )
        {
          Chars = System_String__get_Chars(v16, v18, 0LL);
          v72[0] = Chars;
          if ( Chars <= 0x5Au )
            break;
          if ( Chars == 91 )
          {
            if ( System_String__get_Chars(v16, v18 + 1, 0LL) != 35 )
            {
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v31 = System_Char__ToString((uint16_t)v72, 0LL);
              v15 = System_String__Concat_63368612(v15, v31, 0LL);
              goto LABEL_83;
            }
            v4->fields.continueRuby = 1;
            if ( System_String__op_Inequality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            {
              this = (RubyLabelHelper_o *)v4->fields.mainTextList;
              if ( !this )
                goto LABEL_116;
              messageLabel = this->fields.messageLabel;
              v27 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !messageLabel )
                goto LABEL_116;
              rubyPrefab_low = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)rubyPrefab_low >= LODWORD(messageLabel->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v15,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &messageLabel->klass + rubyPrefab_low;
                LODWORD(this->fields.rubyPrefab) = rubyPrefab_low + 1;
                v29[4] = (UILabel_c *)v15;
                sub_1C3B708(v29 + 4);
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
              if ( !this )
                goto LABEL_116;
              v45 = this->fields.messageLabel;
              v46 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v45 )
                goto LABEL_116;
              v47 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v47 >= LODWORD(v45->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  continueRuby,
                  *(const MethodInfo_3642C38 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v47 + 1;
                *((_BYTE *)&v45->fields.leftAnchor + v47) = continueRuby;
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
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
                  1,
                  *(const MethodInfo_3642C38 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v50 + 1;
                *((_BYTE *)&v48->fields.leftAnchor + v50) = 1;
              }
              this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
              if ( !this )
                goto LABEL_116;
              v51 = this->fields.messageLabel;
              v52 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v51 )
                goto LABEL_116;
              v53 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v53 >= LODWORD(v51->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)this,
                  v14,
                  *(const MethodInfo_366EC48 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v53 + 1;
                *((_DWORD *)&v51->fields.leftAnchor + v53) = v14;
              }
              v15 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v4->fields.notRubyFlag = 0;
            continueRuby = 1;
LABEL_82:
            v19 = 1;
            goto LABEL_83;
          }
          if ( Chars != 93 )
            goto LABEL_33;
          if ( !v19 )
            goto LABEL_24;
          this = (RubyLabelHelper_o *)v4->fields.mainTextList;
          if ( !this )
            goto LABEL_116;
          v21 = this->fields.messageLabel;
          v22 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v21 )
            goto LABEL_116;
          v23 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v23 >= LODWORD(v21->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v15,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->klass + v23;
            LODWORD(this->fields.rubyPrefab) = v23 + 1;
            v24[4] = (UILabel_c *)v15;
            sub_1C3B708(v24 + 4);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
          if ( !this )
            goto LABEL_116;
          v32 = this->fields.messageLabel;
          v33 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v32 )
            goto LABEL_116;
          v34 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v34 >= LODWORD(v32->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v9,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            v35 = &v32->klass + v34;
            LODWORD(this->fields.rubyPrefab) = v34 + 1;
            v35[4] = (UILabel_c *)v9;
            sub_1C3B708(v35 + 4);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
          if ( !this )
            goto LABEL_116;
          v36 = this->fields.messageLabel;
          v37 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v36 )
            goto LABEL_116;
          v38 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v38 >= LODWORD(v36->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              continueRuby,
              *(const MethodInfo_3642C38 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v38 + 1;
            *((_BYTE *)&v36->fields.leftAnchor + v38) = continueRuby;
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
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
              1,
              *(const MethodInfo_3642C38 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v41 + 1;
            *((_BYTE *)&v39->fields.leftAnchor + v41) = 1;
          }
          this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
          if ( !this )
            goto LABEL_116;
          v42 = this->fields.messageLabel;
          v43 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v42 )
            goto LABEL_116;
          v44 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v44 >= LODWORD(v42->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              v14,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v44 + 1;
            *((_DWORD *)&v42->fields.leftAnchor + v44) = v14;
          }
          continueRuby = 0;
          v19 = 0;
          v13 = 0;
          v9 = (Il2CppObject *)StringLiteral_1/*""*/;
          v4->fields.continueRuby = 0;
          v15 = (System_String_o *)v9;
LABEL_83:
          if ( ++v18 >= v16->fields._stringLength )
            goto LABEL_86;
        }
        if ( Chars == 35 )
        {
          if ( !v19 )
          {
LABEL_24:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v25 = System_Char__ToString((uint16_t)v72, 0LL);
            v15 = System_String__Concat_63368612(v15, v25, 0LL);
            v19 = 0;
            goto LABEL_83;
          }
          goto LABEL_82;
        }
        if ( Chars == 58 )
        {
          if ( !v19 )
            goto LABEL_24;
          v19 = 1;
        }
        else
        {
LABEL_33:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v30 = System_Char__ToString((uint16_t)v72, 0LL);
          if ( (v13 & 1) == 0 )
          {
            v15 = System_String__Concat_63368612(v15, v30, 0LL);
            v13 = 0;
            goto LABEL_83;
          }
          v9 = (Il2CppObject *)System_String__Concat_63368612((System_String_o *)v9, v30, 0LL);
        }
        v13 = 1;
        goto LABEL_83;
      }
      v19 = v4->fields.continueRuby;
LABEL_86:
      if ( System_String__op_Inequality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        break;
LABEL_114:
      this = v71;
      ++v14;
      rubyPrefab = (int)v71->fields.rubyPrefab;
      if ( v14 >= rubyPrefab )
        return;
    }
    this = (RubyLabelHelper_o *)v4->fields.mainTextList;
    if ( !this )
      goto LABEL_116;
    v54 = this->fields.messageLabel;
    v55 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v54 )
      goto LABEL_116;
    v56 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v56 >= LODWORD(v54->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v15,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      v57 = &v54->klass + v56;
      LODWORD(this->fields.rubyPrefab) = v56 + 1;
      v57[4] = (UILabel_c *)v15;
      sub_1C3B708(v57 + 4);
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
    if ( !this )
      goto LABEL_116;
    v58 = this->fields.messageLabel;
    v59 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v58 )
      goto LABEL_116;
    v60 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v60 >= LODWORD(v58->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        continueRuby,
        *(const MethodInfo_3642C38 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v60 + 1;
      *((_BYTE *)&v58->fields.leftAnchor + v60) = continueRuby;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
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
        v19,
        *(const MethodInfo_3642C38 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v63 + 1;
      *((_BYTE *)&v61->fields.leftAnchor + v63) = v19;
    }
    this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
    if ( !this )
      goto LABEL_116;
    v64 = this->fields.messageLabel;
    v65 = Method_System_Collections_Generic_List_int__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v64 )
      goto LABEL_116;
    v66 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v66 >= LODWORD(v64->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)this,
        v14,
        *(const MethodInfo_366EC48 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      if ( !v19 )
      {
LABEL_113:
        v15 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_114;
      }
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v66 + 1;
      *((_DWORD *)&v64->fields.leftAnchor + v66) = v14;
      if ( !v19 )
        goto LABEL_113;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
    if ( !this )
      goto LABEL_116;
    v67 = this->fields.messageLabel;
    v68 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v67 )
      goto LABEL_116;
    v69 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v69 >= LODWORD(v67->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v9,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
    }
    else
    {
      v70 = &v67->klass + v69;
      LODWORD(this->fields.rubyPrefab) = v69 + 1;
      v70[4] = (UILabel_c *)v9;
      sub_1C3B708(v70 + 4);
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
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x22
  int32_t v9; // w21
  unsigned int i; // w23
  System_Collections_Generic_IReadOnlyList_char__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  struct UILabel_o *messageLabel; // x8
  unsigned __int16 v20; // w24
  uint16_t Chars; // w0
  System_Collections_Generic_IReadOnlyList_char__c *v22; // x8
  uint16_t v23; // w25
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  System_String_o *v27; // x0
  struct UILabel_o *v28; // x8
  struct System_String_o *mText; // x9
  System_Collections_Generic_IReadOnlyList_char__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  unsigned int v38; // w24
  struct UILabel_o *v39; // x8
  struct System_String_o *v40; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  System_String_o *v45; // x0
  struct UILabel_o *v46; // x8
  unsigned __int16 v47; // w26
  struct UILabel_o *v48; // x8
  System_String_o *v49; // x0
  struct UILabel_o *v50; // x8
  struct System_String_o *v51; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  struct UILabel_o *v56; // x8
  System_String_o *v57; // x0
  struct UILabel_o *v58; // x8
  struct System_String_o *v59; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v60; // x8
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0
  System_String_o *v64; // x0
  __int16 v66[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C1CB7D & 1) == 0 )
  {
    sub_1C3B764(&char_TypeInfo, localMainTextList);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IReadOnlyList_char__TypeInfo, v6);
    this = (RubyLabelHelper_o *)sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C1CB7D = 1;
  }
  v66[0] = 0;
  if ( !localMainTextList )
LABEL_101:
    sub_1C3B9C0(this, localMainTextList);
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  v9 = 0;
  for ( i = 0; ; ++i )
  {
    klass = localMainTextList->klass;
    v12 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
    }
    if ( (int)i >= (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))p_method)(
                     localMainTextList,
                     *(_QWORD *)(p_method + 8)) )
      break;
    v15 = localMainTextList->klass;
    v16 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v17 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v18)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v18 + 8));
    messageLabel = v4->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_101;
    v20 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_101;
    Chars = System_String__get_Chars((System_String_o *)this, v9, 0LL);
    v22 = localMainTextList->klass;
    v23 = Chars;
    v24 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
    {
      v25 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v25 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_24;
      }
      v26 = (__int64)&v22->vtable[*v25].method;
    }
    else
    {
LABEL_24:
      v26 = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v26)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v26 + 8));
    if ( v20 == v23 )
    {
      v66[0] = (__int16)this;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v27 = System_Char__ToString((uint16_t)v66, 0LL);
      this = (RubyLabelHelper_o *)System_String__Concat_63368612(v8, v27, 0LL);
      v28 = v4->fields.messageLabel;
      if ( !v28 )
        goto LABEL_101;
      mText = v28->fields.mText;
      if ( !mText )
        goto LABEL_101;
      v8 = (System_String_o *)this;
      if ( v9 < mText->fields._stringLength - 1 )
        ++v9;
    }
    else
    {
      if ( (unsigned __int16)this != 10 )
      {
        v34 = localMainTextList->klass;
        v35 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
        {
          v36 = &v34->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v36 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_47;
          }
          v37 = (__int64)&v34->vtable[*v36].method;
        }
        else
        {
LABEL_47:
          v37 = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        v66[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v37)(
                   localMainTextList,
                   i,
                   *(_QWORD *)(v37 + 8));
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v45 = System_Char__ToString((uint16_t)v66, 0LL);
        v8 = System_String__Concat_63368612(v8, v45, 0LL);
        continue;
      }
      v28 = v4->fields.messageLabel;
      if ( !v28 )
        goto LABEL_101;
    }
    this = (RubyLabelHelper_o *)v28->fields.mText;
    if ( !this )
      goto LABEL_101;
    if ( System_String__get_Chars((System_String_o *)this, v9, 0LL) == 10 )
    {
      v30 = localMainTextList->klass;
      v31 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
      {
        v32 = &v30->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)v32 - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_42;
        }
        v33 = (__int64)&v30->vtable[*v32].method;
      }
      else
      {
LABEL_42:
        v33 = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v33)(
                                    localMainTextList,
                                    *(_QWORD *)(v33 + 8));
      v38 = i + 1;
      if ( (int)(i + 1) >= (int)this )
        goto LABEL_66;
      v39 = v4->fields.messageLabel;
      if ( !v39 )
        goto LABEL_101;
      v40 = v39->fields.mText;
      if ( !v40 )
        goto LABEL_101;
      if ( v40->fields._stringLength <= v9 + 1 )
        goto LABEL_66;
      v41 = localMainTextList->klass;
      v42 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
      {
        v43 = &v41->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v43 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_57;
        }
        v44 = (__int64)&v41->vtable[*v43].method;
      }
      else
      {
LABEL_57:
        v44 = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v44)(
                                    localMainTextList,
                                    v38,
                                    *(_QWORD *)(v44 + 8));
      v46 = v4->fields.messageLabel;
      if ( !v46 )
        goto LABEL_101;
      v47 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v46->fields.mText;
      if ( !this )
        goto LABEL_101;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v9 + 1, 0LL);
      if ( v47 == (unsigned __int16)this )
      {
LABEL_66:
        v48 = v4->fields.messageLabel;
        if ( !v48 )
          goto LABEL_101;
        this = (RubyLabelHelper_o *)v48->fields.mText;
        if ( !this )
          goto LABEL_101;
        v66[0] = System_String__get_Chars((System_String_o *)this, v9, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v49 = System_Char__ToString((uint16_t)v66, 0LL);
        this = (RubyLabelHelper_o *)System_String__Concat_63368612(v8, v49, 0LL);
        v50 = v4->fields.messageLabel;
        if ( !v50 )
          goto LABEL_101;
        v51 = v50->fields.mText;
        if ( !v51 )
          goto LABEL_101;
        v8 = (System_String_o *)this;
        if ( v9 < v51->fields._stringLength - 1 )
          ++v9;
      }
      else
      {
        v52 = localMainTextList->klass;
        v53 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
        {
          v54 = &v52->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v54 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v53;
            v54 += 4;
            if ( !v53 )
              goto LABEL_79;
          }
          v55 = (__int64)&v52->vtable[*v54].method;
        }
        else
        {
LABEL_79:
          v55 = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v55)(
                                      localMainTextList,
                                      v38,
                                      *(_QWORD *)(v55 + 8));
        if ( (unsigned __int16)this == 10 )
        {
          v56 = v4->fields.messageLabel;
          if ( !v56 )
            goto LABEL_101;
          this = (RubyLabelHelper_o *)v56->fields.mText;
          if ( !this )
            goto LABEL_101;
          v66[0] = System_String__get_Chars((System_String_o *)this, v9, 0LL);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v57 = System_Char__ToString((uint16_t)v66, 0LL);
          this = (RubyLabelHelper_o *)System_String__Concat_63368612(v8, v57, 0LL);
          v58 = v4->fields.messageLabel;
          if ( !v58 )
            goto LABEL_101;
          v59 = v58->fields.mText;
          if ( !v59 )
            goto LABEL_101;
          v8 = (System_String_o *)this;
          if ( v9 < v59->fields._stringLength - 1 )
            ++v9;
        }
        else
        {
          v60 = localMainTextList->klass;
          v61 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
          {
            v62 = &v60->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v62 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
            {
              --v61;
              v62 += 4;
              if ( !v61 )
                goto LABEL_95;
            }
            v63 = (__int64)&v60->vtable[*v62].method;
          }
          else
          {
LABEL_95:
            v63 = sub_1C8D744(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
          }
          v66[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v63)(
                     localMainTextList,
                     v38,
                     *(_QWORD *)(v63 + 8));
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v64 = System_Char__ToString((uint16_t)v66, 0LL);
          v8 = System_String__Concat_63368612(v8, v64, 0LL);
          ++i;
        }
      }
    }
  }
  return v8;
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
    sub_1C3B9C0(0LL, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0LL);
  v5 = printedSize.fields.x + this->fields.addSize.fields.x;
  v6 = printedSize.fields.y + this->fields.addSize.fields.y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}