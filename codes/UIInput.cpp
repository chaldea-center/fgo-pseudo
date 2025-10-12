void UIInput___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct UIInput_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C3C2CC & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2CC = 1;
  }
  static_fields = UIInput_TypeInfo->static_fields;
  static_fields->mDrawStart = 0;
  v4 = StringLiteral_1/*""*/;
  static_fields->mLastIME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->mLastIME, v4, v1, v2);
  UIInput_TypeInfo->static_fields->mWaitForKeyboard = 0;
}


void UIInput___ctor(UIInput_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UnityEngine_Color_o v20; // [xsp+0h] [xbp-50h]

  if ( (byte_4C3C2CB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2CB = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields.selectAllTextOnFocus = 1;
  this->fields.activeTextColor = _Q2;
  this->fields.caretColor = (struct UnityEngine_Color_o)xmmword_C0E060;
  this->fields.selectionColor = (struct UnityEngine_Color_o)xmmword_C0CFC0;
  v20 = _Q2;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSubmit = (struct System_Collections_Generic_List_EventDelegate__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onSubmit, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onChange, (int32_t)v11, v12, v13);
  v14 = StringLiteral_1/*""*/;
  this->fields.mDefaultText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mDefaultText, v14, v15, v16);
  this->fields.mDoInit = 1;
  this->fields.mLoadSavedValue = 1;
  this->fields.mDefaultColor = v20;
  v17 = StringLiteral_1/*""*/;
  this->fields.mCached = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCached, v17, v18, v19);
  this->fields.mSelectMe = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIInput__Cleanup(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHighlight; // x20
  UnityEngine_Behaviour_o *v4; // x0
  UnityEngine_Object_o *mCaret; // x20
  CGThumbnailListItem_o *p_mBlankTex; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_Texture2D_o *mBlankTex; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3C2C4 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C2C4 = 1;
  }
  mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(mHighlight, 0) )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.mHighlight;
    if ( !v4 )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(v4, 0, 0);
  }
  mCaret = (UnityEngine_Object_o *)this->fields.mCaret;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(mCaret, 0) )
  {
    v4 = (UnityEngine_Behaviour_o *)this->fields.mCaret;
    if ( v4 )
    {
      UnityEngine_Behaviour__set_enabled(v4, 0, 0);
      goto LABEL_13;
    }
LABEL_20:
    sub_1C32E7C(v4);
  }
LABEL_13:
  mBlankTex = this->fields.mBlankTex;
  p_mBlankTex = (CGThumbnailListItem_o *)&this->fields.mBlankTex;
  v7 = (UnityEngine_Object_o *)mBlankTex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v7, 0) )
  {
    klass = (UnityEngine_Object_o *)p_mBlankTex->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_mBlankTex->klass = 0;
    sub_1C32BC4(p_mBlankTex, 0, v10, v11);
  }
}


void UIInput__DoBackspace(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionStart; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_4C3C2BC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2BC = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.mValue, 0) )
  {
    mSelectionStart = this->fields.mSelectionStart;
    if ( mSelectionStart == this->fields.mSelectionEnd )
    {
      v4 = __OFSUB__(mSelectionStart, 1);
      v5 = mSelectionStart - 1;
      if ( v5 < 0 != v4 )
        return;
      this->fields.mSelectionEnd = v5;
    }
    ((void (__fastcall *)(UIInput_o *, __int64, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
      this,
      StringLiteral_1/*""*/,
      this->klass->vtable._6_Insert.method);
  }
}


void UIInput__ExecuteOnChange(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  UnityEngine_Object_o *current; // x20
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UIInput_c *v8; // x0
  System_Collections_Generic_List_EventDelegate__o *v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3C2C9 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2C9 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v3 = UIInput_TypeInfo;
  }
  current = (UnityEngine_Object_o *)v3->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(current, 0, 0) )
  {
    onChange = this->fields.onChange;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    if ( EventDelegate__IsValid_49205960(onChange, 0) )
    {
      v8 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v8 = UIInput_TypeInfo;
      }
      v8->static_fields->current = this;
      sub_1C32BC4((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, (int32_t)this, v6, v7);
      v9 = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49177388(v9, 0);
      UIInput_TypeInfo->static_fields->current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, 0, v10, v11);
    }
  }
}


int32_t UIInput__GetCharUnderMouse(UIInput_o *this, const MethodInfo *method)
{
  void *label; // x0
  __int64 v4; // x20
  float z; // s8
  __int64 v6; // kr00_8
  __int64 v7; // kr08_8
  __int64 v8; // kr10_8
  float v9; // s15
  float v10; // s0
  float Epsilon; // s3
  float v12; // s8
  UIInput_c *v13; // x0
  UILabel_o *v14; // x19
  int32_t mDrawStart; // w20
  const MethodInfo *v16; // x2
  UnityEngine_Ray_o v18; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v19; // [xsp+30h] [xbp-90h] BYREF
  __int64 v20; // [xsp+38h] [xbp-88h]
  UnityEngine_Ray_o v21; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C2C1 & 1) == 0 )
  {
    sub_1C32C20(&UICamera_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2C1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v19 = 0;
  v20 = 0;
  label = this->fields.label;
  if ( !label )
    goto LABEL_20;
  v4 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)label + 488LL))(
         label,
         *(_QWORD *)(*(_QWORD *)label + 496LL));
  if ( !UICamera_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  label = UICamera__get_currentRay(&v18, 0);
  v21 = v18;
  if ( !v4 )
    goto LABEL_20;
  if ( *(_DWORD *)(v4 + 24) <= 2u )
    sub_1C32E84(label);
  sub_2EE54BC(
    &v19,
    0,
    *(float *)(v4 + 32),
    *(float *)(v4 + 36),
    *(float *)(v4 + 40),
    *(float *)(v4 + 44),
    *(float *)(v4 + 48),
    *(float *)(v4 + 52));
  z = v21.fields.m_Origin.fields.z;
  v6 = v19;
  v7 = v20;
  v8 = *(_QWORD *)&v21.fields.m_Origin.fields.x;
  v9 = (float)(v21.fields.m_Direction.fields.z * *(float *)&v20)
     + (float)((float)(v21.fields.m_Direction.fields.x * *(float *)&v19)
             + (float)(v21.fields.m_Direction.fields.y * *((float *)&v19 + 1)));
  if ( !byte_4C313D5 )
  {
    sub_1C32C20(&UnityEngine_Mathf_TypeInfo);
    byte_4C313D5 = 1;
  }
  v10 = fmaxf(fabsf(v9), 0.0) * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( v10 <= (float)(Epsilon * 8.0) )
    v10 = Epsilon * 8.0;
  if ( vabds_f32(0.0, v9) >= v10 )
  {
    v12 = (float)((float)-(float)((float)(z * *(float *)&v7)
                                + (float)((float)(*(float *)&v8 * *(float *)&v6)
                                        + (float)(*((float *)&v8 + 1) * *((float *)&v6 + 1))))
                - *((float *)&v7 + 1))
        / v9;
    if ( v12 > 0.0 )
    {
      v13 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v13 = UIInput_TypeInfo;
      }
      v14 = this->fields.label;
      mDrawStart = v13->static_fields->mDrawStart;
      Point = UnityEngine_Ray__GetPoint(&v21, v12, 0);
      if ( v14 )
        return UILabel__GetCharacterIndexAtPosition(v14, Point, 0, v16) + mDrawStart;
LABEL_20:
      sub_1C32E7C(label);
    }
  }
  return 0;
}


System_String_o *UIInput__GetLeftText(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionEnd; // w20
  System_String_o *mValue; // x0

  if ( (byte_4C3C2BE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2BE = 1;
  }
  if ( this->fields.mSelectionStart >= this->fields.mSelectionEnd )
    mSelectionEnd = this->fields.mSelectionEnd;
  else
    mSelectionEnd = this->fields.mSelectionStart;
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) || mSelectionEnd < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( !mValue )
    sub_1C32E7C(0);
  return System_String__Substring_63564468(mValue, 0, mSelectionEnd, 0);
}


System_String_o *UIInput__GetRightText(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionEnd; // w20
  struct System_String_o *mValue; // x0

  if ( (byte_4C3C2BF & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2BF = 1;
  }
  if ( this->fields.mSelectionStart <= this->fields.mSelectionEnd )
    mSelectionEnd = this->fields.mSelectionEnd;
  else
    mSelectionEnd = this->fields.mSelectionStart;
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( !mValue )
    sub_1C32E7C(0);
  if ( mSelectionEnd >= mValue->fields._stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Substring(mValue, mSelectionEnd, 0);
}


System_String_o *UIInput__GetSelection(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionStart; // w8
  int32_t mSelectionEnd; // w9
  System_String_o *mValue; // x0
  int32_t v7; // w1

  if ( (byte_4C3C2C0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2C0 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  mSelectionStart = this->fields.mSelectionStart;
  mSelectionEnd = this->fields.mSelectionEnd;
  if ( mSelectionStart == mSelectionEnd )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( mSelectionStart >= mSelectionEnd )
    v7 = this->fields.mSelectionEnd;
  else
    v7 = this->fields.mSelectionStart;
  if ( !mValue )
    sub_1C32E7C(0);
  if ( mSelectionStart <= mSelectionEnd )
    mSelectionStart = this->fields.mSelectionEnd;
  return System_String__Substring_63564468(mValue, v7, mSelectionStart - v7, 0);
}


void UIInput__Init(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *cachedTransform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UILabel_o *v7; // x8
  struct System_String_o *mText; // x1
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4C3C2B8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Debug_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_7676/*"Input fields using labels with justified alignment are not supported at this time"*/);
    byte_4C3C2B8 = 1;
  }
  if ( this->fields.mDoInit )
  {
    label = (UnityEngine_Object_o *)this->fields.label;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v7 = this->fields.label;
      this->fields.mDoInit = 0;
      if ( !v7 )
        goto LABEL_18;
      mText = v7->fields.mText;
      this->fields.mDefaultText = mText;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mDefaultText, (int32_t)mText, v5, v6);
      cachedTransform = this->fields.label;
      if ( !cachedTransform )
        goto LABEL_18;
      this->fields.mDefaultColor = cachedTransform->fields.mColor;
      if ( cachedTransform->fields.mEncoding )
      {
        cachedTransform->fields.mEncoding = 0;
        cachedTransform->fields.mChanged = 1;
        cachedTransform->fields.mShouldBeProcessed = 1;
        cachedTransform = this->fields.label;
        if ( !cachedTransform )
          goto LABEL_18;
      }
      if ( cachedTransform->fields.mAlignment == 4 )
      {
        cachedTransform->fields.mAlignment = 1;
        cachedTransform->fields.mChanged = 1;
        cachedTransform->fields.mShouldBeProcessed = 1;
        UILabel__ProcessAndRequest(cachedTransform, v9);
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogWarning_71037576((Il2CppObject *)StringLiteral_7676/*"Input fields using labels with justified alignment are not supported at this time"*/, (UnityEngine_Object_o *)this, 0);
        cachedTransform = this->fields.label;
        if ( !cachedTransform )
          goto LABEL_18;
      }
      this->fields.mPivot = cachedTransform->fields.mPivot;
      cachedTransform = (UILabel_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
      if ( !cachedTransform )
LABEL_18:
        sub_1C32E7C(cachedTransform);
      LODWORD(this->fields.mPosition) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                        (UnityEngine_Transform_o *)cachedTransform,
                                                        0);
      UIInput__UpdateLabel(this, v10);
    }
  }
}


