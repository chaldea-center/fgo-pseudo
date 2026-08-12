void TypewriterEffect___ctor(TypewriterEffect_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BetterList_TypewriterEffect_FadeEntry__c *v18; // x0
  BetterList_TypewriterEffect_FadeEntry__o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_5974F7A & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_TypewriterEffect_FadeEntry___ctor__);
    sub_2213A60(&BetterList_TypewriterEffect_FadeEntry__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974F7A = 1;
  }
  v3 = System_Collections_Generic_List_EventDelegate__TypeInfo;
  this->fields.charsPerSecond = 20;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onFinished, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.mFullText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFullText, v11, v12, v13, v14, v15, v16, v17);
  v18 = BetterList_TypewriterEffect_FadeEntry__TypeInfo;
  this->fields.mReset = 1;
  v19 = (BetterList_TypewriterEffect_FadeEntry__o *)sub_2213CCC(v18);
  BetterList_TypewriterEffect_FadeEntry____ctor(
    v19,
    (const MethodInfo_3E74FEC *)Method_BetterList_TypewriterEffect_FadeEntry___ctor__);
  this->fields.mFade = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mFade, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TypewriterEffect__Finish(TypewriterEffect_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TypewriterEffect_o *v8; // x19
  _BOOL4 mReset; // w8
  struct System_String_o *mFullText; // x8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v12; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  v8 = this;
  if ( (byte_5974F78 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (TypewriterEffect_o *)sub_2213A60(&TypewriterEffect_TypeInfo);
    byte_5974F78 = 1;
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
        (const MethodInfo_3E74694 *)Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
      this = (TypewriterEffect_o *)v8->fields.mLabel;
      if ( !this )
        goto LABEL_19;
      UILabel__set_text((UILabel_o *)this, v8->fields.mFullText, 0);
    }
    if ( !v8->fields.keepFullDimensions )
      goto LABEL_15;
    scrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      goto LABEL_15;
    this = (TypewriterEffect_o *)v8->fields.scrollView;
    if ( this )
    {
      UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
LABEL_15:
      TypewriterEffect_TypeInfo->static_fields->current = v8;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        (int32_t)v8,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      onFinished = v8->fields.onFinished;
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v12);
      EventDelegate__Execute_56285144(onFinished, 0);
      TypewriterEffect_TypeInfo->static_fields->current = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      return;
    }
LABEL_19:
    sub_2213CDC(this, method);
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
  *(_QWORD *)&this->fields.mCurrentOffset = 0;
  *(_WORD *)&this->fields.mReset = 257;
  TypewriterEffect__Update(this, v3);
}


