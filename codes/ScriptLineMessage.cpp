void ScriptLineMessage___ctor(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C44F31 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    sub_1C37058(&StringLiteral_21517/*"medium"*/);
    sub_1C37058(&StringLiteral_23552/*"small"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_21169/*"large"*/);
    sub_1C37058(&StringLiteral_24901/*"x-large"*/);
    byte_4C44F31 = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  if ( !v3 )
    sub_1C372B4(v4);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_861/*"-"*/,
    30,
    (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_23552/*"small"*/,
    24,
    (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_21517/*"medium"*/,
    30,
    (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_21169/*"large"*/,
    48,
    (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  System_Collections_Generic_Dictionary_object__int___Add(
    v3,
    (Il2CppObject *)StringLiteral_24901/*"x-large"*/,
    64,
    (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
  this->fields.fontSizes = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fontSizes, (int32_t)v3, v5, v6);
  v7 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ScriptMessageLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ScriptMessageLabel___ctor__);
  this->fields.dispLabelList = (struct System_Collections_Generic_List_ScriptMessageLabel__o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dispLabelList, (int32_t)v10, v11, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptLineMessage__AddLabel(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  __int64 Label; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x19
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  UILabel_o *MainLabel; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  UILabel_o *RubyLabel; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x23
  __int64 v25; // x23
  int v26; // w8
  int32_t fontSize; // w4
  System_String_o *v28; // x7
  UnityEngine_Vector2_o *p_dispPosition; // x3
  const MethodInfo *v30; // x1
  UISprite_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *v34; // x23
  int v35; // w8
  __int64 v36; // x24
  System_String_o *v37; // x23
  float v38; // s0
  int v39; // w8
  float v40; // s8
  UISprite_o *ImageSprite; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_String_o *v44; // x0
  int32_t v45; // w22
  int32_t v46; // w0
  UILabel_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  UnityEngine_Object_o *messageOffset; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  UnityEngine_Transform_o *v53; // x21
  int32_t condensedSize; // w22
  UnityEngine_Transform_o *v55; // x21
  float v56; // s0
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  const MethodInfo *v61; // x1
  int v62; // w8
  __int64 v63; // x23
  UILabel_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_String_o *v67; // x21
  __int64 v68; // x21
  int v69; // w24
  int32_t v70; // w0
  UnityEngine_Vector2_o v71; // 0:s1.4,4:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C44F2A & 1) == 0 )
  {
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptMessageLabel__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_21241/*"line"*/);
    byte_4C44F2A = 1;
  }
  Label = (__int64)ScriptLineMessage__FetchLabel(this, (const MethodInfo *)text);
  if ( !Label )
    goto LABEL_64;
  v13 = Label;
  *(_QWORD *)(Label + 112) = colorTag;
  v14 = Label + 112;
  *(_DWORD *)(v14 + 52) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)v14, (int32_t)colorTag, v11, v12);
  if ( !text )
    goto LABEL_64;
  if ( System_String__get_Chars(text, 0, 0) != 91 )
    goto LABEL_26;
  if ( System_String__get_Chars(text, 1, 0) == 35 )
  {
    MainLabel = ScriptLineMessage__FetchMainLabel(this, v16);
    *(_QWORD *)(v13 + 16) = MainLabel;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)MainLabel, v18, v19);
    RubyLabel = ScriptLineMessage__FetchRubyLabel(this, v20);
    *(_QWORD *)(v13 + 24) = RubyLabel;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)RubyLabel, v22, v23);
    v24 = System_String__Substring_63607580(text, 2, text->fields._stringLength - 3, 0);
    Label = sub_1C37100(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_64;
    if ( *(_DWORD *)(Label + 24) )
    {
      *(_WORD *)(Label + 32) = 58;
      if ( !v24 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_63610732(v24, (System_Char_array *)Label, 0);
      if ( !Label )
        goto LABEL_64;
      v25 = Label;
      if ( *(_DWORD *)(Label + 24) )
      {
        Label = ((__int64 (__fastcall *)(ScriptLineMessage_o *, _QWORD, const MethodInfo *))this->klass->vtable._6_PreProcSetRubyLabel.methodPtr)(
                  this,
                  *(_QWORD *)(Label + 32),
                  this->klass->vtable._6_PreProcSetRubyLabel.method);
        v26 = *(_DWORD *)(v25 + 24);
        if ( v26 )
        {
          fontSize = this->fields.fontSize;
          v28 = *(System_String_o **)(v25 + 32);
          p_dispPosition = &this->fields.dispPosition;
          if ( v26 <= 1 )
            ScriptMessageLabel__UpdateBouten(
              (ScriptMessageLabel_o *)v13,
              (UILabel_o **)(v13 + 16),
              (UILabel_o **)(v13 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v28,
              font,
              0);
          else
            ScriptMessageLabel__UpdateRuby(
              (ScriptMessageLabel_o *)v13,
              (UILabel_o **)(v13 + 16),
              (UILabel_o **)(v13 + 24),
              p_dispPosition,
              fontSize,
              fontSize,
              0,
              v28,
              *(System_String_o **)(v25 + 40),
              font,
              this->fields.isTalkName,
              0);
          goto LABEL_27;
        }
      }
    }
LABEL_65:
    sub_1C372BC(Label);
  }
  if ( System_String__get_Chars(text, 1, 0) != 94 )
  {
    if ( System_String__get_Chars(text, 1, 0) == 126 )
    {
      ImageSprite = ScriptLineMessage__FetchImageSprite(this, v15);
      *(_QWORD *)(v13 + 32) = ImageSprite;
      sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)ImageSprite, v42, v43);
      v44 = System_String__Substring_63607580(text, 2, text->fields._stringLength - 3, 0);
      v45 = this->fields.fontSize;
      v46 = System_Int32__Parse(v44, 0);
      ScriptMessageLabel__UpdateLine(
        (ScriptMessageLabel_o *)v13,
        (UISprite_o **)(v13 + 32),
        &this->fields.dispPosition,
        v45,
        v46,
        (System_String_o *)StringLiteral_21241/*"line"*/,
        0);
      goto LABEL_27;
    }
LABEL_26:
    v47 = ScriptLineMessage__FetchMainLabel(this, v15);
    *(_QWORD *)(v13 + 16) = v47;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v47, v48, v49);
    ScriptMessageLabel__UpdateLabel(
      (ScriptMessageLabel_o *)v13,
      (UILabel_o **)(v13 + 16),
      &this->fields.dispPosition,
      this->fields.fontSize,
      this->fields.fontSize,
      0,
      text,
      font,
      0);
    goto LABEL_27;
  }
  v31 = ScriptLineMessage__FetchImageSprite(this, v30);
  *(_QWORD *)(v13 + 32) = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v31, v32, v33);
  v34 = System_String__Substring_63607580(text, 2, text->fields._stringLength - 3, 0);
  Label = sub_1C37100(char___TypeInfo, 1);
  if ( !Label )
    goto LABEL_64;
  if ( !*(_DWORD *)(Label + 24) )
    goto LABEL_65;
  *(_WORD *)(Label + 32) = 32;
  if ( !v34 )
    goto LABEL_64;
  Label = (__int64)System_String__Split_63610732(v34, (System_Char_array *)Label, 0);
  if ( !Label )
    goto LABEL_64;
  v35 = *(_DWORD *)(Label + 24);
  v36 = Label;
  if ( !v35 )
    goto LABEL_65;
  v37 = *(System_String_o **)(Label + 32);
  if ( v35 <= 1 )
  {
    Label = sub_1C37100(char___TypeInfo, 1);
    if ( !Label )
      goto LABEL_64;
    if ( !*(_DWORD *)(Label + 24) )
      goto LABEL_65;
    *(_WORD *)(Label + 32) = 58;
    if ( !v37 )
      goto LABEL_64;
    Label = (__int64)System_String__Split_63610732(v37, (System_Char_array *)Label, 0);
    if ( !Label )
      goto LABEL_64;
    v62 = *(_DWORD *)(Label + 24);
    v63 = Label;
    if ( v62 <= 1 )
    {
      if ( !v62 )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImage(
        (ScriptMessageLabel_o *)v13,
        (UISprite_o **)(v13 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(Label + 32),
        0,
        0);
    }
    else
    {
      v64 = ScriptLineMessage__FetchRubyLabel(this, v61);
      *(_QWORD *)(v13 + 24) = v64;
      sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)v64, v65, v66);
      if ( *(_DWORD *)(v63 + 24) < 2u )
        goto LABEL_65;
      ScriptMessageLabel__UpdateImageRuby(
        (ScriptMessageLabel_o *)v13,
        (UISprite_o **)(v13 + 32),
        (UILabel_o **)(v13 + 24),
        &this->fields.dispPosition,
        this->fields.fontSize,
        *(System_String_o **)(v63 + 32),
        *(System_String_o **)(v63 + 40),
        font,
        0,
        0);
    }
  }
  else
  {
    v38 = System_Single__Parse(*(System_String_o **)(Label + 40), 0);
    v39 = *(_DWORD *)(v36 + 24);
    v40 = v38;
    if ( v39 == 2 )
    {
      ScriptMessageLabel__UpdateImage_44867988(
        (ScriptMessageLabel_o *)v13,
        (UISprite_o **)(v13 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v38,
        v37,
        0,
        0);
    }
    else if ( v39 <= 3 )
    {
      if ( (unsigned int)v39 <= 2 )
        goto LABEL_65;
      v67 = *(System_String_o **)(v36 + 48);
      Label = sub_1C37100(char___TypeInfo, 1);
      if ( !Label )
        goto LABEL_64;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      *(_WORD *)(Label + 32) = 44;
      if ( !v67 )
        goto LABEL_64;
      Label = (__int64)System_String__Split_63610732(v67, (System_Char_array *)Label, 0);
      if ( !Label )
        goto LABEL_64;
      v68 = Label;
      if ( !*(_DWORD *)(Label + 24) )
        goto LABEL_65;
      Label = System_Int32__Parse(*(System_String_o **)(Label + 32), 0);
      if ( *(_DWORD *)(v68 + 24) <= 1u )
        goto LABEL_65;
      v69 = Label;
      v70 = System_Int32__Parse(*(System_String_o **)(v68 + 40), 0);
      v71.fields.x = (float)v69;
      v71.fields.y = (float)v70;
      ScriptMessageLabel__UpdateImage_44868140(
        (ScriptMessageLabel_o *)v13,
        (UISprite_o **)(v13 + 32),
        &this->fields.dispPosition,
        this->fields.fontSize,
        v40,
        v37,
        v71,
        0,
        0);
    }
  }
LABEL_27:
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0, 0) )
  {
    Label = (__int64)this->fields.messageOffset;
    if ( !Label )
      goto LABEL_64;
    v72.fields.z = 0.0;
    v72.fields.x = (float)(this->fields.startPosition.fields.x - this->fields.dispPosition.fields.x) * 0.5;
    v72.fields.y = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Label, v72, 0);
    Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    v53 = (UnityEngine_Transform_o *)Label;
    if ( !byte_4C3C926 )
    {
      Label = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v53 )
      goto LABEL_64;
    UnityEngine_Transform__set_localScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    if ( this->fields.isCondensedScale )
    {
      Label = (__int64)this->fields.messageOffset;
      if ( !Label )
        goto LABEL_64;
      if ( fabsf(COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Label, 0))) >= (float)this->fields.condensedSize )
      {
        Label = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( this->fields.messageOffset )
        {
          condensedSize = this->fields.condensedSize;
          v55 = (UnityEngine_Transform_o *)Label;
          LODWORD(v56) = (unsigned int)UnityEngine_Transform__get_localPosition(this->fields.messageOffset, 0);
          if ( v55 )
          {
            v73.fields.x = (float)condensedSize / fabsf(v56);
            v73.fields.y = 1.0;
            v73.fields.z = 1.0;
            UnityEngine_Transform__set_localScale(v55, v73, 0);
            goto LABEL_40;
          }
        }
LABEL_64:
        sub_1C372B4(Label);
      }
    }
  }