void UIInput__Insert(UIInput_o *this, System_String_o *text, const MethodInfo *method)
{
  System_String_o *LeftText; // x23
  const MethodInfo *v6; // x1
  System_String_o *RightText; // x0
  System_String_o *v8; // x20
  int32_t stringLength; // w26
  int32_t v10; // w24
  int32_t v11; // w25
  System_Text_StringBuilder_o *v12; // x21
  int32_t v13; // w27
  int32_t v14; // w23
  unsigned int Chars; // w0
  const MethodInfo *v16; // x1
  unsigned int v17; // w24
  struct UIInput_OnValidate_o *onValidate; // x28
  __int64 v19; // x25
  unsigned int Length; // w0
  uint16_t v21; // w0
  System_String_o *v22; // x25
  int32_t v23; // w0
  const MethodInfo *v24; // x4
  int32_t v25; // w0
  int v26; // w25
  int32_t v27; // w22
  unsigned int v28; // w0
  struct UIInput_OnValidate_o *v29; // x26
  unsigned int v30; // w23
  __int64 v31; // x24
  unsigned int v32; // w0
  uint16_t v33; // w0
  System_String_o *v34; // x24
  int32_t v35; // w0
  const MethodInfo *v36; // x4
  struct System_String_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1

  if ( (byte_4C3C2BD & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    byte_4C3C2BD = 1;
  }
  LeftText = UIInput__GetLeftText(this, (const MethodInfo *)text);
  RightText = UIInput__GetRightText(this, v6);
  if ( !RightText
    || !LeftText
    || !text
    || (v8 = RightText,
        stringLength = RightText->fields._stringLength,
        v10 = LeftText->fields._stringLength,
        v11 = text->fields._stringLength,
        v12 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo),
        System_Text_StringBuilder___ctor_63596960(v12, v10 + stringLength + v11, 0),
        !v12) )
  {
    sub_1C32E7C(RightText);
  }
  System_Text_StringBuilder__Append_63603608(v12, LeftText, 0);
  v13 = text->fields._stringLength;
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(text, v14, 0);
      if ( (unsigned __int16)Chars != 8 )
        break;
      UIInput__DoBackspace(this, v16);
LABEL_20:
      if ( v13 == ++v14 )
        goto LABEL_21;
    }
    v17 = Chars;
    if ( this->fields.characterLimit >= 1
      && System_Text_StringBuilder__get_Length(v12, 0) + stringLength >= this->fields.characterLimit )
    {
      goto LABEL_21;
    }
    onValidate = this->fields.onValidate;
    if ( onValidate )
    {
      v19 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
              v12,
              v12->klass->vtable._3_ToString.method);
      Length = System_Text_StringBuilder__get_Length(v12, 0);
      v21 = ((__int64 (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))onValidate->fields.invoke_impl)(
              onValidate->fields.method_code,
              v19,
              Length,
              v17,
              onValidate->fields.method);
    }
    else
    {
      if ( !this->fields.validation )
        goto LABEL_18;
      v22 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                                 v12,
                                 v12->klass->vtable._3_ToString.method);
      v23 = System_Text_StringBuilder__get_Length(v12, 0);
      v21 = UIInput__Validate_49448892(this, v22, v23, v17, v24);
    }
    LOWORD(v17) = v21;
LABEL_18:
    if ( (_WORD)v17 )
      System_Text_StringBuilder__Append_63605936(v12, v17, 0);
    goto LABEL_20;
  }
LABEL_21:
  v25 = System_Text_StringBuilder__get_Length(v12, 0);
  this->fields.mSelectionStart = v25;
  this->fields.mSelectionEnd = v25;
  v26 = v8->fields._stringLength;
  if ( v26 >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = System_String__get_Chars(v8, v27, 0);
      v29 = this->fields.onValidate;
      v30 = v28;
      if ( v29 )
        break;
      if ( this->fields.validation )
      {
        v34 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                                   v12,
                                   v12->klass->vtable._3_ToString.method);
        v35 = System_Text_StringBuilder__get_Length(v12, 0);
        v33 = UIInput__Validate_49448892(this, v34, v35, v30, v36);
        goto LABEL_27;
      }
LABEL_28:
      if ( (_WORD)v30 )
        System_Text_StringBuilder__Append_63605936(v12, v30, 0);
      if ( v26 == ++v27 )
        goto LABEL_31;
    }
    v31 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
            v12,
            v12->klass->vtable._3_ToString.method);
    v32 = System_Text_StringBuilder__get_Length(v12, 0);
    v33 = ((__int64 (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))v29->fields.invoke_impl)(
            v29->fields.method_code,
            v31,
            v32,
            v30,
            v29->fields.method);
LABEL_27:
    LOWORD(v30) = v33;
    goto LABEL_28;
  }
LABEL_31:
  v37 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                                    v12,
                                    v12->klass->vtable._3_ToString.method);
  this->fields.mValue = v37;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)v37, v38, v39);
  UIInput__UpdateLabel(this, v40);
  UIInput__ExecuteOnChange(this, v41);
}


void UIInput__LoadValue(UIInput_o *this, const MethodInfo *method)
{
  System_String_o *mValue; // x0
  System_String_o *String_71182452; // x20
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4C3C2CA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_16042/*"\\n"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2CA = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.savedAs, 0) )
  {
    mValue = this->fields.mValue;
    if ( !mValue )
      sub_1C32E7C(0);
    String_71182452 = System_String__Replace_63565092(
                        mValue,
                        (System_String_o *)StringLiteral_16042/*"\\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0);
    v5 = StringLiteral_1/*""*/;
    this->fields.mValue = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mValue, v5, v6, v7);
    if ( UnityEngine_PlayerPrefs__HasKey(this->fields.savedAs, 0) )
      String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(this->fields.savedAs, 0);
    UIInput__set_value(this, String_71182452, v8);
  }
}


void UIInput__OnDeselectEvent(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  UIInput_c *v7; // x8
  struct UIInput_StaticFields *static_fields; // x9
  UnityEngine_TouchScreenKeyboard_o *mKeyboard; // x0
  struct UIInput_StaticFields *v10; // x8
  struct UIInput_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct UILabel_o *v15; // x8
  const MethodInfo *v16; // x1
  UIInput_c *v17; // x0
  struct UIInput_StaticFields *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4C3C2BA & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2BA = 1;
  }
  if ( this->fields.mDoInit )
    UIInput__Init(this, method);
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      if ( this->fields.mDoInit )
        UIInput__Init(this, v6);
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)this->fields.mValue, v4, v5);
      v7 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v7 = UIInput_TypeInfo;
      }
      static_fields = v7->static_fields;
      mKeyboard = static_fields->mKeyboard;
      if ( mKeyboard )
      {
        if ( v7->_2.cctor_finished )
        {
          static_fields->mWaitForKeyboard = 0;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(v7);
          v10 = UIInput_TypeInfo->static_fields;
          mKeyboard = v10->mKeyboard;
          v10->mWaitForKeyboard = 0;
          if ( !mKeyboard )
            goto LABEL_30;
        }
        UnityEngine_TouchScreenKeyboard__set_active(mKeyboard, 0, 0);
        v11 = UIInput_TypeInfo->static_fields;
        v11->mKeyboard = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&v11->mKeyboard, 0, v12, v13);
      }
      mKeyboard = (UnityEngine_TouchScreenKeyboard_o *)System_String__IsNullOrEmpty(this->fields.mValue, 0);
      v15 = this->fields.label;
      if ( ((unsigned __int8)mKeyboard & 1) != 0 )
      {
        if ( v15 )
        {
          UILabel__set_text(this->fields.label, this->fields.mDefaultText, v14);
          mKeyboard = (UnityEngine_TouchScreenKeyboard_o *)this->fields.label;
          if ( mKeyboard )
          {
            UIWidget__set_color((UIWidget_o *)mKeyboard, this->fields.mDefaultColor, 0);
LABEL_26:
            UnityEngine_Input__set_imeCompositionMode(0, 0);
            UIInput__RestoreLabelPivot(this, v16);
            goto LABEL_27;
          }
        }
      }
      else if ( v15 )
      {
        UILabel__set_text(this->fields.label, this->fields.mValue, v14);
        goto LABEL_26;
      }
LABEL_30:
      sub_1C32E7C(mKeyboard);
    }
  }
LABEL_27:
  v17 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v17 = UIInput_TypeInfo;
  }
  v18 = v17->static_fields;
  v18->selection = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v18->selection, 0, v4, v5);
  UIInput__UpdateLabel(this, v19);
}


void UIInput__OnDisable(UIInput_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(UIInput_o *, const MethodInfo *))this->klass->vtable._9_Cleanup.methodPtr)(
    this,
    this->klass->vtable._9_Cleanup.method);
}


