void UIInput___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct UIInput_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4C5B63E & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B63E = 1;
  }
  static_fields = UIInput_TypeInfo->static_fields;
  static_fields->mDrawStart = 0;
  v4 = StringLiteral_1/*""*/;
  static_fields->mLastIME = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->mLastIME, v4, v1, v2);
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

  if ( (byte_4C5B63D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B63D = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  this->fields.selectAllTextOnFocus = 1;
  this->fields.activeTextColor = _Q2;
  this->fields.caretColor = (struct UnityEngine_Color_o)xmmword_C13650;
  this->fields.selectionColor = (struct UnityEngine_Color_o)xmmword_C125B0;
  v20 = _Q2;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSubmit = (struct System_Collections_Generic_List_EventDelegate__o *)v8;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onSubmit, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v11;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.onChange, (int32_t)v11, v12, v13);
  v14 = StringLiteral_1/*""*/;
  this->fields.mDefaultText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mDefaultText, v14, v15, v16);
  this->fields.mDoInit = 1;
  this->fields.mLoadSavedValue = 1;
  this->fields.mDefaultColor = v20;
  v17 = StringLiteral_1/*""*/;
  this->fields.mCached = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCached, v17, v18, v19);
  this->fields.mSelectMe = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIInput__Cleanup(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHighlight; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *mCaret; // x20
  CGThumbnailListItem_o *p_mBlankTex; // x19
  UnityEngine_Object_o *v8; // x20
  struct UnityEngine_Texture2D_o *mBlankTex; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C5B636 & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B636 = 1;
  }
  mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(mHighlight, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.mHighlight;
    if ( !v5 )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(v5, 0, 0);
  }
  mCaret = (UnityEngine_Object_o *)this->fields.mCaret;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(mCaret, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.mCaret;
    if ( v5 )
    {
      UnityEngine_Behaviour__set_enabled(v5, 0, 0);
      goto LABEL_13;
    }
LABEL_20:
    sub_1C3E7C0(v5, v4);
  }
LABEL_13:
  mBlankTex = this->fields.mBlankTex;
  p_mBlankTex = (CGThumbnailListItem_o *)&this->fields.mBlankTex;
  v8 = (UnityEngine_Object_o *)mBlankTex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(v8, 0) )
  {
    klass = (UnityEngine_Object_o *)p_mBlankTex->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_mBlankTex->klass = 0;
    sub_1C3E508(p_mBlankTex, 0, v11, v12);
  }
}


void UIInput__DoBackspace(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionStart; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_4C5B62E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B62E = 1;
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

  if ( (byte_4C5B63B & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B63B = 1;
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
    if ( EventDelegate__IsValid_49322312(onChange, 0) )
    {
      v8 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v8 = UIInput_TypeInfo;
      }
      v8->static_fields->current = this;
      sub_1C3E508((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, (int32_t)this, v6, v7);
      v9 = this->fields.onChange;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49293740(v9, 0);
      UIInput_TypeInfo->static_fields->current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, 0, v10, v11);
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

  if ( (byte_4C5B633 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B633 = 1;
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
    sub_1C3E7C8(label, method);
  sub_2F01B3C(
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
  if ( !byte_4C506A5 )
  {
    sub_1C3E564(&UnityEngine_Mathf_TypeInfo);
    byte_4C506A5 = 1;
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
      sub_1C3E7C0(label, method);
    }
  }
  return 0;
}


System_String_o *UIInput__GetLeftText(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionEnd; // w20
  __int64 v4; // x1
  System_String_o *mValue; // x0

  if ( (byte_4C5B630 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B630 = 1;
  }
  if ( this->fields.mSelectionStart >= this->fields.mSelectionEnd )
    mSelectionEnd = this->fields.mSelectionEnd;
  else
    mSelectionEnd = this->fields.mSelectionStart;
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) || mSelectionEnd < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( !mValue )
    sub_1C3E7C0(0, v4);
  return System_String__Substring_63682392(mValue, 0, mSelectionEnd, 0);
}


System_String_o *UIInput__GetRightText(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionEnd; // w20
  __int64 v4; // x1
  struct System_String_o *mValue; // x0

  if ( (byte_4C5B631 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B631 = 1;
  }
  if ( this->fields.mSelectionStart <= this->fields.mSelectionEnd )
    mSelectionEnd = this->fields.mSelectionEnd;
  else
    mSelectionEnd = this->fields.mSelectionStart;
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( !mValue )
    sub_1C3E7C0(0, v4);
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
  __int64 v7; // x1

  if ( (byte_4C5B632 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B632 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  mSelectionStart = this->fields.mSelectionStart;
  mSelectionEnd = this->fields.mSelectionEnd;
  if ( mSelectionStart == mSelectionEnd )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( mSelectionStart >= mSelectionEnd )
    v7 = (unsigned int)mSelectionEnd;
  else
    v7 = (unsigned int)mSelectionStart;
  if ( !mValue )
    sub_1C3E7C0(0, v7);
  if ( mSelectionStart <= mSelectionEnd )
    mSelectionStart = this->fields.mSelectionEnd;
  return System_String__Substring_63682392(mValue, v7, mSelectionStart - (int)v7, 0);
}


void UIInput__Init(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *cachedTransform; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UILabel_o *v8; // x8
  struct System_String_o *mText; // x1
  const MethodInfo *v10; // x1

  if ( (byte_4C5B62A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Debug_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_7677/*"Input fields using labels with justified alignment are not supported at this time"*/);
    byte_4C5B62A = 1;
  }
  if ( this->fields.mDoInit )
  {
    label = (UnityEngine_Object_o *)this->fields.label;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v8 = this->fields.label;
      this->fields.mDoInit = 0;
      if ( !v8 )
        goto LABEL_18;
      mText = v8->fields.mText;
      this->fields.mDefaultText = mText;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mDefaultText, (int32_t)mText, v6, v7);
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
        UILabel__ProcessAndRequest(cachedTransform, v5);
        if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
        UnityEngine_Debug__LogWarning_71155500((Il2CppObject *)StringLiteral_7677/*"Input fields using labels with justified alignment are not supported at this time"*/, (UnityEngine_Object_o *)this, 0);
        cachedTransform = this->fields.label;
        if ( !cachedTransform )
          goto LABEL_18;
      }
      this->fields.mPivot = cachedTransform->fields.mPivot;
      cachedTransform = (UILabel_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
      if ( !cachedTransform )
LABEL_18:
        sub_1C3E7C0(cachedTransform, v5);
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
  __int64 v8; // x1
  System_String_o *v9; // x20
  int32_t stringLength; // w26
  int32_t v11; // w24
  int32_t v12; // w25
  System_Text_StringBuilder_o *v13; // x21
  int32_t v14; // w27
  int32_t v15; // w23
  unsigned int Chars; // w0
  const MethodInfo *v17; // x1
  unsigned int v18; // w24
  struct UIInput_OnValidate_o *onValidate; // x28
  __int64 v20; // x25
  unsigned int Length; // w0
  uint16_t v22; // w0
  System_String_o *v23; // x25
  int32_t v24; // w0
  const MethodInfo *v25; // x4
  int32_t v26; // w0
  int v27; // w25
  int32_t v28; // w22
  unsigned int v29; // w0
  struct UIInput_OnValidate_o *v30; // x26
  unsigned int v31; // w23
  __int64 v32; // x24
  unsigned int v33; // w0
  uint16_t v34; // w0
  System_String_o *v35; // x24
  int32_t v36; // w0
  const MethodInfo *v37; // x4
  struct System_String_o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1

  if ( (byte_4C5B62F & 1) == 0 )
  {
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    byte_4C5B62F = 1;
  }
  LeftText = UIInput__GetLeftText(this, (const MethodInfo *)text);
  RightText = UIInput__GetRightText(this, v6);
  if ( !RightText
    || !LeftText
    || !text
    || (v9 = RightText,
        stringLength = RightText->fields._stringLength,
        v11 = LeftText->fields._stringLength,
        v12 = text->fields._stringLength,
        v13 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo),
        System_Text_StringBuilder___ctor_63714884(v13, v11 + stringLength + v12, 0),
        !v13) )
  {
    sub_1C3E7C0(RightText, v8);
  }
  System_Text_StringBuilder__Append_63721532(v13, LeftText, 0);
  v14 = text->fields._stringLength;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(text, v15, 0);
      if ( (unsigned __int16)Chars != 8 )
        break;
      UIInput__DoBackspace(this, v17);
LABEL_20:
      if ( v14 == ++v15 )
        goto LABEL_21;
    }
    v18 = Chars;
    if ( this->fields.characterLimit >= 1
      && System_Text_StringBuilder__get_Length(v13, 0) + stringLength >= this->fields.characterLimit )
    {
      goto LABEL_21;
    }
    onValidate = this->fields.onValidate;
    if ( onValidate )
    {
      v20 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
              v13,
              v13->klass->vtable._3_ToString.method);
      Length = System_Text_StringBuilder__get_Length(v13, 0);
      v22 = ((__int64 (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))onValidate->fields.invoke_impl)(
              onValidate->fields.method_code,
              v20,
              Length,
              v18,
              onValidate->fields.method);
    }
    else
    {
      if ( !this->fields.validation )
        goto LABEL_18;
      v23 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                                 v13,
                                 v13->klass->vtable._3_ToString.method);
      v24 = System_Text_StringBuilder__get_Length(v13, 0);
      v22 = UIInput__Validate_49565244(this, v23, v24, v18, v25);
    }
    LOWORD(v18) = v22;
LABEL_18:
    if ( (_WORD)v18 )
      System_Text_StringBuilder__Append_63723860(v13, v18, 0);
    goto LABEL_20;
  }
LABEL_21:
  v26 = System_Text_StringBuilder__get_Length(v13, 0);
  this->fields.mSelectionStart = v26;
  this->fields.mSelectionEnd = v26;
  v27 = v9->fields._stringLength;
  if ( v27 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = System_String__get_Chars(v9, v28, 0);
      v30 = this->fields.onValidate;
      v31 = v29;
      if ( v30 )
        break;
      if ( this->fields.validation )
      {
        v35 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                                   v13,
                                   v13->klass->vtable._3_ToString.method);
        v36 = System_Text_StringBuilder__get_Length(v13, 0);
        v34 = UIInput__Validate_49565244(this, v35, v36, v31, v37);
        goto LABEL_27;
      }
LABEL_28:
      if ( (_WORD)v31 )
        System_Text_StringBuilder__Append_63723860(v13, v31, 0);
      if ( v27 == ++v28 )
        goto LABEL_31;
    }
    v32 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
            v13,
            v13->klass->vtable._3_ToString.method);
    v33 = System_Text_StringBuilder__get_Length(v13, 0);
    v34 = ((__int64 (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))v30->fields.invoke_impl)(
            v30->fields.method_code,
            v32,
            v33,
            v31,
            v30->fields.method);
LABEL_27:
    LOWORD(v31) = v34;
    goto LABEL_28;
  }
