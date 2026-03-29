void UITextList___ctor(UITextList_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BetterList_T__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D353A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UITextList_Paragraph___ctor__);
    sub_1C93AD4(&BetterList_UITextList_Paragraph__TypeInfo);
    sub_1C93AD4(&char___TypeInfo);
    byte_4D353A1 = 1;
  }
  this->fields.paragraphHistory = 50;
  v3 = sub_1C93B7C(char___TypeInfo, 1);
  if ( !v3 )
    sub_1C93D2C(0, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C93D34(v3);
  *(_WORD *)(v3 + 32) = 10;
  this->fields.mSeparator = (struct System_Char_array *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSeparator, v3, v5, v6, v7, v8, v9, v10);
  v11 = (BetterList_T__o *)sub_1C93D20(BetterList_UITextList_Paragraph__TypeInfo);
  BetterList_object____ctor(v11, (const MethodInfo_33DC638 *)Method_BetterList_UITextList_Paragraph___ctor__);
  this->fields.mParagraphs = (struct BetterList_UITextList_Paragraph__o *)v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mParagraphs, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UITextList__Add(UITextList_o *this, System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  UITextList__Add_50271540(this, text, 0, v3);
}


void UITextList__Add_50271540(UITextList_o *this, System_String_o *text, bool updateVisible, const MethodInfo *method)
{
  BetterList_T__o *mParagraphs; // x0
  __int64 v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_4D3539E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UITextList_Paragraph__Add__);
    sub_1C93AD4(&Method_BetterList_UITextList_Paragraph__RemoveAt__);
    sub_1C93AD4(&Method_BetterList_UITextList_Paragraph__get_Item__);
    sub_1C93AD4(&UITextList_Paragraph_TypeInfo);
    byte_4D3539E = 1;
  }
  mParagraphs = (BetterList_T__o *)this->fields.mParagraphs;
  if ( !mParagraphs )
    goto LABEL_11;
  if ( mParagraphs->fields.size >= this->fields.paragraphHistory )
  {
    mParagraphs = (BetterList_T__o *)BetterList_object___get_Item(
                                       mParagraphs,
                                       0,
                                       (const MethodInfo_33DBCE4 *)Method_BetterList_UITextList_Paragraph__get_Item__);
    if ( !this->fields.mParagraphs )
      goto LABEL_11;
    v7 = (__int64)mParagraphs;
    BetterList_object___RemoveAt(
      (BetterList_T__o *)this->fields.mParagraphs,
      0,
      (const MethodInfo_33DC32C *)Method_BetterList_UITextList_Paragraph__RemoveAt__);
  }
  else
  {
    v7 = sub_1C93D20(UITextList_Paragraph_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
  }
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = text,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)text, v8, v9, v10, v11, v12, v13),
        (mParagraphs = (BetterList_T__o *)this->fields.mParagraphs) == 0) )
  {
LABEL_11:
    sub_1C93D2C(mParagraphs, text);
  }
  BetterList_object___Add(
    mParagraphs,
    (Il2CppObject *)v7,
    (const MethodInfo_33DBF0C *)Method_BetterList_UITextList_Paragraph__Add__);
  UITextList__Rebuild(this, v14);
}


void UITextList__Clear(UITextList_o *this, const MethodInfo *method)
{
  BetterList_T__o *mParagraphs; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D3539B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BetterList_UITextList_Paragraph__Clear__);
    byte_4D3539B = 1;
  }
  mParagraphs = (BetterList_T__o *)this->fields.mParagraphs;
  if ( !mParagraphs )
    sub_1C93D2C(0, method);
  BetterList_object___Clear(mParagraphs, (const MethodInfo_33DBEF4 *)Method_BetterList_UITextList_Paragraph__Clear__);
  UITextList__UpdateVisibleText(this, v4);
}


void UITextList__OnDrag(UITextList_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  float y; // s8
  int32_t scrollHeight; // w0
  const MethodInfo *v6; // x1
  int v7; // w20
  float lineHeight; // s0
  const MethodInfo *v9; // x1

  y = delta.fields.y;
  scrollHeight = UITextList__get_scrollHeight(this, method);
  if ( scrollHeight )
  {
    v7 = scrollHeight;
    lineHeight = UITextList__get_lineHeight(this, v6);
    UITextList__set_scrollValue(this, this->fields.mScroll + (float)((float)(y / lineHeight) / (float)v7), v9);
  }
}


