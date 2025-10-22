void TypewriterEffect___ctor(TypewriterEffect_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BetterList_TypewriterEffect_FadeEntry__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5B335 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_TypewriterEffect_FadeEntry___ctor__);
    sub_1C3E564(&BetterList_TypewriterEffect_FadeEntry__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B335 = 1;
  }
  this->fields.charsPerSecond = 20;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onFinished, (int32_t)v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.mFullText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mFullText, v6, v7, v8);
  this->fields.mReset = 1;
  v9 = (BetterList_TypewriterEffect_FadeEntry__o *)sub_1C3E7B0(BetterList_TypewriterEffect_FadeEntry__TypeInfo);
  BetterList_TypewriterEffect_FadeEntry____ctor(
    v9,
    (const MethodInfo_33315F0 *)Method_BetterList_TypewriterEffect_FadeEntry___ctor__);
  this->fields.mFade = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mFade, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TypewriterEffect__Finish(TypewriterEffect_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TypewriterEffect_o *v4; // x19
  _BOOL4 mReset; // w8
  struct System_String_o *mFullText; // x8
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4C5B333 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (TypewriterEffect_o *)sub_1C3E564(&TypewriterEffect_TypeInfo);
    byte_4C5B333 = 1;
  }
  if ( v4->fields.mActive )
  {
    mReset = v4->fields.mReset;
    v4->fields.mActive = 0;
    if ( !mReset )
    {
      mFullText = v4->fields.mFullText;
      if ( !mFullText )
        goto LABEL_19;
      this = (TypewriterEffect_o *)v4->fields.mFade;
      v4->fields.mCurrentOffset = mFullText->fields._stringLength;
      if ( !this )
        goto LABEL_19;
      BetterList_TypewriterEffect_FadeEntry___Clear(
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        (const MethodInfo_3330B8C *)Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
      this = (TypewriterEffect_o *)v4->fields.mLabel;
      if ( !this )
        goto LABEL_19;
      UILabel__set_text((UILabel_o *)this, v4->fields.mFullText, 0);
    }
    if ( !v4->fields.keepFullDimensions )
      goto LABEL_15;
    scrollView = (UnityEngine_Object_o *)v4->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      goto LABEL_15;
    this = (TypewriterEffect_o *)v4->fields.scrollView;
    if ( this )
    {
      UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
LABEL_15:
      TypewriterEffect_TypeInfo->static_fields->current = v4;
      sub_1C3E508((CGThumbnailListItem_o *)TypewriterEffect_TypeInfo->static_fields, (int32_t)v4, v2, v3);
      onFinished = v4->fields.onFinished;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49293740(onFinished, 0);
      TypewriterEffect_TypeInfo->static_fields->current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)TypewriterEffect_TypeInfo->static_fields, 0, v9, v10);
      return;
    }
LABEL_19:
    sub_1C3E7C0(this, method);
  }
}


void TypewriterEffect__OnEnable(TypewriterEffect_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.mReset = 257;
}


void TypewriterEffect__ResetToBeginning(TypewriterEffect_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TypewriterEffect__Finish(this, method);
  *(_WORD *)&this->fields.mReset = 257;
  *(_QWORD *)&this->fields.mCurrentOffset = 0;
  TypewriterEffect__Update(this, v3);
}