LABEL_31:
  v38 = (struct System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                                    v13,
                                    v13->klass->vtable._3_ToString.method);
  this->fields.mValue = v38;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)v38, v39, v40);
  UIInput__UpdateLabel(this, v41);
  UIInput__ExecuteOnChange(this, v42);
}


void UIInput__LoadValue(UIInput_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *mValue; // x0
  System_String_o *String_71300376; // x20
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4C5B63C & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_16054/*"\\n"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B63C = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.savedAs, 0) )
  {
    mValue = this->fields.mValue;
    if ( !mValue )
      sub_1C3E7C0(0, v3);
    String_71300376 = System_String__Replace_63683016(
                        mValue,
                        (System_String_o *)StringLiteral_16054/*"\\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0);
    v6 = StringLiteral_1/*""*/;
    this->fields.mValue = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mValue, v6, v7, v8);
    if ( UnityEngine_PlayerPrefs__HasKey(this->fields.savedAs, 0) )
      String_71300376 = UnityEngine_PlayerPrefs__GetString_71300376(this->fields.savedAs, 0);
    UIInput__set_value(this, String_71300376, v9);
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
  __int64 v10; // x1
  struct UIInput_StaticFields *v11; // x8
  struct UIInput_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  struct UILabel_o *v16; // x8
  const MethodInfo *v17; // x1
  UIInput_c *v18; // x0
  struct UIInput_StaticFields *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4C5B62C & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B62C = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)this->fields.mValue, v4, v5);
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
          v11 = UIInput_TypeInfo->static_fields;
          mKeyboard = v11->mKeyboard;
          v11->mWaitForKeyboard = 0;
          if ( !mKeyboard )
            goto LABEL_30;
        }
        UnityEngine_TouchScreenKeyboard__set_active(mKeyboard, 0, 0);
        v12 = UIInput_TypeInfo->static_fields;
        v12->mKeyboard = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&v12->mKeyboard, 0, v13, v14);
      }
      mKeyboard = (UnityEngine_TouchScreenKeyboard_o *)System_String__IsNullOrEmpty(this->fields.mValue, 0);
      v16 = this->fields.label;
      if ( ((unsigned __int8)mKeyboard & 1) != 0 )
      {
        if ( v16 )
        {
          UILabel__set_text(this->fields.label, this->fields.mDefaultText, v15);
          mKeyboard = (UnityEngine_TouchScreenKeyboard_o *)this->fields.label;
          if ( mKeyboard )
          {
            UIWidget__set_color((UIWidget_o *)mKeyboard, this->fields.mDefaultColor, 0);
LABEL_26:
            UnityEngine_Input__set_imeCompositionMode(0, 0);
            UIInput__RestoreLabelPivot(this, v17);
            goto LABEL_27;
          }
        }
      }
      else if ( v16 )
      {
        UILabel__set_text(this->fields.label, this->fields.mValue, v15);
        goto LABEL_26;
      }
LABEL_30:
      sub_1C3E7C0(mKeyboard, v10);
    }
  }