LABEL_40:
  Label = (__int64)this->fields.dispLabelList;
  if ( !Label )
    goto LABEL_64;
  v57 = *(_QWORD *)(Label + 16);
  v58 = Method_System_Collections_Generic_List_ScriptMessageLabel__Add__;
  ++*(_DWORD *)(Label + 28);
  if ( !v57 )
    goto LABEL_64;
  v59 = *(int *)(Label + 24);
  if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Label,
      (Il2CppObject *)v13,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = v57 + 8 * v59;
    *(_DWORD *)(Label + 24) = v59 + 1;
    *(_QWORD *)(v60 + 32) = v13;
    sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 32), v13, v51, v52);
  }
}


void ScriptLineMessage__AfterParseEachChar(
        ScriptLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        ScriptLineMessage_ProcAddLabel_o *addLabel,
        const MethodInfo *method)
{
  ;
}


void ScriptLineMessage__ChangeMainPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mainPrefab = prefab;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mainPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void ScriptLineMessage__ChangeMessageRoot(
        ScriptLineMessage_o *this,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.messageRoot = root;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.messageRoot, (int32_t)root, (int32_t)method, v3);
}


void ScriptLineMessage__ChangeRubyPrefab(
        ScriptLineMessage_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.rubyPrefab = prefab;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rubyPrefab, (int32_t)prefab, (int32_t)method, v3);
}