void UIInput__OnDrag(UIInput_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  const MethodInfo *v5; // x1
  UICamera_c *v6; // x0
  int32_t currentScheme; // w8
  int32_t CharUnderMouse; // w1
  const MethodInfo *v9; // x2

  if ( (byte_4C3C2C3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C2C3 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    currentScheme = v6->static_fields->currentScheme;
    if ( !currentScheme )
      goto LABEL_12;
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      currentScheme = UICamera_TypeInfo->static_fields->currentScheme;
    }
    if ( currentScheme == 1 )
    {
LABEL_12:
      CharUnderMouse = UIInput__GetCharUnderMouse(this, v5);
      UIInput__set_selectionEnd(this, CharUnderMouse, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIInput__OnPress(UIInput_o *this, bool isPressed, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  const MethodInfo *v6; // x1
  UICamera_c *v7; // x0
  int32_t currentScheme; // w8
  int32_t CharUnderMouse; // w0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( (byte_4C3C2C2 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C2C2 = 1;
  }
  if ( isPressed && UIInput__get_isSelected(this, (const MethodInfo *)isPressed) )
  {
    label = (UnityEngine_Object_o *)this->fields.label;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
    {
      v7 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v7 = UICamera_TypeInfo;
      }
      currentScheme = v7->static_fields->currentScheme;
      if ( !currentScheme )
        goto LABEL_14;
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        currentScheme = UICamera_TypeInfo->static_fields->currentScheme;
      }
      if ( currentScheme == 1 )
      {
LABEL_14:
        CharUnderMouse = UIInput__GetCharUnderMouse(this, v6);
        UIInput__set_selectionEnd(this, CharUnderMouse, v10);
        if ( !UnityEngine_Input__GetKey(304, 0) && !UnityEngine_Input__GetKey(303, 0) )
          UIInput__set_selectionStart(this, this->fields.mSelectionEnd, v11);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIInput__OnSelect(UIInput_o *this, bool isSelected, const MethodInfo *method)
{
  if ( isSelected )
    UIInput__OnSelectEvent(this, (const MethodInfo *)isSelected);
  else
    UIInput__OnDeselectEvent(this, (const MethodInfo *)isSelected);
}


void UIInput__OnSelectEvent(UIInput_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  UIInput_c *v5; // x0
  struct UIInput_StaticFields *static_fields; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Object_o *label; // x20

  if ( (byte_4C3C2B9 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2B9 = 1;
  }
  v5 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v5 = UIInput_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->selection = this;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->selection, (int32_t)this, v2, v3);
  if ( this->fields.mDoInit )
    UIInput__Init(this, v7);
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
      this->fields.mSelectMe = UnityEngine_Time__get_frameCount(0);
  }
}


void UIInput__RemoveFocus(UIInput_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIInput__set_isSelected(this, 0, v2);
}


void UIInput__RestoreLabelPivot(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UIWidget_o *v4; // x0
  int32_t mPivot; // w1

  if ( (byte_4C3C2C7 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C2C7 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v4 = (UIWidget_o *)this->fields.label;
    if ( !v4 )
      sub_1C32E7C(0);
    mPivot = this->fields.mPivot;
    if ( v4->fields.mPivot != mPivot )
      UIWidget__set_pivot(v4, mPivot, 0);
  }
}


void UIInput__SaveToPlayerPrefs(UIInput_o *this, System_String_o *val, const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  System_String_o *savedAs; // x8

  if ( !System_String__IsNullOrEmpty(this->fields.savedAs, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(val, 0);
    savedAs = this->fields.savedAs;
    if ( IsNullOrEmpty )
      UnityEngine_PlayerPrefs__DeleteKey(savedAs, 0);
    else
      UnityEngine_PlayerPrefs__SetString(savedAs, val, 0);
  }
}


void UIInput__SaveValue(UIInput_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UIInput__SaveToPlayerPrefs(this, this->fields.mValue, v2);
}


void UIInput__SetPivotToLeft(UIInput_o *this, const MethodInfo *method)
{
  UIWidget_o *label; // x19
  __int64 Pivot; // x0
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4

  v5.fields.y = NGUIMath__GetPivotOffset((int)this[192], 0).fields.y;
  label = (UIWidget_o *)this->fields.label;
  v5.fields.x = 0.0;
  Pivot = NGUIMath__GetPivot(v5, 0);
  if ( !label )
    sub_1C32E7C(Pivot);
  UIWidget__set_pivot(label, Pivot, 0);
}


void UIInput__SetPivotToRight(UIInput_o *this, const MethodInfo *method)
{
  UIWidget_o *label; // x19
  __int64 Pivot; // x0
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4

  v5.fields.y = NGUIMath__GetPivotOffset((int)this[192], 0).fields.y;
  label = (UIWidget_o *)this->fields.label;
  v5.fields.x = 1.0;
  Pivot = NGUIMath__GetPivot(v5, 0);
  if ( !label )
    sub_1C32E7C(Pivot);
  UIWidget__set_pivot(label, Pivot, 0);
}


void UIInput__Start(UIInput_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectOnTab; // x20
  UnityEngine_Object_o *selectOnTab; // x21
  Il2CppObject *Component_object; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  char *gameObject; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_GameObject_o *v11; // x1
  const MethodInfo *v12; // x1
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C3C2B7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_16042/*"\\n"*/);
    byte_4C3C2B7 = 1;
  }
  p_selectOnTab = &this->fields.selectOnTab;
  selectOnTab = (UnityEngine_Object_o *)this->fields.selectOnTab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectOnTab, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (char *)UnityEngine_GameObject__AddComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation___);
      if ( !gameObject )
        goto LABEL_20;
      v11 = *p_selectOnTab;
      *((_QWORD *)gameObject + 6) = *p_selectOnTab;
      sub_1C32BC4((CGThumbnailListItem_o *)(gameObject + 48), (int32_t)v11, v9, v10);
    }
    *p_selectOnTab = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selectOnTab, 0, v6, v7);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
  }
  if ( !this->fields.mLoadSavedValue || System_String__IsNullOrEmpty(this->fields.savedAs, 0) )
  {
    gameObject = (char *)this->fields.mValue;
    if ( gameObject )
    {
      v13 = System_String__Replace_63565092(
              (System_String_o *)gameObject,
              (System_String_o *)StringLiteral_16042/*"\\n"*/,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              0);
      UIInput__set_value(this, v13, v14);
      return;
    }
LABEL_20:
    sub_1C32E7C(gameObject);
  }
  UIInput__LoadValue(this, v12);
}


void UIInput__Submit(UIInput_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UIInput_c *v6; // x0
  UnityEngine_Object_o *current; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  UIInput_c *v10; // x0
  System_Collections_Generic_List_EventDelegate__o *onSubmit; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3C2C5 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2C5 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, v3);
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)this->fields.mValue, v4, v5);
    v6 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v6 = UIInput_TypeInfo;
    }
    current = (UnityEngine_Object_o *)v6->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      v10 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v10 = UIInput_TypeInfo;
      }
      v10->static_fields->current = this;
      sub_1C32BC4((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, (int32_t)this, (int32_t)v8, v9);
      onSubmit = this->fields.onSubmit;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49177388(onSubmit, 0);
      UIInput_TypeInfo->static_fields->current = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, 0, v12, v13);
    }
    UIInput__SaveToPlayerPrefs(this, this->fields.mValue, v8);
  }
}


