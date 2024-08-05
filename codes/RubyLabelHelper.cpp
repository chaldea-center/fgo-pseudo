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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *v20; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_int__o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_bool__o *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_bool__o *v29; // x23
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_List_object__o *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  struct UnityEngine_GameObject_o **p_rubyPrefab; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  UnityEngine_Object_o *v46; // x20

  if ( (byte_4A0204E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_int___ctor__, label);
    sub_1B64870(&Method_System_Collections_Generic_List_bool___ctor__, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_UILabel___ctor__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B64870(&System_Collections_Generic_List_bool__TypeInfo, v12);
    sub_1B64870(&System_Collections_Generic_List_UILabel__TypeInfo, v13);
    sub_1B64870(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B64870(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v16);
    byte_4A0204E = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mainTextList, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v20;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.rubyTextList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B64ABC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_3491964 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.textPositionYList = v23;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.textPositionYList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_bool__o *)sub_1B64ABC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v26,
    (const MethodInfo_3464DC8 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyFlagList = v26;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.rubyFlagList, (int32_t)v26, v27, v28);
  v29 = (System_Collections_Generic_List_bool__o *)sub_1B64ABC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v29,
    (const MethodInfo_3464DC8 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v29;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.rubyLineList, (int32_t)v29, v30, v31);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v32;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mainList, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v35;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.rubyList, (int32_t)v35, v36, v37);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.messageLabel = label;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)label, v38, v39);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.mainPrefab, (int32_t)inputMainPrefab, v41, v42);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = &this->fields.rubyPrefab;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_rubyPrefab, (int32_t)inputRubyPrefab, v44, v45);
  v46 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
  UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_rubyPrefab, 0LL, 0LL);
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

  if ( (byte_4A02053 & 1) == 0 )
  {
    sub_1B64870(&char_TypeInfo, labelText);
    sub_1B64870(&Method_System_Collections_Generic_List_char__Add__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_char___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_char__TypeInfo, v7);
    sub_1B64870(&StringLiteral_15758/*"[#"*/, v8);
    sub_1B64870(&StringLiteral_1545/*":"*/, v9);
    sub_1B64870(&StringLiteral_1/*""*/, v10);
    sub_1B64870(&StringLiteral_16002/*"]"*/, v11);
    byte_4A02053 = 1;
  }
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v32[0] = 0;
  v13 = (System_Collections_Generic_List_char__o *)sub_1B64ABC(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v13,
    (const MethodInfo_3469FB8 *)Method_System_Collections_Generic_List_char___ctor__);
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
      v12 = System_String__Concat_61383576(v12, v21, 0LL);
      if ( (v18 & 1) != 0 )
      {
        v32[0] = System_String__get_Chars(labelText, v16, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v22 = System_Char__ToString((uint16_t)v32, 0LL);
        v20 = System_String__Concat_61383576(v20, v22, 0LL);
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
          *(const MethodInfo_346A80C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
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
              Chars = System_String__Concat_61383576((System_String_o *)StringLiteral_1545/*":"*/, v20, 0LL);
              if ( !v12 )
                goto LABEL_43;
              v26 = Chars;
            }
            else
            {
              if ( !v12 )
                goto LABEL_43;
              v26 = (System_String_o *)StringLiteral_16002/*"]"*/;
            }
            v27 = System_String__Replace_61403196(v12, v26, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
            v12 = System_String__Replace_61403196(
                    v12,
                    (System_String_o *)StringLiteral_15758/*"[#"*/,
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
  Chars = (System_String_o *)WrapControlText__textAdjust(v31->fields.messageLabel, v12, 22, 0, 0, 0LL);
  if ( (v19 & 1) != 0 )
  {
    messageLabel = v31->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_43:
    sub_1B64ACC(Chars, v15);
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

  if ( (byte_4A0204F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_UILabel__Clear__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_bool__Clear__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Clear__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_4A0204F = 1;
  }
  memset(&v35, 0, sizeof(v35));
  rubyList = this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v35.fields._current )
      sub_1B64ACC(0LL, v12);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v35.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  rubyList = this->fields.mainList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v35.fields._current )
      sub_1B64ACC(0LL, v14);
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)v35.fields._current,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69135916(v15, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
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
    sub_1B64ACC(rubyList, method);
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
  UIWidget_o *messageLabel; // x0
  int32_t leftAnchor; // w20
  int mCam; // w23
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
  int32_t v37; // w2
  int32_t v38; // w3
  float v39; // s0
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 m_CancellationTokenSource_low; // x10
  float v43; // s8
  __int64 v44; // x8
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A02051 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Transform___, method);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_1B64870(&Method_System_Collections_Generic_List_UILabel__Add__, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_string__get_Item__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_bool__get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject____75800320, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    byte_4A02051 = 1;
  }
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_35;
  leftAnchor = (int32_t)messageLabel[1].fields.leftAnchor;
  mCam = (int)messageLabel[1].fields.mCam;
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))messageLabel->klass->vtable._22_get_localSize.method)(
    messageLabel,
    messageLabel->klass->vtable._23_get_drawingDimensions.methodPtr);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (v15 = v14,
        LODWORD(v16) = *(_QWORD *)&UIWidget__get_pivotOffset(messageLabel, 0LL),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_35:
    sub_1B64ACC(messageLabel, method);
  }
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = (float)(((leftAnchor - 15) & ~((leftAnchor - 15) >> 31)) + 2 * mCam);
  v23 = mCam + leftAnchor;
  v24 = v15 * v16;
  v25 = 0.0;
  v26 = 0.0;
  while ( v21 < mainTextList->fields._size )
  {
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)messageLabel,
                           (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      messageLabel = (UIWidget_o *)UnityEngine_Object__Instantiate_object__49012904(
                                     mainPrefab,
                                     (UnityEngine_Transform_o *)Component_object,
                                     (const MethodInfo_2EBE0A8 *)Method_UnityEngine_Object_Instantiate_GameObject____75800320);
      if ( messageLabel )
      {
        messageLabel = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)messageLabel,
                                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        if ( this->fields.mainTextList )
        {
          v29 = (UILabel_o *)messageLabel;
          messageLabel = (UIWidget_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this->fields.mainTextList,
                                         v21,
                                         (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( v29 )
          {
            UILabel__set_text(v29, (System_String_o *)messageLabel, 0LL);
            UILabel__set_fontSize(v29, leftAnchor, 0LL);
            v30 = this->fields.messageLabel;
            if ( v30 )
            {
              UIWidget__set_depth((UIWidget_o *)v29, v30->fields.mDepth, 0LL);
              messageLabel = (UIWidget_o *)this->fields.textPositionYList;
              if ( messageLabel )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         (System_Collections_Generic_List_int__o *)messageLabel,
                         v21,
                         (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
                messageLabel = (UIWidget_o *)this->fields.rubyLineList;
                v32 = v18 == Item;
                v33 = v18 == Item;
                v34 = v32 ? v25 : 0.0;
                if ( messageLabel )
                {
                  v20 &= v33;
                  if ( !(v20 & 1 | !System_Collections_Generic_List_bool___get_Item(
                                      (System_Collections_Generic_List_bool__o *)messageLabel,
                                      v21,
                                      (const MethodInfo_346532C *)Method_System_Collections_Generic_List_bool__get_Item__)) )
                  {
                    v26 = v26 + v22;
                    v20 = 1;
                    this->fields.addSize.fields.y = v26;
                  }
                  messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v29, 0LL);
                  if ( this->fields.textPositionYList )
                  {
                    v35 = (UnityEngine_Transform_o *)messageLabel;
                    messageLabel = (UIWidget_o *)System_Collections_Generic_List_int___get_Item(
                                                   this->fields.textPositionYList,
                                                   v21,
                                                   (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
                    if ( v35 )
                    {
                      v45.fields.y = (float)-(v23 * (_DWORD)messageLabel) - v26;
                      v45.fields.x = v34 - v24;
                      v45.fields.z = 0.0;
                      UnityEngine_Transform__set_localPosition(v35, v45, 0LL);
                      messageLabel = (UIWidget_o *)this->fields.rubyFlagList;
                      if ( messageLabel )
                      {
                        if ( System_Collections_Generic_List_bool___get_Item(
                               (System_Collections_Generic_List_bool__o *)messageLabel,
                               v21,
                               (const MethodInfo_346532C *)Method_System_Collections_Generic_List_bool__get_Item__) )
                        {
                          messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v29,
                                                         0LL);
                          if ( !messageLabel )
                            goto LABEL_35;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0LL);
                          RubyLabelHelper__SetRubyObject(this, v19++, localPosition, leftAnchor, v29, v36);
                        }
                        messageLabel = (UIWidget_o *)this->fields.textPositionYList;
                        if ( messageLabel )
                        {
                          v18 = System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)messageLabel,
                                  v21,
                                  (const MethodInfo_3491EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
                          LODWORD(v39) = *(_QWORD *)&UILabel__get_printedSize(v29, 0LL);
                          messageLabel = (UIWidget_o *)this->fields.mainList;
                          if ( messageLabel )
                          {
                            v40 = *(_QWORD *)&messageLabel->fields.m_CachedPtr;
                            v41 = Method_System_Collections_Generic_List_UILabel__Add__;
                            ++HIDWORD(messageLabel->fields.m_CancellationTokenSource);
                            if ( v40 )
                            {
                              m_CancellationTokenSource_low = SLODWORD(messageLabel->fields.m_CancellationTokenSource);
                              v43 = v39;
                              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v40 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)messageLabel,
                                  (Il2CppObject *)v29,
                                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v44 = v40 + 8 * m_CancellationTokenSource_low;
                                LODWORD(messageLabel->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low
                                                                                        + 1;
                                *(_QWORD *)(v44 + 32) = v29;
                                sub_1B64814((ServantStatusBattleListViewItem_o *)(v44 + 32), (int32_t)v29, v37, v38);
                              }
                              mainTextList = this->fields.mainTextList;
                              v25 = v34 + v43;
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
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 klass_low; // x10
  __int64 v45; // x8
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_4A02052 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_Transform___, *(_QWORD *)&idx);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v12);
    sub_1B64870(&Method_System_Collections_Generic_List_UILabel__Add__, v13);
    sub_1B64870(&Method_System_Collections_Generic_List_string__get_Item__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_string__set_Item__, v15);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject____75800320, v16);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64870(&StringLiteral_25227/*"・"*/, v18);
    sub_1B64870(&StringLiteral_1/*""*/, v19);
    byte_4A02052 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_40;
  rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       messageLabel,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49012904(
                                              rubyPrefab,
                                              (UnityEngine_Transform_o *)Component_object,
                                              (const MethodInfo_2EBE0A8 *)Method_UnityEngine_Object_Instantiate_GameObject____75800320);
  if ( !messageLabel )
    goto LABEL_40;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
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
           (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                  (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_string__get_Item__);
          v31 = (Il2CppObject *)System_String__Concat_61383576(
                                  (System_String_o *)v30,
                                  (System_String_o *)StringLiteral_25227/*"・"*/,
                                  0LL);
          System_Collections_Generic_List_object___set_Item(
            (System_Collections_Generic_List_object__o *)rubyTextList,
            idx,
            v31,
            (const MethodInfo_34AF734 *)Method_System_Collections_Generic_List_string__set_Item__);
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
    sub_1B64ACC(messageLabel, *(_QWORD *)&idx);
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
          (const MethodInfo_34AF6E0 *)Method_System_Collections_Generic_List_string__get_Item__);
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
    UILabel__SetCondensedScale(v23, v25, 0LL);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v23, 0LL);
  if ( !messageLabel )
    goto LABEL_40;
  v46.fields.y = y + (float)v33;
  v46.fields.z = 0.0;
  v46.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v46, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyList;
  if ( !messageLabel )
    goto LABEL_40;
  v42 = *(_QWORD *)&messageLabel->fields.m_CachedPtr;
  v43 = Method_System_Collections_Generic_List_UILabel__Add__;
  ++HIDWORD(messageLabel[1].klass);
  if ( !v42 )
    goto LABEL_40;
  klass_low = SLODWORD(messageLabel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v42 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)messageLabel,
      (Il2CppObject *)v23,
      *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = v42 + 8 * klass_low;
    LODWORD(messageLabel[1].klass) = klass_low + 1;
    *(_QWORD *)(v45 + 32) = v23;
    sub_1B64814((ServantStatusBattleListViewItem_o *)(v45 + 32), (int32_t)v23, v40, v41);
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
      sub_1B64ACC(0LL, v9);
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
  int rubyPrefab; // w8
  char v11; // w20
  int32_t v12; // w21
  System_String_o *v13; // x25
  System_String_o *v14; // x23
  bool continueRuby; // w26
  int32_t v16; // w24
  bool v17; // w28
  uint16_t Chars; // w0
  int32_t v19; // w2
  int32_t v20; // w3
  struct UILabel_o *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  UILabel_c **v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct UILabel_o *messageLabel; // x8
  _QWORD *v31; // x9
  __int64 rubyPrefab_low; // x10
  UILabel_c **v33; // x8
  System_String_o *v34; // x1
  System_String_o *v35; // x0
  struct UILabel_o *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  UILabel_c **v39; // x8
  struct UILabel_o *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  struct UILabel_o *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  struct UILabel_o *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  struct UILabel_o *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  struct UILabel_o *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  struct UILabel_o *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  int32_t v58; // w2
  int32_t v59; // w3
  struct UILabel_o *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  UILabel_c **v63; // x8
  int32_t v64; // w2
  int32_t v65; // w3
  struct UILabel_o *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  struct UILabel_o *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  struct UILabel_o *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  struct UILabel_o *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  UILabel_c **v78; // x8
  RubyLabelHelper_o *v79; // [xsp+0h] [xbp-70h]
  __int16 v80[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A02050 & 1) == 0 )
  {
    sub_1B64870(&char_TypeInfo, message);
    sub_1B64870(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_bool__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_string__Add__, v7);
    this = (RubyLabelHelper_o *)sub_1B64870(&StringLiteral_1/*""*/, v8);
    byte_4A02050 = 1;
  }
  v80[0] = 0;
  v9 = (Il2CppObject *)StringLiteral_1/*""*/;
  v4->fields.notRubyFlag = 1;
  v4->fields.continueRuby = 0;
  if ( !message || (this = (RubyLabelHelper_o *)System_String__Split(message, 0xAu, 0, 0LL)) == 0LL )
LABEL_116:
    sub_1B64ACC(this, message);
  rubyPrefab = (int)this->fields.rubyPrefab;
  if ( rubyPrefab >= 1 )
  {
    v11 = 0;
    v12 = 0;
    v13 = (System_String_o *)v9;
    v79 = this;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)rubyPrefab )
        sub_1B64AD4(this, message);
      v14 = (System_String_o *)*((_QWORD *)&this->fields.mainPrefab + v12);
      continueRuby = v4->fields.continueRuby;
      if ( !v14 )
        goto LABEL_116;
      if ( v14->fields._stringLength >= 1 )
      {
        v16 = 0;
        v17 = v4->fields.continueRuby;
        while ( 1 )
        {
          Chars = System_String__get_Chars(v14, v16, 0LL);
          v80[0] = Chars;
          if ( Chars <= 0x5Au )
            break;
          if ( Chars == 91 )
          {
            if ( System_String__get_Chars(v14, v16 + 1, 0LL) != 35 )
            {
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v35 = System_Char__ToString((uint16_t)v80, 0LL);
              v13 = System_String__Concat_61383576(v13, v35, 0LL);
              goto LABEL_83;
            }
            v4->fields.continueRuby = 1;
            if ( System_String__op_Inequality(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
            {
              this = (RubyLabelHelper_o *)v4->fields.mainTextList;
              if ( !this )
                goto LABEL_116;
              messageLabel = this->fields.messageLabel;
              v31 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !messageLabel )
                goto LABEL_116;
              rubyPrefab_low = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)rubyPrefab_low >= LODWORD(messageLabel->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v13,
                  *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
              }
              else
              {
                v33 = &messageLabel->klass + rubyPrefab_low;
                LODWORD(this->fields.rubyPrefab) = rubyPrefab_low + 1;
                v33[4] = (UILabel_c *)v13;
                sub_1B64814((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v13, v28, v29);
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
              if ( !this )
                goto LABEL_116;
              v49 = this->fields.messageLabel;
              v50 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v49 )
                goto LABEL_116;
              v51 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v51 >= LODWORD(v49->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  continueRuby,
                  *(const MethodInfo_346562C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v51 + 1;
                *((_BYTE *)&v49->fields.leftAnchor + v51) = continueRuby;
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
              if ( !this )
                goto LABEL_116;
              v52 = this->fields.messageLabel;
              v53 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v52 )
                goto LABEL_116;
              v54 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v54 >= LODWORD(v52->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  1,
                  *(const MethodInfo_346562C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v54 + 1;
                *((_BYTE *)&v52->fields.leftAnchor + v54) = 1;
              }
              this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
              if ( !this )
                goto LABEL_116;
              v55 = this->fields.messageLabel;
              v56 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v55 )
                goto LABEL_116;
              v57 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v57 >= LODWORD(v55->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)this,
                  v12,
                  *(const MethodInfo_34921B8 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v57 + 1;
                *((_DWORD *)&v55->fields.leftAnchor + v57) = v12;
              }
              v13 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v4->fields.notRubyFlag = 0;
            continueRuby = 1;
LABEL_82:
            v17 = 1;
            goto LABEL_83;
          }
          if ( Chars != 93 )
            goto LABEL_33;
          if ( !v17 )
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
              (Il2CppObject *)v13,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->klass + v23;
            LODWORD(this->fields.rubyPrefab) = v23 + 1;
            v24[4] = (UILabel_c *)v13;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v13, v19, v20);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
          if ( !this )
            goto LABEL_116;
          v36 = this->fields.messageLabel;
          v37 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v36 )
            goto LABEL_116;
          v38 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v38 >= LODWORD(v36->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v9,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &v36->klass + v38;
            LODWORD(this->fields.rubyPrefab) = v38 + 1;
            v39[4] = (UILabel_c *)v9;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v9, v25, v26);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
          if ( !this )
            goto LABEL_116;
          v40 = this->fields.messageLabel;
          v41 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v40 )
            goto LABEL_116;
          v42 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v42 >= LODWORD(v40->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              continueRuby,
              *(const MethodInfo_346562C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v42 + 1;
            *((_BYTE *)&v40->fields.leftAnchor + v42) = continueRuby;
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
          if ( !this )
            goto LABEL_116;
          v43 = this->fields.messageLabel;
          v44 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v43 )
            goto LABEL_116;
          v45 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v45 >= LODWORD(v43->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              1,
              *(const MethodInfo_346562C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v45 + 1;
            *((_BYTE *)&v43->fields.leftAnchor + v45) = 1;
          }
          this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
          if ( !this )
            goto LABEL_116;
          v46 = this->fields.messageLabel;
          v47 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v46 )
            goto LABEL_116;
          v48 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v48 >= LODWORD(v46->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              v12,
              *(const MethodInfo_34921B8 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v48 + 1;
            *((_DWORD *)&v46->fields.leftAnchor + v48) = v12;
          }
          continueRuby = 0;
          v17 = 0;
          v11 = 0;
          v9 = (Il2CppObject *)StringLiteral_1/*""*/;
          v4->fields.continueRuby = 0;
          v13 = (System_String_o *)v9;
LABEL_83:
          if ( ++v16 >= v14->fields._stringLength )
            goto LABEL_86;
        }
        if ( Chars == 35 )
        {
          if ( !v17 )
          {
LABEL_24:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v27 = System_Char__ToString((uint16_t)v80, 0LL);
            v13 = System_String__Concat_61383576(v13, v27, 0LL);
            v17 = 0;
            goto LABEL_83;
          }
          goto LABEL_82;
        }
        if ( Chars == 58 )
        {
          if ( !v17 )
            goto LABEL_24;
          v17 = 1;
        }
        else
        {
LABEL_33:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v34 = System_Char__ToString((uint16_t)v80, 0LL);
          if ( (v11 & 1) == 0 )
          {
            v13 = System_String__Concat_61383576(v13, v34, 0LL);
            v11 = 0;
            goto LABEL_83;
          }
          v9 = (Il2CppObject *)System_String__Concat_61383576((System_String_o *)v9, v34, 0LL);
        }
        v11 = 1;
        goto LABEL_83;
      }
      v17 = v4->fields.continueRuby;
LABEL_86:
      if ( System_String__op_Inequality(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
        break;
LABEL_114:
      this = v79;
      ++v12;
      rubyPrefab = (int)v79->fields.rubyPrefab;
      if ( v12 >= rubyPrefab )
        return;
    }
    this = (RubyLabelHelper_o *)v4->fields.mainTextList;
    if ( !this )
      goto LABEL_116;
    v60 = this->fields.messageLabel;
    v61 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v60 )
      goto LABEL_116;
    v62 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v62 >= LODWORD(v60->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v13,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &v60->klass + v62;
      LODWORD(this->fields.rubyPrefab) = v62 + 1;
      v63[4] = (UILabel_c *)v13;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v13, v58, v59);
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
    if ( !this )
      goto LABEL_116;
    v66 = this->fields.messageLabel;
    v67 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v66 )
      goto LABEL_116;
    v68 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v68 >= LODWORD(v66->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        continueRuby,
        *(const MethodInfo_346562C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v68 + 1;
      *((_BYTE *)&v66->fields.leftAnchor + v68) = continueRuby;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
    if ( !this )
      goto LABEL_116;
    v69 = this->fields.messageLabel;
    v70 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v69 )
      goto LABEL_116;
    v71 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v71 >= LODWORD(v69->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        v17,
        *(const MethodInfo_346562C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v71 + 1;
      *((_BYTE *)&v69->fields.leftAnchor + v71) = v17;
    }
    this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
    if ( !this )
      goto LABEL_116;
    v72 = this->fields.messageLabel;
    v73 = Method_System_Collections_Generic_List_int__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v72 )
      goto LABEL_116;
    v74 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v74 >= LODWORD(v72->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)this,
        v12,
        *(const MethodInfo_34921B8 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      if ( !v17 )
      {
LABEL_113:
        v13 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_114;
      }
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v74 + 1;
      *((_DWORD *)&v72->fields.leftAnchor + v74) = v12;
      if ( !v17 )
        goto LABEL_113;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
    if ( !this )
      goto LABEL_116;
    v75 = this->fields.messageLabel;
    v76 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v75 )
      goto LABEL_116;
    v77 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v77 >= LODWORD(v75->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v9,
        *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &v75->klass + v77;
      LODWORD(this->fields.rubyPrefab) = v77 + 1;
      v78[4] = (UILabel_c *)v9;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v9, v64, v65);
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
  System_Collections_Generic_IReadOnlyList_char__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  System_String_o *v43; // x0
  struct UILabel_o *v44; // x8
  unsigned __int16 v45; // w26
  struct UILabel_o *v46; // x8
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x8
  struct System_String_o *v49; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  struct UILabel_o *v54; // x8
  System_String_o *v55; // x0
  struct UILabel_o *v56; // x8
  struct System_String_o *v57; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  System_String_o *v62; // x0
  __int16 v64[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4A02054 & 1) == 0 )
  {
    sub_1B64870(&char_TypeInfo, localMainTextList);
    sub_1B64870(&System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, v5);
    sub_1B64870(&System_Collections_Generic_IReadOnlyList_char__TypeInfo, v6);
    this = (RubyLabelHelper_o *)sub_1B64870(&StringLiteral_1/*""*/, v7);
    byte_4A02054 = 1;
  }
  v64[0] = 0;
  if ( !localMainTextList )
LABEL_98:
    sub_1B64ACC(this, localMainTextList);
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
      p_method = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
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
      v18 = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v18)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v18 + 8));
    messageLabel = v4->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_98;
    v20 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_98;
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
      v26 = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v26)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v26 + 8));
    if ( v20 == v23 )
    {
      v64[0] = (__int16)this;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v27 = System_Char__ToString((uint16_t)v64, 0LL);
      this = (RubyLabelHelper_o *)System_String__Concat_61383576(v8, v27, 0LL);
      v28 = v4->fields.messageLabel;
      if ( !v28 )
        goto LABEL_98;
      mText = v28->fields.mText;
      if ( !mText )
        goto LABEL_98;
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
          v37 = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        v64[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v37)(
                   localMainTextList,
                   i,
                   *(_QWORD *)(v37 + 8));
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v43 = System_Char__ToString((uint16_t)v64, 0LL);
        v8 = System_String__Concat_61383576(v8, v43, 0LL);
        continue;
      }
      v28 = v4->fields.messageLabel;
      if ( !v28 )
        goto LABEL_98;
    }
    this = (RubyLabelHelper_o *)v28->fields.mText;
    if ( !this )
      goto LABEL_98;
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
        v33 = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v33)(
                                    localMainTextList,
                                    *(_QWORD *)(v33 + 8));
      v38 = i + 1;
      if ( (int)(i + 1) >= (int)this )
        goto LABEL_63;
      v39 = localMainTextList->klass;
      v40 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
      {
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v41 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_54;
        }
        v42 = (__int64)&v39->vtable[*v41].method;
      }
      else
      {
LABEL_54:
        v42 = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v42)(
                                    localMainTextList,
                                    v38,
                                    *(_QWORD *)(v42 + 8));
      v44 = v4->fields.messageLabel;
      if ( !v44 )
        goto LABEL_98;
      v45 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v44->fields.mText;
      if ( !this )
        goto LABEL_98;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v9 + 1, 0LL);
      if ( v45 == (unsigned __int16)this )
      {
LABEL_63:
        v46 = v4->fields.messageLabel;
        if ( !v46 )
          goto LABEL_98;
        this = (RubyLabelHelper_o *)v46->fields.mText;
        if ( !this )
          goto LABEL_98;
        v64[0] = System_String__get_Chars((System_String_o *)this, v9, 0LL);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v47 = System_Char__ToString((uint16_t)v64, 0LL);
        this = (RubyLabelHelper_o *)System_String__Concat_61383576(v8, v47, 0LL);
        v48 = v4->fields.messageLabel;
        if ( !v48 )
          goto LABEL_98;
        v49 = v48->fields.mText;
        if ( !v49 )
          goto LABEL_98;
        v8 = (System_String_o *)this;
        if ( v9 < v49->fields._stringLength - 1 )
          ++v9;
      }
      else
      {
        v50 = localMainTextList->klass;
        v51 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
        {
          v52 = &v50->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v52 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v51;
            v52 += 4;
            if ( !v51 )
              goto LABEL_76;
          }
          v53 = (__int64)&v50->vtable[*v52].method;
        }
        else
        {
LABEL_76:
          v53 = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
        }
        this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v53)(
                                      localMainTextList,
                                      v38,
                                      *(_QWORD *)(v53 + 8));
        if ( (unsigned __int16)this == 10 )
        {
          v54 = v4->fields.messageLabel;
          if ( !v54 )
            goto LABEL_98;
          this = (RubyLabelHelper_o *)v54->fields.mText;
          if ( !this )
            goto LABEL_98;
          v64[0] = System_String__get_Chars((System_String_o *)this, v9, 0LL);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v55 = System_Char__ToString((uint16_t)v64, 0LL);
          this = (RubyLabelHelper_o *)System_String__Concat_61383576(v8, v55, 0LL);
          v56 = v4->fields.messageLabel;
          if ( !v56 )
            goto LABEL_98;
          v57 = v56->fields.mText;
          if ( !v57 )
            goto LABEL_98;
          v8 = (System_String_o *)this;
          if ( v9 < v57->fields._stringLength - 1 )
            ++v9;
        }
        else
        {
          v58 = localMainTextList->klass;
          v59 = *(unsigned __int16 *)(&localMainTextList->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&localMainTextList->klass->_2.bitflags2 + 3) )
          {
            v60 = &v58->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v60 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
            {
              --v59;
              v60 += 4;
              if ( !v59 )
                goto LABEL_92;
            }
            v61 = (__int64)&v58->vtable[*v60].method;
          }
          else
          {
LABEL_92:
            v61 = sub_1BB6850(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0LL);
          }
          v64[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v61)(
                     localMainTextList,
                     v38,
                     *(_QWORD *)(v61 + 8));
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v62 = System_Char__ToString((uint16_t)v64, 0LL);
          v8 = System_String__Concat_61383576(v8, v62, 0LL);
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
    sub_1B64ACC(0LL, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0LL);
  v5 = printedSize.fields.x + this->fields.addSize.fields.x;
  v6 = printedSize.fields.y + this->fields.addSize.fields.y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}