void ScriptLineMessage__ClearLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0
  const MethodInfo *v4; // x2
  struct System_Collections_Generic_List_ScriptMessageLabel__o *v5; // x8
  int32_t size; // w2
  int v7; // w9
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C44F24 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptMessageLabel__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
    byte_4C44F24 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  ScriptLineMessage__Init(this, method);
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    goto LABEL_11;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    dispLabelList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ScriptMessageLabel__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__MoveNext__) )
    ScriptLineMessage__ReleaseLabel(this, (ScriptMessageLabel_o *)v8.fields._current, v4);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ScriptMessageLabel__Dispose__);
  v5 = this->fields.dispLabelList;
  if ( !v5 )
LABEL_11:
    sub_1C372B4(dispLabelList);
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
}


void ScriptLineMessage__ClearText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o startPosition; // x8
  float v4; // s0
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x20

  if ( (byte_4C44F2F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44F2F = 1;
  }
  ScriptLineMessage__ClearLabels(this, method);
  startPosition = this->fields.startPosition;
  v4 = startPosition.fields.y - this->fields.textOnlyLineHeight;
  this->fields.dispPosition = startPosition;
  this->fields.maxDispPosition.fields.x = startPosition.fields.x;
  this->fields.maxDispPosition.fields.y = v4;
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(messageOffset, 0, 0);
  if ( (v6 & 1) != 0 )
  {
    v8 = this->fields.messageOffset;
    if ( !byte_4C3C921 )
    {
      v6 = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v8 )
      sub_1C372B4(v6);
    UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  ScriptLineMessage__SetDefaultState(this, v7);
}


void ScriptLineMessage__DeleteLabels(ScriptLineMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4C44F22 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4C44F22 = 1;
  }
  ScriptLineMessage__Init(this, method);
  ScriptLineMessage__ClearLabels(this, v3);
  if ( this->fields.isRecycle )
  {
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
      if ( labelStock )
      {
        ScriptMessageLabel__Destroy((ScriptMessageLabel_o *)labelStock, 0);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
    if ( !labelStock )
      goto LABEL_28;
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( labelStock )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)labelStock,
                                               0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(gameObject, 0);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
      if ( !labelStock )
        goto LABEL_28;
      if ( labelStock->fields._size <= 0 )
        break;
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
      if ( !labelStock )
        goto LABEL_28;
      v6 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v6, 0);
    }
    labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
    if ( !labelStock )
LABEL_28:
      sub_1C372B4(labelStock);
    while ( labelStock->fields._size > 0 )
    {
      labelStock = (System_Collections_Generic_Stack_T__o *)System_Collections_Generic_Stack_object___Pop(
                                                              labelStock,
                                                              (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
      if ( labelStock )
      {
        v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)labelStock, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(v7, 0);
        labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
        if ( labelStock )
          continue;
      }
      goto LABEL_28;
    }
  }
}


void ScriptLineMessage__EffectScale(ScriptLineMessage_o *this, float s, float d, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v7; // 0:s1.4,4:s2.4,8:s3.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v7.fields.z = 1.0;
  v7.fields.x = s;
  v7.fields.y = s;
  TweenScale__Begin(gameObject, d, v7, 0);
}


void ScriptLineMessage__Fadeout(ScriptLineMessage_o *this, float d, const MethodInfo *method)
{
  UnityEngine_Component_o *messageRoot; // x0
  UnityEngine_Transform_o *v5; // x19
  int32_t childCount; // w0
  int32_t v7; // w20
  int32_t v8; // w21
  UnityEngine_GameObject_o *gameObject; // x0

  messageRoot = (UnityEngine_Component_o *)this->fields.messageRoot;
  if ( !messageRoot )
    goto LABEL_8;
  messageRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(messageRoot, 0);
  if ( !messageRoot )
    goto LABEL_8;
  v5 = (UnityEngine_Transform_o *)messageRoot;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)messageRoot, 0);
  if ( childCount >= 1 )
  {
    v7 = childCount;
    v8 = 0;
    while ( 1 )
    {
      messageRoot = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v5, v8, 0);
      if ( !messageRoot )
        break;
      gameObject = UnityEngine_Component__get_gameObject(messageRoot, 0);
      TweenAlpha__Begin(gameObject, d, 0.0, 0);
      if ( v7 == ++v8 )
        return;
    }
LABEL_8:
    sub_1C372B4(messageRoot);
  }
}


