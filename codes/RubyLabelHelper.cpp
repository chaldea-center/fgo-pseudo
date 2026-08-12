void RubyLabelHelper___ctor(
        RubyLabelHelper_o *this,
        UILabel_o *label,
        UnityEngine_GameObject_o *inputMainPrefab,
        UnityEngine_GameObject_o *inputRubyPrefab,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_int__o *v23; // x23
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_bool__o *v30; // x23
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_Collections_Generic_List_bool__o *v37; // x23
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_object__o *v44; // x23
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_List_object__o *v51; // x23
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct UnityEngine_GameObject_o **p_mainPrefab; // x22
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct UnityEngine_GameObject_o **p_rubyPrefab; // x19
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x1
  __int64 v79; // x2
  UnityEngine_Object_o *v80; // x20

  if ( (byte_596A8F1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_bool__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UILabel__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A8F1 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.mainTextList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainTextList, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.rubyTextList = (struct System_Collections_Generic_List_string__o *)v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rubyTextList,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.textPositionYList = v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textPositionYList,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_List_bool__o *)sub_2213CCC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v30,
    (const MethodInfo_4410F08 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyFlagList = v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rubyFlagList,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_List_bool__o *)sub_2213CCC(System_Collections_Generic_List_bool__TypeInfo);
  System_Collections_Generic_List_bool____ctor(
    v37,
    (const MethodInfo_4410F08 *)Method_System_Collections_Generic_List_bool___ctor__);
  this->fields.rubyLineList = v37;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rubyLineList,
    (int32_t)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.mainList = (struct System_Collections_Generic_List_UILabel__o *)v44;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mainList, (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UILabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UILabel___ctor__);
  this->fields.rubyList = (struct System_Collections_Generic_List_UILabel__o *)v51;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rubyList, (int32_t)v51, v52, v53, v54, v55, v56, v57);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.messageLabel = label;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)label, v58, v59, v60, v61, v62, v63);
  this->fields.mainPrefab = inputMainPrefab;
  p_mainPrefab = &this->fields.mainPrefab;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainPrefab,
    (int32_t)inputMainPrefab,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.rubyPrefab = inputRubyPrefab;
  p_rubyPrefab = &this->fields.rubyPrefab;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_rubyPrefab, (int32_t)inputRubyPrefab, v72, v73, v74, v75, v76, v77);
  v80 = (UnityEngine_Object_o *)*p_mainPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v78, v79);
  UnityEngine_Object__op_Inequality(v80, 0, 0);
  UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)*p_rubyPrefab, 0, 0);
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
  char v11; // w28
  char v12; // w26
  System_String_o *v13; // x24
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *v19; // x0
  struct System_Char_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_String_o *v23; // x1
  System_String_o *v24; // x0
  const MethodInfo *v25; // x2
  struct UILabel_o *messageLabel; // x8
  RubyLabelHelper_o *v28; // [xsp+0h] [xbp-70h]
  _WORD v29[2]; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_596A8F6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_char__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_char___ctor__);
    sub_2213A60(&System_Collections_Generic_List_char__TypeInfo);
    sub_2213A60(&StringLiteral_16440/*"[#"*/);
    sub_2213A60(&StringLiteral_1533/*":"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    byte_596A8F6 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  v29[0] = 0;
  v6 = (System_Collections_Generic_List_char__o *)sub_2213CCC(System_Collections_Generic_List_char__TypeInfo);
  System_Collections_Generic_List_char____ctor(
    v6,
    (const MethodInfo_4415F78 *)Method_System_Collections_Generic_List_char___ctor__);
  if ( !labelText )
    goto LABEL_43;
  v28 = this;
  if ( labelText->fields._stringLength >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = v5;
    while ( 1 )
    {
      v29[0] = System_String__get_Chars(labelText, v9, 0);
      if ( !*(_DWORD *)(qword_5984388 + 228) )
        j_il2cpp_runtime_class_init_0(qword_5984388, v14, v15);
      v16 = System_Char__ToString((uint16_t)v29, 0);
      v5 = System_String__Concat_75651716(v5, v16, 0);
      if ( (v11 & 1) != 0 )
      {
        v29[0] = System_String__get_Chars(labelText, v9, 0);
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v17, v18);
        v19 = System_Char__ToString((uint16_t)v29, 0);
        v13 = System_String__Concat_75651716(v13, v19, 0);
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0);
      if ( !v6 )
        goto LABEL_43;
      items = v6->fields._items;
      v21 = Method_System_Collections_Generic_List_char__Add__;
      ++v6->fields._version;
      if ( !items )
        goto LABEL_43;
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_char___AddWithResize(
          v6,
          (uint16_t)Chars,
          *(const MethodInfo_4416808 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = (unsigned __int16)Chars;
      }
      if ( System_String__get_Chars(labelText, v9, 0) == 91 && System_String__get_Chars(labelText, v9 + 1, 0) == 35 )
        break;
      if ( (v10 & 1) == 0 )
      {
        v10 = 0;
        goto LABEL_28;
      }
      Chars = (System_String_o *)System_String__get_Chars(labelText, v9, 0);
      v29[0] = (_WORD)Chars;
      if ( (unsigned __int16)Chars != 93 )
      {
        if ( (unsigned __int16)Chars == 58 )
        {
          v10 = 1;
          v11 = 1;
          goto LABEL_28;
        }
        if ( (unsigned __int16)Chars == 35 )
        {
          if ( !v5 )
            goto LABEL_43;
          v5 = System_String__Replace_75703400(
                 v5,
                 (System_String_o *)StringLiteral_16440/*"[#"*/,
                 (System_String_o *)StringLiteral_1/*""*/,
                 0);
        }
        goto LABEL_26;
      }
      if ( (v11 & 1) != 0 )
      {
        Chars = System_String__Concat_75651716((System_String_o *)StringLiteral_1533/*":"*/, v13, 0);
        if ( !v5 )
          goto LABEL_43;
        v23 = Chars;
      }
      else
      {
        if ( !v5 )
          goto LABEL_43;
        v23 = (System_String_o *)StringLiteral_16691/*"]"*/;
      }
      v24 = System_String__Replace_75703400(v5, v23, (System_String_o *)StringLiteral_1/*""*/, 0);
      v13 = (System_String_o *)StringLiteral_1/*""*/;
      v5 = v24;
      v10 = 0;
      v11 = 0;
LABEL_28:
      if ( ++v9 >= labelText->fields._stringLength )
        goto LABEL_38;
    }
    v12 = 0;
LABEL_26:
    v10 = 1;
    goto LABEL_28;
  }
  v12 = 1;
LABEL_38:
  Chars = (System_String_o *)WrapControlText__textAdjust(v28->fields.messageLabel, v5, 22, 0, 0);
  if ( (v12 & 1) != 0 )
  {
    messageLabel = v28->fields.messageLabel;
    if ( messageLabel )
      return messageLabel->fields.mText;
LABEL_43:
    sub_2213CDC(Chars, v8);
  }
  return RubyLabelHelper__TextFormalAdjust(v28, (System_Collections_Generic_IReadOnlyList_char__o *)v6, v25);
}