LABEL_27:
  v18 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v18 = UIInput_TypeInfo;
  }
  v19 = v18->static_fields;
  v19->selection = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&v19->selection, 0, v4, v5);
  UIInput__UpdateLabel(this, v20);
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

  if ( (byte_4C5B635 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B635 = 1;
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

  if ( (byte_4C5B634 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B634 = 1;
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

  if ( (byte_4C5B62B & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B62B = 1;
  }
  v5 = UIInput_TypeInfo;
  if ( !UIInput_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
    v5 = UIInput_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->selection = this;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->selection, (int32_t)this, v2, v3);
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
  __int64 v4; // x1
  UIWidget_o *v5; // x0
  int32_t mPivot; // w1

  if ( (byte_4C5B639 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B639 = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v5 = (UIWidget_o *)this->fields.label;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    mPivot = this->fields.mPivot;
    if ( v5->fields.mPivot != mPivot )
      UIWidget__set_pivot(v5, mPivot, 0);
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
  __int64 v5; // x1
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4

  v6.fields.y = NGUIMath__GetPivotOffset((int)this[192], 0).fields.y;
  label = (UIWidget_o *)this->fields.label;
  v6.fields.x = 0.0;
  Pivot = NGUIMath__GetPivot(v6, 0);
  if ( !label )
    sub_1C3E7C0(Pivot, v5);
  UIWidget__set_pivot(label, Pivot, 0);
}


void UIInput__SetPivotToRight(UIInput_o *this, const MethodInfo *method)
{
  UIWidget_o *label; // x19
  __int64 Pivot; // x0
  __int64 v5; // x1
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4

  v6.fields.y = NGUIMath__GetPivotOffset((int)this[192], 0).fields.y;
  label = (UIWidget_o *)this->fields.label;
  v6.fields.x = 1.0;
  Pivot = NGUIMath__GetPivot(v6, 0);
  if ( !label )
    sub_1C3E7C0(Pivot, v5);
  UIWidget__set_pivot(label, Pivot, 0);
}


void UIInput__Start(UIInput_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectOnTab; // x20
  UnityEngine_Object_o *selectOnTab; // x21
  const MethodInfo *v5; // x1
  Il2CppObject *Component_object; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  char *gameObject; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_GameObject_o *v12; // x1
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C5B629 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_1C3E564(&Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_16054/*"\\n"*/);
    byte_4C5B629 = 1;
  }
  p_selectOnTab = &this->fields.selectOnTab;
  selectOnTab = (UnityEngine_Object_o *)this->fields.selectOnTab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectOnTab, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (char *)UnityEngine_GameObject__AddComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_3150FE4 *)Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation___);
      if ( !gameObject )
        goto LABEL_20;
      v12 = *p_selectOnTab;
      *((_QWORD *)gameObject + 6) = *p_selectOnTab;
      sub_1C3E508((CGThumbnailListItem_o *)(gameObject + 48), (int32_t)v12, v10, v11);
    }
    *p_selectOnTab = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectOnTab, 0, v7, v8);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
  }
  if ( !this->fields.mLoadSavedValue || System_String__IsNullOrEmpty(this->fields.savedAs, 0) )
  {
    gameObject = (char *)this->fields.mValue;
    if ( gameObject )
    {
      v13 = System_String__Replace_63683016(
              (System_String_o *)gameObject,
              (System_String_o *)StringLiteral_16054/*"\\n"*/,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              0);
      UIInput__set_value(this, v13, v14);
      return;
    }
LABEL_20:
    sub_1C3E7C0(gameObject, v5);
  }
  UIInput__LoadValue(this, v5);
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

  if ( (byte_4C5B637 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B637 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, v3);
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)this->fields.mValue, v4, v5);
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
      sub_1C3E508((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, (int32_t)this, (int32_t)v8, v9);
      onSubmit = this->fields.onSubmit;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49293740(onSubmit, 0);
      UIInput_TypeInfo->static_fields->current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)UIInput_TypeInfo->static_fields, 0, v12, v13);
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
  const MethodInfo *v8; // x1
  int32_t mSelectMe; // w20
  System_String_o *v10; // x0
  int32_t stringLength; // w8
  struct System_String_o *v12; // x8
  UIInput_c *v13; // x0
  int32_t mSelectionEnd; // w8
  unsigned int platform; // w0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  int32_t keyboardType; // w20
  System_String_o *v19; // x21
  int32_t inputType; // w20
  UIInput_c *v21; // x0
  UnityEngine_TouchScreenKeyboard_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
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
  System_String_o *compositionString; // x20
  System_String_o *inputString; // x0
  System_String_o *v39; // x21
  int32_t v40; // w22
  uint16_t Chars; // w0
  System_String_o *v42; // x0
  UIInput_c *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int mSelectionStart; // w8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  struct System_String_o *mValue; // x8
  UIInput_c *v51; // x0
  struct UIInput_StaticFields *v52; // x0
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  System_String_o *v55; // x0
  UIInput_c *v56; // x0
  UIInput_c *v57; // x0
  UIInput_c *v58; // x0
  UIInput_c *v59; // x0
  const MethodInfo *v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  UIInput_c *v63; // x0
  struct UIInput_StaticFields *v64; // x0
  const MethodInfo *v65; // x2
  int32_t v66; // w1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  UnityEngine_Object_o *mCaret; // x20
  const MethodInfo *v70; // x1
  float mNextBlink; // s8
  float time; // s0
  UnityEngine_Behaviour_o *v73; // x20
  bool enabled; // w0
  struct UILabel_o *label; // x8
  int32_t onReturnKey; // w8
  struct UILabel_o *v77; // x8
  struct UILabel_o *v78; // x8
  UICamera_c *v79; // x0
  struct UICamera_StaticFields *v80; // x8
  UICamera_c *v81; // x0
  UnityEngine_Object_o *current; // x20
  UICamera_c *v83; // x0
  UnityEngine_Object_o *cachedCamera; // x20
  UICamera_c *v85; // x0
  struct UILabel_o *v86; // x8
  UnityEngine_Camera_o *v87; // x20
  float x; // s8
  float y; // s9
  float v90; // s9
  uint16_t v91; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2_o v92; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B62D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&char_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    sub_1C3E564(&StringLiteral_43/*"\n"*/);
    sub_1C3E564(&StringLiteral_25267/*"|"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B62D = 1;
  }
  v91 = 0;
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
          if ( System_String__op_Inequality(text, (System_String_o *)StringLiteral_25267/*"|"*/, 0) )
          {
            IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0);
            if ( (IsNullOrEmpty & 1) != 0 )
            {
              UIInput__DoBackspace(this, v8);
            }
            else
            {
              if ( !text )
                goto LABEL_163;
              v55 = System_String__Substring(text, 1, 0);
              ((void (__fastcall *)(UIInput_o *, System_String_o *, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
                this,
                v55,
                this->klass->vtable._6_Insert.method);
            }
            v56 = UIInput_TypeInfo;
            if ( !UIInput_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
              v56 = UIInput_TypeInfo;
            }
            IsNullOrEmpty = (__int64)v56->static_fields->mKeyboard;
            if ( !IsNullOrEmpty )
              goto LABEL_163;
            UnityEngine_TouchScreenKeyboard__set_text(
              (UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty,
              (System_String_o *)StringLiteral_25267/*"|"*/,
              0);
          }
        }
        else if ( System_String__op_Inequality(this->fields.mCached, text, 0) )
        {
          this->fields.mCached = text;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCached, (int32_t)text, v47, v48);
          UIInput__set_value(this, text, v49);
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
        if ( UnityEngine_TouchScreenKeyboard__get_done((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
          goto LABEL_105;
        v58 = UIInput_TypeInfo;
        if ( !UIInput_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
          v58 = UIInput_TypeInfo;
        }
        IsNullOrEmpty = (__int64)v58->static_fields->mKeyboard;
        if ( !IsNullOrEmpty )
          goto LABEL_163;
        if ( !UnityEngine_TouchScreenKeyboard__get_active((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
        {
LABEL_105:
          v59 = UIInput_TypeInfo;
          if ( !UIInput_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
            v59 = UIInput_TypeInfo;
          }
          IsNullOrEmpty = (__int64)v59->static_fields->mKeyboard;
          if ( !IsNullOrEmpty )
            goto LABEL_163;
          if ( !UnityEngine_TouchScreenKeyboard__get_wasCanceled((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
            UIInput__Submit(this, v60);
          v63 = UIInput_TypeInfo;
          if ( !UIInput_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
            v63 = UIInput_TypeInfo;
          }
          v64 = v63->static_fields;
          v64->mKeyboard = 0;
          sub_1C3E508((CGThumbnailListItem_o *)&v64->mKeyboard, 0, v61, v62);
          UIInput__set_isSelected(this, 0, v65);
          v66 = StringLiteral_1/*""*/;
          this->fields.mCached = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCached, v66, v67, v68);
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
            v39 = (System_String_o *)IsNullOrEmpty;
            if ( *(int *)(IsNullOrEmpty + 16) >= 1 )
            {
              v40 = 0;
              do
              {
                Chars = System_String__get_Chars(v39, v40, 0);
                v91 = Chars;
                if ( Chars >= 0x20u && (Chars & 0xFFFC) != 0xF700 )
                {
                  if ( !char_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(char_TypeInfo);
                  v42 = System_Char__ToString((uint16_t)&v91, 0);
                  ((void (__fastcall *)(UIInput_o *, System_String_o *, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
                    this,
                    v42,
                    this->klass->vtable._6_Insert.method);
                }
                ++v40;
              }
              while ( v40 < v39->fields._stringLength );
            }
          }
        }
        v43 = UIInput_TypeInfo;
        if ( !UIInput_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
          v43 = UIInput_TypeInfo;
        }
        if ( System_String__op_Inequality(v43->static_fields->mLastIME, compositionString, 0) )
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
          v51 = UIInput_TypeInfo;
          if ( !UIInput_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
            v51 = UIInput_TypeInfo;
          }
          v52 = v51->static_fields;
          v52->mLastIME = compositionString;
          sub_1C3E508((CGThumbnailListItem_o *)&v52->mLastIME, (int32_t)compositionString, v44, v45);
          UIInput__UpdateLabel(this, v53);
          UIInput__ExecuteOnChange(this, v54);
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
          v73 = (UnityEngine_Behaviour_o *)this->fields.mCaret;
          this->fields.mNextBlink = time + 0.5;
          if ( !v73 )
            goto LABEL_163;
          enabled = UnityEngine_Behaviour__get_enabled(v73, 0);
          UnityEngine_Behaviour__set_enabled(v73, !enabled, 0);
        }
      }
      IsNullOrEmpty = UIInput__get_isSelected(this, v70);
      if ( (IsNullOrEmpty & 1) != 0 )
      {
        label = this->fields.label;
        if ( !label )
          goto LABEL_163;
        if ( this->fields.mLastAlpha != label->fields.finalAlpha )
          UIInput__UpdateLabel(this, v8);
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
      v77 = this->fields.label;
      if ( v77 )
      {
        if ( v77->fields.mMaxLineCount == 1
          || UnityEngine_Input__GetKey(306, 0)
          || (IsNullOrEmpty = UnityEngine_Input__GetKey(305, 0), (IsNullOrEmpty & 1) != 0) )
        {
LABEL_134:
          v79 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v79 = UICamera_TypeInfo;
          }
          v80 = v79->static_fields;
          v80->currentScheme = 2;
          v80->currentKey = 13;
          UIInput__Submit(this, v8);
          UICamera_TypeInfo->static_fields->currentKey = 0;
          return;
        }
        v78 = this->fields.label;
        if ( v78 )
        {
          if ( v78->fields.mOverflow == 1 || this->fields.validation )
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
      sub_1C3E7C0(IsNullOrEmpty, v8);
    }
    v10 = this->fields.mValue;
    this->fields.mSelectMe = -1;
    IsNullOrEmpty = System_String__IsNullOrEmpty(v10, 0);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      stringLength = 0;
    }
    else
    {
      v12 = this->fields.mValue;
      if ( !v12 )
        goto LABEL_163;
      stringLength = v12->fields._stringLength;
    }
    this->fields.mSelectionEnd = stringLength;
    v13 = UIInput_TypeInfo;
    if ( !UIInput_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
      v13 = UIInput_TypeInfo;
    }
    v13->static_fields->mDrawStart = 0;
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
      if ( UIInput__get_inputShouldBeHidden(this, v16) )
      {
        UnityEngine_TouchScreenKeyboard__set_hideInput(1, 0);
        keyboardType = this->fields.keyboardType;
        v19 = (System_String_o *)StringLiteral_25267/*"|"*/;
      }
      else
      {
        inputType = this->fields.inputType;
        UnityEngine_TouchScreenKeyboard__set_hideInput(0, 0);
        if ( inputType == 2 )
          keyboardType = 0;
        else
          keyboardType = this->fields.keyboardType;
        v19 = this->fields.mValue;
        this->fields.mSelectionStart = this->fields.mSelectionEnd;
      }
      v21 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v21 = UIInput_TypeInfo;
      }
      v21->static_fields->mWaitForKeyboard = 1;
      if ( this->fields.inputType == 2 )
      {
        v22 = UnityEngine_TouchScreenKeyboard__Open_71354392(v19, keyboardType, 0, 0, 1, 0);
      }
      else
      {
        IsNullOrEmpty = UIInput__get_inputShouldBeHidden(this, v17);
        v25 = (IsNullOrEmpty & 1) == 0 && this->fields.inputType == 1;
        v26 = this->fields.label;
        if ( !v26 )
          goto LABEL_163;
        v27 = v26->fields.mMaxLineCount != 1 && !this->fields.hideInput;
        if ( this->fields.mDoInit )
          UIInput__Init(this, v8);
        v22 = UnityEngine_TouchScreenKeyboard__Open_71354348(
                v19,
                keyboardType,
                v25,
                v27,
                0,
                0,
                this->fields.mDefaultText,
                0);
      }
      v28 = v22;
      v29 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v29 = UIInput_TypeInfo;
      }
      v30 = v29->static_fields;
      v30->mKeyboard = v28;
      sub_1C3E508((CGThumbnailListItem_o *)&v30->mKeyboard, (int32_t)v28, v23, v24);
      goto LABEL_57;
    }
    v81 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v81 = UICamera_TypeInfo;
    }
    current = (UnityEngine_Object_o *)v81->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
      goto LABEL_158;
    v83 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v83 = UICamera_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v83->static_fields->current;
    if ( !IsNullOrEmpty )
      goto LABEL_163;
    cachedCamera = (UnityEngine_Object_o *)UICamera__get_cachedCamera((UICamera_o *)IsNullOrEmpty, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cachedCamera, 0, 0) )
    {
      v85 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v85 = UICamera_TypeInfo;
      }
      IsNullOrEmpty = (__int64)v85->static_fields->current;
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      IsNullOrEmpty = (__int64)UICamera__get_cachedCamera((UICamera_o *)IsNullOrEmpty, 0);
      v86 = this->fields.label;
      if ( !v86 )
        goto LABEL_163;
      v87 = (UnityEngine_Camera_o *)IsNullOrEmpty;
      IsNullOrEmpty = (__int64)((__int64 (__fastcall *)(struct UILabel_o *__return_ptr, struct UILabel_o *, const MethodInfo *))v86->klass->vtable._11_get_worldCorners.methodPtr)(
                                 v86,
                                 this->fields.label,
                                 v86->klass->vtable._11_get_worldCorners.method);
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      if ( *(_DWORD *)(IsNullOrEmpty + 24) )
      {
        if ( !v87 )
          goto LABEL_163;
        v93 = UnityEngine_Camera__WorldToScreenPoint_71147832(v87, *(UnityEngine_Vector3_o *)(IsNullOrEmpty + 32), 0);
        x = v93.fields.x;
        y = v93.fields.y;
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
        v90 = (float)UnityEngine_Screen__get_height(0) - y;
        UnityEngine_Input__set_imeCompositionMode(1, 0);
        v92.fields.x = x;
        v92.fields.y = v90;
        UnityEngine_Input__set_compositionCursorPos(v92, 0);
LABEL_57:
        UIInput__UpdateLabel(this, v31);
        v32 = UnityEngine_Input__get_inputString(0);
        if ( System_String__IsNullOrEmpty(v32, 0) )
          return;
        goto LABEL_58;
      }
    }
    sub_1C3E7C8(IsNullOrEmpty, v8);
  }
}


void UIInput__UpdateLabel(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  _BOOL4 isSelected; // w20
  struct System_String_o *mValue; // x21
  unsigned __int64 method_ptr_low; // x1
  System_String_o *compositionString; // x0
  _BOOL4 IsNullOrEmpty; // w8
  UIWidget_o *bmFont; // x0
  char v12; // w22
  struct UnityEngine_Color_o *p_mDefaultColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
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
  int32_t v34; // w22
  UIInput_c *v35; // x8
  struct UIInput_StaticFields *static_fields; // x9
  int32_t mDrawStart; // w26
  UIInput_c *v38; // x0
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  UIInput_c *v41; // x0
  int32_t mSelectionStart; // w23
  int32_t v43; // w24
  struct UnityEngine_Texture2D_o **p_mBlankTex; // x20
  UnityEngine_Object_o *mBlankTex; // x21
  int32_t mSelectionEnd; // w26
  UnityEngine_Texture2D_o *v47; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t i; // w21
  char v51; // w8
  char v52; // w22
  struct UITexture_o **p_mHighlight; // x21
  UnityEngine_Object_o *mHighlight; // x22
  UnityEngine_GameObject_o *cachedGameObject; // x22
  Il2CppObject *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct UILabel_o *v59; // x8
  UIRect_o *v60; // x21
  struct UILabel_o *v61; // x8
  struct UITexture_o **p_mCaret; // x21
  UnityEngine_Object_o *mCaret; // x22
  UnityEngine_GameObject_o *v64; // x22
  Il2CppObject *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct UILabel_o *v68; // x8
  UIRect_o *v69; // x20
  const MethodInfo *v70; // x5
  struct UILabel_o *v71; // x8
  struct UITexture_o *v72; // x8
  UIGeometry_o *geometry; // x3
  int32_t v74; // w2
  UnityEngine_Object_o *v75; // x20
  UnityEngine_Behaviour_o *v76; // x20
  bool hasVertices; // w0
  struct UITexture_o *v78; // x8
  float time; // s0
  struct UILabel_o *v80; // x8
  UILabel_o *v81; // x22
  const MethodInfo *v82; // x2
  int32_t v83; // w0
  const MethodInfo *v84; // x1
  UIInput_c *v85; // x8
  int32_t v86; // w22
  struct UIInput_StaticFields *v87; // x9
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C5B638 & 1) == 0 )
  {
    sub_1C3E564(&Method_NGUITools_AddWidget_UITexture___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UnityEngine_Texture2D_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    sub_1C3E564(&StringLiteral_24884/*"x"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_788/*"*"*/);
    sub_1C3E564(&StringLiteral_7671/*"Input Caret"*/);
    sub_1C3E564(&StringLiteral_7672/*"Input Highlight"*/);
    byte_4C5B638 = 1;
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
      v12 = !IsNullOrEmpty;
      if ( !isSelected && IsNullOrEmpty )
      {
        if ( !IsNullOrEmpty )
          goto LABEL_158;
        v12 = 0;
        p_mDefaultColor = &this->fields.mDefaultColor;
        p_g = &this->fields.mDefaultColor.fields.g;
        p_b = &this->fields.mDefaultColor.fields.b;
        p_a = &this->fields.mDefaultColor.fields.a;
LABEL_16:
        if ( !bmFont )
          goto LABEL_158;
        v88.fields.a = *p_a;
        v88.fields.b = *p_b;
        v88.fields.g = *p_g;
        v88.fields.r = p_mDefaultColor->fields.r;
        UIWidget__set_color(bmFont, v88, 0);
        if ( (v12 & 1) == 0 )
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
            bmFont = (UIWidget_o *)UIFont__get_bmFont((UIFont_o *)bmFont, (const MethodInfo *)method_ptr_low);
            if ( bmFont )
            {
              v22 = this->fields.label;
              if ( !v22 )
                goto LABEL_158;
              bmFont = (UIWidget_o *)v22->fields.mFont;
              if ( !bmFont )
                goto LABEL_158;
              bmFont = (UIWidget_o *)UIFont__get_bmFont((UIFont_o *)bmFont, (const MethodInfo *)method_ptr_low);
              if ( !bmFont )
                goto LABEL_158;
              bmFont = (UIWidget_o *)BMFont__GetGlyph_49340180((BMFont_o *)bmFont, 42, 0);
              if ( !bmFont )
                v20 = (System_String_o *)StringLiteral_24884/*"x"*/;
            }
          }
          if ( !mValue )
            goto LABEL_158;
          stringLength = mValue->fields._stringLength;
          if ( stringLength >= 1 )
          {
            do
            {
              bmFont = (UIWidget_o *)System_String__Concat_63636468(v18, v20, 0);
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
            cursorPosition = UIInput__get_cursorPosition(this, (const MethodInfo *)method_ptr_low);
            if ( v24 >= cursorPosition )
              v26 = cursorPosition;
            else
              v26 = v24;
            v27 = System_String__Substring_63682392(v18, 0, v26, 0);
            v28 = UnityEngine_Input__get_compositionString(0);
            v29 = System_String__Concat_63636468(v27, v28, 0);
            goto LABEL_46;
          }
        }
        if ( !v18 )
          goto LABEL_158;
        v29 = System_String__Substring_63682392(v18, 0, 0, 0);
        v26 = 0;
LABEL_46:
        v32 = System_String__Substring_63682392(v18, v26, v18->fields._stringLength - v26, 0);
        v31 = System_String__Concat_63636468(v29, v32, 0);
        if ( isSelected )
        {
          bmFont = (UIWidget_o *)this->fields.label;
          if ( !bmFont )
            goto LABEL_158;
          if ( HIDWORD(bmFont[1].fields.mTrans) == 1 && LODWORD(bmFont[1].fields.bottomAnchor) == 1 )
          {
            bmFont = (UIWidget_o *)UILabel__CalculateOffsetToFit((UILabel_o *)bmFont, v31, v33);
            v34 = (int)bmFont;
            v35 = UIInput_TypeInfo;
            if ( !UIInput_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
              v35 = UIInput_TypeInfo;
            }
            static_fields = v35->static_fields;
            if ( !v34 )
            {
              static_fields->mDrawStart = 0;
              UIInput__RestoreLabelPivot(this, (const MethodInfo *)method_ptr_low);
              goto LABEL_143;
            }
            mDrawStart = static_fields->mDrawStart;
            if ( !v35->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v35);
              v35 = UIInput_TypeInfo;
              static_fields = UIInput_TypeInfo->static_fields;
            }
            if ( v26 >= mDrawStart )
            {
              if ( v34 >= static_fields->mDrawStart )
              {
                if ( !v31 )
                  goto LABEL_158;
                v81 = this->fields.label;
                bmFont = (UIWidget_o *)System_String__Substring_63682392(v31, 0, v26, 0);
                if ( !v81 )
                  goto LABEL_158;
                v83 = UILabel__CalculateOffsetToFit(v81, (System_String_o *)bmFont, v82);
                v85 = UIInput_TypeInfo;
                v86 = v83;
                if ( !UIInput_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
                  v85 = UIInput_TypeInfo;
                }
                v87 = v85->static_fields;
                if ( v86 > v87->mDrawStart )
                {
                  if ( !v85->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v85);
                    v87 = UIInput_TypeInfo->static_fields;
                  }
                  v87->mDrawStart = v86;
                  UIInput__SetPivotToRight(this, v84);
                }
LABEL_143:
                bmFont = (UIWidget_o *)UIInput_TypeInfo;
                if ( !UIInput_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
                  bmFont = (UIWidget_o *)UIInput_TypeInfo;
                }
                method_ptr_low = LODWORD(bmFont->fields.onChange->fields.method_ptr);
                if ( (_DWORD)method_ptr_low )
                {
                  if ( !LODWORD(bmFont->fields.hitCheck) )
                  {
                    j_il2cpp_runtime_class_init_0(bmFont);
                    method_ptr_low = (unsigned int)UIInput_TypeInfo->static_fields->mDrawStart;
                  }
                  if ( !v31 )
                    goto LABEL_158;
                  v31 = System_String__Substring_63682392(
                          v31,
                          method_ptr_low,
                          v31->fields._stringLength - (int)method_ptr_low,
                          0);
                }
LABEL_61:
                bmFont = (UIWidget_o *)this->fields.label;
                if ( !bmFont )
                  goto LABEL_158;
                UILabel__set_text((UILabel_o *)bmFont, v31, v39);
                if ( isSelected )
                {
                  v41 = UIInput_TypeInfo;
                  if ( !UIInput_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
                    v41 = UIInput_TypeInfo;
                  }
                  if ( !v41->static_fields->mKeyboard )
                  {
LABEL_68:
                    mSelectionStart = this->fields.mSelectionStart;
                    if ( !v41->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v41);
                      v41 = UIInput_TypeInfo;
                    }
                    v43 = v41->static_fields->mDrawStart;
                    p_mBlankTex = &this->fields.mBlankTex;
                    mBlankTex = (UnityEngine_Object_o *)this->fields.mBlankTex;
                    mSelectionEnd = this->fields.mSelectionEnd;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Equality(mBlankTex, 0, 0) )
                    {
                      v47 = (UnityEngine_Texture2D_o *)sub_1C3E7B0(UnityEngine_Texture2D_TypeInfo);
                      UnityEngine_Texture2D___ctor_71229780(v47, 2, 2, 5, 0, 0);
                      *p_mBlankTex = v47;
                      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mBlankTex, (int32_t)v47, v48, v49);
                      for ( i = 0; i != 2; ++i )
                      {
                        method_ptr_low = 0;
                        v51 = 1;
                        do
                        {
                          bmFont = (UIWidget_o *)*p_mBlankTex;
                          if ( !*p_mBlankTex )
                            goto LABEL_158;
                          v89.fields.r = 1.0;
                          v89.fields.g = 1.0;
                          v89.fields.b = 1.0;
                          v89.fields.a = 1.0;
                          v52 = v51;
                          UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)bmFont, method_ptr_low, i, v89, 0);
                          v51 = 0;
                          method_ptr_low = 1;
                        }
                        while ( (v52 & 1) != 0 );
                      }
                      bmFont = (UIWidget_o *)*p_mBlankTex;
                      if ( !*p_mBlankTex )
                        goto LABEL_158;
                      UnityEngine_Texture2D__Apply_71231632((UnityEngine_Texture2D_o *)bmFont, 0);
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
                        v56 = NGUITools__AddWidget_object_(
                                cachedGameObject,
                                (const MethodInfo_3183A0C *)Method_NGUITools_AddWidget_UITexture___);
                        *p_mHighlight = (struct UITexture_o *)v56;
                        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mHighlight, (int32_t)v56, v57, v58);
                        bmFont = (UIWidget_o *)*p_mHighlight;
                        if ( !*p_mHighlight )
                          goto LABEL_158;
                        UnityEngine_Object__set_name(
                          (UnityEngine_Object_o *)bmFont,
                          (System_String_o *)StringLiteral_7672/*"Input Highlight"*/,
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
                        v59 = this->fields.label;
                        if ( !v59 )
                          goto LABEL_158;
                        UIWidget__set_pivot(bmFont, v59->fields.mPivot, 0);
                        bmFont = (UIWidget_o *)this->fields.label;
                        if ( !bmFont )
                          goto LABEL_158;
                        v60 = (UIRect_o *)this->fields.mHighlight;
                        bmFont = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)bmFont, 0);
                        if ( !v60 )
                          goto LABEL_158;
                        UIRect__SetAnchor(v60, (UnityEngine_Transform_o *)bmFont, 0);
                      }
                      else
                      {
                        v61 = this->fields.label;
                        if ( !v61 )
                          goto LABEL_158;
                        bmFont = (UIWidget_o *)this->fields.mHighlight;
                        if ( !bmFont )
                          goto LABEL_158;
                        UIWidget__set_pivot(bmFont, v61->fields.mPivot, 0);
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
                      v64 = UIRect__get_cachedGameObject((UIRect_o *)bmFont, 0);
                      if ( !NGUITools_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
                      v65 = NGUITools__AddWidget_object_(
                              v64,
                              (const MethodInfo_3183A0C *)Method_NGUITools_AddWidget_UITexture___);
                      *p_mCaret = (struct UITexture_o *)v65;
                      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCaret, (int32_t)v65, v66, v67);
                      bmFont = (UIWidget_o *)*p_mCaret;
                      if ( !*p_mCaret )
                        goto LABEL_158;
                      UnityEngine_Object__set_name(
                        (UnityEngine_Object_o *)bmFont,
                        (System_String_o *)StringLiteral_7671/*"Input Caret"*/,
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
                      v68 = this->fields.label;
                      if ( !v68 )
                        goto LABEL_158;
                      UIWidget__set_pivot(bmFont, v68->fields.mPivot, 0);
                      bmFont = (UIWidget_o *)this->fields.label;
                      if ( !bmFont )
                        goto LABEL_158;
                      v69 = (UIRect_o *)this->fields.mCaret;
                      bmFont = (UIWidget_o *)UIRect__get_cachedTransform((UIRect_o *)bmFont, 0);
                      if ( !v69 )
                        goto LABEL_158;
                      UIRect__SetAnchor(v69, (UnityEngine_Transform_o *)bmFont, 0);
                    }
                    else
                    {
                      v71 = this->fields.label;
                      if ( !v71 )
                        goto LABEL_158;
                      bmFont = (UIWidget_o *)this->fields.mCaret;
                      if ( !bmFont )
                        goto LABEL_158;
                      UIWidget__set_pivot(bmFont, v71->fields.mPivot, 0);
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
                    v72 = this->fields.mCaret;
                    if ( !v72 )
                      goto LABEL_158;
                    bmFont = (UIWidget_o *)this->fields.label;
                    geometry = v72->fields.geometry;
                    method_ptr_low = (unsigned int)(mSelectionStart - v43);
                    v74 = mSelectionEnd - v43;
                    if ( mSelectionStart == mSelectionEnd )
                    {
                      if ( !bmFont )
                        goto LABEL_158;
                      UILabel__PrintOverlay(
                        (UILabel_o *)bmFont,
                        method_ptr_low,
                        v74,
                        geometry,
                        0,
                        this->fields.caretColor,
                        this->fields.selectionColor,
                        v70);
                      v75 = (UnityEngine_Object_o *)this->fields.mHighlight;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      bmFont = (UIWidget_o *)UnityEngine_Object__op_Inequality(v75, 0, 0);
                      if ( ((unsigned __int8)bmFont & 1) == 0 )
                        goto LABEL_134;
                      v76 = (UnityEngine_Behaviour_o *)this->fields.mHighlight;
                      if ( !v76 )
                        goto LABEL_158;
                      hasVertices = 0;
                    }
                    else
                    {
                      v78 = this->fields.mHighlight;
                      if ( !v78 )
                        goto LABEL_158;
                      if ( !bmFont )
                        goto LABEL_158;
                      UILabel__PrintOverlay(
                        (UILabel_o *)bmFont,
                        method_ptr_low,
                        v74,
                        geometry,
                        v78->fields.geometry,
                        this->fields.caretColor,
                        this->fields.selectionColor,
                        v70);
                      v76 = (UnityEngine_Behaviour_o *)this->fields.mHighlight;
                      if ( !v76 )
                        goto LABEL_158;
                      bmFont = (UIWidget_o *)v76[10].klass;
                      if ( !bmFont )
                        goto LABEL_158;
                      hasVertices = UIGeometry__get_hasVertices((UIGeometry_o *)bmFont, 0);
                    }
                    UnityEngine_Behaviour__set_enabled(v76, hasVertices, 0);
LABEL_134:
                    time = RealTime__get_time(0);
                    v80 = this->fields.label;
                    this->fields.mNextBlink = time + 0.5;
                    if ( v80 )
                    {
                      this->fields.mLastAlpha = v80->fields.finalAlpha;
                      return;
                    }
LABEL_158:
                    sub_1C3E7C0(bmFont, method_ptr_low);
                  }
                  if ( UIInput__get_inputShouldBeHidden(this, v40) )
                  {
                    v41 = UIInput_TypeInfo;
                    goto LABEL_68;
                  }
                }
                ((void (__fastcall *)(UIInput_o *, const MethodInfo *))this->klass->vtable._9_Cleanup.methodPtr)(
                  this,
                  this->klass->vtable._9_Cleanup.method);
                return;
              }
              if ( !v35->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v35);
                static_fields = UIInput_TypeInfo->static_fields;
              }
              static_fields->mDrawStart = v34;
            }
            else
            {
              static_fields->mDrawStart = v26;
            }
            UIInput__SetPivotToLeft(this, (const MethodInfo *)method_ptr_low);
            goto LABEL_143;
          }
        }
        v38 = UIInput_TypeInfo;
        if ( !UIInput_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
          v38 = UIInput_TypeInfo;
        }
        v38->static_fields->mDrawStart = 0;