UISprite_o *ScriptLineMessage__FetchImageSprite(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *imageStock; // x0
  __int64 Component_object; // x0
  UnityEngine_Component_o *v5; // x19
  Il2CppObject *imagePrefab; // x19
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x22
  int v9; // w8
  __int64 v10; // x21
  unsigned int v11; // w22
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Transform_o *v13; // x20

  if ( (byte_4C44F27 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UISprite__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UISprite__get_Count__);
    byte_4C44F27 = 1;
  }
  imageStock = (System_Collections_Generic_Stack_T__o *)this->fields.imageStock;
  if ( !imageStock || imageStock->fields._size < 1 )
  {
    imagePrefab = (Il2CppObject *)this->fields.imagePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  imagePrefab,
                                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v7 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
      if ( Component_object )
      {
        v5 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v5, 0);
          if ( this->fields.messageRoot )
          {
            v8 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
              if ( v8 )
              {
                UnityEngine_GameObject__set_layer(v8, Component_object, 0);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                              v7,
                                              (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v9 = *(_DWORD *)(Component_object + 24);
                  v10 = Component_object;
                  if ( v9 < 1 )
                    goto LABEL_20;
                  v11 = 0;
                  while ( 1 )
                  {
                    if ( v11 >= v9 )
                      sub_1C372BC(Component_object);
                    Component_object = *(_QWORD *)(v10 + 8LL * (int)v11 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0);
                    v9 = *(_DWORD *)(v10 + 24);
                    if ( (int)++v11 >= v9 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C372B4(Component_object);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                imageStock,
                                (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_UISprite__Pop__);
  v5 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v5 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v5, 0);
  v12 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C3C921 )
  {
    Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v12 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform(v5, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C3C926 )
  {
    Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UISprite_o *)v5;
}


ScriptMessageLabel_o *ScriptLineMessage__FetchLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *labelStock; // x0
  ScriptMessageLabel_o *v5; // x19

  if ( (byte_4C44F28 & 1) == 0 )
  {
    sub_1C37058(&ScriptMessageLabel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__get_Count__);
    byte_4C44F28 = 1;
  }
  labelStock = (System_Collections_Generic_Stack_T__o *)this->fields.labelStock;
  if ( labelStock && labelStock->fields._size >= 1 )
    return (ScriptMessageLabel_o *)System_Collections_Generic_Stack_object___Pop(
                                     labelStock,
                                     (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Pop__);
  v5 = (ScriptMessageLabel_o *)sub_1C372A4(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel___ctor(v5, 0);
  return v5;
}


UILabel_o *ScriptLineMessage__FetchMainLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *mainStock; // x0
  __int64 Component_object; // x0
  UnityEngine_Component_o *v5; // x19
  Il2CppObject *mainPrefab; // x19
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x22
  int v9; // w8
  __int64 v10; // x21
  unsigned int v11; // w22
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Transform_o *v13; // x20

  if ( (byte_4C44F25 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4C44F25 = 1;
  }
  mainStock = (System_Collections_Generic_Stack_T__o *)this->fields.mainStock;
  if ( !mainStock || mainStock->fields._size < 1 )
  {
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  mainPrefab,
                                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v7 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v5 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v5, 0);
          if ( this->fields.messageRoot )
          {
            v8 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
              if ( v8 )
              {
                UnityEngine_GameObject__set_layer(v8, Component_object, 0);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                              v7,
                                              (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v9 = *(_DWORD *)(Component_object + 24);
                  v10 = Component_object;
                  if ( v9 < 1 )
                    goto LABEL_20;
                  v11 = 0;
                  while ( 1 )
                  {
                    if ( v11 >= v9 )
                      sub_1C372BC(Component_object);
                    Component_object = *(_QWORD *)(v10 + 8LL * (int)v11 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0);
                    v9 = *(_DWORD *)(v10 + 24);
                    if ( (int)++v11 >= v9 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C372B4(Component_object);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                mainStock,
                                (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v5 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v5 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v5, 0);
  v12 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C3C921 )
  {
    Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v12 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform(v5, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C3C926 )
  {
    Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return (UILabel_o *)v5;
}


UILabel_o *ScriptLineMessage__FetchRubyLabel(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Stack_T__o *rubyStock; // x0
  __int64 Component_object; // x0
  UnityEngine_Component_o *v5; // x20
  Il2CppObject *rubyPrefab; // x20
  UnityEngine_GameObject_o *v7; // x21
  UnityEngine_GameObject_o *v8; // x22
  int v9; // w8
  __int64 v10; // x21
  unsigned int v11; // w22
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x21

  if ( (byte_4C44F26 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel__get_Count__);
    byte_4C44F26 = 1;
  }
  rubyStock = (System_Collections_Generic_Stack_T__o *)this->fields.rubyStock;
  if ( !rubyStock || rubyStock->fields._size < 1 )
  {
    rubyPrefab = (Il2CppObject *)this->fields.rubyPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Component_object = (__int64)UnityEngine_Object__Instantiate_object_(
                                  rubyPrefab,
                                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( Component_object )
    {
      v7 = (UnityEngine_GameObject_o *)Component_object;
      Component_object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)Component_object,
                                    (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
      if ( Component_object )
      {
        v5 = (UnityEngine_Component_o *)Component_object;
        Component_object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Component_object, 0);
        if ( Component_object )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)Component_object, this->fields.messageRoot, 0);
          Component_object = (__int64)UnityEngine_Component__get_gameObject(v5, 0);
          if ( this->fields.messageRoot )
          {
            v8 = (UnityEngine_GameObject_o *)Component_object;
            Component_object = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.messageRoot,
                                          0);
            if ( Component_object )
            {
              Component_object = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
              if ( v8 )
              {
                UnityEngine_GameObject__set_layer(v8, Component_object, 0);
                Component_object = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                              v7,
                                              (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
                if ( Component_object )
                {
                  v9 = *(_DWORD *)(Component_object + 24);
                  v10 = Component_object;
                  if ( v9 < 1 )
                    goto LABEL_20;
                  v11 = 0;
                  while ( 1 )
                  {
                    if ( v11 >= v9 )
                      sub_1C372BC(Component_object);
                    Component_object = *(_QWORD *)(v10 + 8LL * (int)v11 + 32);
                    if ( !Component_object )
                      break;
                    UIWidget__set_depth(
                      (UIWidget_o *)Component_object,
                      this->fields.depthOffset + *(_DWORD *)(Component_object + 176),
                      0);
                    v9 = *(_DWORD *)(v10 + 24);
                    if ( (int)++v11 >= v9 )
                      goto LABEL_20;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C372B4(Component_object);
  }
  Component_object = (__int64)System_Collections_Generic_Stack_object___Pop(
                                rubyStock,
                                (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_UILabel__Pop__);
  v5 = (UnityEngine_Component_o *)Component_object;
LABEL_20:
  if ( !v5 )
    goto LABEL_28;
  Component_object = (__int64)UnityEngine_Component__get_transform(v5, 0);
  v12 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C3C921 )
  {
    Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v12 )
    goto LABEL_28;
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Component_object = (__int64)UnityEngine_Component__get_transform(v5, 0);
  v13 = (UnityEngine_Transform_o *)Component_object;
  if ( !byte_4C3C926 )
  {
    Component_object = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v13 )
    goto LABEL_28;
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  UILabel__set_fontSize((UILabel_o *)v5, this->fields.rubyFontSize, 0);
  return (UILabel_o *)v5;
}


void ScriptLineMessage__FowardText(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  ScriptLineMessage__UpdateLabels(this, text, 1, color, font, 0, v5);
}


ScriptMessageLabel_array *ScriptLineMessage__GetDispLabelArray(ScriptLineMessage_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dispLabelList; // x0

  if ( (byte_4C44F23 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
    byte_4C44F23 = 1;
  }
  dispLabelList = (System_Collections_Generic_List_object__o *)this->fields.dispLabelList;
  if ( !dispLabelList )
    sub_1C372B4(0);
  return (ScriptMessageLabel_array *)System_Collections_Generic_List_object___ToArray(
                                       dispLabelList,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_ScriptMessageLabel__ToArray__);
}


UnityEngine_Vector2_o ScriptLineMessage__GetPrintedSize(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float v3; // s0
  float v4; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.maxDispPosition.fields.x;
  if ( x < this->fields.dispPosition.fields.x )
    x = this->fields.dispPosition.fields.x;
  v3 = x - this->fields.startPosition.fields.x;
  v4 = -(float)(this->fields.maxDispPosition.fields.y - this->fields.startPosition.fields.y);
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


bool ScriptLineMessage__HasRubyFormat(System_String_o *text, const MethodInfo *method)
{
  if ( (byte_4C44F30 & 1) == 0 )
  {
    sub_1C37058(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C37058(&StringLiteral_16035/*"\\[#[^:]+:[^:]+\\]"*/);
    byte_4C44F30 = 1;
  }
  if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
  return System_Text_RegularExpressions_Regex__IsMatch(text, (System_String_o *)StringLiteral_16035/*"\\[#[^:]+:[^:]+\\]"*/, 0);
}


void ScriptLineMessage__Init(ScriptLineMessage_o *this, const MethodInfo *method)
{
  _BOOL4 isRecycle; // w8
  System_Collections_Generic_Stack_T__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_Generic_Stack_T__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Stack_T__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_Stack_T__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *mainPrefab; // x20
  __int64 fontSizes; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v19; // x0
  int defaultFontSize; // w2
  UILabel_o *v21; // x20
  float v22; // s0
  int32_t v23; // w1
  int32_t rubyFontSize; // w8
  float v25; // s1
  float v26; // s0
  int32_t v27; // w1
  float v28; // s0
  float v29; // s1
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Object_o *v31; // x0
  UnityEngine_Object_o *messageOffset; // x0
  float v33; // s0
  const MethodInfo *v34; // x1
  UnityEngine_Transform_o *v35; // x20

  if ( (byte_4C44F21 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UISprite___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
    sub_1C37058(&System_Collections_Generic_Stack_UILabel__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Stack_UISprite__TypeInfo);
    sub_1C37058(&System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    sub_1C37058(&StringLiteral_25356/*"■"*/);
    byte_4C44F21 = 1;
  }
  if ( !this->fields.isInit )
  {
    isRecycle = this->fields.isRecycle;
    this->fields.isInit = 1;
    if ( isRecycle )
    {
      v4 = (System_Collections_Generic_Stack_T__o *)sub_1C372A4(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v4,
        (const MethodInfo_3A031E4 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.mainStock = (struct System_Collections_Generic_Stack_UILabel__o *)v4;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mainStock, (int32_t)v4, v5, v6);
      v7 = (System_Collections_Generic_Stack_T__o *)sub_1C372A4(System_Collections_Generic_Stack_UILabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v7,
        (const MethodInfo_3A031E4 *)Method_System_Collections_Generic_Stack_UILabel___ctor__);
      this->fields.rubyStock = (struct System_Collections_Generic_Stack_UILabel__o *)v7;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.rubyStock, (int32_t)v7, v8, v9);
      v10 = (System_Collections_Generic_Stack_T__o *)sub_1C372A4(System_Collections_Generic_Stack_UISprite__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v10,
        (const MethodInfo_3A031E4 *)Method_System_Collections_Generic_Stack_UISprite___ctor__);
      this->fields.imageStock = (struct System_Collections_Generic_Stack_UISprite__o *)v10;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.imageStock, (int32_t)v10, v11, v12);
      v13 = (System_Collections_Generic_Stack_T__o *)sub_1C372A4(System_Collections_Generic_Stack_ScriptMessageLabel__TypeInfo);
      System_Collections_Generic_Stack_object____ctor(
        v13,
        (const MethodInfo_3A031E4 *)Method_System_Collections_Generic_Stack_ScriptMessageLabel___ctor__);
      this->fields.labelStock = (struct System_Collections_Generic_Stack_ScriptMessageLabel__o *)v13;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.labelStock, (int32_t)v13, v14, v15);
    }
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)fontSizes,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    fontSizes = (__int64)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !fontSizes )
      goto LABEL_37;
    v19 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)fontSizes,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    defaultFontSize = this->fields.defaultFontSize;
    v21 = (UILabel_o *)v19;
    if ( defaultFontSize >= 1 )
    {
      fontSizes = (__int64)this->fields.fontSizes;
      if ( !fontSizes )
        goto LABEL_37;
      System_Collections_Generic_Dictionary_object__int___set_Item(
        (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
        (Il2CppObject *)StringLiteral_861/*"-"*/,
        defaultFontSize,
        (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    }
    fontSizes = (__int64)this->fields.fontSizes;
    if ( !fontSizes
      || ((fontSizes = System_Collections_Generic_Dictionary_object__int___get_Item(
                         (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
                         (Il2CppObject *)StringLiteral_861/*"-"*/,
                         (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__),
           v22 = this->fields.fontScale * (float)(int)fontSizes,
           v22 != INFINITY)
        ? (v23 = (int)v22)
        : (v23 = 0x80000000),
          this->fields.defaultFontSize = v23,
          !Component_object) )
    {
LABEL_37:
      sub_1C372B4(fontSizes);
    }
    UILabel__set_fontSize((UILabel_o *)Component_object, v23, 0);
    UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_25356/*"■"*/, 0);
    fontSizes = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Component_object->klass->vtable[22].methodPtr)(
                  Component_object,
                  Component_object->klass->vtable[22].method);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v25;
    if ( rubyFontSize <= 0 )
    {
      if ( !v21 )
        goto LABEL_37;
      v28 = this->fields.fontScale * (float)v21->fields.mFontSize;
      if ( v28 == INFINITY )
        v27 = 0x80000000;
      else
        v27 = (int)v28;
      this->fields.rubyFontSize = v27;
    }
    else
    {
      v26 = this->fields.fontScale * (float)rubyFontSize;
      if ( v26 == INFINITY )
        v27 = 0x80000000;
      else
        v27 = (int)v26;
      this->fields.rubyFontSize = v27;
      if ( !v21 )
        goto LABEL_37;
    }
    UILabel__set_fontSize(v21, v27, 0);
    UILabel__set_text(v21, (System_String_o *)StringLiteral_25356/*"■"*/, 0);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))v21->klass->vtable._22_get_localSize.methodPtr)(
      v21,
      v21->klass->vtable._22_get_localSize.method);
    this->fields.rubyLineHeight = v29;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)Component_object,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
    v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0);
    UnityEngine_Object__Destroy_71266752(v31, 0);
    messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
    v33 = -this->fields.rubyLineHeight;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = v33;
    fontSizes = UnityEngine_Object__op_Inequality(messageOffset, 0, 0);
    if ( (fontSizes & 1) != 0 )
    {
      v35 = this->fields.messageOffset;
      if ( !byte_4C3C921 )
      {
        fontSizes = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( !v35 )
        goto LABEL_37;
      UnityEngine_Transform__set_localPosition(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    }
    this->fields.isTalkName = 0;
    ScriptLineMessage__ClearText(this, v34);
  }
}


void ScriptLineMessage__PreProcSetRubyLabel(
        ScriptLineMessage_o *this,
        System_String_o *mainText,
        const MethodInfo *method)
{
  ;
}


// attributes: thunk
void ScriptLineMessage__Quit(ScriptLineMessage_o *this, const MethodInfo *method)
{
  ScriptLineMessage__DeleteLabels(this, method);
}


void ScriptLineMessage__ReleaseLabel(ScriptLineMessage_o *this, ScriptMessageLabel_o *label, const MethodInfo *method)
{
  ScriptLineMessage_o *v4; // x20
  ScriptLineMessage_o **p_fields; // x21
  UnityEngine_Object_o *main; // x22
  ScriptLineMessage_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *gameObject; // x22
  struct UILabel_o **p_ruby; // x21
  UnityEngine_Object_o *ruby; // x22
  ScriptLineMessage_o *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *v16; // x22
  struct UISprite_o **p_image; // x21
  UnityEngine_Object_o *image; // x22
  ScriptLineMessage_o *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Object_o *v22; // x22
  System_Collections_Generic_Stack_T__o *labelStock; // x0

  v4 = this;
  if ( (byte_4C44F29 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UILabel__Push__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_UISprite__Push__);
    this = (ScriptLineMessage_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F29 = 1;
  }
  if ( !label )
    goto LABEL_40;
  p_fields = (ScriptLineMessage_o **)&label->fields;
  main = (UnityEngine_Object_o *)label->fields.main;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(main, 0, 0) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (ScriptLineMessage_o *)v4->fields.mainStock;
    v7 = *p_fields;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)v7,
        (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !v7 )
        goto LABEL_40;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)*p_fields,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(gameObject, 0);
    }
    *p_fields = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&label->fields, 0, v8, v9);
  }
  p_ruby = &label->fields.ruby;
  ruby = (UnityEngine_Object_o *)label->fields.ruby;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ruby, 0, 0) )
  {
    this = (ScriptLineMessage_o *)*p_ruby;
    if ( !*p_ruby )
      goto LABEL_40;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    this = (ScriptLineMessage_o *)v4->fields.rubyStock;
    v13 = (ScriptLineMessage_o *)*p_ruby;
    if ( this )
    {
      System_Collections_Generic_Stack_object___Push(
        (System_Collections_Generic_Stack_T__o *)this,
        (Il2CppObject *)v13,
        (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_UILabel__Push__);
    }
    else
    {
      if ( !v13 )
        goto LABEL_40;
      v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_ruby, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v16, 0);
    }
    *p_ruby = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&label->fields.ruby, 0, v14, v15);
  }
  p_image = &label->fields.image;
  image = (UnityEngine_Object_o *)label->fields.image;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(image, 0, 0) )
  {
    this = (ScriptLineMessage_o *)*p_image;
    if ( *p_image )
    {
      ((void (__fastcall *)(ScriptLineMessage_o *, void *, float))this->klass[1]._1.image)(
        this,
        this->klass[1]._1.gc_desc,
        0.0);
      this = (ScriptLineMessage_o *)v4->fields.imageStock;
      v19 = (ScriptLineMessage_o *)*p_image;
      if ( this )
      {
        System_Collections_Generic_Stack_object___Push(
          (System_Collections_Generic_Stack_T__o *)this,
          (Il2CppObject *)v19,
          (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_UISprite__Push__);
LABEL_36:
        *p_image = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)&label->fields.image, 0, v20, v21);
        goto LABEL_37;
      }
      if ( v19 )
      {
        v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*p_image, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71266752(v22, 0);
        goto LABEL_36;
      }
    }
LABEL_40:
    sub_1C372B4(this);
  }
LABEL_37:
  ScriptMessageLabel__Release(label, 0);
  labelStock = (System_Collections_Generic_Stack_T__o *)v4->fields.labelStock;
  if ( labelStock )
    System_Collections_Generic_Stack_object___Push(
      labelStock,
      (Il2CppObject *)label,
      (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_ScriptMessageLabel__Push__);
}


void ScriptLineMessage__ReturnText(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  float x; // s0
  float defaultTextOnlyLineHeight; // s4
  float v7; // s1
  float v8; // s2
  float v9; // s0
  int32_t v10; // w1

  if ( (byte_4C44F2D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F2D = 1;
  }
  x = this->fields.dispPosition.fields.x;
  if ( this->fields.maxDispPosition.fields.x < x )
    this->fields.maxDispPosition.fields.x = x;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v7 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v8 = this->fields.startPosition.fields.x;
  v9 = this->fields.dispPosition.fields.y - (float)(v7 + this->fields.betweenLineHeight);
  this->fields.fontSize = this->fields.defaultFontSize;
  this->fields.dispPosition.fields.x = v8;
  this->fields.dispPosition.fields.y = v9;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v7;
  v10 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v10, v2, v3);
  this->fields.maxDispPosition.fields.y = this->fields.dispPosition.fields.y - this->fields.textOnlyLineHeight;
}


void ScriptLineMessage__SetBetweenLineHeight(ScriptLineMessage_o *this, float height, const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1C372B4(0);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void ScriptLineMessage__SetDefaultState(ScriptLineMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  float rubyLineHeight; // s2
  float defaultTextOnlyLineHeight; // s1
  int32_t defaultFontSize; // w8
  int32_t v8; // w1

  if ( (byte_4C44F2C & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F2C = 1;
  }
  rubyLineHeight = this->fields.rubyLineHeight;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  defaultFontSize = this->fields.defaultFontSize;
  this->fields.betweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.fontSize = defaultFontSize;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v8 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v8, v2, v3);
}


void ScriptLineMessage__SetFontSize(ScriptLineMessage_o *this, System_String_o *sizeName, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *fontSizes; // x0
  int32_t Item; // w0
  float textOnlyLineHeight; // s2
  float v8; // s0
  int32_t v9; // w8
  float v10; // s0
  float y; // s1

  if ( (byte_4C44F2E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4C44F2E = 1;
  }
  fontSizes = this->fields.fontSizes;
  if ( !fontSizes )
    sub_1C372B4(0);
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)fontSizes,
           (Il2CppObject *)sizeName,
           (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  v8 = this->fields.fontScale * (float)Item;
  v9 = (int)v8;
  if ( v8 == INFINITY )
    v9 = 0x80000000;
  v10 = (float)v9;
  this->fields.fontSize = v9;
  if ( textOnlyLineHeight < (float)v9 )
  {
    y = this->fields.dispPosition.fields.y;
    this->fields.textOnlyLineHeight = v10;
    this->fields.maxDispPosition.fields.y = y - v10;
  }
}


void ScriptLineMessage__SetText(
        ScriptLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        bool isTalkName,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x6

  this->fields.isTalkName = isTalkName;
  ScriptLineMessage__ClearText(this, (const MethodInfo *)text);
  ScriptLineMessage__UpdateLabels(this, text, 0, color, font, removeUserNameColorCode, v12);
}


void ScriptLineMessage__UpdateLabels(
        ScriptLineMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        const MethodInfo *method)
{
  __int64 v12; // x23
  __int64 Chars; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Text_StringBuilder_o *v18; // x20
  System_Text_StringBuilder_o **v19; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x26
  __int64 v26; // x25
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w29
  int v30; // w21
  int32_t v31; // w20
  int32_t BraceIndex; // w0
  int32_t v33; // w28
  System_String_o *v34; // x0
  int32_t v35; // w20
  System_String_o *String; // x0
  bool v37; // zf
  System_String_o *v38; // x20
  System_String_o *TagSplitString; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Text_StringBuilder_o *v42; // x20
  ScriptReplaceString_c *v43; // x0
  int32_t playerGenderIndex; // w20
  struct System_String_o *v45; // x1
  System_String_o *v46; // x20
  const MethodInfo *v47; // x6
  char v48; // w2
  UnityEngine_Font_o *v49; // x4
  ScriptLineMessage_o *v50; // x0
  System_String_o *v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_String_o *v54; // x1
  System_String_o *v55; // x20
  int32_t v56; // w1
  int32_t v57; // w2
  System_String_o *v58; // x1
  System_String_o *v59; // x0
  System_String_o *v60; // x2
  ScriptLineMessage_ProcAddLabel2_o *v61; // x9
  __int64 v62; // x1
  const MethodInfo *v63; // x1
  System_String_o *v64; // x20
  System_String_array *v65; // x0
  struct System_String_o *v66; // x1
  System_String_array *v67; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_String_o *v70; // x0
  System_Text_StringBuilder_o *v71; // x20
  ScriptLineMessage_ProcAddLabel2_o *v72; // [xsp+0h] [xbp-80h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C44F2B & 1) == 0 )
  {
    sub_1C37058(&ScriptLineMessage_ProcAddLabel2_TypeInfo);
    sub_1C37058(&ScriptLineMessage_ProcAddLabel_TypeInfo);
    sub_1C37058(&ScriptMessageLabel_TypeInfo);
    sub_1C37058(&ScriptReplaceString_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__);
    sub_1C37058(&Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__);
    sub_1C37058(&ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
    sub_1C37058(&StringLiteral_23284/*"servantName"*/);
    sub_1C37058(&StringLiteral_15823/*"[-]"*/);
    sub_1C37058(&StringLiteral_20091/*"i"*/);
    sub_1C37058(&StringLiteral_16023/*"[~1]"*/);
    sub_1C37058(&StringLiteral_15958/*"[^"*/);
    sub_1C37058(&StringLiteral_22919/*"r"*/);
    sub_1C37058(&StringLiteral_21241/*"line"*/);
    sub_1C37058(&StringLiteral_20285/*"image"*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_16022/*"[~"*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C44F2B = 1;
  }
  text = 0;
  v12 = sub_1C372A4(ScriptLineMessage___c__DisplayClass55_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  if ( !v12 )
    goto LABEL_89;
  *(_QWORD *)(v12 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v14, v15);
  *(_BYTE *)(v12 + 32) = isFoward;
  *(_QWORD *)(v12 + 40) = font;
  sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 40), (int32_t)font, v16, v17);
  v18 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0);
  *(_QWORD *)(v12 + 16) = v18;
  v19 = (System_Text_StringBuilder_o **)(v12 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v18, v20, v21);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v22, v23);
  }
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v12 + 48) = defaultColorTag;
  sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 48), (int32_t)defaultColorTag, v22, v23);
  v26 = sub_1C372A4(ScriptLineMessage_ProcAddLabel_TypeInfo);
  ScriptLineMessage_ProcAddLabel___ctor(
    (ScriptLineMessage_ProcAddLabel_o *)v26,
    (Il2CppObject *)v12,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__0__,
    v27);
  v72 = (ScriptLineMessage_ProcAddLabel2_o *)sub_1C372A4(ScriptLineMessage_ProcAddLabel2_TypeInfo);
  ScriptLineMessage_ProcAddLabel2___ctor(
    v72,
    (Il2CppObject *)v12,
    Method_ScriptLineMessage___c__DisplayClass55_0__UpdateLabels_b__1__,
    v28);
  if ( !txt )
    goto LABEL_89;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_87;
  v29 = 0;
  v30 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v29, 0) != 91 )
    {
      v42 = *v19;
      Chars = System_String__get_Chars(txt, v29, 0);
      if ( !v42 )
        goto LABEL_89;
      System_Text_StringBuilder__Append_63649048(v42, Chars, 0);
      v33 = v29;
      goto LABEL_42;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v31 = v29 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v29 + 1, 0);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_89;
      Chars = (__int64)System_Text_StringBuilder__Append_63646720(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15804/*"["*/,
                         0);
      goto LABEL_43;
    }
    v33 = BraceIndex;
    Chars = System_String__get_Chars(txt, v31, 0);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v26 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
      v34 = System_String__Substring_63607580(txt, v29 + 2, v30 + v33 - 2, 0);
      v35 = System_Int32__Parse(v34, 0);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v35, 0);
      v37 = v35 == 1;
      v38 = String;
      if ( v37 && removeUserNameColorCode )
      {
        if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
        TagSplitString = ScriptMessageLabel__RemoveColorTag(v38, 0);
      }
      else
      {
        TagSplitString = System_String__Concat_63561656(String, (System_String_o *)StringLiteral_15823/*"[-]"*/, 0);
      }
LABEL_39:
      v45 = *(struct System_String_o **)(v12 + 48);
      v46 = TagSplitString;
      this->fields.defaultColorTag = v45;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)v45, v40, v41);
      v48 = *(_BYTE *)(v12 + 32);
      v49 = *(UnityEngine_Font_o **)(v12 + 40);
      v50 = this;
      v51 = v46;
LABEL_40:
      ScriptLineMessage__UpdateLabels(v50, v51, v48, enforceColor, v49, 0, v47);
      v54 = this->fields.defaultColorTag;
      *(_QWORD *)(v12 + 48) = v54;
LABEL_41:
      sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 48), (int32_t)v54, v52, v53);
      goto LABEL_42;
    }
    Chars = System_String__get_Chars(txt, v31, 0);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v26 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4C44C93 )
      {
        sub_1C37058(&ScriptReplaceString_TypeInfo);
        byte_4C44C93 = 1;
      }
      v43 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v43 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v43->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v29 + 2, playerGenderIndex, 0);
      goto LABEL_39;
    }
    Chars = System_String__get_Chars(txt, v31, 0);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v26 )
        goto LABEL_89;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
      Chars = (__int64)System_String__Substring_63607580(txt, v29, v30 + v33 + 1, 0);
      goto LABEL_60;
    }
    if ( System_String__get_Chars(txt, v31, 0) != 61 )
      break;
LABEL_42:
    v31 = v33 + 1;
    Chars = ((__int64 (__fastcall *)(ScriptLineMessage_o *, System_Text_StringBuilder_o *, __int64, const MethodInfo *))this->klass->vtable._5_AfterParseEachChar.methodPtr)(
              this,
              *v19,
              v26,
              this->klass->vtable._5_AfterParseEachChar.method);
LABEL_43:
    v30 = -v31;
    v29 = v31;
    if ( v31 >= txt->fields._stringLength )
      goto LABEL_87;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v31, 0);
  if ( !Chars )
    goto LABEL_89;
  v55 = (System_String_o *)Chars;
  Chars = System_String__Equals_63596960((System_String_o *)Chars, (System_String_o *)StringLiteral_20285/*"image"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
    v56 = v29 + 7;
    v57 = v30 + v33 - 7;
    goto LABEL_58;
  }
  Chars = System_String__Equals_63596960(v55, (System_String_o *)StringLiteral_20091/*"i"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
    v56 = v29 + 3;
    v57 = v30 + v33 - 3;
LABEL_58:
    v58 = System_String__Substring_63607580(txt, v56, v57, 0);
    v59 = (System_String_o *)StringLiteral_15958/*"[^"*/;
    v60 = (System_String_o *)StringLiteral_16058/*"]"*/;
LABEL_59:
    Chars = (__int64)System_String__Concat_63599904(v59, v58, v60, 0);
LABEL_60:
    v61 = v72;
    if ( !v72 )
      goto LABEL_89;
    v62 = Chars;
LABEL_62:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))v61->fields.invoke_impl)(
      v61->fields.method_code,
      v62,
      v61->fields.method);
    goto LABEL_42;
  }
  Chars = System_String__Equals_63596960(v55, (System_String_o *)StringLiteral_22919/*"r"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
    ScriptLineMessage__ReturnText(this, v63);
    if ( enforceColor )
    {
      *p_defaultColorTag = enforceColor;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v52, v53);
    }
    v54 = *p_defaultColorTag;
    *(_QWORD *)(v12 + 48) = *p_defaultColorTag;
    goto LABEL_41;
  }
  Chars = System_String__Equals_63596960(v55, (System_String_o *)StringLiteral_23284/*"servantName"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
    v64 = System_String__Substring_63607580(txt, v29 + 12, v30 + v33 - 12, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v65 = ScriptMessageLabel__AnalysTagParam(v64, 0, 0);
    v66 = *(struct System_String_o **)(v12 + 48);
    v67 = v65;
    this->fields.defaultColorTag = v66;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)v66, v68, v69);
    v70 = ScriptMessageLabel__GetServantChangeName(v67, 0);
    v48 = *(_BYTE *)(v12 + 32);
    v49 = *(UnityEngine_Font_o **)(v12 + 40);
    v51 = v70;
    v50 = this;
    goto LABEL_40;
  }
  Chars = System_String__StartsWith(v55, (System_String_o *)StringLiteral_21241/*"line"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_89;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
    Chars = (__int64)System_String__Substring_63607580(txt, v29 + 5, v30 + v33 - 5, 0);
    if ( !Chars )
      goto LABEL_89;
    v58 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v59 = (System_String_o *)StringLiteral_16022/*"[~"*/;
      v60 = (System_String_o *)StringLiteral_16058/*"]"*/;
      goto LABEL_59;
    }
    v61 = v72;
    if ( !v72 )
      goto LABEL_89;
    v62 = StringLiteral_16023/*"[~1]"*/;
    goto LABEL_62;
  }
  if ( v33 < txt->fields._stringLength )
  {
    text = System_String__Substring_63607580(txt, v29, v30 + v33 + 1, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v12 + 48), &text, enforceColor, 0);
    Chars = (__int64)*v19;
    if ( !*v19 )
      goto LABEL_89;
    System_Text_StringBuilder__Append_63646720((System_Text_StringBuilder_o *)Chars, text, 0);
    goto LABEL_42;
  }
  v71 = *v19;
  Chars = (__int64)System_String__Substring(txt, v29, 0);
  if ( !v71 )
    goto LABEL_89;
  Chars = (__int64)System_Text_StringBuilder__Append_63646720(v71, (System_String_o *)Chars, 0);