void UITextList__OnScroll(UITextList_o *this, float val, const MethodInfo *method)
{
  int32_t scrollHeight; // w0
  const MethodInfo *v6; // x1
  int v7; // w20
  float lineHeight; // s0
  const MethodInfo *v9; // x1

  scrollHeight = UITextList__get_scrollHeight(this, method);
  if ( scrollHeight )
  {
    v7 = scrollHeight;
    lineHeight = UITextList__get_lineHeight(this, v6);
    UITextList__set_scrollValue(this, this->fields.mScroll - (float)((float)(lineHeight * val) / (float)v7), v9);
  }
}


void UITextList__OnScrollBar(UITextList_o *this, const MethodInfo *method)
{
  UIProgressBar_o *current; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D3539D & 1) == 0 )
  {
    sub_1C93AD4(&UIProgressBar_TypeInfo);
    byte_4D3539D = 1;
  }
  current = UIProgressBar_TypeInfo->static_fields->current;
  if ( !current )
    sub_1C93D2C(0, method);
  this->fields.mScroll = UIProgressBar__get_value(current, 0);
  UITextList__UpdateVisibleText(this, v4);
}


void UITextList__Rebuild(UITextList_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UILabel_o *textLabel; // x0
  struct BetterList_UITextList_Paragraph__o *mParagraphs; // x9
  int v6; // w23
  int size; // w8
  struct UITextList_Paragraph_array *buffer; // x8
  UITextList_Paragraph_o *v9; // x20
  System_String_o *text; // x21
  System_String_array *v11; // x0
  GrandQuestFolderBoardItem_o *p_lines; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct UITextList_Paragraph_array *v19; // x9
  unsigned int max_length; // w11
  int32_t v21; // w10
  unsigned int v22; // w12
  UITextList_Paragraph_o *v23; // x13
  struct System_String_array *lines; // x13
  UnityEngine_Object_o *scrollBar; // x20
  struct UIProgressBar_o *v26; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v28; // x20
  float v29; // s0
  System_String_o *finalText; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D3539F & 1) == 0 )
  {
    sub_1C93AD4(&NGUIText_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIScrollBar_TypeInfo);
    byte_4D3539F = 1;
  }
  finalText = 0;
  if ( UITextList__get_isValid(this, method) )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_44;
    UILabel__UpdateNGUIText(textLabel, 0);
    textLabel = (UILabel_o *)NGUIText_TypeInfo;
    if ( !NGUIText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
      textLabel = (UILabel_o *)NGUIText_TypeInfo;
    }
    LODWORD(textLabel->fields.onChange->fields.method_code) = 1000000;
    mParagraphs = this->fields.mParagraphs;
    this->fields.mTotalLines = 0;
    if ( !mParagraphs )
      goto LABEL_44;
    v6 = 0;
    while ( 1 )
    {
      size = mParagraphs->fields.size;
      if ( v6 >= size )
        break;
      buffer = mParagraphs->fields.buffer;
      if ( !buffer )
        goto LABEL_44;
      if ( (unsigned int)v6 >= LODWORD(buffer->max_length) )
        goto LABEL_45;
      v9 = buffer->m_Items[v6];
      if ( v9 )
      {
        text = v9->fields.text;
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        NGUIText__WrapText(text, &finalText, 0);
        textLabel = (UILabel_o *)finalText;
        if ( finalText )
        {
          v11 = System_String__Split(finalText, 0xAu, 0, 0);
          v9->fields.lines = v11;
          p_lines = (GrandQuestFolderBoardItem_o *)&v9->fields.lines;
          sub_1C93A78(p_lines, (int32_t)v11, v13, v14, v15, v16, v17, v18);
          if ( p_lines->klass )
          {
            mParagraphs = this->fields.mParagraphs;
            ++v6;
            this->fields.mTotalLines += LODWORD(p_lines->klass->_1.namespaze);
            if ( mParagraphs )
              continue;
          }
        }
      }
      goto LABEL_44;
    }
    this->fields.mTotalLines = 0;
    if ( size >= 1 )
    {
      v19 = mParagraphs->fields.buffer;
      if ( v19 )
      {
        max_length = v19->max_length;
        v21 = 0;
        v22 = 0;
        while ( v22 < max_length )
        {
          v23 = v19->m_Items[v22];
          if ( !v23 )
            goto LABEL_44;
          lines = v23->fields.lines;
          if ( !lines )
            goto LABEL_44;
          ++v22;
          v21 += LODWORD(lines->max_length);
          this->fields.mTotalLines = v21;
          if ( size == v22 )
            goto LABEL_26;
        }
LABEL_45:
        sub_1C93D34(textLabel);
      }
LABEL_44:
      sub_1C93D2C(textLabel, v3);
    }