void UIInput__Update(UIInput_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UIInput_c *v4; // x0
  struct UIInput_StaticFields *static_fields; // x8
  UnityEngine_TouchScreenKeyboard_o *mKeyboard; // x8
  __int64 IsNullOrEmpty; // x0
  int32_t mSelectMe; // w20
  System_String_o *v9; // x0
  int32_t stringLength; // w8
  struct System_String_o *v11; // x8
  UIInput_c *v12; // x0
  int32_t mSelectionEnd; // w8
  unsigned int platform; // w0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t keyboardType; // w20
  System_String_o *v18; // x21
  int32_t inputType; // w20
  UIInput_c *v20; // x0
  UnityEngine_TouchScreenKeyboard_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  bool v25; // w22
  struct UILabel_o *v26; // x8
  _BOOL4 v27; // w24
  UnityEngine_TouchScreenKeyboard_o *v28; // x20
  UIInput_c *v29; // x0
  struct UIInput_StaticFields *v30; // x0
  const MethodInfo *v31; // x1
  System_String_o *v32; // x0
  UIInput_c *v33; // x0
  UnityEngine_TouchScreenKeyboard_o *v34; // x8
  System_String_o *text; // x20
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  System_String_o *compositionString; // x20
  System_String_o *inputString; // x0
  System_String_o *v40; // x21
  int32_t v41; // w22
  uint16_t Chars; // w0
  System_String_o *v43; // x0
  UIInput_c *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int mSelectionStart; // w8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  struct System_String_o *mValue; // x8
  UIInput_c *v52; // x0
  struct UIInput_StaticFields *v53; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  System_String_o *v56; // x0
  UIInput_c *v57; // x0
  UIInput_c *v58; // x0
  UIInput_c *v59; // x0
  UIInput_c *v60; // x0
  const MethodInfo *v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  UIInput_c *v64; // x0
  struct UIInput_StaticFields *v65; // x0
  const MethodInfo *v66; // x2
  int32_t v67; // w1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  UnityEngine_Object_o *mCaret; // x20
  const MethodInfo *v71; // x1
  float mNextBlink; // s8
  float time; // s0
  UnityEngine_Behaviour_o *v74; // x20
  bool enabled; // w0
  const MethodInfo *v76; // x1
  struct UILabel_o *label; // x8
  const MethodInfo *v78; // x1
  int32_t onReturnKey; // w8
  struct UILabel_o *v80; // x8
  struct UILabel_o *v81; // x8
  UICamera_c *v82; // x0
  struct UICamera_StaticFields *v83; // x8
  UICamera_c *v84; // x0
  UnityEngine_Object_o *current; // x20
  UICamera_c *v86; // x0
  UnityEngine_Object_o *cachedCamera; // x20
  UICamera_c *v88; // x0
  struct UILabel_o *v89; // x8
  UnityEngine_Camera_o *v90; // x20
  float x; // s8
  float y; // s9
  float v93; // s9
  uint16_t v94; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2_o v95; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C2BB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&char_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_25242/*"|"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2BB = 1;
  }
  v94 = 0;
  if ( UIInput__get_isSelected(this, method) )
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, v3);
    v4 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v4 = UIInput_TypeInfo;
    }
    static_fields = v4->static_fields;
    if ( static_fields->mWaitForKeyboard )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = UIInput_TypeInfo;
        static_fields = UIInput_TypeInfo->static_fields;
      }
      mKeyboard = static_fields->mKeyboard;
      if ( mKeyboard )
      {
        if ( !v4->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v4);
          mKeyboard = UIInput_TypeInfo->static_fields->mKeyboard;
          if ( !mKeyboard )
            goto LABEL_163;
        }
        if ( !UnityEngine_TouchScreenKeyboard__get_active(mKeyboard, 0) )
          return;
        v4 = UIInput_TypeInfo;
      }
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = UIInput_TypeInfo;
      }
      v4->static_fields->mWaitForKeyboard = 0;
    }
    mSelectMe = this->fields.mSelectMe;
    if ( mSelectMe == -1 || mSelectMe == UnityEngine_Time__get_frameCount(0) )
    {
LABEL_58:
      v33 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v33 = UIInput_TypeInfo;
      }
      v34 = v33->static_fields->mKeyboard;
      if ( v34 )
      {
        if ( !v33->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v33);
          v34 = UIInput_TypeInfo->static_fields->mKeyboard;
          if ( !v34 )
            goto LABEL_163;
        }
        text = UnityEngine_TouchScreenKeyboard__get_text(v34, 0);
        if ( UIInput__get_inputShouldBeHidden(this, v36) )
        {
          if ( System_String__op_Inequality(text, (System_String_o *)StringLiteral_25242/*"|"*/, 0) )
          {
            IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              UIInput__DoBackspace(this, v37);
            }
            else
            {
              if ( !text )
                goto LABEL_163;
              v56 = System_String__Substring(text, 1, 0);
              ((void (__fastcall *)(UIInput_o *, System_String_o *, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
                this,
                v56,
                this->klass->vtable._6_Insert.method);
            }
            v57 = UIInput_TypeInfo;
            if ( !UIInput_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
              v57 = UIInput_TypeInfo;
            }
            IsNullOrEmpty = (__int64)v57->static_fields->mKeyboard;
            if ( !IsNullOrEmpty )
              goto LABEL_163;
            UnityEngine_TouchScreenKeyboard__set_text(
              (UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty,
              (System_String_o *)StringLiteral_25242/*"|"*/,
              0);
          }
        }
        else if ( System_String__op_Inequality(this->fields.mCached, text, 0) )
        {
          this->fields.mCached = text;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCached, (int32_t)text, v48, v49);
          UIInput__set_value(this, text, v50);
        }
        v58 = UIInput_TypeInfo;
        if ( !UIInput_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
          v58 = UIInput_TypeInfo;
        }
        IsNullOrEmpty = (__int64)v58->static_fields->mKeyboard;
        if ( !IsNullOrEmpty )
          goto LABEL_163;
        if ( UnityEngine_TouchScreenKeyboard__get_done((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
          goto LABEL_105;
        v59 = UIInput_TypeInfo;
        if ( !UIInput_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
          v59 = UIInput_TypeInfo;
        }
        IsNullOrEmpty = (__int64)v59->static_fields->mKeyboard;
        if ( !IsNullOrEmpty )
          goto LABEL_163;
        if ( !UnityEngine_TouchScreenKeyboard__get_active((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
        {
LABEL_105:
          v60 = UIInput_TypeInfo;
          if ( !UIInput_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
            v60 = UIInput_TypeInfo;
          }
          IsNullOrEmpty = (__int64)v60->static_fields->mKeyboard;
          if ( !IsNullOrEmpty )
            goto LABEL_163;
          if ( !UnityEngine_TouchScreenKeyboard__get_wasCanceled((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
            UIInput__Submit(this, v61);
          v64 = UIInput_TypeInfo;
          if ( !UIInput_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
            v64 = UIInput_TypeInfo;
          }
          v65 = v64->static_fields;
          v65->mKeyboard = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&v65->mKeyboard, 0, v62, v63);
          UIInput__set_isSelected(this, 0, v66);
          v67 = StringLiteral_1/*""*/;
          this->fields.mCached = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCached, v67, v68, v69);
        }
      }
      else
      {
        compositionString = UnityEngine_Input__get_compositionString(0);
        if ( System_String__IsNullOrEmpty(compositionString, 0) )
        {
          inputString = UnityEngine_Input__get_inputString(0);
          if ( !System_String__IsNullOrEmpty(inputString, 0) )
          {
            IsNullOrEmpty = (__int64)UnityEngine_Input__get_inputString(0);
            if ( !IsNullOrEmpty )
              goto LABEL_163;
            v40 = (System_String_o *)IsNullOrEmpty;
            if ( *(int *)(IsNullOrEmpty + 16) >= 1 )
            {
              v41 = 0;
              do
              {
                Chars = System_String__get_Chars(v40, v41, 0);
                v94 = Chars;
                if ( Chars >= 0x20u && (Chars & 0xFFFC) != 0xF700 )
                {
                  if ( !char_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(char_TypeInfo);
                  v43 = System_Char__ToString((uint16_t)&v94, 0);
                  ((void (__fastcall *)(UIInput_o *, System_String_o *, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
                    this,
                    v43,
                    this->klass->vtable._6_Insert.method);
                }
                ++v41;
              }
              while ( v41 < v40->fields._stringLength );
            }
          }
        }
        v44 = UIInput_TypeInfo;
        if ( !UIInput_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
          v44 = UIInput_TypeInfo;
        }
        if ( System_String__op_Inequality(v44->static_fields->mLastIME, compositionString, 0) )
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(compositionString, 0);
          if ( (IsNullOrEmpty & 1) != 0 )
          {
            mSelectionStart = this->fields.mSelectionStart;
          }
          else
          {
            mValue = this->fields.mValue;
            if ( !mValue || !compositionString )
              goto LABEL_163;
            mSelectionStart = compositionString->fields._stringLength + mValue->fields._stringLength;
          }
          this->fields.mSelectionEnd = mSelectionStart;
          v52 = UIInput_TypeInfo;
          if ( !UIInput_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
            v52 = UIInput_TypeInfo;
          }
          v53 = v52->static_fields;
          v53->mLastIME = compositionString;
          sub_1C32BC4((CGThumbnailListItem_o *)&v53->mLastIME, (int32_t)compositionString, v45, v46);
          UIInput__UpdateLabel(this, v54);
          UIInput__ExecuteOnChange(this, v55);
        }
      }
      mCaret = (UnityEngine_Object_o *)this->fields.mCaret;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(mCaret, 0, 0) )
      {
        mNextBlink = this->fields.mNextBlink;
        if ( mNextBlink < RealTime__get_time(0) )
        {
          time = RealTime__get_time(0);
          v74 = (UnityEngine_Behaviour_o *)this->fields.mCaret;
          this->fields.mNextBlink = time + 0.5;
          if ( !v74 )
            goto LABEL_163;
          enabled = UnityEngine_Behaviour__get_enabled(v74, 0);
          UnityEngine_Behaviour__set_enabled(v74, !enabled, 0);
        }
      }
      IsNullOrEmpty = UIInput__get_isSelected(this, v71);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        label = this->fields.label;
        if ( !label )
          goto LABEL_163;
        if ( this->fields.mLastAlpha != label->fields.finalAlpha )
          UIInput__UpdateLabel(this, v76);
      }
      IsNullOrEmpty = UnityEngine_Input__GetKeyDown(13, 0);
      if ( (IsNullOrEmpty & 1) == 0 )
      {
        IsNullOrEmpty = UnityEngine_Input__GetKeyDown(271, 0);
        if ( (IsNullOrEmpty & 1) == 0 )
          return;
      }
      onReturnKey = this->fields.onReturnKey;
      if ( onReturnKey == 2 )
        goto LABEL_137;
      if ( onReturnKey )
        goto LABEL_134;
      v80 = this->fields.label;
      if ( v80 )
      {
        if ( v80->fields.mMaxLineCount == 1
          || UnityEngine_Input__GetKey(306, 0)
          || (IsNullOrEmpty = UnityEngine_Input__GetKey(305, 0), (IsNullOrEmpty & 1) != 0) )
        {
LABEL_134:
          v82 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v82 = UICamera_TypeInfo;
          }
          v83 = v82->static_fields;
          v83->currentScheme = 2;
          v83->currentKey = 13;
          UIInput__Submit(this, v78);
          UICamera_TypeInfo->static_fields->currentKey = 0;
          return;
        }
        v81 = this->fields.label;
        if ( v81 )
        {
          if ( v81->fields.mOverflow == 1 || this->fields.validation )
            goto LABEL_134;
LABEL_137:
          ((void (__fastcall *)(UIInput_o *, __int64, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
            this,
            StringLiteral_43/*"\n"*/,
            this->klass->vtable._6_Insert.method);
          return;
        }
      }
LABEL_163:
      sub_1C32E7C(IsNullOrEmpty);
    }
    v9 = this->fields.mValue;
    this->fields.mSelectMe = -1;
    IsNullOrEmpty = System_String__IsNullOrEmpty(v9, 0);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      stringLength = 0;
    }
    else
    {
      v11 = this->fields.mValue;
      if ( !v11 )
        goto LABEL_163;
      stringLength = v11->fields._stringLength;
    }
    this->fields.mSelectionEnd = stringLength;
    v12 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v12 = UIInput_TypeInfo;
    }
    v12->static_fields->mDrawStart = 0;
    mSelectionEnd = 0;
    if ( !this->fields.selectAllTextOnFocus )
      mSelectionEnd = this->fields.mSelectionEnd;
    IsNullOrEmpty = (__int64)this->fields.label;
    this->fields.mSelectionStart = mSelectionEnd;
    if ( !IsNullOrEmpty )
      goto LABEL_163;
    UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, this->fields.activeTextColor, 0);
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    platform = UnityEngine_Application__get_platform(0);
    if ( platform <= 0x16 && ((1 << platform) & 0x7C0900) != 0 )
    {
      if ( UIInput__get_inputShouldBeHidden(this, v15) )
      {
        UnityEngine_TouchScreenKeyboard__set_hideInput(1, 0);
        keyboardType = this->fields.keyboardType;
        v18 = (System_String_o *)StringLiteral_25242/*"|"*/;
      }
      else
      {
        inputType = this->fields.inputType;
        UnityEngine_TouchScreenKeyboard__set_hideInput(0, 0);
        if ( inputType == 2 )
          keyboardType = 0;
        else
          keyboardType = this->fields.keyboardType;
        v18 = this->fields.mValue;
        this->fields.mSelectionStart = this->fields.mSelectionEnd;
      }
      v20 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v20 = UIInput_TypeInfo;
      }
      v20->static_fields->mWaitForKeyboard = 1;
      if ( this->fields.inputType == 2 )
      {
        v21 = UnityEngine_TouchScreenKeyboard__Open_71236468(v18, keyboardType, 0, 0, 1, 0);
      }
      else
      {
        IsNullOrEmpty = UIInput__get_inputShouldBeHidden(this, v16);
        v25 = (IsNullOrEmpty & 1) == 0 && this->fields.inputType == 1;
        v26 = this->fields.label;
        if ( !v26 )
          goto LABEL_163;
        v27 = v26->fields.mMaxLineCount != 1 && !this->fields.hideInput;
        if ( this->fields.mDoInit )
          UIInput__Init(this, v24);
        v21 = UnityEngine_TouchScreenKeyboard__Open_71236424(
                v18,
                keyboardType,
                v25,
                v27,
                0,
                0,
                this->fields.mDefaultText,
                0);
      }
      v28 = v21;
      v29 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v29 = UIInput_TypeInfo;
      }
      v30 = v29->static_fields;
      v30->mKeyboard = v28;
      sub_1C32BC4((CGThumbnailListItem_o *)&v30->mKeyboard, (int32_t)v28, v22, v23);
      goto LABEL_57;
    }
    v84 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v84 = UICamera_TypeInfo;
    }
    current = (UnityEngine_Object_o *)v84->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
      goto LABEL_158;
    v86 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v86 = UICamera_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v86->static_fields->current;
    if ( !IsNullOrEmpty )
      goto LABEL_163;
    cachedCamera = (UnityEngine_Object_o *)UICamera__get_cachedCamera((UICamera_o *)IsNullOrEmpty, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cachedCamera, 0, 0) )
    {
      v88 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v88 = UICamera_TypeInfo;
      }
      IsNullOrEmpty = (__int64)v88->static_fields->current;
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      IsNullOrEmpty = (__int64)UICamera__get_cachedCamera((UICamera_o *)IsNullOrEmpty, 0);
      v89 = this->fields.label;
      if ( !v89 )
        goto LABEL_163;
      v90 = (UnityEngine_Camera_o *)IsNullOrEmpty;
      IsNullOrEmpty = (__int64)((__int64 (__fastcall *)(struct UILabel_o *__return_ptr, struct UILabel_o *, const MethodInfo *))v89->klass->vtable._11_get_worldCorners.methodPtr)(
                                 v89,
                                 this->fields.label,
                                 v89->klass->vtable._11_get_worldCorners.method);
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      if ( *(_DWORD *)(IsNullOrEmpty + 24) )
      {
        if ( !v90 )
          goto LABEL_163;
        v96 = UnityEngine_Camera__WorldToScreenPoint_71029908(v90, *(UnityEngine_Vector3_o *)(IsNullOrEmpty + 32), 0);
        x = v96.fields.x;
        y = v96.fields.y;
        goto LABEL_162;
      }
    }
    else
    {
LABEL_158:
      IsNullOrEmpty = (__int64)this->fields.label;
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      IsNullOrEmpty = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)IsNullOrEmpty + 488LL))(
                        IsNullOrEmpty,
                        *(_QWORD *)(*(_QWORD *)IsNullOrEmpty + 496LL));
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      if ( *(_DWORD *)(IsNullOrEmpty + 24) )
      {
        x = *(float *)(IsNullOrEmpty + 32);
        y = *(float *)(IsNullOrEmpty + 36);
LABEL_162:
        v93 = (float)UnityEngine_Screen__get_height(0) - y;
        UnityEngine_Input__set_imeCompositionMode(1, 0);
        v95.fields.x = x;
        v95.fields.y = v93;
        UnityEngine_Input__set_compositionCursorPos(v95, 0);
LABEL_57:
        UIInput__UpdateLabel(this, v31);
        v32 = UnityEngine_Input__get_inputString(0);
        if ( System_String__IsNullOrEmpty(v32, 0) )
          return;
        goto LABEL_58;
      }
    }
    sub_1C32E84(IsNullOrEmpty);
  }
}


