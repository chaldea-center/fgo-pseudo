void RubyLabelHelper___ctor(
        RubyLabelHelper_o *this,
        UILabel_o *label,
        UnityEngine_GameObject_o *inputMainPrefab,
        UnityEngine_GameObject_o *inputRubyPrefab,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_Collections_Generic_List_object__o *v10; // x23
  System_Collections_Generic_List_int__o *v11; // x23
  System_Collections_Generic_List_bool__o *v12; // x23
  System_Collections_Generic_List_bool__o *v13; // x23
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_Generic_List_object__o *v15; // x23
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  UnityEngine_Object_o **p_rubyPrefab; // x19
  UnityEngine_Object_o *v18; // x20

  if ( (byte_4C21421 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_bool__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21421 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1C2D434(&this->fields.mainTextList);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C2D434(&this->fields.rubyTextList);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.textPositionYList = v11;
  sub_1C2D434(&this->fields.textPositionYList);
  v12 = (System_Collections_Generic_List_bool__o *)sub_1C2D6DC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v12,
    (const MethodInfo_3742F40 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyFlagList = v12;
  sub_1C2D434(&this->fields.rubyFlagList);
  v13 = (System_Collections_Generic_List_bool__o *)sub_1C2D6DC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v13,
    (const MethodInfo_3742F40 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v13;
  sub_1C2D434(&this->fields.rubyLineList);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v14;
  sub_1C2D434(&this->fields.mainList);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v15;
  sub_1C2D434(&this->fields.rubyList);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.messageLabel = label;
  sub_1C2D434(&this->fields);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_1C2D434(&this->fields.mainPrefab);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = (UnityEngine_Object_o **)&this->fields.rubyPrefab;
  sub_1C2D434(p_rubyPrefab);
  v18 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Inequality(v18, 0, 0);
  UnityEngine_Object__op_Inequality(*p_rubyPrefab, 0, 0);
}


System_String_o *RubyLabelHelper__GetFormalText(
        RubyLabelHelper_o *this,
        System_String_o *labelText,
        const MethodInfo *method)
{
  System_String_o *v5; // x22
  System_Collections_Generic_List_char__o *v6; // x21
  System_String_o *Chars; // x0
  __int64 v8; // x1
  int32_t v9; // w23
  char v10; // w19
  char v11; // w29
  char v12; // w26
  System_String_o *v13; // x24
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  struct System_Char_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_String_o *v19; // x1
  System_String_o *v20; // x0
  const MethodInfo *v21; // x2
  struct UILabel_o *messageLabel; // x8
  RubyLabelHelper_o *v24; // [xsp+0h] [xbp-70h]
  _WORD v25[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C21426 & 1) == 0 )
  {
    sub_1C2D490(&char_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_char__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_char___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_char__TypeInfo);
    sub_1C2D490(&StringLiteral_15813/*"[#"*/);
    sub_1C2D490(&StringLiteral_1456/*":"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C21426 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v25[0] = 0;
  v6 = (System_Collections_Generic_List_char__o *)sub_1C2D6DC(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v6,
    (const MethodInfo_3747FE8 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_43;
  v24 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = v5;
    while ( 1 )
    {
      v25[0] = System_String__get_Chars(labelText, v9, 0);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v14 = System_Char__ToString((uint16_t)v25, 0);
      v5 = System_String__Concat_63457864(v5, v14, 0);
      if ( (v11 & 1) != 0 )
      {
        v25[0] = System_String__get_Chars(labelText, v9, 0);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v15 = System_Char__ToString((uint16_t)v25, 0);
        v13 = System_String__Concat_63457864(v13, v15, 0);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0);
      if ( !v6 )
        goto LABEL_43;
      items = v6->fields._items;
      v17 = Method_System_Collections_Generic_List_char__Add__;
      ++v6->fields._version;
      if ( !items )
        goto LABEL_43;
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v6,
          (uint16_t)Chars,
          *(const MethodInfo_374883C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = (unsigned __int16)Chars;
      }
      if ( System_String__get_Chars(labelText, v9, 0) == 91 && System_String__get_Chars(labelText, v9 + 1, 0) == 35 )
      {
        v12 = 0;
      }
      else
      {
        if ( (v10 & 1) == 0 )
        {
          v10 = 0;
          goto LABEL_35;
        }
        Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0);
        v25[0] = (_WORD)Chars;
        switch ( (unsigned __int16)Chars )
        {
          case ']':
            if ( (v11 & 1) != 0 )
            {
              Chars = System_String__Concat_63457864((System_String_o *)StringLiteral_1456/*":"*/, v13, 0);
              if ( !v5 )
                goto LABEL_43;
              v19 = Chars;
            }
            else
            {
              if ( !v5 )
                goto LABEL_43;
              v19 = (System_String_o *)StringLiteral_16055/*"]"*/;
            }
            v20 = System_String__Replace_63504412(v5, v19, (System_String_o *)StringLiteral_1/*""*/, 0);
            v13 = (System_String_o *)StringLiteral_1/*""*/;
            v5 = v20;
            v10 = 0;
            v11 = 0;
            goto LABEL_35;
          case ':':
            v10 = 1;
            v11 = 1;
            goto LABEL_35;
          case '#':
            if ( !v5 )
              goto LABEL_43;
            v5 = System_String__Replace_63504412(
                   v5,
                   (System_String_o *)StringLiteral_15813/*"[#"*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   0);
            break;
        }
      }
      v10 = 1;
LABEL_35:
      if ( ++v9 >= labelText->fields._stringLength )
        goto LABEL_38;
    }
  }
  v12 = 1;
LABEL_38:
  Chars = (System_String_o *)WrapControlText__textAdjust(v24->fields.messageLabel, v5, 22, 0, 0);
  if ( (v12 & 1) != 0 )
  {
    messageLabel = v24->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_43:
    sub_1C2D6EC(Chars, v8);
  }
  return RubyLabelHelper__TextFormalAdjust(v24, (System_Collections_Generic_IReadOnlyList_char__o *)v6, v21);
}


void RubyLabelHelper__ReleasePrefabs(RubyLabelHelper_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UILabel__o *rubyList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x20
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t size; // w2
  int v10; // w9
  struct System_Collections_Generic_List_string__o *rubyTextList; // x8
  int32_t v12; // w2
  int v13; // w9
  struct System_Collections_Generic_List_int__o *textPositionYList; // x8
  int v15; // w9
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x8
  int v17; // w9
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x8
  int v19; // w9
  struct System_Collections_Generic_List_UILabel__o *mainList; // x8
  int32_t v21; // w2
  int v22; // w9
  struct System_Collections_Generic_List_UILabel__o *v23; // x8
  int32_t v24; // w2
  int v25; // w9
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C21422 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21422 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  rubyList = this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v27.fields._current )
      sub_1C2D6EC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v27.fields._current,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  rubyList = this->fields.mainList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v27.fields._current )
      sub_1C2D6EC(0, v6);
    v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v27.fields._current,
                                   0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v7, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  mainTextList = this->fields.mainTextList;
  if ( !mainTextList )
    goto LABEL_35;
  size = mainTextList->fields._size;
  v10 = mainTextList->fields._version + 1;
  mainTextList->fields._size = 0;
  mainTextList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mainTextList->fields._items, 0, size, 0);
  rubyTextList = this->fields.rubyTextList;
  if ( !rubyTextList )
    goto LABEL_35;
  v12 = rubyTextList->fields._size;
  v13 = rubyTextList->fields._version + 1;
  rubyTextList->fields._size = 0;
  rubyTextList->fields._version = v13;
  if ( v12 >= 1 )
    System_Array__Clear((System_Array_o *)rubyTextList->fields._items, 0, v12, 0);
  textPositionYList = this->fields.textPositionYList;
  if ( !textPositionYList )
    goto LABEL_35;
  v15 = textPositionYList->fields._version + 1;
  textPositionYList->fields._size = 0;
  textPositionYList->fields._version = v15;
  rubyFlagList = this->fields.rubyFlagList;
  if ( !rubyFlagList )
    goto LABEL_35;
  v17 = rubyFlagList->fields._version + 1;
  rubyFlagList->fields._size = 0;
  rubyFlagList->fields._version = v17;
  rubyLineList = this->fields.rubyLineList;
  if ( !rubyLineList )
    goto LABEL_35;
  v19 = rubyLineList->fields._version + 1;
  rubyLineList->fields._size = 0;
  rubyLineList->fields._version = v19;
  mainList = this->fields.mainList;
  if ( !mainList )
    goto LABEL_35;
  v21 = mainList->fields._size;
  v22 = mainList->fields._version + 1;
  mainList->fields._size = 0;
  mainList->fields._version = v22;
  if ( v21 >= 1 )
    System_Array__Clear((System_Array_o *)mainList->fields._items, 0, v21, 0);
  v23 = this->fields.rubyList;
  if ( !v23 )
LABEL_35:
    sub_1C2D6EC(rubyList, method);
  v24 = v23->fields._size;
  v25 = v23->fields._version + 1;
  v23->fields._size = 0;
  v23->fields._version = v25;
  if ( v24 >= 1 )
    System_Array__Clear((System_Array_o *)v23->fields._items, 0, v24, 0);
}


void RubyLabelHelper__SetMainObject(RubyLabelHelper_o *this, const MethodInfo *method)
{
  __int64 messageLabel; // x0
  int32_t v4; // w20
  int v5; // w23
  float v6; // s0
  float v7; // s8
  float v8; // s0
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t v10; // w24
  int32_t v11; // w21
  int v12; // w26
  int32_t v13; // w22
  float v14; // s9
  int v15; // w27
  float v16; // s10
  float v17; // s8
  float v18; // s12
  Il2CppObject *mainPrefab; // x23
  Il2CppObject *Component_object; // x25
  UILabel_o *v21; // x23
  struct UILabel_o *v22; // x8
  int32_t Item; // w8
  bool v24; // zf
  _BOOL4 v25; // w8
  float v26; // s13
  UnityEngine_Transform_o *v27; // x24
  const MethodInfo *v28; // x4
  float v29; // s0
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  float v33; // s8
  __int64 v34; // x8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21424 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21424 = 1;
  }
  messageLabel = (__int64)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_35;
  v4 = *(_DWORD *)(messageLabel + 424);
  v5 = *(_DWORD *)(messageLabel + 528);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)messageLabel + 664LL))(
    messageLabel,
    *(_QWORD *)(*(_QWORD *)messageLabel + 672LL));
  messageLabel = (__int64)this->fields.messageLabel;
  if ( !messageLabel
    || (v7 = v6,
        LODWORD(v8) = *(_QWORD *)&UIWidget__get_pivotOffset((UIWidget_o *)messageLabel, 0),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_35:
    sub_1C2D6EC(messageLabel, method);
  }
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = (float)(((v4 - 15) & ~((v4 - 15) >> 31)) + 2 * v5);
  v15 = v5 + v4;
  v16 = v7 * v8;
  v17 = 0.0;
  v18 = 0.0;
  while ( v13 < mainTextList->fields._size )
  {
    messageLabel = (__int64)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)messageLabel,
                           (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      messageLabel = (__int64)UnityEngine_Object__Instantiate_object__51752420(
                                mainPrefab,
                                (UnityEngine_Transform_o *)Component_object,
                                (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      if ( messageLabel )
      {
        messageLabel = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)messageLabel,
                                  (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        if ( this->fields.mainTextList )
        {
          v21 = (UILabel_o *)messageLabel;
          messageLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this->fields.mainTextList,
                                    v13,
                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( v21 )
          {
            UILabel__set_text(v21, (System_String_o *)messageLabel, 0);
            UILabel__set_fontSize(v21, v4, 0);
            v22 = this->fields.messageLabel;
            if ( v22 )
            {
              UIWidget__set_depth((UIWidget_o *)v21, v22->fields.mDepth, 0);
              messageLabel = (__int64)this->fields.textPositionYList;
              if ( messageLabel )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         (System_Collections_Generic_List_int__o *)messageLabel,
                         v13,
                         (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
                messageLabel = (__int64)this->fields.rubyLineList;
                v24 = v10 == Item;
                v25 = v10 == Item;
                v26 = v24 ? v17 : 0.0;
                if ( messageLabel )
                {
                  v12 &= v25;
                  if ( !(v12 & 1
                       | !System_Collections_Generic_List_bool___get_Item(
                            (System_Collections_Generic_List_bool__o *)messageLabel,
                            v13,
                            (const MethodInfo_37434A4 *)Method_System_Collections_Generic_List_bool__get_Item__)) )
                  {
                    v18 = v18 + v14;
                    v12 = 1;
                    this->fields.addSize.fields.y = v18;
                  }
                  messageLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v21, 0);
                  if ( this->fields.textPositionYList )
                  {
                    v27 = (UnityEngine_Transform_o *)messageLabel;
                    messageLabel = System_Collections_Generic_List_int___get_Item(
                                     this->fields.textPositionYList,
                                     v13,
                                     (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
                    if ( v27 )
                    {
                      v35.fields.y = (float)-(v15 * messageLabel) - v18;
                      v35.fields.x = v26 - v16;
                      v35.fields.z = 0.0;
                      UnityEngine_Transform__set_localPosition(v27, v35, 0);
                      messageLabel = (__int64)this->fields.rubyFlagList;
                      if ( messageLabel )
                      {
                        if ( System_Collections_Generic_List_bool___get_Item(
                               (System_Collections_Generic_List_bool__o *)messageLabel,
                               v13,
                               (const MethodInfo_37434A4 *)Method_System_Collections_Generic_List_bool__get_Item__) )
                        {
                          messageLabel = (__int64)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)v21,
                                                    0);
                          if ( !messageLabel )
                            goto LABEL_35;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0);
                          RubyLabelHelper__SetRubyObject(this, v11++, localPosition, v4, v21, v28);
                        }
                        messageLabel = (__int64)this->fields.textPositionYList;
                        if ( messageLabel )
                        {
                          v10 = System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)messageLabel,
                                  v13,
                                  (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__);
                          LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize(v21, 0);
                          messageLabel = (__int64)this->fields.mainList;
                          if ( messageLabel )
                          {
                            v30 = *(_QWORD *)(messageLabel + 16);
                            v31 = Method_System_Collections_Generic_List_UILabel__Add__;
                            ++*(_DWORD *)(messageLabel + 28);
                            if ( v30 )
                            {
                              v32 = *(int *)(messageLabel + 24);
                              v33 = v29;
                              if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)messageLabel,
                                  (Il2CppObject *)v21,
                                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v34 = v30 + 8 * v32;
                                *(_DWORD *)(messageLabel + 24) = v32 + 1;
                                *(_QWORD *)(v34 + 32) = v21;
                                messageLabel = sub_1C2D434(v34 + 32);
                              }
                              mainTextList = this->fields.mainTextList;
                              v17 = v26 + v33;
                              ++v13;
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
void RubyLabelHelper__SetRubyObject(
        RubyLabelHelper_o *this,
        int32_t idx,
        UnityEngine_Vector3_o mainPosition,
        int32_t fontSize,
        UILabel_o *mainLabel,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s8
  UnityEngine_Component_o *messageLabel; // x0
  Il2CppObject *rubyPrefab; // x21
  Il2CppObject *Component_object; // x24
  UILabel_o *v15; // x21
  float v16; // s0
  int32_t v17; // w24
  Il2CppObject *Item; // x0
  struct System_String_o *mText; // x8
  int v20; // w27
  struct System_Collections_Generic_List_string__o *rubyTextList; // x25
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x0
  int32_t v24; // w8
  int v25; // w23
  int32_t v26; // w8
  Il2CppObject *v27; // x0
  struct UILabel_o *v28; // x8
  float v29; // s10
  float v30; // s11
  float v31; // s0
  intptr_t m_CachedPtr; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  intptr_t v35; // x8
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_4C21425 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C2D490(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_25417/*"・"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21425 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_40;
  rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       messageLabel,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__51752420(
                                              rubyPrefab,
                                              (UnityEngine_Transform_o *)Component_object,
                                              (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
  if ( !messageLabel )
    goto LABEL_40;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_40;
  v15 = (UILabel_o *)messageLabel;
  v16 = UILabel__get_printedSize(mainLabel, 0).fields.x;
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  v17 = v16 == INFINITY ? 0x80000000 : (int)v16;
  if ( !messageLabel )
    goto LABEL_40;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)messageLabel,
           idx,
           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  messageLabel = (UnityEngine_Component_o *)System_String__op_Equality(
                                              (System_String_o *)Item,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v20 = -1;
      while ( ++v20 < mText->fields._stringLength )
      {
        rubyTextList = this->fields.rubyTextList;
        if ( rubyTextList )
        {
          v22 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this->fields.rubyTextList,
                  idx,
                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
          v23 = (Il2CppObject *)System_String__Concat_63457864(
                                  (System_String_o *)v22,
                                  (System_String_o *)StringLiteral_25417/*"・"*/,
                                  0);
          System_Collections_Generic_List_object___set_Item(
            (System_Collections_Generic_List_object__o *)rubyTextList,
            idx,
            v23,
            (const MethodInfo_3789908 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_40;
      }
      if ( v15 )
      {
        UILabel__set_fontSize(v15, fontSize, 0);
        if ( fontSize >= 0 )
          v26 = fontSize;
        else
          v26 = fontSize + 1;
        v25 = (v26 >> 1) + 5;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1C2D6EC(messageLabel, *(_QWORD *)&idx);
  }
  if ( !v15 )
    goto LABEL_40;
  if ( fontSize >= 0 )
    v24 = fontSize;
  else
    v24 = fontSize + 1;
  UILabel__set_fontSize(v15, v24 >> 1, 0);
  v25 = v15->fields.mFontSize + 1;
LABEL_29:
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  if ( !messageLabel )
    goto LABEL_40;
  v27 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)messageLabel,
          idx,
          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  UILabel__set_text(v15, (System_String_o *)v27, 0);
  v28 = this->fields.messageLabel;
  if ( !v28 )
    goto LABEL_40;
  UIWidget__set_depth((UIWidget_o *)v15, v28->fields.mDepth, 0);
  LODWORD(v29) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0);
  LODWORD(v30) = *(_QWORD *)&UILabel__get_printedSize(v15, 0);
  v31 = UILabel__get_printedSize(v15, 0).fields.x;
  if ( v31 <= UILabel__get_printedSize(mainLabel, 0).fields.x )
    x = x + (float)((float)(v29 - v30) * 0.5);
  else
    UILabel__SetCondensedScale(v15, v17, 0, 0);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v15, 0);
  if ( !messageLabel )
    goto LABEL_40;
  v36.fields.y = y + (float)v25;
  v36.fields.z = 0.0;
  v36.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v36, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyList;
  if ( !messageLabel )
    goto LABEL_40;
  m_CachedPtr = messageLabel->fields.m_CachedPtr;
  v33 = Method_System_Collections_Generic_List_UILabel__Add__;
  ++HIDWORD(messageLabel[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_40;
  klass_low = SLODWORD(messageLabel[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)messageLabel,
      (Il2CppObject *)v15,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = m_CachedPtr + 8 * klass_low;
    LODWORD(messageLabel[1].klass) = klass_low + 1;
    *(_QWORD *)(v35 + 32) = v15;
    sub_1C2D434(v35 + 32);
  }
}


void RubyLabelHelper__SetText(RubyLabelHelper_o *this, System_String_o *text, const MethodInfo *method)
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
      sub_1C2D6EC(0, v9);
    UnityEngine_Behaviour__set_enabled(messageLabel, 0, 0);
  }
}


void RubyLabelHelper__SetTextObjectList(RubyLabelHelper_o *this, System_String_o *message, const MethodInfo *method)
{
  RubyLabelHelper_o *v4; // x19
  Il2CppObject *v5; // x22
  __int64 v6; // x2
  __int64 v7; // x3
  int rubyPrefab; // w8
  char v9; // w20
  int32_t v10; // w21
  System_String_o *v11; // x25
  System_String_o *v12; // x23
  bool continueRuby; // w26
  int32_t v14; // w24
  bool v15; // w28
  uint16_t Chars; // w0
  struct UILabel_o *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  UILabel_c **v20; // x8
  System_String_o *v21; // x0
  struct UILabel_o *messageLabel; // x8
  _QWORD *v23; // x9
  __int64 rubyPrefab_low; // x10
  UILabel_c **v25; // x8
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  struct UILabel_o *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  UILabel_c **v31; // x8
  struct UILabel_o *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  struct UILabel_o *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  struct UILabel_o *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  struct UILabel_o *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  struct UILabel_o *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  struct UILabel_o *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  struct UILabel_o *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  UILabel_c **v53; // x8
  struct UILabel_o *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  struct UILabel_o *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  struct UILabel_o *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  struct UILabel_o *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  UILabel_c **v66; // x8
  RubyLabelHelper_o *v67; // [xsp+0h] [xbp-70h]
  _WORD v68[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C21423 & 1) == 0 )
  {
    sub_1C2D490(&char_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_bool__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    this = (RubyLabelHelper_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21423 = 1;
  }
  v68[0] = 0;
  v5 = (Il2CppObject *)StringLiteral_1/*""*/;
  v4->fields.notRubyFlag = 1;
  v4->fields.continueRuby = 0;
  if ( !message || (this = (RubyLabelHelper_o *)System_String__Split(message, 0xAu, 0, 0)) == 0 )
LABEL_116:
    sub_1C2D6EC(this, message);
  rubyPrefab = (int)this->fields.rubyPrefab;
  if ( rubyPrefab >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = (System_String_o *)v5;
    v67 = this;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)rubyPrefab )
        sub_1C2D6F4(this, message, v6, v7);
      v12 = (System_String_o *)*((_QWORD *)&this->fields.mainPrefab + v10);
      continueRuby = v4->fields.continueRuby;
      if ( !v12 )
        goto LABEL_116;
      if ( v12->fields._stringLength >= 1 )
      {
        v14 = 0;
        v15 = v4->fields.continueRuby;
        while ( 1 )
        {
          Chars = System_String__get_Chars(v12, v14, 0);
          v68[0] = Chars;
          if ( Chars <= 0x5Au )
            break;
          if ( Chars == 91 )
          {
            if ( System_String__get_Chars(v12, v14 + 1, 0) != 35 )
            {
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v27 = System_Char__ToString((uint16_t)v68, 0);
              v11 = System_String__Concat_63457864(v11, v27, 0);
              goto LABEL_83;
            }
            v4->fields.continueRuby = 1;
            if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_1/*""*/, 0) )
            {
              this = (RubyLabelHelper_o *)v4->fields.mainTextList;
              if ( !this )
                goto LABEL_116;
              messageLabel = this->fields.messageLabel;
              v23 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !messageLabel )
                goto LABEL_116;
              rubyPrefab_low = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)rubyPrefab_low >= LODWORD(messageLabel->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = &messageLabel->klass + rubyPrefab_low;
                LODWORD(this->fields.rubyPrefab) = rubyPrefab_low + 1;
                v25[4] = (UILabel_c *)v11;
                sub_1C2D434(v25 + 4);
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
              if ( !this )
                goto LABEL_116;
              v41 = this->fields.messageLabel;
              v42 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v41 )
                goto LABEL_116;
              v43 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v43 >= LODWORD(v41->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  continueRuby,
                  *(const MethodInfo_37437A4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v43 + 1;
                *((_BYTE *)&v41->fields.leftAnchor + v43) = continueRuby;
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
              if ( !this )
                goto LABEL_116;
              v44 = this->fields.messageLabel;
              v45 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v44 )
                goto LABEL_116;
              v46 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v46 >= LODWORD(v44->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  1,
                  *(const MethodInfo_37437A4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v46 + 1;
                *((_BYTE *)&v44->fields.leftAnchor + v46) = 1;
              }
              this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
              if ( !this )
                goto LABEL_116;
              v47 = this->fields.messageLabel;
              v48 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v47 )
                goto LABEL_116;
              v49 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v49 >= LODWORD(v47->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)this,
                  v10,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v49 + 1;
                *((_DWORD *)&v47->fields.leftAnchor + v49) = v10;
              }
              v11 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v4->fields.notRubyFlag = 0;
            continueRuby = 1;
LABEL_82:
            v15 = 1;
            goto LABEL_83;
          }
          if ( Chars != 93 )
            goto LABEL_33;
          if ( !v15 )
            goto LABEL_24;
          this = (RubyLabelHelper_o *)v4->fields.mainTextList;
          if ( !this )
            goto LABEL_116;
          v17 = this->fields.messageLabel;
          v18 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v17 )
            goto LABEL_116;
          v19 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v19 >= LODWORD(v17->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v11,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &v17->klass + v19;
            LODWORD(this->fields.rubyPrefab) = v19 + 1;
            v20[4] = (UILabel_c *)v11;
            sub_1C2D434(v20 + 4);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
          if ( !this )
            goto LABEL_116;
          v28 = this->fields.messageLabel;
          v29 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v28 )
            goto LABEL_116;
          v30 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v30 >= LODWORD(v28->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v5,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &v28->klass + v30;
            LODWORD(this->fields.rubyPrefab) = v30 + 1;
            v31[4] = (UILabel_c *)v5;
            sub_1C2D434(v31 + 4);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
          if ( !this )
            goto LABEL_116;
          v32 = this->fields.messageLabel;
          v33 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v32 )
            goto LABEL_116;
          v34 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v34 >= LODWORD(v32->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              continueRuby,
              *(const MethodInfo_37437A4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v34 + 1;
            *((_BYTE *)&v32->fields.leftAnchor + v34) = continueRuby;
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
          if ( !this )
            goto LABEL_116;
          v35 = this->fields.messageLabel;
          v36 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v35 )
            goto LABEL_116;
          v37 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v37 >= LODWORD(v35->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              1,
              *(const MethodInfo_37437A4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v37 + 1;
            *((_BYTE *)&v35->fields.leftAnchor + v37) = 1;
          }
          this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
          if ( !this )
            goto LABEL_116;
          v38 = this->fields.messageLabel;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v38 )
            goto LABEL_116;
          v40 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v40 >= LODWORD(v38->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              v10,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v40 + 1;
            *((_DWORD *)&v38->fields.leftAnchor + v40) = v10;
          }
          continueRuby = 0;
          v15 = 0;
          v9 = 0;
          v5 = (Il2CppObject *)StringLiteral_1/*""*/;
          v4->fields.continueRuby = 0;
          v11 = (System_String_o *)v5;
LABEL_83:
          if ( ++v14 >= v12->fields._stringLength )
            goto LABEL_86;
        }
        if ( Chars == 35 )
        {
          if ( !v15 )
          {
LABEL_24:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v21 = System_Char__ToString((uint16_t)v68, 0);
            v11 = System_String__Concat_63457864(v11, v21, 0);
            v15 = 0;
            goto LABEL_83;
          }
          goto LABEL_82;
        }
        if ( Chars == 58 )
        {
          if ( !v15 )
            goto LABEL_24;
          v15 = 1;
        }
        else
        {
LABEL_33:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v26 = System_Char__ToString((uint16_t)v68, 0);
          if ( (v9 & 1) == 0 )
          {
            v11 = System_String__Concat_63457864(v11, v26, 0);
            v9 = 0;
            goto LABEL_83;
          }
          v5 = (Il2CppObject *)System_String__Concat_63457864((System_String_o *)v5, v26, 0);
        }
        v9 = 1;
        goto LABEL_83;
      }
      v15 = v4->fields.continueRuby;