void TypewriterEffect__Update(TypewriterEffect_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TypewriterEffect_o *v8; // x19
  _BOOL4 mActive; // w8
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *processedText; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_Object_o *scrollView; // x20
  struct System_String_o *mFullText; // x8
  float mNextChar; // s10
  int charsPerSecond; // w8
  int32_t mCurrentOffset; // w20
  System_String_o *v29; // x21
  int v30; // w9
  int m_CachedPtr; // w8
  float v32; // s10
  uint16_t Chars; // w0
  float delayOnNewLine; // s0
  float time; // s0
  float fadeInTime; // s1
  UILabel_o *mLabel; // x20
  System_String_o *v38; // x21
  System_String_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  uint16_t v46; // w22
  int32_t v47; // w21
  UnityEngine_Object_o *v48; // x20
  int32_t v49; // w20
  int32_t m_CancellationTokenSource; // w8
  float alpha; // s9
  unsigned int v52; // w26
  float deltaTime; // s0
  float v54; // s0
  System_Text_StringBuilder_o *v55; // x20
  int32_t v56; // w21
  System_String_o *text; // x22
  float v58; // s8
  __int64 v59; // x1
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  struct System_String_o *v62; // x8
  __int64 v63; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  UILabel_o *v71; // x20
  System_String_o *v72; // x21
  System_String_o *v73; // x0
  UILabel_o *v74; // x19
  System_String_o *v75; // x1
  UILabel_o *v76; // x0
  __int128 v77; // [xsp+0h] [xbp-C0h]
  TypewriterEffect_FadeEntry_o v78; // [xsp+18h] [xbp-A8h] BYREF
  TypewriterEffect_FadeEntry_o length; // [xsp+30h] [xbp-90h] BYREF

  v8 = this;
  if ( (byte_5974F79 & 1) == 0 )
  {
    sub_2213A60(&Method_BetterList_TypewriterEffect_FadeEntry__Add__);
    sub_2213A60(&Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    sub_2213A60(&Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt__);
    sub_2213A60(&Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
    sub_2213A60(&Method_BetterList_TypewriterEffect_FadeEntry__set_Item__);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&NGUIText_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&TypewriterEffect_TypeInfo);
    this = (TypewriterEffect_o *)sub_2213A60(&StringLiteral_16466/*"[00]"*/);
    byte_5974F79 = 1;
  }
  mActive = v8->fields.mActive;
  memset(&v78, 0, sizeof(v78));
  if ( !mActive )
    return;
  if ( v8->fields.mReset )
  {
    v8->fields.mCurrentOffset = 0;
    v8->fields.mReset = 0;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v8,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v8->fields.mLabel = (struct UILabel_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields.mLabel,
      (int32_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    this = (TypewriterEffect_o *)v8->fields.mLabel;
    if ( !this )
      goto LABEL_86;
    processedText = UILabel__get_processedText((UILabel_o *)this, 0);
    v8->fields.mFullText = processedText;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v8->fields.mFullText,
      (int32_t)processedText,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    this = (TypewriterEffect_o *)v8->fields.mFade;
    if ( !this )
      goto LABEL_86;
    BetterList_TypewriterEffect_FadeEntry___Clear(
      (BetterList_TypewriterEffect_FadeEntry__o *)this,
      (const MethodInfo_3E74694 *)Method_BetterList_TypewriterEffect_FadeEntry__Clear__);
    if ( v8->fields.keepFullDimensions )
    {
      scrollView = (UnityEngine_Object_o *)v8->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (TypewriterEffect_o *)UnityEngine_Object__op_Inequality(scrollView, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (TypewriterEffect_o *)v8->fields.scrollView;
        if ( !this )
          goto LABEL_86;
        UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
      }
    }
  }
  mFullText = v8->fields.mFullText;
  if ( !mFullText )
    goto LABEL_86;
  while ( v8->fields.mCurrentOffset < mFullText->fields._stringLength )
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
      if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, method);
    }
    while ( NGUIText__ParseSymbol(v29, &v8->fields.mCurrentOffset, 0) );
    this = (TypewriterEffect_o *)v8->fields.mFullText;
    v30 = v8->fields.mCurrentOffset + 1;
    v8->fields.mCurrentOffset = v30;
    if ( !this )
      goto LABEL_86;
    m_CachedPtr = this->fields.m_CachedPtr;
    if ( v30 > m_CachedPtr )
      break;
    v32 = 1.0 / (float)v8->fields.charsPerSecond;
    if ( mCurrentOffset >= m_CachedPtr
      || (Chars = System_String__get_Chars((System_String_o *)this, mCurrentOffset, 0), Chars == 10) )
    {
      delayOnNewLine = v8->fields.delayOnNewLine;
      goto LABEL_27;
    }
    v46 = Chars;
    this = (TypewriterEffect_o *)v8->fields.mFullText;
    if ( !this )
      goto LABEL_86;
    v47 = mCurrentOffset + 1;
    if ( mCurrentOffset + 1 == LODWORD(this->fields.m_CachedPtr)
      || System_String__get_Chars((System_String_o *)this, v47, 0) <= 0x20u )
    {
      if ( v46 == 33 || v46 == 63 )
        goto LABEL_61;
      if ( v46 == 46 )
      {
        this = (TypewriterEffect_o *)v8->fields.mFullText;
        if ( !this )
          goto LABEL_86;
        if ( mCurrentOffset + 2 >= SLODWORD(this->fields.m_CachedPtr)
          || System_String__get_Chars((System_String_o *)this, v47, 0) != 46 )
        {
          goto LABEL_61;
        }
        this = (TypewriterEffect_o *)v8->fields.mFullText;
        if ( !this )
          goto LABEL_86;
        if ( System_String__get_Chars((System_String_o *)this, mCurrentOffset + 2, 0) == 46 )
        {
          mCurrentOffset += 2;
          delayOnNewLine = v8->fields.delayOnPeriod * 3.0;
        }
        else
        {
LABEL_61:
          delayOnNewLine = v8->fields.delayOnPeriod;
        }
LABEL_27:
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
      mLabel = v8->fields.mLabel;
      this = (TypewriterEffect_o *)v8->fields.mFullText;
      if ( v8->fields.keepFullDimensions )
      {
        if ( !this )
          goto LABEL_86;
        this = (TypewriterEffect_o *)System_String__Substring_75702848(
                                       (System_String_o *)this,
                                       0,
                                       v8->fields.mCurrentOffset,
                                       0);
        if ( !v8->fields.mFullText )
          goto LABEL_86;
        v38 = (System_String_o *)this;
        v39 = System_String__Substring(v8->fields.mFullText, v8->fields.mCurrentOffset, 0);
        this = (TypewriterEffect_o *)System_String__Concat_75694928(v38, (System_String_o *)StringLiteral_16466/*"[00]"*/, v39, 0);
      }
      else
      {
        if ( !this )
          goto LABEL_86;
        this = (TypewriterEffect_o *)System_String__Substring_75702848(
                                       (System_String_o *)this,
                                       0,
                                       v8->fields.mCurrentOffset,
                                       0);
      }
      method = (const MethodInfo *)this;
      if ( !mLabel )
        goto LABEL_86;
      UILabel__set_text(mLabel, (System_String_o *)this, 0);
      if ( !v8->fields.keepFullDimensions )
      {
        v48 = (UnityEngine_Object_o *)v8->fields.scrollView;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        this = (TypewriterEffect_o *)UnityEngine_Object__op_Inequality(v48, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (TypewriterEffect_o *)v8->fields.scrollView;
          if ( !this )
            goto LABEL_86;
          UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
        }
      }
    }
    else
    {
      this = (TypewriterEffect_o *)v8->fields.mFullText;
      *(_QWORD *)&v78.fields.alpha = 0;
      *(_OWORD *)&v78.fields.index = (unsigned int)mCurrentOffset;
      if ( !this )
        goto LABEL_86;
      v78.fields.text = System_String__Substring_75702848(
                          (System_String_o *)this,
                          mCurrentOffset,
                          v8->fields.mCurrentOffset - mCurrentOffset,
                          0);
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v78.fields.text,
        (int32_t)v78.fields.text,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
      this = (TypewriterEffect_o *)v8->fields.mFade;
      if ( !this )
        goto LABEL_86;
      length = v78;
      BetterList_TypewriterEffect_FadeEntry___Add(
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        &length,
        (const MethodInfo_3E746AC *)Method_BetterList_TypewriterEffect_FadeEntry__Add__);
    }
    mFullText = v8->fields.mFullText;
    if ( !mFullText )
      goto LABEL_86;
  }
  this = (TypewriterEffect_o *)v8->fields.mFade;
  if ( !this )
    goto LABEL_86;
  if ( LODWORD(this->fields.m_CancellationTokenSource) )
  {
    v49 = 0;
    while ( 1 )
    {
      m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
      if ( v49 >= m_CancellationTokenSource )
        break;
      BetterList_TypewriterEffect_FadeEntry___get_Item(
        &length,
        (BetterList_TypewriterEffect_FadeEntry__o *)this,
        v49,
        (const MethodInfo_3E74450 *)Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
      alpha = length.fields.alpha;
      v52 = *((_DWORD *)&length.fields.alpha + 1);
      v77 = *(_OWORD *)&length.fields.index;
      deltaTime = RealTime__get_deltaTime(0);
      this = (TypewriterEffect_o *)v8->fields.mFade;
      v54 = alpha + (float)(deltaTime / v8->fields.fadeInTime);
      if ( v54 < 1.0 )
      {
        if ( !this )
          goto LABEL_86;
        *(_QWORD *)&length.fields.alpha = __PAIR64__(v52, LODWORD(v54));
        *(_OWORD *)&length.fields.index = v77;
        BetterList_TypewriterEffect_FadeEntry___set_Item(
          (BetterList_TypewriterEffect_FadeEntry__o *)this,
          v49,
          &length,
          (const MethodInfo_3E74490 *)Method_BetterList_TypewriterEffect_FadeEntry__set_Item__);
        this = (TypewriterEffect_o *)v8->fields.mFade;
        ++v49;
        if ( !this )
          goto LABEL_86;
      }
      else
      {
        if ( !this )
          goto LABEL_86;
        BetterList_TypewriterEffect_FadeEntry___RemoveAt(
          (BetterList_TypewriterEffect_FadeEntry__o *)this,
          v49,
          (const MethodInfo_3E74C8C *)Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt__);
        this = (TypewriterEffect_o *)v8->fields.mFade;
        if ( !this )
          goto LABEL_86;
      }
    }
    if ( m_CancellationTokenSource )
    {
      v55 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
      System_Text_StringBuilder___ctor(v55, 0);
      this = (TypewriterEffect_o *)v8->fields.mFade;
      if ( !this )
        goto LABEL_86;
      v56 = 0;
      while ( v56 < SLODWORD(this->fields.m_CancellationTokenSource) )
      {
        this = (TypewriterEffect_o *)BetterList_TypewriterEffect_FadeEntry___get_Item(
                                       &length,
                                       (BetterList_TypewriterEffect_FadeEntry__o *)this,
                                       v56,
                                       (const MethodInfo_3E74450 *)Method_BetterList_TypewriterEffect_FadeEntry__get_Item__);
        text = length.fields.text;
        v58 = length.fields.alpha;
        if ( v56 )
        {
          if ( !v55 )
            goto LABEL_86;
        }
        else
        {
          this = (TypewriterEffect_o *)v8->fields.mFullText;
          if ( !this )
            goto LABEL_86;
          this = (TypewriterEffect_o *)System_String__Substring_75702848(
                                         (System_String_o *)this,
                                         0,
                                         length.fields.index,
                                         0);
          if ( !v55 )
            goto LABEL_86;
          System_Text_StringBuilder__Append_75735064(v55, (System_String_o *)this, 0);
        }
        System_Text_StringBuilder__Append_75737396(v55, 0x5Bu, 0);
        if ( !*(&NGUIText_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUIText_TypeInfo, v59);
        v60 = NGUIText__EncodeAlpha(v58, 0);
        System_Text_StringBuilder__Append_75735064(v55, v60, 0);
        System_Text_StringBuilder__Append_75737396(v55, 0x5Du, 0);
        System_Text_StringBuilder__Append_75735064(v55, text, 0);
        this = (TypewriterEffect_o *)v8->fields.mFade;
        ++v56;
        if ( !this )
          goto LABEL_86;
      }
      if ( v8->fields.keepFullDimensions )
      {
        if ( v55 )
        {
          System_Text_StringBuilder__Append_75735064(v55, (System_String_o *)StringLiteral_16466/*"[00]"*/, 0);
          this = (TypewriterEffect_o *)v8->fields.mFullText;
          if ( this )
          {
            v61 = System_String__Substring((System_String_o *)this, v8->fields.mCurrentOffset, 0);
            System_Text_StringBuilder__Append_75735064(v55, v61, 0);
            goto LABEL_102;
          }
        }
        goto LABEL_86;
      }
      if ( !v55 )
        goto LABEL_86;
LABEL_102:
      v74 = v8->fields.mLabel;
      this = (TypewriterEffect_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v55->klass->vtable._3_ToString.methodPtr)(
                                     v55,
                                     v55->klass->vtable._3_ToString.method);
      if ( !v74 )
LABEL_86:
        sub_2213CDC(this, method);
      v75 = (System_String_o *)this;
      v76 = v74;
    }
    else
    {
      v71 = v8->fields.mLabel;
      this = (TypewriterEffect_o *)v8->fields.mFullText;
      if ( v8->fields.keepFullDimensions )
      {
        if ( !this )
          goto LABEL_86;
        this = (TypewriterEffect_o *)System_String__Substring_75702848(
                                       (System_String_o *)this,
                                       0,
                                       v8->fields.mCurrentOffset,
                                       0);
        if ( !v8->fields.mFullText )
          goto LABEL_86;
        v72 = (System_String_o *)this;
        v73 = System_String__Substring(v8->fields.mFullText, v8->fields.mCurrentOffset, 0);
        this = (TypewriterEffect_o *)System_String__Concat_75694928(v72, (System_String_o *)StringLiteral_16466/*"[00]"*/, v73, 0);
        if ( !v71 )
          goto LABEL_86;
      }
      else
      {
        if ( !this )
          goto LABEL_86;
        this = (TypewriterEffect_o *)System_String__Substring_75702848(
                                       (System_String_o *)this,
                                       0,
                                       v8->fields.mCurrentOffset,
                                       0);
        if ( !v71 )
          goto LABEL_86;
      }
      v75 = (System_String_o *)this;
      v76 = v71;
    }
    UILabel__set_text(v76, v75, 0);
  }
  else
  {
    v62 = v8->fields.mFullText;
    if ( !v62 )
      goto LABEL_86;
    if ( v8->fields.mCurrentOffset == v62->fields._stringLength )
    {
      TypewriterEffect_TypeInfo->static_fields->current = v8;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        (int32_t)v8,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
      onFinished = v8->fields.onFinished;
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v63);
      EventDelegate__Execute_56285144(onFinished, 0);
      TypewriterEffect_TypeInfo->static_fields->current = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)TypewriterEffect_TypeInfo->static_fields,
        0,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      v8->fields.mActive = 0;
    }
  }
}


bool TypewriterEffect__get_isActive(TypewriterEffect_o *this, const MethodInfo *method)
{
  return this->fields.mActive;
}