LABEL_60:
        UIInput__RestoreLabelPivot(this, (const MethodInfo *)method_ptr_low);
        goto LABEL_61;
      }
    }
    else
    {
      bmFont = (UIWidget_o *)this->fields.label;
      v12 = 1;
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
  __int64 v6; // x1
  int32_t stringLength; // w22
  System_Text_StringBuilder_o *v9; // x21
  int32_t v10; // w22
  struct UIInput_OnValidate_o *onValidate; // x25
  unsigned int v12; // w23
  __int64 v13; // x24
  unsigned int v14; // w0
  System_String_o *v15; // x24
  int32_t Length; // w0
  const MethodInfo *v17; // x4
  int32_t v18; // w0
  int32_t characterLimit; // w2

  if ( (byte_4C5B628 & 1) == 0 )
  {
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5B628 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(val, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !val )
    goto LABEL_25;
  stringLength = val->fields._stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_1C3E7B0(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63714884(v9, stringLength, 0);
  if ( val->fields._stringLength >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      IsNullOrEmpty = System_String__get_Chars(val, v10, 0);
      onValidate = this->fields.onValidate;
      v12 = IsNullOrEmpty;
      if ( onValidate )
        break;
      if ( this->fields.validation )
      {
        if ( !v9 )
          goto LABEL_25;
        v15 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                                   v9,
                                   v9->klass->vtable._3_ToString.method);
        Length = System_Text_StringBuilder__get_Length(v9, 0);
        IsNullOrEmpty = UIInput__Validate_49565244(this, v15, Length, v12, v17);
        goto LABEL_14;
      }
LABEL_15:
      if ( (_WORD)v12 )
      {
        if ( !v9 )
          goto LABEL_25;
        IsNullOrEmpty = (unsigned __int64)System_Text_StringBuilder__Append_63723860(v9, v12, 0);
      }
      if ( ++v10 >= val->fields._stringLength )
        goto LABEL_19;
    }
    if ( !v9 )
      goto LABEL_25;
    v13 = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
            v9,
            v9->klass->vtable._3_ToString.method);
    v14 = System_Text_StringBuilder__get_Length(v9, 0);
    IsNullOrEmpty = ((__int64 (__fastcall *)(intptr_t, __int64, _QWORD, _QWORD, intptr_t))onValidate->fields.invoke_impl)(
                      onValidate->fields.method_code,
                      v13,
                      v14,
                      v12,
                      onValidate->fields.method);
LABEL_14:
    LOWORD(v12) = IsNullOrEmpty;
    goto LABEL_15;
  }