void RubyLabelHelper__ReleasePrefabs(RubyLabelHelper_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UILabel__o *rubyList; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x20
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t size; // w2
  int v14; // w9
  struct System_Collections_Generic_List_string__o *rubyTextList; // x8
  int32_t v16; // w2
  int v17; // w9
  struct System_Collections_Generic_List_int__o *textPositionYList; // x8
  int v19; // w9
  struct System_Collections_Generic_List_bool__o *rubyFlagList; // x8
  int v21; // w9
  struct System_Collections_Generic_List_bool__o *rubyLineList; // x8
  int v23; // w9
  struct System_Collections_Generic_List_UILabel__o *mainList; // x8
  int32_t v25; // w2
  int v26; // w9
  struct System_Collections_Generic_List_UILabel__o *v27; // x8
  int32_t v28; // w2
  int v29; // w9
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596A8F2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UILabel__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A8F2 = 1;
  }
  rubyList = this->fields.rubyList;
  memset(&v31, 0, sizeof(v31));
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v31 = v30;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v31.fields._current )
      sub_2213CDC(0, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v31.fields._current,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  rubyList = this->fields.mainList;
  if ( !rubyList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)rubyList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UILabel__GetEnumerator__);
  v31 = v30;
  v30.fields._list = 0;
  *(_QWORD *)&v30.fields._index = &v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UILabel__MoveNext__) )
  {
    if ( !v31.fields._current )
      sub_2213CDC(0, v8);
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)v31.fields._current,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(v11, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UILabel__Dispose__);
  mainTextList = this->fields.mainTextList;
  if ( !mainTextList )
    goto LABEL_35;
  size = mainTextList->fields._size;
  v14 = mainTextList->fields._version + 1;
  mainTextList->fields._size = 0;
  mainTextList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mainTextList->fields._items, 0, size, 0);
  rubyTextList = this->fields.rubyTextList;
  if ( !rubyTextList )
    goto LABEL_35;
  v16 = rubyTextList->fields._size;
  v17 = rubyTextList->fields._version + 1;
  rubyTextList->fields._size = 0;
  rubyTextList->fields._version = v17;
  if ( v16 >= 1 )
    System_Array__Clear((System_Array_o *)rubyTextList->fields._items, 0, v16, 0);
  textPositionYList = this->fields.textPositionYList;
  if ( !textPositionYList )
    goto LABEL_35;
  v19 = textPositionYList->fields._version + 1;
  textPositionYList->fields._size = 0;
  textPositionYList->fields._version = v19;
  rubyFlagList = this->fields.rubyFlagList;
  if ( !rubyFlagList )
    goto LABEL_35;
  v21 = rubyFlagList->fields._version + 1;
  rubyFlagList->fields._size = 0;
  rubyFlagList->fields._version = v21;
  rubyLineList = this->fields.rubyLineList;
  if ( !rubyLineList )
    goto LABEL_35;
  v23 = rubyLineList->fields._version + 1;
  rubyLineList->fields._size = 0;
  rubyLineList->fields._version = v23;
  mainList = this->fields.mainList;
  if ( !mainList )
    goto LABEL_35;
  v25 = mainList->fields._size;
  v26 = mainList->fields._version + 1;
  mainList->fields._size = 0;
  mainList->fields._version = v26;
  if ( v25 >= 1 )
    System_Array__Clear((System_Array_o *)mainList->fields._items, 0, v25, 0);
  v27 = this->fields.rubyList;
  if ( !v27 )
LABEL_35:
    sub_2213CDC(rubyList, method);
  v28 = v27->fields._size;
  v29 = v27->fields._version + 1;
  v27->fields._size = 0;
  v27->fields._version = v29;
  if ( v28 >= 1 )
    System_Array__Clear((System_Array_o *)v27->fields._items, 0, v28, 0);
}


