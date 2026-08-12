void UITextList___ctor(UITextList_o *this, const MethodInfo *method)
{
  Il2CppClass *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  BetterList_T__o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_59752D2 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UITextList_Paragraph___ctor__);
    sub_2213A60(&BetterList_UITextList_Paragraph__TypeInfo);
    sub_2213A60(&char___TypeInfo);
    byte_59752D2 = 1;
  }
  v3 = char___TypeInfo;
  this->fields.paragraphHistory = 50;
  v4 = sub_2213B20(v3, 1);
  if ( !v4 )
    sub_2213CDC(0, v5);
  if ( !*(_DWORD *)(v4 + 24) )
    sub_2213CE4(v4);
  *(_WORD *)(v4 + 32) = 10;
  this->fields.mSeparator = (struct System_Char_array *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSeparator, v4, v6, v7, v8, v9, v10, v11);
  v12 = (BetterList_T__o *)sub_2213CCC(BetterList_UITextList_Paragraph__TypeInfo);
  BetterList_object____ctor(v12, (const MethodInfo_3E70130 *)Method_BetterList_UITextList_Paragraph___ctor__);
  this->fields.mParagraphs = (struct BetterList_UITextList_Paragraph__o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParagraphs, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UITextList__Add(UITextList_o *this, System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  UITextList__Add_56609868(this, text, 0, v3);
}


void UITextList__Add_56609868(UITextList_o *this, System_String_o *text, bool updateVisible, const MethodInfo *method)
{
  BetterList_T__o *mParagraphs; // x0
  __int64 v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1

  if ( (byte_59752CF & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UITextList_Paragraph__Add__);
    sub_2213A60(&Method_BetterList_UITextList_Paragraph__RemoveAt__);
    sub_2213A60(&Method_BetterList_UITextList_Paragraph__get_Item__);
    sub_2213A60(&UITextList_Paragraph_TypeInfo);
    byte_59752CF = 1;
  }
  mParagraphs = (BetterList_T__o *)this->fields.mParagraphs;
  if ( !mParagraphs )
    goto LABEL_11;
  if ( mParagraphs->fields.size >= this->fields.paragraphHistory )
  {
    mParagraphs = (BetterList_T__o *)BetterList_object___get_Item(
                                       mParagraphs,
                                       0,
                                       (const MethodInfo_3E6F7E8 *)Method_BetterList_UITextList_Paragraph__get_Item__);
    if ( !this->fields.mParagraphs )
      goto LABEL_11;
    v7 = (__int64)mParagraphs;
    BetterList_object___RemoveAt(
      (BetterList_T__o *)this->fields.mParagraphs,
      0,
      (const MethodInfo_3E6FE14 *)Method_BetterList_UITextList_Paragraph__RemoveAt__);
  }
  else
  {
    v7 = sub_2213CCC(UITextList_Paragraph_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
  }
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = text,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)text, v8, v9, v10, v11, v12, v13),
        (mParagraphs = (BetterList_T__o *)this->fields.mParagraphs) == 0) )
  {
LABEL_11:
    sub_2213CDC(mParagraphs, text);
  }
  BetterList_object___Add(
    mParagraphs,
    (Il2CppObject *)v7,
    (const MethodInfo_3E6FA08 *)Method_BetterList_UITextList_Paragraph__Add__);
  UITextList__Rebuild(this, v14);
}


void UITextList__Clear(UITextList_o *this, const MethodInfo *method)
{
  BetterList_T__o *mParagraphs; // x0
  const MethodInfo *v4; // x1

  if ( (byte_59752CC & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_UITextList_Paragraph__Clear__);
    byte_59752CC = 1;
  }
  mParagraphs = (BetterList_T__o *)this->fields.mParagraphs;
  if ( !mParagraphs )
    sub_2213CDC(0, method);
  BetterList_object___Clear(mParagraphs, (const MethodInfo_3E6F9F0 *)Method_BetterList_UITextList_Paragraph__Clear__);
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

  if ( (byte_59752CE & 1) == 0 )
  {
    sub_2213A60(&UIProgressBar_TypeInfo);
    byte_59752CE = 1;
  }
  current = UIProgressBar_TypeInfo->static_fields->current;
  if ( !current )
    sub_2213CDC(0, method);
  this->fields.mScroll = UIProgressBar__get_value(current, 0);
  UITextList__UpdateVisibleText(this, v4);
}