LABEL_19:
  if ( this->fields.characterLimit < 1 )
  {
    if ( v9 )
      return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                                  v9,
                                  v9->klass->vtable._3_ToString.method);
LABEL_25:
    sub_1C3E7C0(IsNullOrEmpty, v6);
  }
  if ( !v9 )
    goto LABEL_25;
  v18 = System_Text_StringBuilder__get_Length(v9, 0);
  characterLimit = this->fields.characterLimit;
  if ( v18 > characterLimit )
    return System_Text_StringBuilder__ToString_63718256(v9, 0, characterLimit, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                              v9,
                              v9->klass->vtable._3_ToString.method);
}


uint16_t UIInput__Validate_49565244(
        UIInput_o *this,
        System_String_o *text,
        int32_t pos,
        uint16_t ch,
        const MethodInfo *method)
{
  _BOOL8 enabled; // x0
  __int64 v10; // x1
  unsigned int v11; // w8
  int32_t stringLength; // w8
  int32_t v13; // w8
  int32_t v14; // w1
  uint16_t Chars; // w0
  int32_t v16; // w8
  int v17; // w22
  int v18; // w8
  int32_t v19; // w1
  int v20; // w8

  if ( (byte_4C5B63A & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_861/*"-"*/);
    sub_1C3E564(&StringLiteral_524/*"'"*/);
    sub_1C3E564(&StringLiteral_988/*"."*/);
    byte_4C5B63A = 1;
  }
  if ( !this->fields.validation )
    return ch;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
  if ( !enabled )
    return ch;
  switch ( this->fields.validation )
  {
    case 1:
      v11 = ch;
      if ( ch >= 0x30u )
        goto LABEL_40;
      if ( pos || ch != 45 )
        return 0;
      goto LABEL_13;
    case 2:
      v11 = ch;
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
        sub_1C3E7C0(enabled, v10);
      }
LABEL_40:
      if ( v11 <= 0x39 )
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
          v13 = stringLength - 1;
        else
          v13 = pos;
        if ( pos >= 0 )
          v14 = v13;
        else
          v14 = 0;
        Chars = System_String__get_Chars(text, v14, 0);
        v16 = text->fields._stringLength;
        v17 = Chars;
        if ( v16 < 1 )
        {
          v20 = 10;
        }
        else
        {
          if ( pos + 1 < v16 )
            v18 = pos + 1;
          else
            v18 = v16 - 1;
          if ( pos + 1 >= 0 )
            v19 = v18;
          else
            v19 = 0;
          v20 = System_String__get_Chars(text, v19, 0);
        }
        if ( (unsigned __int16)(ch - 97) > 0x19u )
          goto LABEL_53;
        if ( v17 != 32 )
          return ch;
LABEL_62:
        ch -= 32;
        return ch;
      }
      if ( (unsigned __int16)(ch - 97) <= 0x19u )
        goto LABEL_62;
      v17 = 32;
      v20 = 10;