void RubyLabelHelper__SetMainObject(RubyLabelHelper_o *this, const MethodInfo *method)
{
  UIWidget_o *messageLabel; // x0
  int32_t leftAnchor; // w20
  int mCam; // w23
  float v6; // s0
  float v7; // s8
  float v8; // s0
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  int32_t v10; // w24
  int32_t v11; // w21
  char v12; // w28
  int32_t v13; // w22
  float v14; // s10
  float v15; // s8
  float v16; // s12
  float v17; // s9
  int v18; // w27
  Il2CppObject *mainPrefab; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *Component_object; // x25
  UILabel_o *v23; // x23
  struct UILabel_o *v24; // x8
  int32_t Item; // w0
  bool v26; // zf
  int32_t v27; // w8
  float v28; // s13
  UnityEngine_Transform_o *v29; // x24
  const MethodInfo *v30; // x4
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  float v37; // s0
  intptr_t m_CachedPtr; // x8
  _QWORD *v39; // x9
  float v40; // s8
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v42; // x8
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A8F4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A8F4 = 1;
  }
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_36;
  leftAnchor = (int32_t)messageLabel[1].fields.leftAnchor;
  mCam = (int)messageLabel[1].fields.mCam;
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))messageLabel->klass->vtable._22_get_localSize.methodPtr)(
    messageLabel,
    messageLabel->klass->vtable._22_get_localSize.method);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (v7 = v6,
        LODWORD(v8) = *(_QWORD *)&UIWidget__get_pivotOffset(messageLabel, 0),
        mainTextList = this->fields.mainTextList,
        this->fields.addSize.fields.x = 0.0,
        this->fields.addSize.fields.y = 0.0,
        !mainTextList) )
  {
LABEL_36:
    sub_2213CDC(messageLabel, method);
  }
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = v7 * v8;
  v15 = 0.0;
  v16 = 0.0;
  v17 = (float)(((leftAnchor - 15) & ~((leftAnchor - 15) >> 31)) + 2 * mCam);
  v18 = mCam + leftAnchor;
  while ( v13 < mainTextList->fields._size )
  {
    messageLabel = (UIWidget_o *)this->fields.messageLabel;
    if ( messageLabel )
    {
      mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)messageLabel,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Transform___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
      messageLabel = (UIWidget_o *)UnityEngine_Object__Instantiate_object__59717116(
                                     mainPrefab,
                                     (UnityEngine_Transform_o *)Component_object,
                                     (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      if ( messageLabel )
      {
        messageLabel = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)messageLabel,
                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
        if ( this->fields.mainTextList )
        {
          v23 = (UILabel_o *)messageLabel;
          messageLabel = (UIWidget_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this->fields.mainTextList,
                                         v13,
                                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( v23 )
          {
            UILabel__set_text(v23, (System_String_o *)messageLabel, 0);
            UILabel__set_fontSize(v23, leftAnchor, 0);
            v24 = this->fields.messageLabel;
            if ( v24 )
            {
              UIWidget__set_depth((UIWidget_o *)v23, v24->fields.mDepth, 0);
              messageLabel = (UIWidget_o *)this->fields.textPositionYList;
              if ( messageLabel )
              {
                Item = System_Collections_Generic_List_int___get_Item(
                         (System_Collections_Generic_List_int__o *)messageLabel,
                         v13,
                         (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
                v26 = v10 == Item;
                v27 = Item;
                messageLabel = (UIWidget_o *)this->fields.rubyLineList;
                v28 = v26 ? v15 : 0.0;
                if ( messageLabel )
                {
                  v12 &= v10 == v27;
                  if ( System_Collections_Generic_List_bool___get_Item(
                         (System_Collections_Generic_List_bool__o *)messageLabel,
                         v13,
                         (const MethodInfo_44114A0 *)Method_System_Collections_Generic_List_bool__get_Item__)
                    && (v12 & 1) == 0 )
                  {
                    v16 = v16 + v17;
                    v12 = 1;
                    this->fields.addSize.fields.y = v16;
                  }
                  messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v23, 0);
                  if ( this->fields.textPositionYList )
                  {
                    v29 = (UnityEngine_Transform_o *)messageLabel;
                    messageLabel = (UIWidget_o *)System_Collections_Generic_List_int___get_Item(
                                                   this->fields.textPositionYList,
                                                   v13,
                                                   (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
                    if ( v29 )
                    {
                      v43.fields.z = 0.0;
                      v43.fields.y = (float)-(v18 * (_DWORD)messageLabel) - v16;
                      v43.fields.x = v28 - v14;
                      UnityEngine_Transform__set_localPosition(v29, v43, 0);
                      messageLabel = (UIWidget_o *)this->fields.rubyFlagList;
                      if ( messageLabel )
                      {
                        if ( System_Collections_Generic_List_bool___get_Item(
                               (System_Collections_Generic_List_bool__o *)messageLabel,
                               v13,
                               (const MethodInfo_44114A0 *)Method_System_Collections_Generic_List_bool__get_Item__) )
                        {
                          messageLabel = (UIWidget_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)v23,
                                                         0);
                          if ( !messageLabel )
                            goto LABEL_36;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)messageLabel,
                                            0);
                          RubyLabelHelper__SetRubyObject(this, v11++, localPosition, leftAnchor, v23, v30);
                        }
                        messageLabel = (UIWidget_o *)this->fields.textPositionYList;
                        if ( messageLabel )
                        {
                          v10 = System_Collections_Generic_List_int___get_Item(
                                  (System_Collections_Generic_List_int__o *)messageLabel,
                                  v13,
                                  (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
                          LODWORD(v37) = *(_QWORD *)&UILabel__get_printedSize(v23, 0);
                          messageLabel = (UIWidget_o *)this->fields.mainList;
                          if ( messageLabel )
                          {
                            m_CachedPtr = messageLabel->fields.m_CachedPtr;
                            v39 = Method_System_Collections_Generic_List_UILabel__Add__;
                            ++HIDWORD(messageLabel->fields.m_CancellationTokenSource);
                            if ( m_CachedPtr )
                            {
                              v40 = v37;
                              m_CancellationTokenSource_low = SLODWORD(messageLabel->fields.m_CancellationTokenSource);
                              if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  (System_Collections_Generic_List_object__o *)messageLabel,
                                  (Il2CppObject *)v23,
                                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v42 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
                                LODWORD(messageLabel->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low
                                                                                        + 1;
                                *(_QWORD *)(v42 + 32) = v23;
                                sub_2213A04(
                                  (MissionNaviTransitionBoardItem_o *)(v42 + 32),
                                  (int32_t)v23,
                                  v31,
                                  v32,
                                  v33,
                                  v34,
                                  v35,
                                  v36);
                              }
                              v15 = v28 + v40;
                              mainTextList = this->fields.mainTextList;
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
    goto LABEL_36;
  }
}


void RubyLabelHelper__SetMainObjectSingleLine(
        RubyLabelHelper_o *this,
        UnityEngine_Vector2_o offset,
        float space,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s10
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v9; // x2
  struct System_Collections_Generic_List_string__o *mainTextList; // x8
  UnityEngine_Transform_o *v11; // x20
  int32_t v12; // w21
  float v13; // s14
  int32_t v14; // w22
  Il2CppObject *mainPrefab; // x23
  UILabel_o *v16; // x23
  struct UILabel_o *v17; // x8
  UnityEngine_Vector2_o printedSize; // kr00_8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Vector2_o pivotOffset; // kr08_8
  const MethodInfo *v26; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v28; // x9
  __int64 klass_low; // x10
  intptr_t v30; // x8
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_596A8F9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A8F9 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageLabel, 0),
        (mainTextList = this->fields.mainTextList) == 0) )
  {
LABEL_24:
    sub_2213CDC(messageLabel, method);
  }
  v11 = (UnityEngine_Transform_o *)messageLabel;
  v12 = 0;
  v13 = 0.0;
  v14 = 0;
  while ( v14 < mainTextList->fields._size )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v9);
    messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__59717116(
                                                mainPrefab,
                                                v11,
                                                (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    if ( messageLabel )
    {
      messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                                  (UnityEngine_GameObject_o *)messageLabel,
                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( this->fields.mainTextList )
      {
        v16 = (UILabel_o *)messageLabel;
        messageLabel = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)this->fields.mainTextList,
                                                    v14,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( v16 )
        {
          UILabel__set_text(v16, (System_String_o *)messageLabel, 0);
          v17 = this->fields.messageLabel;
          if ( v17 )
          {
            UIWidget__set_depth((UIWidget_o *)v16, v17->fields.mDepth, 0);
            printedSize = UILabel__get_printedSize(v16, 0);
            messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)v16,
                                                        0);
            if ( messageLabel )
            {
              v31.fields.z = 0.0;
              v31.fields.y = y;
              v31.fields.x = x + v13;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v31, 0);
              messageLabel = (UnityEngine_Component_o *)this->fields.rubyFlagList;
              if ( messageLabel )
              {
                if ( System_Collections_Generic_List_bool___get_Item(
                       (System_Collections_Generic_List_bool__o *)messageLabel,
                       v14,
                       (const MethodInfo_44114A0 *)Method_System_Collections_Generic_List_bool__get_Item__) )
                {
                  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
                  if ( !messageLabel )
                    goto LABEL_24;
                  pivotOffset = UIWidget__get_pivotOffset((UIWidget_o *)messageLabel, 0);
                  v32.fields.z = 0.0;
                  v32.fields.y = y + (float)(printedSize.fields.y * (float)(1.0 - pivotOffset.fields.y));
                  v32.fields.x = x + v13;
                  RubyLabelHelper__SetRubyObjectSingleLine(this, v11, v12++, v32, printedSize, space, v26);
                }
                messageLabel = (UnityEngine_Component_o *)this->fields.mainList;
                if ( messageLabel )
                {
                  m_CachedPtr = messageLabel->fields.m_CachedPtr;
                  v28 = Method_System_Collections_Generic_List_UILabel__Add__;
                  ++HIDWORD(messageLabel[1].klass);
                  if ( m_CachedPtr )
                  {
                    klass_low = SLODWORD(messageLabel[1].klass);
                    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        (System_Collections_Generic_List_object__o *)messageLabel,
                        (Il2CppObject *)v16,
                        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v30 = m_CachedPtr + 8 * klass_low;
                      LODWORD(messageLabel[1].klass) = klass_low + 1;
                      *(_QWORD *)(v30 + 32) = v16;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)(v30 + 32),
                        (int32_t)v16,
                        v19,
                        v20,
                        v21,
                        v22,
                        v23,
                        v24);
                    }
                    v13 = v13 + printedSize.fields.x;
                    mainTextList = this->fields.mainTextList;
                    ++v14;
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
    goto LABEL_24;
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
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Component_object; // x24
  UILabel_o *v17; // x21
  float v18; // s0
  int32_t v19; // w24
  Il2CppObject *Item; // x0
  struct System_String_o *mText; // x8
  int v22; // w29
  struct System_Collections_Generic_List_string__o *rubyTextList; // x25
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  int32_t v26; // w8
  int v27; // w23
  int32_t v28; // w8
  Il2CppObject *v29; // x0
  struct UILabel_o *v30; // x8
  float v31; // s10
  float v32; // s11
  float v33; // s12
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_object__o *rubyList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v42; // x10
  __int64 size; // x11
  Il2CppClass **v44; // x0
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  y = mainPosition.fields.y;
  x = mainPosition.fields.x;
  if ( (byte_596A8F5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Transform___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_26840/*"・"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A8F5 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_18;
  rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       messageLabel,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Transform___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__59717116(
                                              rubyPrefab,
                                              (UnityEngine_Transform_o *)Component_object,
                                              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  if ( !messageLabel )
    goto LABEL_18;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)messageLabel,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !mainLabel )
    goto LABEL_18;
  v17 = (UILabel_o *)messageLabel;
  v18 = UILabel__get_printedSize(mainLabel, 0).fields.x;
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
  if ( !messageLabel )
    goto LABEL_18;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)messageLabel,
           idx,
           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  messageLabel = (UnityEngine_Component_o *)System_String__op_Equality(
                                              (System_String_o *)Item,
                                              (System_String_o *)StringLiteral_1/*""*/,
                                              0);
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    mText = mainLabel->fields.mText;
    if ( mText )
    {
      v22 = -1;
      while ( ++v22 < mText->fields._stringLength )
      {
        rubyTextList = this->fields.rubyTextList;
        if ( rubyTextList )
        {
          v24 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)this->fields.rubyTextList,
                  idx,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
          v25 = (Il2CppObject *)System_String__Concat_75651716(
                                  (System_String_o *)v24,
                                  (System_String_o *)StringLiteral_26840/*"・"*/,
                                  0);
          System_Collections_Generic_List_object___set_Item(
            (System_Collections_Generic_List_object__o *)rubyTextList,
            idx,
            v25,
            (const MethodInfo_44839E8 *)Method_System_Collections_Generic_List_string__set_Item__);
          mText = mainLabel->fields.mText;
          if ( mText )
            continue;
        }
        goto LABEL_18;
      }
      if ( v17 )
      {
        UILabel__set_fontSize(v17, fontSize, 0);
        if ( fontSize >= 0 )
          v28 = fontSize;
        else
          v28 = fontSize + 1;
        v27 = (v28 >> 1) + 5;
        goto LABEL_29;
      }
    }
LABEL_18:
    sub_2213CDC(messageLabel, *(_QWORD *)&idx);
  }
  if ( !v17 )
    goto LABEL_18;
  if ( fontSize >= 0 )
    v26 = fontSize;
  else
    v26 = fontSize + 1;
  UILabel__set_fontSize(v17, v26 >> 1, 0);
  v27 = v17->fields.mFontSize + 1;
LABEL_29:
  messageLabel = (UnityEngine_Component_o *)this->fields.rubyTextList;
  if ( !messageLabel )
    goto LABEL_18;
  v29 = System_Collections_Generic_List_object___get_Item(
          (System_Collections_Generic_List_object__o *)messageLabel,
          idx,
          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  UILabel__set_text(v17, (System_String_o *)v29, 0);
  v30 = this->fields.messageLabel;
  if ( !v30 )
    goto LABEL_18;
  UIWidget__set_depth((UIWidget_o *)v17, v30->fields.mDepth, 0);
  LODWORD(v31) = *(_QWORD *)&UILabel__get_printedSize(mainLabel, 0);
  LODWORD(v32) = *(_QWORD *)&UILabel__get_printedSize(v17, 0);
  v33 = UILabel__get_printedSize(v17, 0).fields.x;
  if ( v33 <= UILabel__get_printedSize(mainLabel, 0).fields.x )
    x = x + (float)((float)(v31 - v32) * 0.5);
  else
    UILabel__SetCondensedScale(v17, v19, 0, 0);
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
  if ( !messageLabel )
    goto LABEL_18;
  v45.fields.z = 0.0;
  v45.fields.y = y + (float)v27;
  v45.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v45, 0);
  rubyList = (System_Collections_Generic_List_object__o *)this->fields.rubyList;
  if ( !rubyList )
    goto LABEL_18;
  items = rubyList->fields._items;
  v42 = Method_System_Collections_Generic_List_UILabel__Add__;
  ++rubyList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = rubyList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      rubyList,
      (Il2CppObject *)v17,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    rubyList->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v17;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v17, v34, v35, v36, v37, v38, v39);
  }
}


// local variable allocation has failed, the output may be wrong!
void RubyLabelHelper__SetRubyObjectSingleLine(
        RubyLabelHelper_o *this,
        UnityEngine_Transform_o *parent,
        int32_t idx,
        UnityEngine_Vector3_o mainPosition,
        UnityEngine_Vector2_o mainPrintedSize,
        float space,
        const MethodInfo *method)
{
  float x; // s11
  float y; // s10
  float v10; // s8
  Il2CppObject *rubyPrefab; // x22
  UnityEngine_GameObject_o *Component_object; // x0
  __int64 v16; // x1
  UILabel_o *v17; // x20
  struct UILabel_o *messageLabel; // x8
  float v19; // s0
  int mFontSize; // s14
  float v21; // s13
  float v22; // s12
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_List_object__o *rubyList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  Il2CppClass **v34; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  x = mainPrintedSize.fields.x;
  y = mainPosition.fields.y;
  v10 = mainPosition.fields.x;
  if ( (byte_596A8FA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&Method_System_Collections_Generic_List_UILabel__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A8FA = 1;
  }
  rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, *(_QWORD *)&idx);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59717116(
                                                   rubyPrefab,
                                                   parent,
                                                   (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !this->fields.rubyTextList )
    goto LABEL_21;
  v17 = (UILabel_o *)Component_object;
  Component_object = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this->fields.rubyTextList,
                                                   idx,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
  if ( !v17 )
    goto LABEL_21;
  UILabel__set_text(v17, (System_String_o *)Component_object, 0);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_21;
  UIWidget__set_depth((UIWidget_o *)v17, messageLabel->fields.mDepth, 0);
  LODWORD(v19) = *(_QWORD *)&UILabel__get_printedSize(v17, 0);
  mFontSize = v17->fields.mFontSize;
  v21 = v19;
  v22 = UIWidget__get_pivotOffset((UIWidget_o *)v17, 0).fields.y;
  if ( v21 <= x )
  {
    v10 = v10 + (float)((float)(x - v21) * 0.5);
  }
  else
  {
    v23 = x == INFINITY ? 0x80000000 : (int)x;
    UILabel__SetCondensedScale(v17, v23, 0, 0);
  }
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v17, 0);
  if ( !Component_object )
    goto LABEL_21;
  v35.fields.z = 0.0;
  v35.fields.y = (float)(y + (float)(v22 * (float)mFontSize)) + space;
  v35.fields.x = v10;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Component_object, v35, 0);
  rubyList = (System_Collections_Generic_List_object__o *)this->fields.rubyList;
  if ( !rubyList
    || (items = rubyList->fields._items,
        v32 = Method_System_Collections_Generic_List_UILabel__Add__,
        ++rubyList->fields._version,
        !items) )
  {
LABEL_21:
    sub_2213CDC(Component_object, v16);
  }
  size = rubyList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      rubyList,
      (Il2CppObject *)v17,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    rubyList->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v17;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v17, v24, v25, v26, v27, v28, v29);
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
      sub_2213CDC(0, v9);
    UnityEngine_Behaviour__set_enabled(messageLabel, 0, 0);
  }
}


void RubyLabelHelper__SetTextObjectList(RubyLabelHelper_o *this, System_String_o *message, const MethodInfo *method)
{
  RubyLabelHelper_o *v4; // x19
  Il2CppObject *v5; // x22
  int rubyPrefab; // w8
  char v7; // w20
  int32_t v8; // w21
  System_String_o *v9; // x25
  System_String_o *v10; // x23
  bool continueRuby; // w26
  int32_t v12; // w24
  bool v13; // w27
  uint16_t Chars; // w0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UILabel_o *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  UILabel_c **v24; // x8
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int v31; // w8
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct UILabel_o *messageLabel; // x8
  _QWORD *v44; // x9
  __int64 rubyPrefab_low; // x10
  UILabel_c **v46; // x8
  System_String_o *v47; // x0
  System_String_o *v48; // x0
  struct UILabel_o *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  UILabel_c **v52; // x8
  struct UILabel_o *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  struct UILabel_o *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  struct UILabel_o *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  struct UILabel_o *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  struct UILabel_o *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  struct UILabel_o *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct UILabel_o *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  UILabel_c **v80; // x8
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct UILabel_o *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  struct UILabel_o *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  struct UILabel_o *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  struct UILabel_o *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  UILabel_c **v99; // x8
  RubyLabelHelper_o *v100; // [xsp+0h] [xbp-70h]
  _WORD v101[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_596A8F3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_bool__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    this = (RubyLabelHelper_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A8F3 = 1;
  }
  v101[0] = 0;
  v4->fields.notRubyFlag = 1;
  v4->fields.continueRuby = 0;
  v5 = (Il2CppObject *)StringLiteral_1/*""*/;
  if ( !message || (this = (RubyLabelHelper_o *)System_String__Split(message, 0xAu, 0, 0)) == 0 )
LABEL_118:
    sub_2213CDC(this, message);
  rubyPrefab = (int)this->fields.rubyPrefab;
  if ( rubyPrefab >= 1 )
  {
    v7 = 0;
    v8 = 0;
    v9 = (System_String_o *)v5;
    v100 = this;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)rubyPrefab )
        sub_2213CE4(this);
      v10 = (System_String_o *)*((_QWORD *)&this->fields.mainPrefab + v8);
      if ( !v10 )
        goto LABEL_118;
      continueRuby = v4->fields.continueRuby;
      if ( v10->fields._stringLength >= 1 )
      {
        v12 = 0;
        v13 = v4->fields.continueRuby;
        while ( 1 )
        {
          Chars = System_String__get_Chars(v10, v12, 0);
          v101[0] = Chars;
          if ( Chars <= 0x5Au )
            break;
          if ( Chars == 91 )
          {
            if ( System_String__get_Chars(v10, v12 + 1, 0) != 35 )
            {
              if ( !*(_DWORD *)(qword_5984388 + 228) )
                j_il2cpp_runtime_class_init_0(qword_5984388, v34, v35);
              v48 = System_Char__ToString((uint16_t)v101, 0);
              v9 = System_String__Concat_75651716(v9, v48, 0);
              goto LABEL_85;
            }
            v36 = (System_String_o *)StringLiteral_1/*""*/;
            v4->fields.continueRuby = 1;
            if ( System_String__op_Inequality(v9, v36, 0) )
            {
              this = (RubyLabelHelper_o *)v4->fields.mainTextList;
              if ( !this )
                goto LABEL_118;
              messageLabel = this->fields.messageLabel;
              v44 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !messageLabel )
                goto LABEL_118;
              rubyPrefab_low = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)rubyPrefab_low >= LODWORD(messageLabel->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v9,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
              }
              else
              {
                v46 = &messageLabel->klass + rubyPrefab_low;
                LODWORD(this->fields.rubyPrefab) = rubyPrefab_low + 1;
                v46[4] = (UILabel_c *)v9;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v9, v37, v38, v39, v40, v41, v42);
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
              if ( !this )
                goto LABEL_118;
              v62 = this->fields.messageLabel;
              v63 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v62 )
                goto LABEL_118;
              v64 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v64 >= LODWORD(v62->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  continueRuby,
                  *(const MethodInfo_44117A4 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v64 + 1;
                *((_BYTE *)&v62->fields.leftAnchor + v64) = continueRuby;
              }
              this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
              if ( !this )
                goto LABEL_118;
              v65 = this->fields.messageLabel;
              v66 = Method_System_Collections_Generic_List_bool__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v65 )
                goto LABEL_118;
              v67 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v67 >= LODWORD(v65->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_bool___AddWithResize(
                  (System_Collections_Generic_List_bool__o *)this,
                  1,
                  *(const MethodInfo_44117A4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v67 + 1;
                *((_BYTE *)&v65->fields.leftAnchor + v67) = 1;
              }
              this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
              if ( !this )
                goto LABEL_118;
              v68 = this->fields.messageLabel;
              v69 = Method_System_Collections_Generic_List_int__Add__;
              ++HIDWORD(this->fields.rubyPrefab);
              if ( !v68 )
                goto LABEL_118;
              v70 = SLODWORD(this->fields.rubyPrefab);
              if ( (unsigned int)v70 >= LODWORD(v68->fields.m_CancellationTokenSource) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  (System_Collections_Generic_List_int__o *)this,
                  v8,
                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
              }
              else
              {
                LODWORD(this->fields.rubyPrefab) = v70 + 1;
                *((_DWORD *)&v68->fields.leftAnchor + v70) = v8;
              }
              v9 = (System_String_o *)StringLiteral_1/*""*/;
            }
            v4->fields.notRubyFlag = 0;
            continueRuby = 1;
LABEL_84:
            v13 = 1;
            goto LABEL_85;
          }
          if ( Chars != 93 )
            goto LABEL_23;
          if ( !v13 )
            goto LABEL_29;
          this = (RubyLabelHelper_o *)v4->fields.mainTextList;
          if ( !this )
            goto LABEL_118;
          v21 = this->fields.messageLabel;
          v22 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v21 )
            goto LABEL_118;
          v23 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v23 >= LODWORD(v21->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)v9,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &v21->klass + v23;
            LODWORD(this->fields.rubyPrefab) = v23 + 1;
            v24[4] = (UILabel_c *)v9;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v9, v15, v16, v17, v18, v19, v20);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
          if ( !this )
            goto LABEL_118;
          v49 = this->fields.messageLabel;
          v50 = Method_System_Collections_Generic_List_string__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v49 )
            goto LABEL_118;
          v51 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v51 >= LODWORD(v49->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v5,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->klass + v51;
            LODWORD(this->fields.rubyPrefab) = v51 + 1;
            v52[4] = (UILabel_c *)v5;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v5, v25, v26, v27, v28, v29, v30);
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
          if ( !this )
            goto LABEL_118;
          v53 = this->fields.messageLabel;
          v54 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v53 )
            goto LABEL_118;
          v55 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v55 >= LODWORD(v53->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              continueRuby,
              *(const MethodInfo_44117A4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v55 + 1;
            *((_BYTE *)&v53->fields.leftAnchor + v55) = continueRuby;
          }
          this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
          if ( !this )
            goto LABEL_118;
          v56 = this->fields.messageLabel;
          v57 = Method_System_Collections_Generic_List_bool__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v56 )
            goto LABEL_118;
          v58 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v58 >= LODWORD(v56->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_bool___AddWithResize(
              (System_Collections_Generic_List_bool__o *)this,
              1,
              *(const MethodInfo_44117A4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v58 + 1;
            *((_BYTE *)&v56->fields.leftAnchor + v58) = 1;
          }
          this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
          if ( !this )
            goto LABEL_118;
          v59 = this->fields.messageLabel;
          v60 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(this->fields.rubyPrefab);
          if ( !v59 )
            goto LABEL_118;
          v61 = SLODWORD(this->fields.rubyPrefab);
          if ( (unsigned int)v61 >= LODWORD(v59->fields.m_CancellationTokenSource) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)this,
              v8,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(this->fields.rubyPrefab) = v61 + 1;
            *((_DWORD *)&v59->fields.leftAnchor + v61) = v8;
          }
          continueRuby = 0;
          v13 = 0;
          v7 = 0;
          v4->fields.continueRuby = 0;
          v5 = (Il2CppObject *)StringLiteral_1/*""*/;
          v9 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_85:
          if ( ++v12 >= v10->fields._stringLength )
            goto LABEL_88;
        }
        if ( Chars == 35 )
        {
          if ( !v13 )
          {
LABEL_29:
            if ( !*(_DWORD *)(qword_5984388 + 228) )
              j_il2cpp_runtime_class_init_0(qword_5984388, message, v15);
            v33 = System_Char__ToString((uint16_t)v101, 0);
            v9 = System_String__Concat_75651716(v9, v33, 0);
            v13 = 0;
            goto LABEL_85;
          }
          goto LABEL_84;
        }
        if ( Chars == 58 )
        {
          if ( !v13 )
            goto LABEL_29;
          v13 = 1;
        }
        else
        {
LABEL_23:
          v31 = *(_DWORD *)(qword_5984388 + 228);
          if ( (v7 & 1) == 0 )
          {
            if ( !v31 )
              j_il2cpp_runtime_class_init_0(qword_5984388, message, v15);
            v47 = System_Char__ToString((uint16_t)v101, 0);
            v9 = System_String__Concat_75651716(v9, v47, 0);
            v7 = 0;
            goto LABEL_85;
          }
          if ( !v31 )
            j_il2cpp_runtime_class_init_0(qword_5984388, message, v15);
          v32 = System_Char__ToString((uint16_t)v101, 0);
          v5 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)v5, v32, 0);
        }
        v7 = 1;
        goto LABEL_85;
      }
      v13 = v4->fields.continueRuby;
LABEL_88:
      if ( System_String__op_Inequality(v9, (System_String_o *)StringLiteral_1/*""*/, 0) )
        break;
LABEL_116:
      this = v100;
      ++v8;
      rubyPrefab = (int)v100->fields.rubyPrefab;
      if ( v8 >= rubyPrefab )
        return;
    }
    this = (RubyLabelHelper_o *)v4->fields.mainTextList;
    if ( !this )
      goto LABEL_118;
    v77 = this->fields.messageLabel;
    v78 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v77 )
      goto LABEL_118;
    v79 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v79 >= LODWORD(v77->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)v9,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
    }
    else
    {
      v80 = &v77->klass + v79;
      LODWORD(this->fields.rubyPrefab) = v79 + 1;
      v80[4] = (UILabel_c *)v9;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v80 + 4), (int32_t)v9, v71, v72, v73, v74, v75, v76);
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyFlagList;
    if ( !this )
      goto LABEL_118;
    v87 = this->fields.messageLabel;
    v88 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v87 )
      goto LABEL_118;
    v89 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v89 >= LODWORD(v87->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        continueRuby,
        *(const MethodInfo_44117A4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v89 + 1;
      *((_BYTE *)&v87->fields.leftAnchor + v89) = continueRuby;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyLineList;
    if ( !this )
      goto LABEL_118;
    v90 = this->fields.messageLabel;
    v91 = Method_System_Collections_Generic_List_bool__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v90 )
      goto LABEL_118;
    v92 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v92 >= LODWORD(v90->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_bool___AddWithResize(
        (System_Collections_Generic_List_bool__o *)this,
        v13,
        *(const MethodInfo_44117A4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v92 + 1;
      *((_BYTE *)&v90->fields.leftAnchor + v92) = v13;
    }
    this = (RubyLabelHelper_o *)v4->fields.textPositionYList;
    if ( !this )
      goto LABEL_118;
    v93 = this->fields.messageLabel;
    v94 = Method_System_Collections_Generic_List_int__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v93 )
      goto LABEL_118;
    v95 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v95 >= LODWORD(v93->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)this,
        v8,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      if ( !v13 )
      {
LABEL_115:
        v9 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_116;
      }
    }
    else
    {
      LODWORD(this->fields.rubyPrefab) = v95 + 1;
      *((_DWORD *)&v93->fields.leftAnchor + v95) = v8;
      if ( !v13 )
        goto LABEL_115;
    }
    this = (RubyLabelHelper_o *)v4->fields.rubyTextList;
    if ( !this )
      goto LABEL_118;
    v96 = this->fields.messageLabel;
    v97 = Method_System_Collections_Generic_List_string__Add__;
    ++HIDWORD(this->fields.rubyPrefab);
    if ( !v96 )
      goto LABEL_118;
    v98 = SLODWORD(this->fields.rubyPrefab);
    if ( (unsigned int)v98 >= LODWORD(v96->fields.m_CancellationTokenSource) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        v5,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &v96->klass + v98;
      LODWORD(this->fields.rubyPrefab) = v98 + 1;
      v99[4] = (UILabel_c *)v5;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v99 + 4), (int32_t)v5, v81, v82, v83, v84, v85, v86);
    }
    goto LABEL_115;
  }
}