void UITextList__Rebuild(UITextList_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UILabel_o *textLabel; // x0
  struct UIWidget_OnDimensionsChanged_o *onChange; // x8
  struct BetterList_UITextList_Paragraph__o *mParagraphs; // x9
  int v7; // w23
  int size; // w8
  struct UITextList_Paragraph_array *buffer; // x8
  UITextList_Paragraph_o *v10; // x20
  System_String_o *text; // x21
  System_String_array *v12; // x0
  MissionNaviTransitionBoardItem_o *p_lines; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UITextList_Paragraph_array *v20; // x11
  int max_length; // w10
  int32_t v22; // w9
  UITextList_Paragraph_o **m_Items; // x11
  struct System_String_array *lines; // x12
  UnityEngine_Object_o *scrollBar; // x20
  struct UIProgressBar_o *v26; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v28; // x20
  float v29; // s0
  System_String_o *finalText; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59752D0 & 1) == 0 )
  {
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIScrollBar_TypeInfo);
    byte_59752D0 = 1;
  }
  finalText = 0;
  if ( UITextList__get_isValid(this, method) )
  {
    textLabel = this->fields.textLabel;
    if ( !textLabel )
      goto LABEL_18;
    UILabel__UpdateNGUIText(textLabel, 0);
    textLabel = (UILabel_o *)NGUIText_TypeInfo;
    if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v3);
      textLabel = (UILabel_o *)NGUIText_TypeInfo;
    }
    onChange = textLabel->fields.onChange;
    mParagraphs = this->fields.mParagraphs;
    this->fields.mTotalLines = 0;
    LODWORD(onChange->fields.method_code) = 1000000;
    if ( !mParagraphs )
      goto LABEL_18;
    v7 = 0;
    while ( 1 )
    {
      size = mParagraphs->fields.size;
      if ( v7 >= size )
        break;
      buffer = mParagraphs->fields.buffer;
      if ( !buffer )
        goto LABEL_18;
      if ( (unsigned int)v7 >= LODWORD(buffer->max_length) )
        goto LABEL_45;
      v10 = buffer->m_Items[v7];
      if ( v10 )
      {
        text = v10->fields.text;
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v3);
        NGUIText__WrapText(text, &finalText, 0);
        textLabel = (UILabel_o *)finalText;
        if ( finalText )
        {
          v12 = System_String__Split(finalText, 0xAu, 0, 0);
          v10->fields.lines = v12;
          p_lines = (MissionNaviTransitionBoardItem_o *)&v10->fields.lines;
          sub_2213A04(p_lines, (int32_t)v12, v14, v15, v16, v17, v18, v19);
          if ( p_lines->klass )
          {
            ++v7;
            mParagraphs = this->fields.mParagraphs;
            this->fields.mTotalLines += LODWORD(p_lines->klass->_1.namespaze);
            if ( mParagraphs )
              continue;
          }
        }
      }
      goto LABEL_18;
    }
    this->fields.mTotalLines = 0;
    if ( size >= 1 )
    {
      v20 = mParagraphs->fields.buffer;
      if ( v20 )
      {
        max_length = v20->max_length;
        v22 = 0;
        m_Items = v20->m_Items;
        while ( max_length )
        {
          if ( !*m_Items )
            goto LABEL_18;
          lines = (*m_Items)->fields.lines;
          if ( !lines )
            goto LABEL_18;
          --size;
          ++m_Items;
          --max_length;
          v22 += LODWORD(lines->max_length);
          this->fields.mTotalLines = v22;
          if ( !size )
            goto LABEL_26;
        }
LABEL_45:
        sub_2213CE4(textLabel);
      }
LABEL_18:
      sub_2213CDC(textLabel, v3);
    }