void UIInput__UpdateLabel(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  _BOOL4 isSelected; // w20
  struct System_String_o *mValue; // x21
  System_String_o *compositionString; // x0
  _BOOL4 IsNullOrEmpty; // w8
  UIWidget_o *bmFont; // x0
  char v11; // w22
  struct UnityEngine_Color_o *p_mDefaultColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  const MethodInfo *v16; // x1
  struct UILabel_o *v17; // x8
  System_String_o *v18; // x22
  UnityEngine_Object_o *mFont; // x24
  System_String_o *v20; // x23
  struct UILabel_o *v21; // x8
  struct UILabel_o *v22; // x8
  int stringLength; // w21
  int32_t v24; // w21
  int32_t cursorPosition; // w0
  int32_t v26; // w23
  System_String_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x21
  struct System_String_o **p_mDefaultText; // x8
  System_String_o *v31; // x21
  System_String_o *v32; // x0
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x1
  int32_t v35; // w22
  UIInput_c *v36; // x8
  struct UIInput_StaticFields *static_fields; // x9
  int32_t mDrawStart; // w26
  UIInput_c *v39; // x0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  UIInput_c *v42; // x0
  int32_t mSelectionStart; // w23
  int32_t v44; // w24
  struct UnityEngine_Texture2D_o **p_mBlankTex; // x20
  UnityEngine_Object_o *mBlankTex; // x21
  int32_t mSelectionEnd; // w26
  UnityEngine_Texture2D_o *v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t i; // w21
  int32_t v52; // w1
  char v53; // w8
  char v54; // w22
  struct UITexture_o **p_mHighlight; // x21
  UnityEngine_Object_o *mHighlight; // x22
  UnityEngine_GameObject_o *cachedGameObject; // x22
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct UILabel_o *v61; // x8
  UIRect_o *v62; // x21
  struct UILabel_o *v63; // x8
  struct UITexture_o **p_mCaret; // x21
  UnityEngine_Object_o *mCaret; // x22
  UnityEngine_GameObject_o *v66; // x22
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct UILabel_o *v70; // x8
  UIRect_o *v71; // x20
  const MethodInfo *v72; // x5
  struct UILabel_o *v73; // x8
  struct UITexture_o *v74; // x8
  UIGeometry_o *geometry; // x3
  int32_t v76; // w1
  int32_t v77; // w2
  UnityEngine_Object_o *v78; // x20
  UnityEngine_Behaviour_o *v79; // x20
  bool hasVertices; // w0
  struct UITexture_o *v81; // x8
  float time; // s0
  struct UILabel_o *v83; // x8
  int32_t method_ptr; // w1
  UILabel_o *v85; // x22
  const MethodInfo *v86; // x2
  int32_t v87; // w0
  const MethodInfo *v88; // x1
  UIInput_c *v89; // x8
  int32_t v90; // w22
  struct UIInput_StaticFields *v91; // x9
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3C2C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_AddWidget_UITexture___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Texture2D_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    sub_1C32C20(&StringLiteral_24859/*"x"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_788/*"*"*/);
    sub_1C32C20(&StringLiteral_7670/*"Input Caret"*/);
    sub_1C32C20(&StringLiteral_7671/*"Input Highlight"*/);
    byte_4C3C2C6 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, v4);
    isSelected = UIInput__get_isSelected(this, v4);
    if ( this->fields.mDoInit )
      UIInput__Init(this, v5);
    mValue = this->fields.mValue;
    if ( System_String__IsNullOrEmpty(mValue, 0) )
    {
      compositionString = UnityEngine_Input__get_compositionString(0);
      IsNullOrEmpty = System_String__IsNullOrEmpty(compositionString, 0);
      bmFont = (UIWidget_o *)this->fields.label;
      v11 = !IsNullOrEmpty;
      if ( !isSelected && IsNullOrEmpty )
      {
        if ( !IsNullOrEmpty )
          goto LABEL_158;
        v11 = 0;
        p_mDefaultColor = &this->fields.mDefaultColor;
        p_g = &this->fields.mDefaultColor.fields.g;
        p_b = &this->fields.mDefaultColor.fields.b;
        p_a = &this->fields.mDefaultColor.fields.a;
LABEL_16:
        if ( !bmFont )
          goto LABEL_158;
        v92.fields.a = *p_a;
        v92.fields.b = *p_b;
        v92.fields.g = *p_g;
        v92.fields.r = p_mDefaultColor->fields.r;
        UIWidget__set_color(bmFont, v92, 0);
        if ( (v11 & 1) == 0 )
        {
          p_mDefaultText = &this->fields.mDefaultText;
          if ( isSelected )
            p_mDefaultText = (struct System_String_o **)&StringLiteral_1/*""*/;
          v31 = *p_mDefaultText;
          goto LABEL_60;
        }
        if ( this->fields.inputType == 2 )
        {
          v17 = this->fields.label;
          if ( !v17 )
            goto LABEL_158;
          v18 = (System_String_o *)StringLiteral_1/*""*/;
          mFont = (UnityEngine_Object_o *)v17->fields.mFont;
          v20 = (System_String_o *)StringLiteral_788/*"*"*/;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          bmFont = (UIWidget_o *)UnityEngine_Object__op_Inequality(mFont, 0, 0);
          if ( ((unsigned __int8)bmFont & 1) != 0 )
          {
            v21 = this->fields.label;
            if ( !v21 )
              goto LABEL_158;
            bmFont = (UIWidget_o *)v21->fields.mFont;
            if ( !bmFont )
              goto LABEL_158;
            bmFont = (UIWidget_o *)UIFont__get_bmFont((UIFont_o *)bmFont, v16);
            if ( bmFont )
            {
              v22 = this->fields.label;
              if ( !v22 )
                goto LABEL_158;
              bmFont = (UIWidget_o *)v22->fields.mFont;
              if ( !bmFont )
                goto LABEL_158;
              bmFont = (UIWidget_o *)UIFont__get_bmFont((UIFont_o *)bmFont, v16);
              if ( !bmFont )
                goto LABEL_158;
              bmFont = (UIWidget_o *)BMFont__GetGlyph_49223828((BMFont_o *)bmFont, 42, 0);
              if ( !bmFont )
                v20 = (System_String_o *)StringLiteral_24859/*"x"*/;
            }
          }
          if ( !mValue )
            goto LABEL_158;
          stringLength = mValue->fields._stringLength;
          if ( stringLength >= 1 )
          {
            do
            {
              bmFont = (UIWidget_o *)System_String__Concat_63518544(v18, v20, 0);
              --stringLength;
              v18 = (System_String_o *)bmFont;
            }
            while ( stringLength );
          }
          if ( isSelected )
            goto LABEL_35;
        }
        else
        {
          v18 = mValue;
          if ( isSelected )
          {
LABEL_35:
            if ( !v18 )
              goto LABEL_158;
            v24 = v18->fields._stringLength;
            cursorPosition = UIInput__get_cursorPosition(this, v16);
            if ( v24 >= cursorPosition )
              v26 = cursorPosition;
            else
              v26 = v24;
            v27 = System_String__Substring_63564468(v18, 0, v26, 0);
            v28 = UnityEngine_Input__get_compositionString(0);
            v29 = System_String__Concat_63518544(v27, v28, 0);
            goto LABEL_46;
          }
        }
        if ( !v18 )
          goto LABEL_158;
        v29 = System_String__Substring_63564468(v18, 0, 0, 0);
        v26 = 0;
LABEL_46:
        v32 = System_String__Substring_63564468(v18, v26, v18->fields._stringLength - v26, 0);
        v31 = System_String__Concat_63518544(v29, v32, 0);
        if ( isSelected )
        {
          bmFont = (UIWidget_o *)this->fields.label;
          if ( !bmFont )
            goto LABEL_158;
          if ( HIDWORD(bmFont[1].fields.mTrans) == 1 && LODWORD(bmFont[1].fields.bottomAnchor) == 1 )
          {
            bmFont = (UIWidget_o *)UILabel__CalculateOffsetToFit((UILabel_o *)bmFont, v31, v33);
            v35 = (int)bmFont;
            v36 = UIInput_TypeInfo;
            if ( !UIInput_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
              v36 = UIInput_TypeInfo;
            }
            static_fields = v36->static_fields;
            if ( !v35 )
            {
              static_fields->mDrawStart = 0;
              UIInput__RestoreLabelPivot(this, v34);
              goto LABEL_143;
            }
            mDrawStart = static_fields->mDrawStart;
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = UIInput_TypeInfo;
              static_fields = UIInput_TypeInfo->static_fields;
            }
            if ( v26 >= mDrawStart )
            {
              if ( v35 >= static_fields->mDrawStart )
              {
                if ( !v31 )
                  goto LABEL_158;
                v85 = this->fields.label;
                bmFont = (UIWidget_o *)System_String__Substring_63564468(v31, 0, v26, 0);
                if ( !v85 )
                  goto LABEL_158;
                v87 = UILabel__CalculateOffsetToFit(v85, (System_String_o *)bmFont, v86);
                v89 = UIInput_TypeInfo;
                v90 = v87;
                if ( !UIInput_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
                  v89 = UIInput_TypeInfo;
                }
                v91 = v89->static_fields;
                if ( v90 > v91->mDrawStart )
                {
                  if ( !v89->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v89);
                    v91 = UIInput_TypeInfo->static_fields;
                  }
                  v91->mDrawStart = v90;
                  UIInput__SetPivotToRight(this, v88);
                }
LABEL_143:
                bmFont = (UIWidget_o *)UIInput_TypeInfo;
                if ( !UIInput_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
                  bmFont = (UIWidget_o *)UIInput_TypeInfo;
                }
                method_ptr = bmFont->fields.onChange->fields.method_ptr;
                if ( method_ptr )
                {
                  if ( !LODWORD(bmFont->fields.hitCheck) )
                  {
                    j_il2cpp_runtime_class_init_0(bmFont);
                    method_ptr = UIInput_TypeInfo->static_fields->mDrawStart;
                  }
                  if ( !v31 )
                    goto LABEL_158;
                  v31 = System_String__Substring_63564468(v31, method_ptr, v31->fields._stringLength - method_ptr, 0);
                }
LABEL_61:
                bmFont = (UIWidget_o *)this->fields.label;
                if ( !bmFont )
                  goto LABEL_158;
                UILabel__set_text((UILabel_o *)bmFont, v31, v40);
                if ( isSelected )
                {
                  v42 = UIInput_TypeInfo;
                  if ( !UIInput_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
                    v42 = UIInput_TypeInfo;
                  }
                  if ( !v42->static_fields->mKeyboard )
                  {
LABEL_68:
                    mSelectionStart = this->fields.mSelectionStart;
                    if ( !v42->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v42);
                      v42 = UIInput_TypeInfo;
                    }
                    v44 = v42->static_fields->mDrawStart;
                    p_mBlankTex = &this->fields.mBlankTex;
                    mBlankTex = (UnityEngine_Object_o *)this->fields.mBlankTex;
                    mSelectionEnd = this->fields.mSelectionEnd;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Equality(mBlankTex, 0, 0) )
                    {
                      v48 = (UnityEngine_Texture2D_o *)sub_1C32E6C(UnityEngine_Texture2D_TypeInfo);
                      UnityEngine_Texture2D___ctor_71111856(v48, 2, 2, 5, 0, 0);
                      *p_mBlankTex = v48;
                      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mBlankTex, (int32_t)v48, v49, v50);
                      for ( i = 0; i != 2; ++i )
                      {
                        v52 = 0;
                        v53 = 1;
                        do
                        {
                          bmFont = (UIWidget_o *)*p_mBlankTex;
                          if ( !*p_mBlankTex )
                            goto LABEL_158;
                          v93.fields.r = 1.0;
                          v93.fields.g = 1.0;
                          v93.fields.b = 1.0;
                          v93.fields.a = 1.0;
                          v54 = v53;
                          UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)bmFont, v52, i, v93, 0);
                          v53 = 0;
                          v52 = 1;
                        }
                        while ( (v54 & 1) != 0 );
                      }
                      bmFont = (UIWidget_o *)*p_mBlankTex;
                      if ( !*p_mBlankTex )
                        goto LABEL_158;
                      UnityEngine_Texture2D__Apply_71113708((UnityEngine_Texture2D_o *)bmFont, 0);
                    }
                    if ( mSelectionStart != mSelectionEnd )
                    {
                      p_mHighlight = &this->fields.mHighlight;
                      mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      bmFont = (UIWidget_o *)UnityEngine_Object__op_Equality(mHighlight, 0, 0);
                      if ( ((unsigned __int8)bmFont & 1) != 0 )
                      {
                        bmFont = (UIWidget_o *)this->fields.label;
                        if ( !bmFont )
                          goto LABEL_158;
                        cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)bmFont, 0);
                        if ( !NGUITools_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
                        v58 = NGUITools__AddWidget_object_(
                                cachedGameObject,
                                (const MethodInfo_31672B0 *)Method_NGUITools_AddWidget_UITexture___);
                        *p_mHighlight = (struct UITexture_o *)v58;
                        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mHighlight, (int32_t)v58, v59, v60);
                        bmFont = (UIWidget_o *)*p_mHighlight;
                        if ( !*p_mHighlight )
                          goto LABEL_158;
                        UnityEngine_Object__set_name(
                          (UnityEngine_Object_o *)bmFont,
                          (System_String_o *)StringLiteral_7671/*"Input Highlight"*/,
                          0);
                        bmFont = (UIWidget_o *)*p_mHighlight;
                        if ( !*p_mHighlight )
                          goto LABEL_158;
                        ((void (__fastcall *)(UIWidget_o *, struct UnityEngine_Texture2D_o *, const MethodInfo *))bmFont->klass->vtable._27_set_mainTexture.methodPtr)(
                          bmFont,
                          *p_mBlankTex,
                          bmFont->klass->vtable._27_set_mainTexture.method);
                        bmFont = (UIWidget_o *)*p_mHighlight;
                        if ( !*p_mHighlight )
                          goto LABEL_158;
                        bmFont->fields.fillGeometry = 0;
                        v61 = this->fields.label;
                        if ( !v61 )
                          goto LABEL_158;
                        UIWidget__set_pivot(bmFont, v61->fields.mPivot, 0);
                        bmFont = (UIWidget_o *)this->fields.label;
                        if ( !bmFont )
                          goto LABEL_158;
                        v62 = (UIRect_o *)this->fields.mHighlight;
                        bmFont = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)bmFont, 0);
                        if ( !v62 )
                          goto LABEL_158;
                        UIRect__SetAnchor(v62, (UnityEngine_Transform_o *)bmFont, 0);
                      }
                      else
                      {
                        v63 = this->fields.label;
                        if ( !v63 )
                          goto LABEL_158;
                        bmFont = (UIWidget_o *)this->fields.mHighlight;
                        if ( !bmFont )
                          goto LABEL_158;
                        UIWidget__set_pivot(bmFont, v63->fields.mPivot, 0);
                        bmFont = (UIWidget_o *)*p_mHighlight;
                        if ( !*p_mHighlight )
                          goto LABEL_158;
                        ((void (__fastcall *)(UIWidget_o *, struct UnityEngine_Texture2D_o *, const MethodInfo *))bmFont->klass->vtable._27_set_mainTexture.methodPtr)(
                          bmFont,
                          *p_mBlankTex,
                          bmFont->klass->vtable._27_set_mainTexture.method);
                        bmFont = (UIWidget_o *)*p_mHighlight;
                        if ( !*p_mHighlight )
                          goto LABEL_158;
                        ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))bmFont->klass->vtable._30_MarkAsChanged.methodPtr)(
                          bmFont,
                          bmFont->klass->vtable._30_MarkAsChanged.method);
                        bmFont = (UIWidget_o *)*p_mHighlight;
                        if ( !*p_mHighlight )
                          goto LABEL_158;
                        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bmFont, 1, 0);
                      }
                    }
                    p_mCaret = &this->fields.mCaret;
                    mCaret = (UnityEngine_Object_o *)this->fields.mCaret;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    bmFont = (UIWidget_o *)UnityEngine_Object__op_Equality(mCaret, 0, 0);
                    if ( ((unsigned __int8)bmFont & 1) != 0 )
                    {
                      bmFont = (UIWidget_o *)this->fields.label;
                      if ( !bmFont )
                        goto LABEL_158;
                      v66 = UIRect__get_cachedGameObject((UIRect_o *)bmFont, 0);
                      if ( !NGUITools_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
                      v67 = NGUITools__AddWidget_object_(
                              v66,
                              (const MethodInfo_31672B0 *)Method_NGUITools_AddWidget_UITexture___);
                      *p_mCaret = (struct UITexture_o *)v67;
                      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCaret, (int32_t)v67, v68, v69);
                      bmFont = (UIWidget_o *)*p_mCaret;
                      if ( !*p_mCaret )
                        goto LABEL_158;
                      UnityEngine_Object__set_name(
                        (UnityEngine_Object_o *)bmFont,
                        (System_String_o *)StringLiteral_7670/*"Input Caret"*/,
                        0);
                      bmFont = (UIWidget_o *)*p_mCaret;
                      if ( !*p_mCaret )
                        goto LABEL_158;
                      ((void (__fastcall *)(UIWidget_o *, struct UnityEngine_Texture2D_o *, const MethodInfo *))bmFont->klass->vtable._27_set_mainTexture.methodPtr)(
                        bmFont,
                        *p_mBlankTex,
                        bmFont->klass->vtable._27_set_mainTexture.method);
                      bmFont = (UIWidget_o *)*p_mCaret;
                      if ( !*p_mCaret )
                        goto LABEL_158;
                      bmFont->fields.fillGeometry = 0;
                      v70 = this->fields.label;
                      if ( !v70 )
                        goto LABEL_158;
                      UIWidget__set_pivot(bmFont, v70->fields.mPivot, 0);
                      bmFont = (UIWidget_o *)this->fields.label;
                      if ( !bmFont )
                        goto LABEL_158;
                      v71 = (UIRect_o *)this->fields.mCaret;
                      bmFont = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)bmFont, 0);
                      if ( !v71 )
                        goto LABEL_158;
                      UIRect__SetAnchor(v71, (UnityEngine_Transform_o *)bmFont, 0);
                    }
                    else
                    {
                      v73 = this->fields.label;
                      if ( !v73 )
                        goto LABEL_158;
                      bmFont = (UIWidget_o *)this->fields.mCaret;
                      if ( !bmFont )
                        goto LABEL_158;
                      UIWidget__set_pivot(bmFont, v73->fields.mPivot, 0);
                      bmFont = (UIWidget_o *)*p_mCaret;
                      if ( !*p_mCaret )
                        goto LABEL_158;
                      ((void (__fastcall *)(UIWidget_o *, struct UnityEngine_Texture2D_o *, const MethodInfo *))bmFont->klass->vtable._27_set_mainTexture.methodPtr)(
                        bmFont,
                        *p_mBlankTex,
                        bmFont->klass->vtable._27_set_mainTexture.method);
                      bmFont = (UIWidget_o *)*p_mCaret;
                      if ( !*p_mCaret )
                        goto LABEL_158;
                      ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))bmFont->klass->vtable._30_MarkAsChanged.methodPtr)(
                        bmFont,
                        bmFont->klass->vtable._30_MarkAsChanged.method);
                      bmFont = (UIWidget_o *)*p_mCaret;
                      if ( !*p_mCaret )
                        goto LABEL_158;
                      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bmFont, 1, 0);
                    }
                    v74 = this->fields.mCaret;
                    if ( !v74 )
                      goto LABEL_158;
                    bmFont = (UIWidget_o *)this->fields.label;
                    geometry = v74->fields.geometry;
                    v76 = mSelectionStart - v44;
                    v77 = mSelectionEnd - v44;
                    if ( mSelectionStart == mSelectionEnd )
                    {
                      if ( !bmFont )
                        goto LABEL_158;
                      UILabel__PrintOverlay(
                        (UILabel_o *)bmFont,
                        v76,
                        v77,
                        geometry,
                        0,
                        this->fields.caretColor,
                        this->fields.selectionColor,
                        v72);
                      v78 = (UnityEngine_Object_o *)this->fields.mHighlight;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      bmFont = (UIWidget_o *)UnityEngine_Object__op_Inequality(v78, 0, 0);
                      if ( ((unsigned __int8)bmFont & 1) == 0 )
                        goto LABEL_134;
                      v79 = (UnityEngine_Behaviour_o *)this->fields.mHighlight;
                      if ( !v79 )
                        goto LABEL_158;
                      hasVertices = 0;
                    }
                    else
                    {
                      v81 = this->fields.mHighlight;
                      if ( !v81 )
                        goto LABEL_158;
                      if ( !bmFont )
                        goto LABEL_158;
                      UILabel__PrintOverlay(
                        (UILabel_o *)bmFont,
                        v76,
                        v77,
                        geometry,
                        v81->fields.geometry,
                        this->fields.caretColor,
                        this->fields.selectionColor,
                        v72);
                      v79 = (UnityEngine_Behaviour_o *)this->fields.mHighlight;
                      if ( !v79 )
                        goto LABEL_158;
                      bmFont = (UIWidget_o *)v79[10].klass;
                      if ( !bmFont )
                        goto LABEL_158;
                      hasVertices = UIGeometry__get_hasVertices((UIGeometry_o *)bmFont, 0);
                    }
                    UnityEngine_Behaviour__set_enabled(v79, hasVertices, 0);