void RubyLabelHelper__SetTextSingleLine(
        RubyLabelHelper_o *this,
        System_String_o *text,
        UnityEngine_Vector2_o offset,
        float space,
        const MethodInfo *method)
{
  float y; // s9
  float x; // s10
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  void *messageLabel; // x0
  UILabel_o *v13; // x20
  float v14; // s0
  float v15; // s11
  float v16; // s0
  const MethodInfo *v17; // x1
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4

  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_596A8F8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A8F8 = 1;
  }
  RubyLabelHelper__ReleasePrefabs(this, (const MethodInfo *)text);
  RubyLabelHelper__SetTextObjectList(this, text, v10);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageLabel, 1, 0);
  if ( this->fields.notRubyFlag )
  {
    messageLabel = this->fields.messageLabel;
    if ( messageLabel )
    {
      UILabel__set_text((UILabel_o *)messageLabel, text, 0);
      return;
    }
LABEL_15:
    sub_2213CDC(messageLabel, v11);
  }
  messageLabel = this->fields.mainPrefab;
  if ( !messageLabel )
    goto LABEL_15;
  messageLabel = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)messageLabel,
                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !messageLabel )
    goto LABEL_15;
  if ( !this->fields.messageLabel )
    goto LABEL_15;
  UILabel__set_fontSize(this->fields.messageLabel, *((_DWORD *)messageLabel + 106), 0);
  v13 = this->fields.messageLabel;
  messageLabel = System_String__Join_75699092(
                   (System_String_o *)StringLiteral_1/*""*/,
                   (System_Collections_Generic_IEnumerable_string__o *)this->fields.mainTextList,
                   0);
  if ( !v13 )
    goto LABEL_15;
  UILabel__set_text(v13, (System_String_o *)messageLabel, 0);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  LODWORD(v14) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)messageLabel, 0);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  v15 = v14;
  v16 = UIWidget__get_pivotOffset((UIWidget_o *)messageLabel, 0).fields.x;
  v18.fields.y = y;
  v18.fields.x = x - (float)(v15 * v16);
  RubyLabelHelper__SetMainObjectSingleLine(this, v18, space, v17);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)messageLabel, 0, 0);
}