LABEL_26:
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
      textLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
      if ( ((unsigned __int8)textLabel & 1) != 0 )
      {
        if ( this->fields.mTotalLines )
        {
          textLabel = (UILabel_o *)UITextList__get_scrollHeight(this, v3);
          v29 = 1.0 - (float)((float)(int)textLabel / (float)this->fields.mTotalLines);
          if ( !v28 )
            goto LABEL_18;
        }
        else
        {
          v29 = 1.0;
          if ( !v28 )
            goto LABEL_18;
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
  __int64 v5; // x1
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Object_o *scrollBar; // x21
  UILabel_o *v14; // x0
  __int64 v15; // x1
  struct UIProgressBar_o *v16; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x21
  EventDelegate_Callback_o *v18; // x22
  __int64 v19; // x1
  float v20; // s8
  int32_t v21; // w1
  const MethodInfo *v22; // x1

  if ( (byte_59752CD & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UITextList_OnScrollBar__);
    byte_59752CD = 1;
  }
  p_textLabel = &this->fields.textLabel;
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(textLabel, 0, 0) )
  {
    ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                             (UnityEngine_Component_o *)this,
                                             (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    this->fields.textLabel = (struct UILabel_o *)ComponentInChildren_object__58855044;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.textLabel,
      (int32_t)ComponentInChildren_object__58855044,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v14 = (UILabel_o *)UnityEngine_Object__op_Inequality(scrollBar, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    v16 = this->fields.scrollBar;
    if ( !v16 )
      goto LABEL_21;
    onChange = v16->fields.onChange;
    v18 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v18, (Il2CppObject *)this, Method_UITextList_OnScrollBar__, 0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v19);
    EventDelegate__Add(onChange, v18, 0);
  }
  v14 = *p_textLabel;
  if ( !*p_textLabel )
LABEL_21:
    sub_2213CDC(v14, v15);
  UILabel__set_overflowMethod(v14, 1, 0);
  v14 = this->fields.textLabel;
  if ( this->fields.style != 1 )
  {
    if ( v14 )
    {
      v20 = 0.0;
      v21 = 0;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
  if ( !v14 )
    goto LABEL_21;
  v20 = 1.0;
  v21 = 6;
LABEL_20:
  UIWidget__set_pivot((UIWidget_o *)v14, v21, 0);
  UITextList__set_scrollValue(this, v20, v22);
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
      sub_2213CDC(isValid, v4);
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
  float mHeight; // s9
  __int64 v6; // x1
  float lineHeight; // s8
  float v8; // s8
  int v9; // w22
  float mScroll; // s9
  int v11; // w21
  float v12; // s8
  float v13; // s9
  double v14; // d8
  double v15; // d0
  double v16; // d0
  double v17; // d1
  System_String_o *v18; // x1
  double v19; // d1
  double v20; // d8
  System_Text_StringBuilder_o *v21; // x20
  struct BetterList_UITextList_Paragraph__o *mParagraphs; // x8
  int size; // w23
  unsigned __int64 v24; // x24
  int v25; // w26
  struct BetterList_UITextList_Paragraph__o *v26; // x8
  struct UITextList_Paragraph_array *buffer; // x8
  UITextList_Paragraph_o *v28; // x27
  struct System_String_array *lines; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v31; // x28
  unsigned __int64 v32; // x29
  struct System_String_array *v33; // x8
  System_String_o *v34; // x21
  struct UILabel_o *v35; // x19
  double iptr; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_59752D1 & 1) == 0 )
  {
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59752D1 = 1;
  }
  if ( UITextList__get_isValid(this, method) )
  {
    textLabel = this->fields.textLabel;
    if ( !this->fields.mTotalLines )
    {
      if ( !textLabel )
        goto LABEL_59;
      v18 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_58:
      UILabel__set_text(textLabel, v18, 0);
      return;
    }
    if ( !textLabel )
      goto LABEL_59;
    mHeight = (float)textLabel->fields.mHeight;
    lineHeight = UITextList__get_lineHeight(this, v3);
    if ( !byte_5969ADF )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADF = 1;
    }
    v8 = mHeight / lineHeight;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v9 = vcvtms_s32_f32(v8);
    mScroll = this->fields.mScroll;
    if ( floorf(v8) == INFINITY )
      v11 = 0x80000000;
    else
      v11 = v9;
    v12 = (float)((this->fields.mTotalLines - v11) & ~((this->fields.mTotalLines - v11) >> 31));
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    v13 = mScroll * v12;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6);
    v14 = v13;
    v15 = modf(v13, &iptr);
    if ( v13 >= 0.0 )
    {
      if ( v15 == 0.5 )
      {
        v17 = 1.0;
        v16 = iptr;
LABEL_25:
        v19 = v16 + v17;
        if ( ((__int64)v16 & 1) != 0 )
          v20 = v19;
        else
          v20 = v16;
        goto LABEL_30;
      }
      v20 = floor(v14 + 0.5);
    }
    else
    {
      if ( v15 == -0.5 )
      {
        v16 = iptr;
        v17 = -1.0;
        goto LABEL_25;
      }
      v20 = ceil(v14 + -0.5);
    }
LABEL_30:
    v21 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0);
    mParagraphs = this->fields.mParagraphs;
    if ( !mParagraphs )
      goto LABEL_59;
    if ( v11 >= 1 )
    {
      size = mParagraphs->fields.size;
      if ( size >= 1 )
      {
        v24 = 0;
        if ( v20 == INFINITY )
          v25 = 0;
        else
          v25 = (int)v20 & ~((int)v20 >> 31);
        while ( 1 )
        {
          v26 = this->fields.mParagraphs;
          if ( !v26 )
            goto LABEL_59;
          buffer = v26->fields.buffer;
          if ( !buffer )
            goto LABEL_59;
          if ( v24 >= LODWORD(buffer->max_length) )
LABEL_60:
            sub_2213CE4(textLabel);
          v28 = buffer->m_Items[v24];
          if ( !v28 )
            goto LABEL_59;
          lines = v28->fields.lines;
          if ( !lines )
            goto LABEL_59;
          max_length = lines->max_length;
          if ( (int)max_length >= 1 )
            break;
LABEL_53:
          if ( v9 >= 1 && (int)++v24 < size )
            continue;
          goto LABEL_55;
        }
        v31 = 0;
        v32 = (unsigned int)max_length;
        while ( 1 )
        {
          v33 = v28->fields.lines;
          if ( !v33 )
            break;
          if ( v31 >= LODWORD(v33->max_length) )
            goto LABEL_60;
          if ( v25 < 1 )
          {
            if ( !v21 )
              break;
            v34 = v33->m_Items[v31];
            if ( System_Text_StringBuilder__get_Length(v21, 0) >= 1 )
              System_Text_StringBuilder__Append_75735064(v21, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
            textLabel = (UILabel_o *)System_Text_StringBuilder__Append_75735064(v21, v34, 0);
            if ( !--v9 )
              goto LABEL_53;
          }
          else
          {
            --v25;
            if ( !v9 )
              goto LABEL_53;
          }
          if ( ++v31 >= v32 )
            goto LABEL_53;
        }
LABEL_59:
        sub_2213CDC(textLabel, v3);
      }
    }
LABEL_55:
    if ( !v21 )
      goto LABEL_59;
    v35 = this->fields.textLabel;
    textLabel = (UILabel_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v21->klass->vtable._3_ToString.methodPtr)(
                               v21,
                               v21->klass->vtable._3_ToString.method);
    if ( !v35 )
      goto LABEL_59;
    v18 = (System_String_o *)textLabel;
    textLabel = v35;
    goto LABEL_58;
  }
}