LABEL_86:
      if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_1/*""*/, 0) )
        break;
LABEL_114:
      this = v67;
      ++v10;
      rubyPrefab = (int)v67->fields.rubyPrefab;
      if ( v10 >= rubyPrefab )
        return;
    }
    this = (RubyLabelHelper_o *)v4->fields.mainTextList;
    if ( !this )
      goto LABEL_116;
    v50 = this->fields.messageLabel;
    v51 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v50 )
      goto LABEL_116;
    v52 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v52 >= LODWORD(v50->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v11,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->klass + v52;
      LODWORD(this->fields.rubyPrefab) = v52 + 1;
      v53[4] = (UILabel_c *)v11;
      sub_1C2D434(v53 + 4);
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
    if ( !this )
      goto LABEL_116;
    v54 = this->fields.messageLabel;
    v55 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v54 )
      goto LABEL_116;
    v56 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v56 >= LODWORD(v54->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        continueRuby,
        *(const MethodInfo_37437A4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v56 + 1;
      *((_BYTE *)&v54->fields.leftAnchor + v56) = continueRuby;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
    if ( !this )
      goto LABEL_116;
    v57 = this->fields.messageLabel;
    v58 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v57 )
      goto LABEL_116;
    v59 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v59 >= LODWORD(v57->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        v15,
        *(const MethodInfo_37437A4 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v59 + 1;
      *((_BYTE *)&v57->fields.leftAnchor + v59) = v15;
    }
    this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
    if ( !this )
      goto LABEL_116;
    v60 = this->fields.messageLabel;
    v61 = Method_System_Collections_Generic_List_int__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v60 )
      goto LABEL_116;
    v62 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v62 >= LODWORD(v60->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)this,
        v10,
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      if ( !v15 )
      {
LABEL_113:
        v11 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_114;
      }
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v62 + 1;
      *((_DWORD *)&v60->fields.leftAnchor + v62) = v10;
      if ( !v15 )
        goto LABEL_113;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
    if ( !this )
      goto LABEL_116;
    v63 = this->fields.messageLabel;
    v64 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v63 )
      goto LABEL_116;
    v65 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v65 >= LODWORD(v63->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v5,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
    }
    else
    {
      v66 = &v63->klass + v65;
      LODWORD(this->fields.rubyPrefab) = v65 + 1;
      v66[4] = (UILabel_c *)v5;
      sub_1C2D434(v66 + 4);
    }
    goto LABEL_113;
  }
}