System_String_o *RubyLabelHelper__TextFormalAdjust(
        RubyLabelHelper_o *this,
        System_Collections_Generic_IReadOnlyList_char__o *localMainTextList,
        const MethodInfo *method)
{
  RubyLabelHelper_o *v4; // x20
  int32_t v5; // w21
  unsigned int v6; // w23
  System_String_o *v7; // x22
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
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
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
  struct System_String_o *v40; // x9
  System_Collections_Generic_IReadOnlyList_char__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x8
  unsigned __int16 v49; // w26
  __int64 v50; // x1
  __int64 v51; // x2
  System_String_o *v52; // x0
  struct UILabel_o *v53; // x8
  struct System_String_o *v54; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  struct UILabel_o *v59; // x8
  __int64 v60; // x1
  __int64 v61; // x2
  System_String_o *v62; // x0
  struct UILabel_o *v63; // x8
  struct System_String_o *v64; // x8
  System_Collections_Generic_IReadOnlyList_char__c *v65; // x8
  __int64 v66; // x9
  int32_t *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  System_String_o *v71; // x0
  _WORD v73[2]; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_596A8F7 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_IReadOnlyCollection_char__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IReadOnlyList_char__TypeInfo);
    this = (RubyLabelHelper_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A8F7 = 1;
  }
  v73[0] = 0;
  if ( !localMainTextList )