void TypewriterEffect__Update(TypewriterEffect_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  TypewriterEffect_o *v4; // x19
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *processedText; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *scrollView; // x20
  struct System_String_o *mFullText; // x8
  int32_t *p_mCurrentOffset; // x20
  float mNextChar; // s10
  int charsPerSecond; // w8
  int32_t mCurrentOffset; // w22
  System_String_o *v17; // x23
  int v18; // w9
  int m_CachedPtr; // w8
  float v20; // s10
  uint16_t Chars; // w0
  float delayOnNewLine; // s0
  float time; // s0
  float fadeInTime; // s1
  UILabel_o *mLabel; // x22
  _BOOL4 keepFullDimensions; // w24
  System_String_o *v27; // x23
  System_String_o *v28; // x0
  UnityEngine_Object_o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  uint16_t v32; // w24
  int32_t v33; // w23
  int32_t v34; // w21
  int32_t m_CancellationTokenSource; // w8
  float alpha; // s9
  unsigned int v37; // w27
  float deltaTime; // s0
  float v39; // s0
  System_Text_StringBuilder_o *v40; // x21
  int32_t v41; // w22
  System_String_o *text; // x23
  float v43; // s8
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  struct System_String_o *v46; // x8
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  UILabel_o *v50; // x21
  _BOOL4 v51; // w23
  System_String_o *v52; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x1
  UILabel_o *v55; // x0
  UILabel_o *v56; // x19
  __int128 v57; // [xsp+20h] [xbp-C0h]
  TypewriterEffect_FadeEntry_o v58; // [xsp+38h] [xbp-A8h] BYREF
  TypewriterEffect_FadeEntry_o length; // [xsp+50h] [xbp-90h] BYREF

  v4 = this;
  if ( (byte_4C5B334 & 1) == 0 )
  {
    sub_1C3E564(&Method_BetterList_TypewriterEffect_FadeEntry__Add__);
    sub_1C3E564(&Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    sub_1C3E564(&Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt__);
    sub_1C3E564(&Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
    sub_1C3E564(&Method_BetterList_TypewriterEffect_FadeEntry__set_Item__);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&NGUIText_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&TypewriterEffect_TypeInfo);
    this = (TypewriterEffect_o *)sub_1C3E564(&StringLiteral_15851/*"[00]"*/);
    byte_4C5B334 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  if ( !v4->fields.mActive )
    return;
  if ( v4->fields.mReset )
  {
    v4->fields.mCurrentOffset = 0;
    v4->fields.mReset = 0;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v4,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v4->fields.mLabel = (struct UILabel_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.mLabel, (int32_t)Component_object, v6, v7);
    this = (TypewriterEffect_o *)v4->fields.mLabel;
    if ( !this )
      goto LABEL_107;
    processedText = UILabel__get_processedText((UILabel_o *)this, 0);
    v4->fields.mFullText = processedText;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.mFullText, (int32_t)processedText, v9, v10);
    this = (TypewriterEffect_o *)v4->fields.mFade;
    if ( !this )
      goto LABEL_107;
    BetterList_TypewriterEffect_FadeEntry___Clear(
      (BetterList_TypewriterEffect_FadeEntry__o *)this,
      (const MethodInfo_3330B8C *)Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    if ( v4->fields.keepFullDimensions )
    {
      scrollView = (UnityEngine_Object_o *)v4->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TypewriterEffect_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (TypewriterEffect_o *)v4->fields.scrollView;
        if ( !this )
          goto LABEL_107;
        UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
      }
    }
  }
  mFullText = v4->fields.mFullText;
  if ( !mFullText )
    goto LABEL_107;
  p_mCurrentOffset = &v4->fields.mCurrentOffset;
  while ( *p_mCurrentOffset < mFullText->fields._stringLength )
  {
    mNextChar = v4->fields.mNextChar;
    if ( mNextChar > RealTime__get_time(0) )
      break;
    charsPerSecond = v4->fields.charsPerSecond;
    mCurrentOffset = v4->fields.mCurrentOffset;
    if ( charsPerSecond <= 1 )
      charsPerSecond = 1;
    v4->fields.charsPerSecond = charsPerSecond;
    do
    {
      v17 = v4->fields.mFullText;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    }
    while ( NGUIText__ParseSymbol(v17, &v4->fields.mCurrentOffset, 0) );
    this = (TypewriterEffect_o *)v4->fields.mFullText;
    v18 = v4->fields.mCurrentOffset + 1;
    v4->fields.mCurrentOffset = v18;
    if ( !this )
      goto LABEL_107;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( v18 > m_CachedPtr )
      break;
    v20 = 1.0 / (float)v4->fields.charsPerSecond;
    if ( mCurrentOffset >= m_CachedPtr
      || (Chars = System_String__get_Chars((System_String_o *)this, mCurrentOffset, 0), Chars == 10) )
    {
      delayOnNewLine = v4->fields.delayOnNewLine;
      goto LABEL_28;
    }
    v32 = Chars;
    this = (TypewriterEffect_o *)v4->fields.mFullText;
    if ( !this )
      goto LABEL_107;
    v33 = mCurrentOffset + 1;
    if ( mCurrentOffset + 1 == LODWORD(this->fields.m_CachedPtr)
      || System_String__get_Chars((System_String_o *)this, v33, 0) <= 0x20u )
    {
      if ( v32 == 33 || v32 == 63 )
        goto LABEL_60;
      if ( v32 == 46 )
      {
        this = (TypewriterEffect_o *)v4->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        if ( mCurrentOffset + 2 >= SLODWORD(this->fields.m_CachedPtr)
          || System_String__get_Chars((System_String_o *)this, v33, 0) != 46 )
        {
          goto LABEL_60;
        }
        this = (TypewriterEffect_o *)v4->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        if ( System_String__get_Chars((System_String_o *)this, mCurrentOffset + 2, 0) == 46 )
        {
          mCurrentOffset += 2;
          delayOnNewLine = v4->fields.delayOnPeriod * 3.0;
        }
        else
        {
LABEL_60:
          delayOnNewLine = v4->fields.delayOnPeriod;
        }
LABEL_28:
        v20 = v20 + delayOnNewLine;
      }
    }
    time = v4->fields.mNextChar;
    if ( time == 0.0 )
      time = RealTime__get_time(0);
    fadeInTime = v4->fields.fadeInTime;
    v4->fields.mNextChar = v20 + time;
    if ( fadeInTime == 0.0 )
    {
      this = (TypewriterEffect_o *)v4->fields.mFullText;
      if ( !this )
        goto LABEL_107;
      mLabel = v4->fields.mLabel;
      keepFullDimensions = v4->fields.keepFullDimensions;
      this = (TypewriterEffect_o *)System_String__Substring_63682392(
                                     (System_String_o *)this,
                                     0,
                                     v4->fields.mCurrentOffset,
                                     0);
      v27 = (System_String_o *)this;
      if ( keepFullDimensions )
      {
        this = (TypewriterEffect_o *)v4->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        v28 = System_String__Substring((System_String_o *)this, *p_mCurrentOffset, 0);
        this = (TypewriterEffect_o *)System_String__Concat_63674716(v27, (System_String_o *)StringLiteral_15851/*"[00]"*/, v28, 0);
        v27 = (System_String_o *)this;
      }
      if ( !mLabel )
        goto LABEL_107;
      UILabel__set_text(mLabel, v27, 0);
      if ( !v4->fields.keepFullDimensions )
      {
        v29 = (UnityEngine_Object_o *)v4->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TypewriterEffect_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (TypewriterEffect_o *)v4->fields.scrollView;
          if ( !this )
            goto LABEL_107;
          UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
        }
      }
    }
    else
    {
      *(_QWORD *)&v58.fields.alpha = 0;
      *(_OWORD *)&v58.fields.index = (unsigned int)mCurrentOffset;
      this = (TypewriterEffect_o *)v4->fields.mFullText;
      if ( !this )
        goto LABEL_107;
      v58.fields.text = System_String__Substring_63682392(
                          (System_String_o *)this,
                          mCurrentOffset,
                          v4->fields.mCurrentOffset - mCurrentOffset,
                          0);
      sub_1C3E508((CGThumbnailListItem_o *)&v58.fields.text, (int32_t)v58.fields.text, v30, v31);
      this = (TypewriterEffect_o *)v4->fields.mFade;
      if ( !this )
        goto LABEL_107;
      length = v58;
      BetterList_TypewriterEffect_FadeEntry___Add(
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        &length,
        (const MethodInfo_3330BA4 *)Method_BetterList_TypewriterEffect_FadeEntry__Add__);
    }
    mFullText = v4->fields.mFullText;
    if ( !mFullText )
      goto LABEL_107;
  }
  this = (TypewriterEffect_o *)v4->fields.mFade;
  if ( !this )
    goto LABEL_107;
  if ( LODWORD(this->fields.m_CancellationTokenSource) )
  {
    v34 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
      if ( v34 >= m_CancellationTokenSource )
        break;
      BetterList_TypewriterEffect_FadeEntry___get_Item(
        &length,
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        v34,
        (const MethodInfo_33308F4 *)Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
      alpha = length.fields.alpha;
      v37 = *((_DWORD *)&length.fields.alpha + 1);
      v57 = *(_OWORD *)&length.fields.index;
      deltaTime = RealTime__get_deltaTime(0);
      this = (TypewriterEffect_o *)v4->fields.mFade;
      v39 = alpha + (float)(deltaTime / v4->fields.fadeInTime);
      if ( v39 < 1.0 )
      {
        if ( !this )
          goto LABEL_107;
        *(_QWORD *)&length.fields.alpha = __PAIR64__(v37, LODWORD(v39));
        *(_OWORD *)&length.fields.index = v57;
        BetterList_TypewriterEffect_FadeEntry___set_Item(
          (BetterList_TypewriterEffect_FadeEntry__o *)this,
          v34,
          &length,
          (const MethodInfo_3330934 *)Method_BetterList_TypewriterEffect_FadeEntry__set_Item__);
        this = (TypewriterEffect_o *)v4->fields.mFade;
        ++v34;
        if ( !this )
          goto LABEL_107;
      }
      else
      {
        if ( !this )
          goto LABEL_107;
        BetterList_TypewriterEffect_FadeEntry___RemoveAt(
          (BetterList_TypewriterEffect_FadeEntry__o *)this,
          v34,
          (const MethodInfo_3331220 *)Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt__);
        this = (TypewriterEffect_o *)v4->fields.mFade;
        if ( !this )
          goto LABEL_107;
      }
    }
    if ( m_CancellationTokenSource )
    {
      v40 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v40, 0);
      this = (TypewriterEffect_o *)v4->fields.mFade;
      if ( !this )
        goto LABEL_107;
      v41 = 0;
      while ( v41 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (TypewriterEffect_o *)BetterList_TypewriterEffect_FadeEntry___get_Item(
                                       &length,
                                       (BetterList_TypewriterEffect_FadeEntry__o *)this,
                                       v41,
                                       (const MethodInfo_33308F4 *)Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
        text = length.fields.text;
        v43 = length.fields.alpha;
        if ( v41 )
        {
          if ( !v40 )
            goto LABEL_107;
        }
        else
        {
          this = (TypewriterEffect_o *)v4->fields.mFullText;
          if ( !this )
            goto LABEL_107;
          this = (TypewriterEffect_o *)System_String__Substring_63682392(
                                         (System_String_o *)this,
                                         0,
                                         length.fields.index,
                                         0);
          if ( !v40 )
            goto LABEL_107;
          System_Text_StringBuilder__Append_63721532(v40, (System_String_o *)this, 0);
        }
        System_Text_StringBuilder__Append_63723860(v40, 0x5Bu, 0);
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v44 = NGUIText__EncodeAlpha(v43, 0);
        System_Text_StringBuilder__Append_63721532(v40, v44, 0);
        System_Text_StringBuilder__Append_63723860(v40, 0x5Du, 0);
        System_Text_StringBuilder__Append_63721532(v40, text, 0);
        this = (TypewriterEffect_o *)v4->fields.mFade;
        ++v41;
        if ( !this )
          goto LABEL_107;
      }
      if ( v4->fields.keepFullDimensions )
      {
        if ( v40 )
        {
          System_Text_StringBuilder__Append_63721532(v40, (System_String_o *)StringLiteral_15851/*"[00]"*/, 0);
          this = (TypewriterEffect_o *)v4->fields.mFullText;
          if ( this )
          {
            v45 = System_String__Substring((System_String_o *)this, *p_mCurrentOffset, 0);
            System_Text_StringBuilder__Append_63721532(v40, v45, 0);
            goto LABEL_101;
          }
        }
        goto LABEL_107;
      }
      if ( !v40 )
        goto LABEL_107;
LABEL_101:
      v56 = v4->fields.mLabel;
      this = (TypewriterEffect_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v40->klass->vtable._3_ToString.methodPtr)(
                                     v40,
                                     v40->klass->vtable._3_ToString.method);
      if ( !v56 )
LABEL_107:
        sub_1C3E7C0(this, method);
      v54 = (System_String_o *)this;
      v55 = v56;
    }
    else
    {
      this = (TypewriterEffect_o *)v4->fields.mFullText;
      if ( !this )
        goto LABEL_107;
      v50 = v4->fields.mLabel;
      v51 = v4->fields.keepFullDimensions;
      this = (TypewriterEffect_o *)System_String__Substring_63682392(
                                     (System_String_o *)this,
                                     0,
                                     v4->fields.mCurrentOffset,
                                     0);
      v52 = (System_String_o *)this;
      if ( v51 )
      {
        this = (TypewriterEffect_o *)v4->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        v53 = System_String__Substring((System_String_o *)this, *p_mCurrentOffset, 0);
        this = (TypewriterEffect_o *)System_String__Concat_63674716(v52, (System_String_o *)StringLiteral_15851/*"[00]"*/, v53, 0);
        if ( !v50 )
          goto LABEL_107;
        v54 = (System_String_o *)this;
        v55 = v50;
      }
      else
      {
        if ( !v50 )
          goto LABEL_107;
        v55 = v50;
        v54 = v52;
      }
    }
    UILabel__set_text(v55, v54, 0);
  }
  else
  {
    v46 = v4->fields.mFullText;
    if ( !v46 )
      goto LABEL_107;
    if ( *p_mCurrentOffset == v46->fields._stringLength )
    {
      TypewriterEffect_TypeInfo->static_fields->current = v4;
      sub_1C3E508((CGThumbnailListItem_o *)TypewriterEffect_TypeInfo->static_fields, (int32_t)v4, v2, v3);
      onFinished = v4->fields.onFinished;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49293740(onFinished, 0);
      TypewriterEffect_TypeInfo->static_fields->current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)TypewriterEffect_TypeInfo->static_fields, 0, v48, v49);
      v4->fields.mActive = 0;
    }
  }
}


bool TypewriterEffect__get_isActive(TypewriterEffect_o *this, const MethodInfo *method)
{
  return this->fields.mActive;
}