LABEL_134:
                    time = RealTime__get_time(0);
                    v83 = this->fields.label;
                    this->fields.mNextBlink = time + 0.5;
                    if ( v83 )
                    {
                      this->fields.mLastAlpha = v83->fields.finalAlpha;
                      return;
                    }
LABEL_158:
                    sub_1C32E7C(bmFont);
                  }
                  if ( UIInput__get_inputShouldBeHidden(this, v41) )
                  {
                    v42 = UIInput_TypeInfo;
                    goto LABEL_68;
                  }
                }
                ((void (__fastcall *)(UIInput_o *, const MethodInfo *))this->klass->vtable._9_Cleanup.methodPtr)(
                  this,
                  this->klass->vtable._9_Cleanup.method);
                return;
              }
              if ( !v36->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v36);
                static_fields = UIInput_TypeInfo->static_fields;
              }
              static_fields->mDrawStart = v35;
            }
            else
            {
              static_fields->mDrawStart = v26;
            }
            UIInput__SetPivotToLeft(this, v34);
            goto LABEL_143;
          }
        }
        v39 = UIInput_TypeInfo;
        if ( !UIInput_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
          v39 = UIInput_TypeInfo;
        }
        v39->static_fields->mDrawStart = 0;
LABEL_60:
        UIInput__RestoreLabelPivot(this, v16);
        goto LABEL_61;
      }
    }
    else
    {
      bmFont = (UIWidget_o *)this->fields.label;
      v11 = 1;
    }
    p_mDefaultColor = &this->fields.activeTextColor;
    p_g = &this->fields.activeTextColor.fields.g;
    p_b = &this->fields.activeTextColor.fields.b;
    p_a = &this->fields.activeTextColor.fields.a;
    goto LABEL_16;
  }
}