LABEL_26:
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      v26 = this->fields.scrollBar;
      if ( v26
        && (naturalAligment = UIScrollBar_TypeInfo->_2.naturalAligment,
            v26->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (UIScrollBar_c *)v26->klass->_2.typeHierarchy[naturalAligment - 1] == UIScrollBar_TypeInfo )
          v28 = (UnityEngine_Object_o *)this->fields.scrollBar;
        else
          v28 = 0;
      }
      else
      {
        v28 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      textLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        if ( this->fields.mTotalLines )
        {
          textLabel = (UILabel_o *)UITextList__get_scrollHeight(this, v3);
          v29 = 1.0 - (float)((float)(int)textLabel / (float)this->fields.mTotalLines);
          if ( !v28 )
            goto LABEL_44;
        }
        else
        {
          v29 = 1.0;
          if ( !v28 )
            goto LABEL_44;
        }
        UIScrollBar__set_barSize((UIScrollBar_o *)v28, v29, 0);
      }
    }
    UITextList__UpdateVisibleText(this, v3);
  }
}


void UITextList__Start(UITextList_o *this, const MethodInfo *method)
{
  struct UILabel_o **p_textLabel; // x20
  UnityEngine_Object_o *textLabel; // x21
  Il2CppObject *ComponentInChildren_object__52016240; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Object_o *scrollBar; // x21
  UILabel_o *v13; // x0
  __int64 v14; // x1
  struct UIProgressBar_o *v15; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  EventDelegate_Callback_o *v17; // x22
  int32_t style; // w8
  int32_t v19; // w1
  float v20; // s8
  const MethodInfo *v21; // x1

  if ( (byte_4D3539C & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C93AD4(&EventDelegate_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_UITextList_OnScrollBar__);
    byte_4D3539C = 1;
  }
  p_textLabel = &this->fields.textLabel;
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(textLabel, 0, 0) )
  {
    ComponentInChildren_object__52016240 = UnityEngine_Component__GetComponentInChildren_object__52016240(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_319B470 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.textLabel = (struct UILabel_o *)ComponentInChildren_object__52016240;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.textLabel,
      (int32_t)ComponentInChildren_object__52016240,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = (UILabel_o *)UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    v15 = this->fields.scrollBar;
    if ( !v15 )
      goto LABEL_23;
    onChange = v15->fields.onChange;
    v17 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, Method_UITextList_OnScrollBar__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Add(onChange, v17, 0);
  }
  v13 = *p_textLabel;
  if ( !*p_textLabel || (UILabel__set_overflowMethod(v13, 1, 0), (v13 = *p_textLabel) == 0) )
LABEL_23:
    sub_1C93D2C(v13, v14);
  style = this->fields.style;
  if ( style == 1 )
    v19 = 6;
  else
    v19 = 0;
  if ( style == 1 )
    v20 = 1.0;
  else
    v20 = 0.0;
  UIWidget__set_pivot((UIWidget_o *)v13, v19, 0);
  UITextList__set_scrollValue(this, v20, v21);
}


void UITextList__Update(UITextList_o *this, const MethodInfo *method)
{
  _BOOL8 isValid; // x0
  const MethodInfo *v4; // x1
  struct UILabel_o *textLabel; // x8
  int32_t mHeight; // w8
  int32_t mWidth; // w9

  isValid = UITextList__get_isValid(this, method);
  if ( isValid )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      sub_1C93D2C(isValid, v4);
    mWidth = textLabel->fields.mWidth;
    mHeight = textLabel->fields.mHeight;
    if ( mWidth != this->fields.mLastWidth || mHeight != this->fields.mLastHeight )
    {
      this->fields.mLastWidth = mWidth;
      this->fields.mLastHeight = mHeight;
      UITextList__Rebuild(this, v4);
    }
  }
}