LABEL_108:
    sub_2213CDC(this, localMainTextList);
  v5 = 0;
  v6 = 0;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  while ( 1 )
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
      v11 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0);
    }
    if ( (int)v6 >= (*(int (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v11)(
                      localMainTextList,
                      *(_QWORD *)(v11 + 8)) )
      return v7;
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
      v15 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
    }
    this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v15)(
                                  localMainTextList,
                                  v6,
                                  *(_QWORD *)(v15 + 8));
    messageLabel = v4->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_108;
    v17 = (unsigned __int16)this;
    this = (RubyLabelHelper_o *)messageLabel->fields.mText;
    if ( !this )
      goto LABEL_108;
    Chars = System_String__get_Chars((System_String_o *)this, v5, 0);
    v19 = localMainTextList->klass;
    v20 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
    if ( v17 == Chars )
    {
      if ( *(_WORD *)&localMainTextList->klass->_2.rank )
      {
        v21 = &v19->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v21 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_25;
        }
        v22 = (__int64)&v19->vtable[*v21];
      }
      else
      {
LABEL_25:
        v22 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
      }
      v73[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v22)(
                 localMainTextList,
                 v6,
                 *(_QWORD *)(v22 + 8));
      if ( !*(_DWORD *)(qword_5984388 + 228) )
        j_il2cpp_runtime_class_init_0(qword_5984388, v25, v26);
      v27 = System_Char__ToString((uint16_t)v73, 0);
      this = (RubyLabelHelper_o *)System_String__Concat_75651716(v7, v27, 0);
      v28 = v4->fields.messageLabel;
      if ( !v28 )
        goto LABEL_108;
      mText = v28->fields.mText;
      if ( !mText )
        goto LABEL_108;
      v7 = (System_String_o *)this;
      if ( v5 < mText->fields._stringLength - 1 )
        ++v5;
    }
    else
    {
      if ( *(_WORD *)&localMainTextList->klass->_2.rank )
      {
        v23 = &v19->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v23 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v20;
          v23 += 4;
          if ( !v20 )
            goto LABEL_30;
        }
        v24 = (__int64)&v19->vtable[*v23];
      }
      else
      {
LABEL_30:
        v24 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v24)(
                                    localMainTextList,
                                    v6,
                                    *(_QWORD *)(v24 + 8));
      if ( (unsigned __int16)this != 10 )
      {
        v34 = localMainTextList->klass;
        v35 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
        if ( *(_WORD *)&localMainTextList->klass->_2.rank )
        {
          v36 = &v34->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v36 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_53;
          }
          v37 = (__int64)&v34->vtable[*v36];
        }
        else
        {
LABEL_53:
          v37 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
        }
        v73[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v37)(
                   localMainTextList,
                   v6,
                   *(_QWORD *)(v37 + 8));
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v45, v46);
        v47 = System_Char__ToString((uint16_t)v73, 0);
        v7 = System_String__Concat_75651716(v7, v47, 0);
        goto LABEL_81;
      }
      v28 = v4->fields.messageLabel;
      if ( !v28 )
        goto LABEL_108;
    }
    this = (RubyLabelHelper_o *)v28->fields.mText;
    if ( !this )
      goto LABEL_108;
    if ( System_String__get_Chars((System_String_o *)this, v5, 0) == 10 )
    {
      v30 = localMainTextList->klass;
      v31 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
      if ( *(_WORD *)&localMainTextList->klass->_2.rank )
      {
        v32 = &v30->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyCollection_char__c **)v32 - 1) != System_Collections_Generic_IReadOnlyCollection_char__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_48;
        }
        v33 = (__int64)&v30->vtable[*v32];
      }
      else
      {
LABEL_48:
        v33 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyCollection_char__TypeInfo, 0);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD))v33)(
                                    localMainTextList,
                                    *(_QWORD *)(v33 + 8));
      v38 = v6 + 1;
      v39 = v4->fields.messageLabel;
      if ( (int)(v6 + 1) >= (int)this )
        goto LABEL_73;
      if ( !v39 )
        goto LABEL_108;
      v40 = v39->fields.mText;
      if ( !v40 )
        goto LABEL_108;
      if ( v40->fields._stringLength <= v5 + 1 )
        goto LABEL_74;
      v41 = localMainTextList->klass;
      v42 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
      if ( *(_WORD *)&localMainTextList->klass->_2.rank )
      {
        v43 = &v41->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v43 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_63;
        }
        v44 = (__int64)&v41->vtable[*v43];
      }
      else
      {
LABEL_63:
        v44 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v44)(
                                    localMainTextList,
                                    v38,
                                    *(_QWORD *)(v44 + 8));
      v48 = v4->fields.messageLabel;
      if ( !v48 )
        goto LABEL_108;
      v49 = (unsigned __int16)this;
      this = (RubyLabelHelper_o *)v48->fields.mText;
      if ( !this )
        goto LABEL_108;
      this = (RubyLabelHelper_o *)System_String__get_Chars((System_String_o *)this, v5 + 1, 0);
      if ( v49 == (unsigned __int16)this )
      {
        v39 = v4->fields.messageLabel;
LABEL_73:
        if ( !v39 )
          goto LABEL_108;
LABEL_74:
        this = (RubyLabelHelper_o *)v39->fields.mText;
        if ( !this )
          goto LABEL_108;
        v73[0] = System_String__get_Chars((System_String_o *)this, v5, 0);
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v50, v51);
        v52 = System_Char__ToString((uint16_t)v73, 0);
        this = (RubyLabelHelper_o *)System_String__Concat_75651716(v7, v52, 0);
        v53 = v4->fields.messageLabel;
        if ( !v53 )
          goto LABEL_108;
        v54 = v53->fields.mText;
        if ( !v54 )
          goto LABEL_108;
        v7 = (System_String_o *)this;
        if ( v5 < v54->fields._stringLength - 1 )
          ++v5;
        goto LABEL_81;
      }
      v55 = localMainTextList->klass;
      v56 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
      if ( *(_WORD *)&localMainTextList->klass->_2.rank )
      {
        v57 = &v55->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v57 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
        {
          --v56;
          v57 += 4;
          if ( !v56 )
            goto LABEL_86;
        }
        v58 = (__int64)&v55->vtable[*v57];
      }
      else
      {
LABEL_86:
        v58 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
      }
      this = (RubyLabelHelper_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v58)(
                                    localMainTextList,
                                    v38,
                                    *(_QWORD *)(v58 + 8));
      if ( (unsigned __int16)this == 10 )
      {
        v59 = v4->fields.messageLabel;
        if ( !v59 )
          goto LABEL_108;
        this = (RubyLabelHelper_o *)v59->fields.mText;
        if ( !this )
          goto LABEL_108;
        v73[0] = System_String__get_Chars((System_String_o *)this, v5, 0);
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v60, v61);
        v62 = System_Char__ToString((uint16_t)v73, 0);
        this = (RubyLabelHelper_o *)System_String__Concat_75651716(v7, v62, 0);
        v63 = v4->fields.messageLabel;
        if ( !v63 )
          goto LABEL_108;
        v64 = v63->fields.mText;
        if ( !v64 )
          goto LABEL_108;
        v7 = (System_String_o *)this;
        if ( v5 < v64->fields._stringLength - 1 )
          ++v5;
      }
      else
      {
        v65 = localMainTextList->klass;
        v66 = *(unsigned __int16 *)&localMainTextList->klass->_2.rank;
        if ( *(_WORD *)&localMainTextList->klass->_2.rank )
        {
          v67 = &v65->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyList_char__c **)v67 - 1) != System_Collections_Generic_IReadOnlyList_char__TypeInfo )
          {
            --v66;
            v67 += 4;
            if ( !v66 )
              goto LABEL_102;
          }
          v68 = (__int64)&v65->vtable[*v67];
        }
        else
        {
LABEL_102:
          v68 = sub_224BC3C(localMainTextList, System_Collections_Generic_IReadOnlyList_char__TypeInfo, 0);
        }
        v73[0] = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyList_char__o *, _QWORD, _QWORD))v68)(
                   localMainTextList,
                   v38,
                   *(_QWORD *)(v68 + 8));
        if ( !*(_DWORD *)(qword_5984388 + 228) )
          j_il2cpp_runtime_class_init_0(qword_5984388, v69, v70);
        v71 = System_Char__ToString((uint16_t)v73, 0);
        v7 = System_String__Concat_75651716(v7, v71, 0);
        ++v6;
      }
    }
LABEL_81:
    ++v6;
  }
}


UnityEngine_Vector2_o RubyLabelHelper__get_Size(RubyLabelHelper_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    sub_2213CDC(0, method);
  printedSize = UILabel__get_printedSize(messageLabel, 0);
  result.fields.x = printedSize.fields.x + this->fields.addSize.fields.x;
  result.fields.y = printedSize.fields.y + this->fields.addSize.fields.y;
  return result;
}