LABEL_87:
  if ( !v26 )
LABEL_89:
    sub_1C372B4(Chars);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
}


UnityEngine_Vector2_o ScriptLineMessage__get_DispPos(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.dispPosition.fields.x;
  y = this->fields.dispPosition.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float ScriptLineMessage__get_RubyLineHegight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.rubyLineHeight;
}


UnityEngine_Vector2_o ScriptLineMessage__get_StartPos(ScriptLineMessage_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.startPosition.fields.x;
  y = this->fields.startPosition.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float ScriptLineMessage__get_textLineHeight(ScriptLineMessage_o *this, const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


void ScriptLineMessage_ProcAddLabel___ctor(
        ScriptLineMessage_ProcAddLabel_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7D14C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7D10C;
}


System_IAsyncResult_o *ScriptLineMessage_ProcAddLabel__BeginInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void ScriptLineMessage_ProcAddLabel__EndInvoke(
        ScriptLineMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptLineMessage_ProcAddLabel__Invoke(ScriptLineMessage_ProcAddLabel_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void ScriptLineMessage_ProcAddLabel2___ctor(
        ScriptLineMessage_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7D1C8;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7D1A8;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7D160;
}


System_IAsyncResult_o *ScriptLineMessage_ProcAddLabel2__BeginInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void ScriptLineMessage_ProcAddLabel2__EndInvoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptLineMessage_ProcAddLabel2__Invoke(
        ScriptLineMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    txt,
    this->fields.method);
}


void ScriptLineMessage___c__DisplayClass55_0___ctor(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__0(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        const MethodInfo *method)
{
  char *tmpTxt; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ScriptLineMessage_o *_4__this; // x20
  const MethodInfo *v7; // x5
  struct ScriptLineMessage_o *v8; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length((System_Text_StringBuilder_o *)tmpTxt, 0) < 1 )
    goto LABEL_8;
  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)tmpTxt + 360LL))(
                           tmpTxt,
                           *(_QWORD *)(*(_QWORD *)tmpTxt + 368LL)),
        (v8 = this->fields.__4__this) == 0)
    || !_4__this
    || (ScriptLineMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v8->fields.defaultColorTag,
          0,
          this->fields.font,
          v7),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0) )
  {
LABEL_10:
    sub_1C372B4(tmpTxt);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 17) = tmpColorTag;
  sub_1C36FFC((CGThumbnailListItem_o *)(tmpTxt + 136), (int32_t)tmpColorTag, v4, v5);
}


void ScriptLineMessage___c__DisplayClass55_0___UpdateLabels_b__1(
        ScriptLineMessage___c__DisplayClass55_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x5
  ScriptLineMessage___c__DisplayClass55_0_o *v5; // x19
  struct ScriptLineMessage_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v5 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptLineMessage___c__DisplayClass55_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLineMessage__AddLabel(
      (ScriptLineMessage_o *)this,
      text,
      (System_String_o *)this[2].fields.__4__this,
      0,
      v5->fields.font,
      v4);
  }
  this = (ScriptLineMessage___c__DisplayClass55_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1C372B4(this);
  tmpColorTag = (struct ScriptLineMessage_o *)v5->fields.tmpColorTag;
  this[2].fields.__4__this = tmpColorTag;
  sub_1C36FFC((CGThumbnailListItem_o *)&this[2].fields.__4__this, (int32_t)tmpColorTag, (int32_t)method, v3);
}