bool UITextList__get_isValid(UITextList_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *textLabel; // x20
  __int64 v4; // x1
  UILabel_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *ambigiousFont; // x19

  if ( (byte_59752C9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752C9 = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(textLabel, 0, 0) )
    return 0;
  v5 = this->fields.textLabel;
  if ( !v5 )
    sub_2213CDC(0, v4);
  ambigiousFont = UILabel__get_ambigiousFont(v5, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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

  if ( (byte_59752CB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752CB = 1;
  }
  textLabel = (UnityEngine_Object_o *)this->fields.textLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(textLabel, 0, 0);
  result = 20.0;
  if ( v4 )
  {
    v7 = this->fields.textLabel;
    if ( !v7 )
      sub_2213CDC(0, v5);
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
  float mHeight; // s9
  __int64 v7; // x1
  float lineHeight; // s8
  float v9; // s8
  unsigned int v10; // w9
  unsigned int v11; // w8

  isValid = UITextList__get_isValid(this, method);
  if ( !isValid )
    return 0;
  textLabel = this->fields.textLabel;
  if ( !textLabel )
    sub_2213CDC(isValid, v4);
  mHeight = (float)textLabel->fields.mHeight;
  lineHeight = UITextList__get_lineHeight(this, v4);
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  v9 = mHeight / lineHeight;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7);
  v10 = vcvtms_s32_f32(v9);
  if ( floorf(v9) == INFINITY )
    v11 = 0x80000000;
  else
    v11 = v10;
  return (this->fields.mTotalLines - v11) & ~((int)(this->fields.mTotalLines - v11) >> 31);
}


float UITextList__get_scrollValue(UITextList_o *this, const MethodInfo *method)
{
  return this->fields.mScroll;
}


void UITextList__set_scrollValue(UITextList_o *this, float value, const MethodInfo *method)
{
  float v5; // s0
  float v6; // s8
  __int64 v7; // x1
  UnityEngine_Object_o *scrollBar; // x20
  const MethodInfo *v9; // x1
  UIProgressBar_o *v10; // x0

  if ( (byte_59752CA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752CA = 1;
  }
  v5 = 1.0;
  if ( value <= 1.0 )
    v5 = value;
  if ( value >= 0.0 )
    v6 = v5;
  else
    v6 = 0.0;
  if ( UITextList__get_isValid(this, method) && this->fields.mScroll != v6 )
  {
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      v10 = this->fields.scrollBar;
      if ( !v10 )
        sub_2213CDC(0, v9);
      UIProgressBar__set_value(v10, v6, 0);
    }
    else
    {
      this->fields.mScroll = v6;
      UITextList__UpdateVisibleText(this, v9);
    }
  }
}


void UITextList_Paragraph___ctor(UITextList_Paragraph_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}