LABEL_53:
      if ( (unsigned __int16)(ch - 65) > 0x19u )
      {
        if ( ch == 32 )
        {
          if ( v17 != 32 && v17 != 39 && v20 != 39 && v20 != 32 )
            return 32;
        }
        else if ( ch == 39
               && v17 != 32
               && v17 != 39
               && v20 != 39
               && !System_String__Contains(text, (System_String_o *)StringLiteral_524/*"'"*/, 0) )
        {
          return 39;
        }
        return 0;
      }
      if ( v17 != 32 && v17 != 39 )
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

  if ( (byte_4C5B622 & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B622 = 1;
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
      sub_1C3E7C0(ShouldBeHidden, method);
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
  __int64 v5; // x1
  struct UILabel_o *v6; // x8

  if ( (byte_4C5B61E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B61E = 1;
  }
  if ( !this->fields.hideInput )
    return 0;
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.label;
  if ( !v6 )
    sub_1C3E7C0(v4, v5);
  return v6->fields.mMaxLineCount == 1 && this->fields.inputType != 2;
}


bool UIInput__get_isSelected(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  UnityEngine_Object_o *selection; // x20

  if ( (byte_4C5B620 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B620 = 1;
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

  if ( (byte_4C5B626 & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B626 = 1;
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
      sub_1C3E7C0(ShouldBeHidden, method);
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

  if ( (byte_4C5B624 & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B624 = 1;
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
      sub_1C3E7C0(isSelected, v5);
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

  if ( (byte_4C5B623 & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B623 = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mDefaultText, (int32_t)value, (int32_t)method, v3);
  UIInput__UpdateLabel(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void UIInput__set_isSelected(UIInput_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C5B621 & 1) == 0 )
  {
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B621 = 1;
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

  if ( (byte_4C5B627 & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B627 = 1;
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

  if ( (byte_4C5B625 & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B625 = 1;
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
  const MethodInfo *v9; // x1
  UIInput_c *v10; // x0
  UnityEngine_TouchScreenKeyboard_o *mKeyboard; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  int32_t stringLength; // w8
  const MethodInfo *v19; // x1

  if ( (byte_4C5B61F & 1) == 0 )
  {
    sub_1C3E564(&UIInput_TypeInfo);
    byte_4C5B61F = 1;
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
      v10 = UIInput_TypeInfo;
      if ( !UIInput_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo);
        v10 = UIInput_TypeInfo;
      }
      mKeyboard = v10->static_fields->mKeyboard;
      if ( !mKeyboard )
        goto LABEL_25;
      UnityEngine_TouchScreenKeyboard__set_text(mKeyboard, v6, 0);
      this->fields.mCached = v6;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mCached, (int32_t)v6, v12, v13);
    }
  }
  if ( System_String__op_Inequality(this->fields.mValue, v6, 0) )
  {
    this->fields.mValue = v6;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mValue, (int32_t)v6, v14, v15);
    this->fields.mLoadSavedValue = 0;
    if ( !UIInput__get_isSelected(this, v16) )
    {
      UIInput__SaveToPlayerPrefs(this, v6, v17);
      goto LABEL_24;
    }
    mKeyboard = (UnityEngine_TouchScreenKeyboard_o *)System_String__IsNullOrEmpty(v6, 0);
    if ( ((unsigned __int8)mKeyboard & 1) != 0 )
    {
      *(_QWORD *)&this->fields.mSelectionStart = 0;
LABEL_24:
      UIInput__UpdateLabel(this, v9);
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
    sub_1C3E7C0(mKeyboard, v9);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 2 )
    {
      v9 = sub_1A8A48C;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 3 )
    goto LABEL_8;
  v9 = sub_1A8A4B4;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A8A424;
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
  if ( (byte_4C5B63F & 1) == 0 )
  {
    sub_1C3E564(&char_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    byte_4C5B63F = 1;
  }
  v19[3] = 0;
  v19[0] = text;
  v19[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, *(_QWORD *)&charIndex, addedChar, callback, object, method, v7);
  v19[2] = j_il2cpp_value_box_0(char_TypeInfo, v20, v12, v13, v14, v15, v16, v17);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v19, callback, object);
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

  v3 = sub_1C3E51C(result, 0, method);
  if ( !v3 )
    sub_1C3E7C0(0, v4);
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