System_String_o *UIInput__Validate(UIInput_o *this, System_String_o *val, const MethodInfo *method)
{
  unsigned __int64 IsNullOrEmpty; // x0
  int32_t stringLength; // w22
  System_Text_StringBuilder_o *v8; // x21
  int32_t v9; // w22
  struct UIInput_OnValidate_o *onValidate; // x25
  unsigned int v11; // w23
  __int64 v12; // x24
  unsigned int v13; // w0
  System_String_o *v14; // x24
  int32_t Length; // w0
  const MethodInfo *v16; // x4
  int32_t v17; // w0
  int32_t characterLimit; // w2

  if ( (byte_4C3C2B6 & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3C2B6 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(val, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !val )
    goto LABEL_25;
  stringLength = val->fields._stringLength;
  v8 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63596960(v8, stringLength, 0);
  if ( val->fields._stringLength >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      IsNullOrEmpty = System_String__get_Chars(val, v9, 0);
      onValidate = this->fields.onValidate;
      v11 = IsNullOrEmpty;
      if ( onValidate )
        break;
      if ( this->fields.validation )
      {
        if ( !v8 )
          goto LABEL_25;
        v14 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                                   v8,
                                   v8->klass->vtable._3_ToString.method);
        Length = System_Text_StringBuilder__get_Length(v8, 0);
        IsNullOrEmpty = UIInput__Validate_49448892(this, v14, Length, v11, v16);
        goto LABEL_14;
      }
LABEL_15:
      if ( (_WORD)v11 )
      {
        if ( !v8 )
          goto LABEL_25;
        IsNullOrEmpty = (unsigned __int64)System_Text_StringBuilder__Append_63605936(v8, v11, 0);
      }
      if ( ++v9 >= val->fields._stringLength )
        goto LABEL_19;
    }
    if ( !v8 )
      goto LABEL_25;
    v12 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
            v8,
            v8->klass->vtable._3_ToString.method);
    v13 = System_Text_StringBuilder__get_Length(v8, 0);
    IsNullOrEmpty = ((__int64 (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))onValidate->fields.invoke_impl)(
                      onValidate->fields.method_code,
                      v12,
                      v13,
                      v11,
                      onValidate->fields.method);
LABEL_14:
    LOWORD(v11) = IsNullOrEmpty;
    goto LABEL_15;
  }
LABEL_19:
  if ( this->fields.characterLimit < 1 )
  {
    if ( v8 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                                  v8,
                                  v8->klass->vtable._3_ToString.method);
LABEL_25:
    sub_1C32E7C(IsNullOrEmpty);
  }
  if ( !v8 )
    goto LABEL_25;
  v17 = System_Text_StringBuilder__get_Length(v8, 0);
  characterLimit = this->fields.characterLimit;
  if ( v17 > characterLimit )
    return System_Text_StringBuilder__ToString_63600332(v8, 0, characterLimit, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v8->klass->vtable._3_ToString.methodPtr)(
                              v8,
                              v8->klass->vtable._3_ToString.method);
}


uint16_t UIInput__Validate_49448892(
        UIInput_o *this,
        System_String_o *text,
        int32_t pos,
        uint16_t ch,
        const MethodInfo *method)
{
  _BOOL8 enabled; // x0
  unsigned int v10; // w8
  int32_t stringLength; // w8
  int32_t v12; // w8
  int32_t v13; // w1
  uint16_t Chars; // w0
  int32_t v15; // w8
  int v16; // w22
  int v17; // w8
  int32_t v18; // w1
  int v19; // w8

  if ( (byte_4C3C2C8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    sub_1C32C20(&StringLiteral_524/*"'"*/);
    sub_1C32C20(&StringLiteral_988/*"."*/);
    byte_4C3C2C8 = 1;
  }
  if ( !this->fields.validation )
    return ch;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
  if ( !enabled )
    return ch;
  switch ( this->fields.validation )
  {
    case 1:
      v10 = ch;
      if ( ch >= 0x30u )
        goto LABEL_40;
      if ( pos || ch != 45 )
        return 0;
      goto LABEL_13;
    case 2:
      v10 = ch;
      if ( ch < 0x30u )
      {
        if ( pos || ch != 45 )
        {
          if ( ch != 46 )
            return 0;
          if ( text )
          {
            if ( !System_String__Contains(text, (System_String_o *)StringLiteral_988/*"."*/, 0) )
              return 46;
            return 0;
          }
        }
        else
        {
LABEL_13:
          if ( text )
          {
            if ( !System_String__Contains(text, (System_String_o *)StringLiteral_861/*"-"*/, 0) )
              return 45;
            return 0;
          }
        }
LABEL_71:
        sub_1C32E7C(enabled);
      }
LABEL_40:
      if ( v10 <= 0x39 )
        return ch;
      return 0;
    case 3:
      if ( ch < 0x41u )
        goto LABEL_22;
      if ( ch < 0x5Bu || (unsigned __int16)(ch - 97) <= 0x19u )
        return ch;
      return 0;
    case 4:
      if ( (unsigned __int16)(ch - 65) <= 0x19u )
        goto LABEL_65;
      if ( ch >= 0x61u )
      {
        if ( ch > 0x7Au )
          return 0;
      }
      else
      {
LABEL_22:
        if ( (unsigned __int16)(ch - 48) > 9u )
          return 0;
      }
      return ch;
    case 5:
      if ( !text )
        goto LABEL_71;
      stringLength = text->fields._stringLength;
      if ( stringLength >= 1 )
      {
        if ( stringLength <= pos )
          v12 = stringLength - 1;
        else
          v12 = pos;
        if ( pos >= 0 )
          v13 = v12;
        else
          v13 = 0;
        Chars = System_String__get_Chars(text, v13, 0);
        v15 = text->fields._stringLength;
        v16 = Chars;
        if ( v15 < 1 )
        {
          v19 = 10;
        }
        else
        {
          if ( pos + 1 < v15 )
            v17 = pos + 1;
          else
            v17 = v15 - 1;
          if ( pos + 1 >= 0 )
            v18 = v17;
          else
            v18 = 0;
          v19 = System_String__get_Chars(text, v18, 0);
        }
        if ( (unsigned __int16)(ch - 97) > 0x19u )
          goto LABEL_53;
        if ( v16 != 32 )
          return ch;
LABEL_62:
        ch -= 32;
        return ch;
      }
      if ( (unsigned __int16)(ch - 97) <= 0x19u )
        goto LABEL_62;
      v16 = 32;
      v19 = 10;
LABEL_53:
      if ( (unsigned __int16)(ch - 65) > 0x19u )
      {
        if ( ch == 32 )
        {
          if ( v16 != 32 && v16 != 39 && v19 != 39 && v19 != 32 )
            return 32;
        }
        else if ( ch == 39
               && v16 != 32
               && v16 != 39
               && v19 != 39
               && !System_String__Contains(text, (System_String_o *)StringLiteral_524/*"'"*/, 0) )
        {
          return 39;
        }
        return 0;
      }
      if ( v16 != 32 && v16 != 39 )
LABEL_65:
        ch += 32;
      return ch;
    default:
      return 0;
  }
}


UITexture_o *UIInput__get_caret(UIInput_o *this, const MethodInfo *method)
{
  return this->fields.mCaret;
}


int32_t UIInput__get_cursorPosition(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  _BOOL8 ShouldBeHidden; // x0
  int32_t *p_mSelectionEnd; // x8
  struct System_String_o *mValue; // x8

  if ( (byte_4C3C2B0 & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2B0 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v3 = UIInput_TypeInfo;
  }
  if ( (!v3->static_fields->mKeyboard || (ShouldBeHidden = UIInput__get_inputShouldBeHidden(this, method)))
    && (ShouldBeHidden = UIInput__get_isSelected(this, method)) )
  {
    p_mSelectionEnd = &this->fields.mSelectionEnd;
  }
  else
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, method);
    mValue = this->fields.mValue;
    if ( !mValue )
      sub_1C32E7C(ShouldBeHidden);
    p_mSelectionEnd = (int32_t *)&mValue->fields;
  }
  return *p_mSelectionEnd;
}