System_String_o *RubyLabelHelper__TextFormalAdjust(
        RubyLabelHelper_o *this,
        System_Collections_Generic_IReadOnlyList_char__o *localMainTextList,
        const MethodInfo *method)
{
  RubyLabelHelper_o *v4; // x20
  System_String_o *v5; // x22
  int32_t v6; // w21
  unsigned int i; // w23
  System_Collections_Generic_IReadOnlyList_char__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  struct UILabel_o *messageLabel; // x8
  unsigned __int16 v17; // w24
  uint16_t Chars; // w0
  System_Collections_Generic_IReadOnlyList_char__c *v19; // x8
  uint16_t v20; // w25
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  System_String_o *v24; // x0
  struct UILabel_o *v25; // x8
  struct System_String_o *mText; // x9
  System_Collections_Generic_IReadOnlyList_char__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IReadOnlyList_char__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  unsigned int v35; // w24
  struct UILabel_o *v36; // x8
  struct System_String_o *v37; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  System_String_o *v42; // x0
  struct UILabel_o *v43; // x8
  unsigned __int16 v44; // w26
  struct UILabel_o *v45; // x8
  System_String_o *v46; // x0
  struct UILabel_o *v47; // x8
  struct System_String_o *v48; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  struct UILabel_o *v53; // x8
  System_String_o *v54; // x0
  struct UILabel_o *v55; // x8
  struct System_String_o *v56; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  System_String_o *v61; // x0
  _WORD v63[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C21427 & 1) == 0 )
  {
    sub_1C2D490(&char_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyCollection_char__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyList_char__TypeInfo);
    this = (RubyLabelHelper_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21427 = 1;
  }
  v63[0] = 0;
  if ( !localMainTextList )
LABEL_101:
    sub_1C2D6EC(this, localMainTextList);
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v6 = 0;
  for ( i = 0; ; ++i )
  {
    klass = localMainTextList->klass;
    v9 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
    if ( *(_WORD *)&localMainTextList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0);
    }
    if ( (int)i >= (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v11)(
                     localMainTextList,
                     *(_QWORD *)(v11 + 8)) )
      break;
    v12 = localMainTextList->klass;
    v13 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
    if ( *(_WORD *)&localMainTextList->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v14 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v15)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v15 + 8));
    messageLabel = v4->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_101;
    v17 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_101;
    Chars = System_String__get_Chars((System_String_o *)this, v6, 0);
    v19 = localMainTextList->klass;
    v20 = Chars;
    v21 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
    if ( *(_WORD *)&localMainTextList->klass->_2.rank )
    {
      v22 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v22 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_24;
      }
      v23 = (__int64)&v19->vtable[*v22];
    }
    else
    {
LABEL_24:
      v23 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v23)(
                                  localMainTextList,
                                  i,
                                  *(_QWORD *)(v23 + 8));
    if ( v17 == v20 )
    {
      v63[0] = (_WORD)this;
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      v24 = System_Char__ToString((uint16_t)v63, 0);
      this = (RubyLabelHelper_o *)System_String__Concat_63457864(v5, v24, 0);
      v25 = v4->fields.messageLabel;
      if ( !v25 )
        goto LABEL_101;
      mText = v25->fields.mText;
      if ( !mText )
        goto LABEL_101;
      v5 = (System_String_o *)this;
      if ( v6 < mText->fields._stringLength - 1 )
        ++v6;
    }
    else
    {
      if ( (unsigned __int16)this != 10 )
      {
        v31 = localMainTextList->klass;
        v32 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
        if ( *(_WORD *)&localMainTextList->klass->_2.rank )
        {
          v33 = &v31->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v33 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_47;
          }
          v34 = (__int64)&v31->vtable[*v33];
        }
        else
        {
LABEL_47:
          v34 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
        }
        v63[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v34)(
                   localMainTextList,
                   i,
                   *(_QWORD *)(v34 + 8));
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v42 = System_Char__ToString((uint16_t)v63, 0);
        v5 = System_String__Concat_63457864(v5, v42, 0);
        continue;
      }
      v25 = v4->fields.messageLabel;
      if ( !v25 )
        goto LABEL_101;
    }
    this = (RubyLabelHelper_o *)v25->fields.mText;
    if ( !this )
      goto LABEL_101;
    if ( System_String__get_Chars((System_String_o *)this, v6, 0) == 10 )
    {
      v27 = localMainTextList->klass;
      v28 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
      if ( *(_WORD *)&localMainTextList->klass->_2.rank )
      {
        v29 = &v27->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)v29 - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_42;
        }
        v30 = (__int64)&v27->vtable[*v29];
      }
      else
      {
LABEL_42:
        v30 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v30)(
                                    localMainTextList,
                                    *(_QWORD *)(v30 + 8));
      v35 = i + 1;
      if ( (int)(i + 1) >= (int)this )
        goto LABEL_66;
      v36 = v4->fields.messageLabel;
      if ( !v36 )
        goto LABEL_101;
      v37 = v36->fields.mText;
      if ( !v37 )
        goto LABEL_101;
      if ( v37->fields._stringLength <= v6 + 1 )
        goto LABEL_66;
      v38 = localMainTextList->klass;
      v39 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
      if ( *(_WORD *)&localMainTextList->klass->_2.rank )
      {
        v40 = &v38->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v40 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_57;
        }
        v41 = (__int64)&v38->vtable[*v40];
      }
      else
      {
LABEL_57:
        v41 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v41)(
                                    localMainTextList,
                                    v35,
                                    *(_QWORD *)(v41 + 8));
      v43 = v4->fields.messageLabel;
      if ( !v43 )
        goto LABEL_101;
      v44 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v43->fields.mText;
      if ( !this )
        goto LABEL_101;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v6 + 1, 0);
      if ( v44 == (unsigned __int16)this )
      {
LABEL_66:
        v45 = v4->fields.messageLabel;
        if ( !v45 )
          goto LABEL_101;
        this = (RubyLabelHelper_o *)v45->fields.mText;
        if ( !this )
          goto LABEL_101;
        v63[0] = System_String__get_Chars((System_String_o *)this, v6, 0);
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v46 = System_Char__ToString((uint16_t)v63, 0);
        this = (RubyLabelHelper_o *)System_String__Concat_63457864(v5, v46, 0);
        v47 = v4->fields.messageLabel;
        if ( !v47 )
          goto LABEL_101;
        v48 = v47->fields.mText;
        if ( !v48 )
          goto LABEL_101;
        v5 = (System_String_o *)this;
        if ( v6 < v48->fields._stringLength - 1 )
          ++v6;
      }
      else
      {
        v49 = localMainTextList->klass;
        v50 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
        if ( *(_WORD *)&localMainTextList->klass->_2.rank )
        {
          v51 = &v49->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v51 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v50;
            v51 += 4;
            if ( !v50 )
              goto LABEL_79;
          }
          v52 = (__int64)&v49->vtable[*v51];
        }
        else
        {
LABEL_79:
          v52 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
        }
        this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v52)(
                                      localMainTextList,
                                      v35,
                                      *(_QWORD *)(v52 + 8));
        if ( (unsigned __int16)this == 10 )
        {
          v53 = v4->fields.messageLabel;
          if ( !v53 )
            goto LABEL_101;
          this = (RubyLabelHelper_o *)v53->fields.mText;
          if ( !this )
            goto LABEL_101;
          v63[0] = System_String__get_Chars((System_String_o *)this, v6, 0);
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v54 = System_Char__ToString((uint16_t)v63, 0);
          this = (RubyLabelHelper_o *)System_String__Concat_63457864(v5, v54, 0);
          v55 = v4->fields.messageLabel;
          if ( !v55 )
            goto LABEL_101;
          v56 = v55->fields.mText;
          if ( !v56 )
            goto LABEL_101;
          v5 = (System_String_o *)this;
          if ( v6 < v56->fields._stringLength - 1 )
            ++v6;
        }
        else
        {
          v57 = localMainTextList->klass;
          v58 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
          if ( *(_WORD *)&localMainTextList->klass->_2.rank )
          {
            v59 = &v57->_1.interfaceOffsets->offset;
            while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v59 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
            {
              --v58;
              v59 += 4;
              if ( !v58 )
                goto LABEL_95;
            }
            v60 = (__int64)&v57->vtable[*v59];
          }
          else
          {
LABEL_95:
            v60 = sub_1C7DCA8(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
          }
          v63[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v60)(
                     localMainTextList,
                     v35,
                     *(_QWORD *)(v60 + 8));
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v61 = System_Char__ToString((uint16_t)v63, 0);
          v5 = System_String__Concat_63457864(v5, v61, 0);
          ++i;
        }
      }
    }
  }
  return v5;
}


UnityEngine_Vector2_o RubyLabelHelper__get_Size(RubyLabelHelper_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_1C2D6EC(0, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0);
  v5 = printedSize.fields.x + this->fields.addSize.fields.x;
  v6 = printedSize.fields.y + this->fields.addSize.fields.y;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}