void UITextList__UpdateVisibleText(UITextList_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UILabel_o *textLabel; // x0
  int mHeight; // s9
  float lineHeight; // s8
  float v7; // s9
  float v8; // s8
  unsigned int v9; // w8
  int v10; // w22
  float mScroll; // s8
  float v12; // s9
  float v13; // s9
  double v14; // d8
  double v15; // d0
  double v16; // d0
  double v17; // d1
  System_String_o *v18; // x1
  double v19; // d1
  int v20; // w21
  System_Text_StringBuilder_o *v21; // x20
  struct BetterList_UITextList_Paragraph__o *mParagraphs; // x8
  int size; // w23
  unsigned int v24; // w24
  int v25; // w25
  struct UITextList_Paragraph_array *buffer; // x8
  UITextList_Paragraph_o *v27; // x27
  struct System_String_array *lines; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v30; // x28
  signed __int64 v31; // x29
  System_String_o *v32; // x21
  struct UILabel_o *v33; // x19
  double iptr; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4D353A0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&StringLiteral_43/*"\n"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D353A0 = 1;
  }
  if ( UITextList__get_isValid(this, method) )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_61;
    if ( !this->fields.mTotalLines )
    {
      v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_60:
      UILabel__set_text(textLabel, v18, 0);
      return;
    }
    mHeight = textLabel->fields.mHeight;
    lineHeight = UITextList__get_lineHeight(this, v3);
    v7 = (float)mHeight;
    if ( !byte_4D2A138 )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A138 = 1;
    }
    v8 = v7 / lineHeight;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v9 = vcvtms_s32_f32(v8);
    if ( floorf(v8) == INFINITY )
      v10 = 0x80000000;
    else
      v10 = v9;
    mScroll = this->fields.mScroll;
    v12 = (float)((this->fields.mTotalLines - v10) & ~((this->fields.mTotalLines - v10) >> 31));
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    v13 = mScroll * v12;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v14 = v13;
    v15 = modf(v13, &iptr);
    if ( v13 >= 0.0 )
    {
      if ( v15 == 0.5 )
      {
        v16 = iptr;
        v17 = 1.0;
LABEL_24:
        v19 = v16 + v17;
        if ( ((__int64)v16 & 1) != 0 )
          v16 = v19;
        goto LABEL_29;
      }
      v16 = floor(v14 + 0.5);
    }
    else
    {
      if ( v15 == -0.5 )
      {
        v16 = iptr;
        v17 = -1.0;
        goto LABEL_24;
      }
      v16 = ceil(v14 + -0.5);
    }
LABEL_29:
    if ( v16 == INFINITY )
      v20 = 0x80000000;
    else
      v20 = (int)v16;
    v21 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0);
    mParagraphs = this->fields.mParagraphs;
    if ( !mParagraphs )
      goto LABEL_61;
    size = mParagraphs->fields.size;
    if ( size >= 1 && v10 >= 1 )
    {
      v24 = 0;
      v25 = v20 & ~(v20 >> 31);
      do
      {
        buffer = mParagraphs->fields.buffer;
        if ( !buffer )
          break;
        if ( v24 >= LODWORD(buffer->max_length) )
          goto LABEL_62;
        v27 = buffer->m_Items[v24];
        if ( !v27 )
          break;
        lines = v27->fields.lines;
        if ( !lines )
          break;
        max_length = lines->max_length;
        if ( (int)max_length >= 1 )
        {
          v30 = 0;
          v31 = (int)max_length;
          while ( v30 < LODWORD(lines->max_length) )
          {
            if ( v25 < 1 )
            {
              if ( !v21 )
                goto LABEL_61;
              v32 = lines->m_Items[v30];
              if ( System_Text_StringBuilder__get_Length(v21, 0) >= 1 )
                System_Text_StringBuilder__Append_64509684(v21, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              textLabel = (UILabel_o *)System_Text_StringBuilder__Append_64509684(v21, v32, 0);
              --v10;
            }
            else
            {
              --v25;
            }
            if ( (__int64)++v30 >= v31 || v10 < 1 )
              goto LABEL_53;
            lines = v27->fields.lines;
            if ( !lines )
              goto LABEL_61;
          }
LABEL_62:
          sub_1C93D34(textLabel);
        }
LABEL_53:
        if ( (int)++v24 >= size || v10 < 1 )
          goto LABEL_57;
        mParagraphs = this->fields.mParagraphs;
      }
      while ( mParagraphs );
LABEL_61:
      sub_1C93D2C(textLabel, v3);
    }
LABEL_57:
    if ( !v21 )
      goto LABEL_61;
    v33 = this->fields.textLabel;
    textLabel = (UILabel_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v21->klass->vtable._3_ToString.methodPtr)(
                               v21,
                               v21->klass->vtable._3_ToString.method);
    if ( !v33 )
      goto LABEL_61;
    v18 = (System_String_o *)textLabel;
    textLabel = v33;
    goto LABEL_60;
  }
}


bool UITextList__get_isValid(UITextList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *textLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0
  UnityEngine_Object_o *ambigiousFont; // x19

  if ( (byte_4D35398 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35398 = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(textLabel, 0, 0) )
    return 0;
  v5 = this->fields.textLabel;
  if ( !v5 )
    sub_1C93D2C(0, v4);
  ambigiousFont = UILabel__get_ambigiousFont(v5, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(ambigiousFont, 0, 0);
}


float UITextList__get_lineHeight(UITextList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *textLabel; // x20
  bool v4; // w0
  __int64 v5; // x1
  float result; // s0
  struct UILabel_o *v7; // x0
  int mFontSize; // s8

  if ( (byte_4D3539A & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3539A = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(textLabel, 0, 0);
  result = 20.0;
  if ( v4 )
  {
    v7 = this->fields.textLabel;
    if ( !v7 )
      sub_1C93D2C(0, v5);
    mFontSize = v7->fields.mFontSize;
    return UILabel__get_effectiveSpacingY(v7, 0) + (float)mFontSize;
  }
  return result;
}


int32_t UITextList__get_scrollHeight(UITextList_o *this, const MethodInfo *method)
{
  _BOOL8 isValid; // x0
  const MethodInfo *v4; // x1
  struct UILabel_o *textLabel; // x8
  int mHeight; // s9
  float lineHeight; // s8
  float v8; // s9
  float v9; // s8
  unsigned int v10; // w8

  isValid = UITextList__get_isValid(this, method);
  if ( !isValid )
    return 0;
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_1C93D2C(isValid, v4);
  mHeight = textLabel->fields.mHeight;
  lineHeight = UITextList__get_lineHeight(this, v4);
  v8 = (float)mHeight;
  if ( !byte_4D2A138 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A138 = 1;
  }
  v9 = v8 / lineHeight;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = vcvtms_s32_f32(v9);
  if ( floorf(v9) == INFINITY )
    v10 = 0x80000000;
  return (this->fields.mTotalLines - v10) & ~((int)(this->fields.mTotalLines - v10) >> 31);
}


float UITextList__get_scrollValue(UITextList_o *this, const MethodInfo *method)
{
  return this->fields.mScroll;
}


void UITextList__set_scrollValue(UITextList_o *this, float value, const MethodInfo *method)
{
  float v5; // s0
  float v6; // s8
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v8; // x1
  UIProgressBar_o *v9; // x0

  if ( (byte_4D35399 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35399 = 1;
  }
  v5 = fminf(value, 1.0);
  if ( value < 0.0 )
    v6 = 0.0;
  else
    v6 = v5;
  if ( UITextList__get_isValid(this, method) && this->fields.mScroll != v6 )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      v9 = this->fields.scrollBar;
      if ( !v9 )
        sub_1C93D2C(0, v8);
      UIProgressBar__set_value(v9, v6, 0);
    }
    else
    {
      this->fields.mScroll = v6;
      UITextList__UpdateVisibleText(this, v8);
    }
  }
}


void UITextList_Paragraph___ctor(UITextList_Paragraph_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}