System_String_o *UIInput__get_defaultText(UIInput_o *this, const MethodInfo *method)
{
  if ( this->fields.mDoInit )
    UIInput__Init(this, method);
  return this->fields.mDefaultText;
}


bool UIInput__get_inputShouldBeHidden(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  _BOOL8 v4; // x0
  struct UILabel_o *v5; // x8

  if ( (byte_4C3C2AC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C2AC = 1;
  }
  if ( !this->fields.hideInput )
    return 0;
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( !v4 )
    return 0;
  v5 = this->fields.label;
  if ( !v5 )
    sub_1C32E7C(v4);
  return v5->fields.mMaxLineCount == 1 && this->fields.inputType != 2;
}


bool UIInput__get_isSelected(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  UnityEngine_Object_o *selection; // x20

  if ( (byte_4C3C2AE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2AE = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v3 = UIInput_TypeInfo;
  }
  selection = (UnityEngine_Object_o *)v3->static_fields->selection;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(selection, (UnityEngine_Object_o *)this, 0);
}


int32_t UIInput__get_selectionEnd(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  _BOOL8 ShouldBeHidden; // x0
  int32_t *p_mSelectionEnd; // x8
  struct System_String_o *mValue; // x8

  if ( (byte_4C3C2B4 & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2B4 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v3 = UIInput_TypeInfo;
  }
  if ( (!v3->static_fields->mKeyboard || (ShouldBeHidden = UIInput__get_inputShouldBeHidden(this, method)))
    && (ShouldBeHidden = UIInput__get_isSelected(this, method)) )
  {
    p_mSelectionEnd = &this->fields.mSelectionEnd;
  }
  else
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, method);
    mValue = this->fields.mValue;
    if ( !mValue )
      sub_1C32E7C(ShouldBeHidden);
    p_mSelectionEnd = (int32_t *)&mValue->fields;
  }
  return *p_mSelectionEnd;
}


int32_t UIInput__get_selectionStart(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  _BOOL8 isSelected; // x0
  const MethodInfo *v5; // x1
  int32_t *p_mSelectionStart; // x8
  struct System_String_o *mValue; // x8

  if ( (byte_4C3C2B2 & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2B2 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v3 = UIInput_TypeInfo;
  }
  if ( v3->static_fields->mKeyboard && !UIInput__get_inputShouldBeHidden(this, method) )
    return 0;
  isSelected = UIInput__get_isSelected(this, method);
  if ( isSelected )
  {
    p_mSelectionStart = &this->fields.mSelectionStart;
  }
  else
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, v5);
    mValue = this->fields.mValue;
    if ( !mValue )
      sub_1C32E7C(isSelected);
    p_mSelectionStart = (int32_t *)&mValue->fields;
  }
  return *p_mSelectionStart;
}


System_String_o *UIInput__get_text(UIInput_o *this, const MethodInfo *method)
{
  if ( this->fields.mDoInit )
    UIInput__Init(this, method);
  return this->fields.mValue;
}


System_String_o *UIInput__get_value(UIInput_o *this, const MethodInfo *method)
{
  if ( this->fields.mDoInit )
    UIInput__Init(this, method);
  return this->fields.mValue;
}


// local variable allocation has failed, the output may be wrong!
void UIInput__set_cursorPosition(UIInput_o *this, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UIInput_c *v6; // x0

  if ( (byte_4C3C2B1 & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2B1 = 1;
  }
  if ( UIInput__get_isSelected(this, *(const MethodInfo **)&value) )
  {
    v6 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v6 = UIInput_TypeInfo;
    }
    if ( !v6->static_fields->mKeyboard || UIInput__get_inputShouldBeHidden(this, v5) )
    {
      this->fields.mSelectionEnd = value;
      UIInput__UpdateLabel(this, v5);
    }
  }
}


void UIInput__set_defaultText(UIInput_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1

  if ( this->fields.mDoInit )
    UIInput__Init(this, (const MethodInfo *)value);
  this->fields.mDefaultText = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mDefaultText, (int32_t)value, (int32_t)method, v3);
  UIInput__UpdateLabel(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void UIInput__set_isSelected(UIInput_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C3C2AF & 1) == 0 )
  {
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C2AF = 1;
  }
  if ( value )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
  }
  else
  {
    if ( !UIInput__get_isSelected(this, (const MethodInfo *)value) )
      return;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    gameObject = 0;
  }
  UICamera__set_selectedObject(gameObject, 0);
}


void UIInput__set_selected(UIInput_o *this, bool value, const MethodInfo *method)
{
  UIInput__set_isSelected(this, value, method);
}


// local variable allocation has failed, the output may be wrong!
void UIInput__set_selectionEnd(UIInput_o *this, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UIInput_c *v6; // x0

  if ( (byte_4C3C2B5 & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2B5 = 1;
  }
  if ( UIInput__get_isSelected(this, *(const MethodInfo **)&value) )
  {
    v6 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v6 = UIInput_TypeInfo;
    }
    if ( !v6->static_fields->mKeyboard || UIInput__get_inputShouldBeHidden(this, v5) )
    {
      this->fields.mSelectionEnd = value;
      UIInput__UpdateLabel(this, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIInput__set_selectionStart(UIInput_o *this, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UIInput_c *v6; // x0

  if ( (byte_4C3C2B3 & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2B3 = 1;
  }
  if ( UIInput__get_isSelected(this, *(const MethodInfo **)&value) )
  {
    v6 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v6 = UIInput_TypeInfo;
    }
    if ( !v6->static_fields->mKeyboard || UIInput__get_inputShouldBeHidden(this, v5) )
    {
      this->fields.mSelectionStart = value;
      UIInput__UpdateLabel(this, v5);
    }
  }
}


// attributes: thunk
void UIInput__set_text(UIInput_o *this, System_String_o *value, const MethodInfo *method)
{
  UIInput__set_value(this, value, method);
}


void UIInput__set_value(UIInput_o *this, System_String_o *value, const MethodInfo *method)
{
  UIInput_c *v5; // x0
  System_String_o *v6; // x20
  const MethodInfo *v7; // x1
  UIInput_c *v8; // x0
  UIInput_c *v9; // x0
  UnityEngine_TouchScreenKeyboard_o *mKeyboard; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  int32_t stringLength; // w8
  const MethodInfo *v19; // x1

  if ( (byte_4C3C2AD & 1) == 0 )
  {
    sub_1C32C20(&UIInput_TypeInfo);
    byte_4C3C2AD = 1;
  }
  if ( this->fields.mDoInit )
    UIInput__Init(this, (const MethodInfo *)value);
  v5 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v5 = UIInput_TypeInfo;
  }
  v5->static_fields->mDrawStart = 0;
  v6 = UIInput__Validate(this, value, method);
  if ( UIInput__get_isSelected(this, v7) )
  {
    v8 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v8 = UIInput_TypeInfo;
    }
    if ( v8->static_fields->mKeyboard && System_String__op_Inequality(this->fields.mCached, v6, 0) )
    {
      v9 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v9 = UIInput_TypeInfo;
      }
      mKeyboard = v9->static_fields->mKeyboard;
      if ( !mKeyboard )
        goto LABEL_25;
      UnityEngine_TouchScreenKeyboard__set_text(mKeyboard, v6, 0);
      this->fields.mCached = v6;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCached, (int32_t)v6, v11, v12);
    }
  }
  if ( System_String__op_Inequality(this->fields.mValue, v6, 0) )
  {
    this->fields.mValue = v6;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)v6, v13, v14);
    this->fields.mLoadSavedValue = 0;
    if ( !UIInput__get_isSelected(this, v15) )
    {
      UIInput__SaveToPlayerPrefs(this, v6, v16);
      goto LABEL_24;
    }
    mKeyboard = (UnityEngine_TouchScreenKeyboard_o *)System_String__IsNullOrEmpty(v6, 0);
    if ( ((unsigned __int8)mKeyboard & 1) != 0 )
    {
      *(_QWORD *)&this->fields.mSelectionStart = 0;
LABEL_24:
      UIInput__UpdateLabel(this, v17);
      UIInput__ExecuteOnChange(this, v19);
      return;
    }
    if ( v6 )
    {
      stringLength = v6->fields._stringLength;
      this->fields.mSelectionStart = stringLength;
      this->fields.mSelectionEnd = stringLength;
      goto LABEL_24;
    }
LABEL_25:
    sub_1C32E7C(mKeyboard);
  }
}


void UIInput_OnValidate___ctor(UIInput_OnValidate_o *this, Il2CppObject *object, intptr_t method, const MethodInfo *a4)
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( v8 == 2 )
    {
      v9 = sub_1A7EFDC;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 3 )
    goto LABEL_8;
  v9 = sub_1A7F004;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7EF74;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *UIInput_OnValidate__BeginInvoke(
        UIInput_OnValidate_o *this,
        System_String_o *text,
        int32_t charIndex,
        uint16_t addedChar,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD v19[4]; // [xsp+8h] [xbp-68h] BYREF
  uint16_t v20[2]; // [xsp+28h] [xbp-48h] BYREF
  int32_t v21; // [xsp+2Ch] [xbp-44h] BYREF

  v21 = charIndex;
  v20[0] = addedChar;
  if ( (byte_4C3C2CD & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    byte_4C3C2CD = 1;
  }
  v19[3] = 0;
  v19[0] = text;
  v19[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, *(_QWORD *)&charIndex, addedChar, callback, object, method, v7);
  v19[2] = j_il2cpp_value_box_0(char_TypeInfo, v20, v12, v13, v14, v15, v16, v17);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v19, callback, object);
}


uint16_t UIInput_OnValidate__EndInvoke(
        UIInput_OnValidate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_1C32BD8(result, 0, method);
  if ( !v3 )
    sub_1C32E7C(0);
  return *(_WORD *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


uint16_t UIInput_OnValidate__Invoke(
        UIInput_OnValidate_o *this,
        System_String_o *text,
        int32_t charIndex,
        uint16_t addedChar,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, System_String_o *, int32_t, uint16_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           text,
           charIndex,
           addedChar,
           this->fields.method);
}