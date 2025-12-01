void TypewriterEffect___ctor(TypewriterEffect_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BetterList_TypewriterEffect_FadeEntry__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCBA6B & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_TypewriterEffect_FadeEntry___ctor__);
    sub_1C713B0(&BetterList_TypewriterEffect_FadeEntry__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCBA6B = 1;
  }
  this->fields.charsPerSecond = 20;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onFinished, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.mFullText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mFullText, v10, v11, v12, v13, v14, v15, v16);
  this->fields.mReset = 1;
  v17 = (BetterList_TypewriterEffect_FadeEntry__o *)sub_1C715FC(BetterList_TypewriterEffect_FadeEntry__TypeInfo);
  BetterList_TypewriterEffect_FadeEntry____ctor(
    v17,
    (const MethodInfo_3386E30 *)Method_BetterList_TypewriterEffect_FadeEntry___ctor__);
  this->fields.mFade = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mFade, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TypewriterEffect__Finish(TypewriterEffect_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TypewriterEffect_o *v8; // x19
  _BOOL4 mReset; // w8
  struct System_String_o *mFullText; // x8
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x19
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  v8 = this;
  if ( (byte_4CCBA69 & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (TypewriterEffect_o *)sub_1C713B0(&TypewriterEffect_TypeInfo);
    byte_4CCBA69 = 1;
  }
  if ( v8->fields.mActive )
  {
    mReset = v8->fields.mReset;
    v8->fields.mActive = 0;
    if ( !mReset )
    {
      mFullText = v8->fields.mFullText;
      if ( !mFullText )
        goto LABEL_19;
      this = (TypewriterEffect_o *)v8->fields.mFade;
      v8->fields.mCurrentOffset = mFullText->fields._stringLength;
      if ( !this )
        goto LABEL_19;
      BetterList_TypewriterEffect_FadeEntry___Clear(
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        (const MethodInfo_33863CC *)Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
      this = (TypewriterEffect_o *)v8->fields.mLabel;
      if ( !this )
        goto LABEL_19;
      UILabel__set_text((UILabel_o *)this, v8->fields.mFullText, 0);
    }
    if ( !v8->fields.keepFullDimensions )
      goto LABEL_15;
    scrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      goto LABEL_15;
    this = (TypewriterEffect_o *)v8->fields.scrollView;
    if ( this )
    {
      UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
LABEL_15:
      TypewriterEffect_TypeInfo->static_fields->current = v8;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        (int32_t)v8,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      onFinished = v8->fields.onFinished;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49587556(onFinished, 0);
      TypewriterEffect_TypeInfo->static_fields->current = 0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      return;
    }
LABEL_19:
    sub_1C71608(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TypewriterEffect_o *v8; // x19
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *processedText; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *scrollView; // x20
  struct System_String_o *mFullText; // x8
  int32_t *p_mCurrentOffset; // x20
  float mNextChar; // s10
  int charsPerSecond; // w8
  int32_t mCurrentOffset; // w22
  System_String_o *v29; // x23
  int v30; // w9
  int m_CachedPtr; // w8
  float v32; // s10
  uint16_t Chars; // w0
  float delayOnNewLine; // s0
  float time; // s0
  float fadeInTime; // s1
  UILabel_o *mLabel; // x22
  _BOOL4 keepFullDimensions; // w24
  System_String_o *v39; // x23
  System_String_o *v40; // x0
  UnityEngine_Object_o *v41; // x22
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  uint16_t v48; // w24
  int32_t v49; // w23
  int32_t v50; // w21
  int32_t m_CancellationTokenSource; // w8
  float alpha; // s9
  unsigned int v53; // w27
  float deltaTime; // s0
  float v55; // s0
  System_Text_StringBuilder_o *v56; // x21
  int32_t v57; // w22
  System_String_o *text; // x23
  float v59; // s8
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  struct System_String_o *v62; // x8
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  UILabel_o *v70; // x21
  _BOOL4 v71; // w23
  System_String_o *v72; // x22
  System_String_o *v73; // x0
  System_String_o *v74; // x1
  UILabel_o *v75; // x0
  UILabel_o *v76; // x19
  __int128 v77; // [xsp+20h] [xbp-C0h]
  TypewriterEffect_FadeEntry_o v78; // [xsp+38h] [xbp-A8h] BYREF
  TypewriterEffect_FadeEntry_o length; // [xsp+50h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_4CCBA6A & 1) == 0 )
  {
    sub_1C713B0(&Method_BetterList_TypewriterEffect_FadeEntry__Add__);
    sub_1C713B0(&Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    sub_1C713B0(&Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt__);
    sub_1C713B0(&Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
    sub_1C713B0(&Method_BetterList_TypewriterEffect_FadeEntry__set_Item__);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&NGUIText_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    sub_1C713B0(&TypewriterEffect_TypeInfo);
    this = (TypewriterEffect_o *)sub_1C713B0(&StringLiteral_15845/*"[00]"*/);
    byte_4CCBA6A = 1;
  }
  memset(&v78, 0, sizeof(v78));
  if ( !v8->fields.mActive )
    return;
  if ( v8->fields.mReset )
  {
    v8->fields.mCurrentOffset = 0;
    v8->fields.mReset = 0;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v8,
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v8->fields.mLabel = (struct UILabel_o *)Component_object;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v8->fields.mLabel,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this = (TypewriterEffect_o *)v8->fields.mLabel;
    if ( !this )
      goto LABEL_107;
    processedText = UILabel__get_processedText((UILabel_o *)this, 0);
    v8->fields.mFullText = processedText;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&v8->fields.mFullText,
      (int32_t)processedText,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this = (TypewriterEffect_o *)v8->fields.mFade;
    if ( !this )
      goto LABEL_107;
    BetterList_TypewriterEffect_FadeEntry___Clear(
      (BetterList_TypewriterEffect_FadeEntry__o *)this,
      (const MethodInfo_33863CC *)Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    if ( v8->fields.keepFullDimensions )
    {
      scrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TypewriterEffect_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (TypewriterEffect_o *)v8->fields.scrollView;
        if ( !this )
          goto LABEL_107;
        UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
      }
    }
  }
  mFullText = v8->fields.mFullText;
  if ( !mFullText )
    goto LABEL_107;
  p_mCurrentOffset = &v8->fields.mCurrentOffset;
  while ( *p_mCurrentOffset < mFullText->fields._stringLength )
  {
    mNextChar = v8->fields.mNextChar;
    if ( mNextChar > RealTime__get_time(0) )
      break;
    charsPerSecond = v8->fields.charsPerSecond;
    mCurrentOffset = v8->fields.mCurrentOffset;
    if ( charsPerSecond <= 1 )
      charsPerSecond = 1;
    v8->fields.charsPerSecond = charsPerSecond;
    do
    {
      v29 = v8->fields.mFullText;
      if ( !NGUIText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
    }
    while ( NGUIText__ParseSymbol(v29, &v8->fields.mCurrentOffset, 0) );
    this = (TypewriterEffect_o *)v8->fields.mFullText;
    v30 = v8->fields.mCurrentOffset + 1;
    v8->fields.mCurrentOffset = v30;
    if ( !this )
      goto LABEL_107;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( v30 > m_CachedPtr )
      break;
    v32 = 1.0 / (float)v8->fields.charsPerSecond;
    if ( mCurrentOffset >= m_CachedPtr
      || (Chars = System_String__get_Chars((System_String_o *)this, mCurrentOffset, 0), Chars == 10) )
    {
      delayOnNewLine = v8->fields.delayOnNewLine;
      goto LABEL_28;
    }
    v48 = Chars;
    this = (TypewriterEffect_o *)v8->fields.mFullText;
    if ( !this )
      goto LABEL_107;
    v49 = mCurrentOffset + 1;
    if ( mCurrentOffset + 1 == LODWORD(this->fields.m_CachedPtr)
      || System_String__get_Chars((System_String_o *)this, v49, 0) <= 0x20u )
    {
      if ( v48 == 33 || v48 == 63 )
        goto LABEL_60;
      if ( v48 == 46 )
      {
        this = (TypewriterEffect_o *)v8->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        if ( mCurrentOffset + 2 >= SLODWORD(this->fields.m_CachedPtr)
          || System_String__get_Chars((System_String_o *)this, v49, 0) != 46 )
        {
          goto LABEL_60;
        }
        this = (TypewriterEffect_o *)v8->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        if ( System_String__get_Chars((System_String_o *)this, mCurrentOffset + 2, 0) == 46 )
        {
          mCurrentOffset += 2;
          delayOnNewLine = v8->fields.delayOnPeriod * 3.0;
        }
        else
        {
LABEL_60:
          delayOnNewLine = v8->fields.delayOnPeriod;
        }
LABEL_28:
        v32 = v32 + delayOnNewLine;
      }
    }
    time = v8->fields.mNextChar;
    if ( time == 0.0 )
      time = RealTime__get_time(0);
    fadeInTime = v8->fields.fadeInTime;
    v8->fields.mNextChar = v32 + time;
    if ( fadeInTime == 0.0 )
    {
      this = (TypewriterEffect_o *)v8->fields.mFullText;
      if ( !this )
        goto LABEL_107;
      mLabel = v8->fields.mLabel;
      keepFullDimensions = v8->fields.keepFullDimensions;
      this = (TypewriterEffect_o *)System_String__Substring_64077664(
                                     (System_String_o *)this,
                                     0,
                                     v8->fields.mCurrentOffset,
                                     0);
      v39 = (System_String_o *)this;
      if ( keepFullDimensions )
      {
        this = (TypewriterEffect_o *)v8->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        v40 = System_String__Substring((System_String_o *)this, *p_mCurrentOffset, 0);
        this = (TypewriterEffect_o *)System_String__Concat_64069988(v39, (System_String_o *)StringLiteral_15845/*"[00]"*/, v40, 0);
        v39 = (System_String_o *)this;
      }
      if ( !mLabel )
        goto LABEL_107;
      UILabel__set_text(mLabel, v39, 0);
      if ( !v8->fields.keepFullDimensions )
      {
        v41 = (UnityEngine_Object_o *)v8->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TypewriterEffect_o *)UnityEngine_Object__op_Inequality(v41, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (TypewriterEffect_o *)v8->fields.scrollView;
          if ( !this )
            goto LABEL_107;
          UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
        }
      }
    }
    else
    {
      *(_QWORD *)&v78.fields.alpha = 0;
      *(_OWORD *)&v78.fields.index = (unsigned int)mCurrentOffset;
      this = (TypewriterEffect_o *)v8->fields.mFullText;
      if ( !this )
        goto LABEL_107;
      v78.fields.text = System_String__Substring_64077664(
                          (System_String_o *)this,
                          mCurrentOffset,
                          v8->fields.mCurrentOffset - mCurrentOffset,
                          0);
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v78.fields.text,
        (int32_t)v78.fields.text,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      this = (TypewriterEffect_o *)v8->fields.mFade;
      if ( !this )
        goto LABEL_107;
      length = v78;
      BetterList_TypewriterEffect_FadeEntry___Add(
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        &length,
        (const MethodInfo_33863E4 *)Method_BetterList_TypewriterEffect_FadeEntry__Add__);
    }
    mFullText = v8->fields.mFullText;
    if ( !mFullText )
      goto LABEL_107;
  }
  this = (TypewriterEffect_o *)v8->fields.mFade;
  if ( !this )
    goto LABEL_107;
  if ( LODWORD(this->fields.m_CancellationTokenSource) )
  {
    v50 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
      if ( v50 >= m_CancellationTokenSource )
        break;
      BetterList_TypewriterEffect_FadeEntry___get_Item(
        &length,
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        v50,
        (const MethodInfo_3386134 *)Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
      alpha = length.fields.alpha;
      v53 = *((_DWORD *)&length.fields.alpha + 1);
      v77 = *(_OWORD *)&length.fields.index;
      deltaTime = RealTime__get_deltaTime(0);
      this = (TypewriterEffect_o *)v8->fields.mFade;
      v55 = alpha + (float)(deltaTime / v8->fields.fadeInTime);
      if ( v55 < 1.0 )
      {
        if ( !this )
          goto LABEL_107;
        *(_QWORD *)&length.fields.alpha = __PAIR64__(v53, LODWORD(v55));
        *(_OWORD *)&length.fields.index = v77;
        BetterList_TypewriterEffect_FadeEntry___set_Item(
          (BetterList_TypewriterEffect_FadeEntry__o *)this,
          v50,
          &length,
          (const MethodInfo_3386174 *)Method_BetterList_TypewriterEffect_FadeEntry__set_Item__);
        this = (TypewriterEffect_o *)v8->fields.mFade;
        ++v50;
        if ( !this )
          goto LABEL_107;
      }
      else
      {
        if ( !this )
          goto LABEL_107;
        BetterList_TypewriterEffect_FadeEntry___RemoveAt(
          (BetterList_TypewriterEffect_FadeEntry__o *)this,
          v50,
          (const MethodInfo_3386A60 *)Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt__);
        this = (TypewriterEffect_o *)v8->fields.mFade;
        if ( !this )
          goto LABEL_107;
      }
    }
    if ( m_CancellationTokenSource )
    {
      v56 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v56, 0);
      this = (TypewriterEffect_o *)v8->fields.mFade;
      if ( !this )
        goto LABEL_107;
      v57 = 0;
      while ( v57 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (TypewriterEffect_o *)BetterList_TypewriterEffect_FadeEntry___get_Item(
                                       &length,
                                       (BetterList_TypewriterEffect_FadeEntry__o *)this,
                                       v57,
                                       (const MethodInfo_3386134 *)Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
        text = length.fields.text;
        v59 = length.fields.alpha;
        if ( v57 )
        {
          if ( !v56 )
            goto LABEL_107;
        }
        else
        {
          this = (TypewriterEffect_o *)v8->fields.mFullText;
          if ( !this )
            goto LABEL_107;
          this = (TypewriterEffect_o *)System_String__Substring_64077664(
                                         (System_String_o *)this,
                                         0,
                                         length.fields.index,
                                         0);
          if ( !v56 )
            goto LABEL_107;
          System_Text_StringBuilder__Append_64115684(v56, (System_String_o *)this, 0);
        }
        System_Text_StringBuilder__Append_64118012(v56, 0x5Bu, 0);
        if ( !NGUIText_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo);
        v60 = NGUIText__EncodeAlpha(v59, 0);
        System_Text_StringBuilder__Append_64115684(v56, v60, 0);
        System_Text_StringBuilder__Append_64118012(v56, 0x5Du, 0);
        System_Text_StringBuilder__Append_64115684(v56, text, 0);
        this = (TypewriterEffect_o *)v8->fields.mFade;
        ++v57;
        if ( !this )
          goto LABEL_107;
      }
      if ( v8->fields.keepFullDimensions )
      {
        if ( v56 )
        {
          System_Text_StringBuilder__Append_64115684(v56, (System_String_o *)StringLiteral_15845/*"[00]"*/, 0);
          this = (TypewriterEffect_o *)v8->fields.mFullText;
          if ( this )
          {
            v61 = System_String__Substring((System_String_o *)this, *p_mCurrentOffset, 0);
            System_Text_StringBuilder__Append_64115684(v56, v61, 0);
            goto LABEL_101;
          }
        }
        goto LABEL_107;
      }
      if ( !v56 )
        goto LABEL_107;
LABEL_101:
      v76 = v8->fields.mLabel;
      this = (TypewriterEffect_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v56->klass->vtable._3_ToString.methodPtr)(
                                     v56,
                                     v56->klass->vtable._3_ToString.method);
      if ( !v76 )
LABEL_107:
        sub_1C71608(this, method);
      v74 = (System_String_o *)this;
      v75 = v76;
    }
    else
    {
      this = (TypewriterEffect_o *)v8->fields.mFullText;
      if ( !this )
        goto LABEL_107;
      v70 = v8->fields.mLabel;
      v71 = v8->fields.keepFullDimensions;
      this = (TypewriterEffect_o *)System_String__Substring_64077664(
                                     (System_String_o *)this,
                                     0,
                                     v8->fields.mCurrentOffset,
                                     0);
      v72 = (System_String_o *)this;
      if ( v71 )
      {
        this = (TypewriterEffect_o *)v8->fields.mFullText;
        if ( !this )
          goto LABEL_107;
        v73 = System_String__Substring((System_String_o *)this, *p_mCurrentOffset, 0);
        this = (TypewriterEffect_o *)System_String__Concat_64069988(v72, (System_String_o *)StringLiteral_15845/*"[00]"*/, v73, 0);
        if ( !v70 )
          goto LABEL_107;
        v74 = (System_String_o *)this;
        v75 = v70;
      }
      else
      {
        if ( !v70 )
          goto LABEL_107;
        v75 = v70;
        v74 = v72;
      }
    }
    UILabel__set_text(v75, v74, 0);
  }
  else
  {
    v62 = v8->fields.mFullText;
    if ( !v62 )
      goto LABEL_107;
    if ( *p_mCurrentOffset == v62->fields._stringLength )
    {
      TypewriterEffect_TypeInfo->static_fields->current = v8;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        (int32_t)v8,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      onFinished = v8->fields.onFinished;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49587556(onFinished, 0);
      TypewriterEffect_TypeInfo->static_fields->current = 0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        0,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      v8->fields.mActive = 0;
    }
  }
}


bool TypewriterEffect__get_isActive(TypewriterEffect_o *this, const MethodInfo *method)
{
  return this->fields.mActive;
}