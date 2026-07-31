void UIInput___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  struct UIInput_StaticFields *static_fields; // x0

  if ( (byte_593CFA3 & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CFA3 = 1;
  }
  v7 = (int)StringLiteral_1/*""*/;
  static_fields = UIInput_TypeInfo->static_fields;
  static_fields->mLastIME = (struct System_String_o *)StringLiteral_1/*""*/;
  static_fields = (struct UIInput_StaticFields *)((char *)static_fields + 24);
  *(_DWORD *)&static_fields[-1].mWaitForKeyboard = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)static_fields, v7, v1, v2, v3, v4, v5, v6);
  UIInput_TypeInfo->static_fields->mWaitForKeyboard = 0;
}


void UIInput___ctor(UIInput_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__c *v8; // x0
  System_Collections_Generic_List_object__o *v9; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_String_o *v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct UnityEngine_Color_o v37; // [xsp+0h] [xbp-50h]

  if ( (byte_593CFA2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CFA2 = 1;
  }
  __asm { FMOV            V2.4S, #1.0 }
  v8 = System_Collections_Generic_List_EventDelegate__TypeInfo;
  this->fields.selectAllTextOnFocus = 1;
  v37 = _Q2;
  this->fields.activeTextColor = _Q2;
  this->fields.caretColor = (struct UnityEngine_Color_o)xmmword_E93260;
  this->fields.selectionColor = (struct UnityEngine_Color_o)xmmword_E93BA0;
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSubmit = (struct System_Collections_Generic_List_EventDelegate__o *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onSubmit, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onChange = (struct System_Collections_Generic_List_EventDelegate__o *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onChange, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (int)StringLiteral_1/*""*/;
  this->fields.mDefaultText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mDefaultText, v23, v24, v25, v26, v27, v28, v29);
  v30 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.mDoInit = 1;
  this->fields.mDefaultColor = v37;
  this->fields.mLoadSavedValue = 1;
  this->fields.mCached = v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mCached, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  this->fields.mSelectMe = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIInput__Cleanup(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHighlight; // x20
  __int64 v4; // x1
  UnityEngine_Behaviour_o *v5; // x0
  UnityEngine_Object_o *mCaret; // x20
  MissionNaviTransitionBoardItem_o *p_mBlankTex; // x19
  UnityEngine_Object_o *v8; // x20
  struct UnityEngine_Texture2D_o *mBlankTex; // t1
  __int64 v10; // x1
  UnityEngine_Object_o *klass; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593CF9B & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF9B = 1;
  }
  mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Implicit(mHighlight, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.mHighlight;
    if ( !v5 )
      goto LABEL_20;
    UnityEngine_Behaviour__set_enabled(v5, 0, 0);
  }
  mCaret = (UnityEngine_Object_o *)this->fields.mCaret;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Implicit(mCaret, 0) )
  {
    v5 = (UnityEngine_Behaviour_o *)this->fields.mCaret;
    if ( v5 )
    {
      UnityEngine_Behaviour__set_enabled(v5, 0, 0);
      goto LABEL_13;
    }
LABEL_20:
    sub_21FFECC(v5, v4);
  }
LABEL_13:
  mBlankTex = this->fields.mBlankTex;
  p_mBlankTex = (MissionNaviTransitionBoardItem_o *)&this->fields.mBlankTex;
  v8 = (UnityEngine_Object_o *)mBlankTex;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Implicit(v8, 0) )
  {
    klass = (UnityEngine_Object_o *)p_mBlankTex->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v10);
    NGUITools__Destroy(klass, 0);
    p_mBlankTex->klass = 0;
    sub_21FFBF4(p_mBlankTex, 0, v12, v13, v14, v15, v16, v17);
  }
}


void UIInput__DoBackspace(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionStart; // w8
  bool v4; // vf
  int32_t v5; // w8

  if ( (byte_593CF93 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CF93 = 1;
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
    ((void (__fastcall *)(UIInput_o *, void *, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
      this,
      StringLiteral_1/*""*/,
      this->klass->vtable._6_Insert.method);
  }
}


void UIInput__ExecuteOnChange(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  UnityEngine_Object_o *current; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UIInput_c *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_EventDelegate__o *v16; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_593CFA0 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CFA0 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, method);
    v3 = UIInput_TypeInfo;
  }
  current = (UnityEngine_Object_o *)v3->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(current, 0, 0) )
  {
    onChange = this->fields.onChange;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v5);
    if ( EventDelegate__IsValid_56108212(onChange, 0) )
    {
      v14 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v7);
        v14 = UIInput_TypeInfo;
      }
      v14->static_fields->current = this;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)UIInput_TypeInfo->static_fields,
        (int32_t)this,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v16 = this->fields.onChange;
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v15);
      EventDelegate__Execute_56080488(v16, 0);
      UIInput_TypeInfo->static_fields->current = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)UIInput_TypeInfo->static_fields, 0, v17, v18, v19, v20, v21, v22);
    }
  }
}


int32_t UIInput__GetCharUnderMouse(UIInput_o *this, const MethodInfo *method)
{
  void *label; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  float v6; // s6
  float v7; // s15
  float v8; // s0
  float v9; // s2
  float v10; // s3
  float v11; // s5
  float v12; // s10
  float v13; // s4
  float v14; // s1
  float v15; // s2
  float v16; // s0
  float v17; // s3
  float v18; // s5
  float v19; // s14
  float v20; // s8
  float v21; // s9
  float v22; // s11
  float v23; // s12
  float v24; // s13
  float v25; // s8
  float v26; // s9
  float v27; // s11
  float v28; // s0
  float x; // s12
  float y; // s13
  float z; // s11
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v33; // kr00_8
  float v34; // s8
  float v35; // s14
  float v36; // s1
  float v37; // s0
  float v38; // s8
  UIInput_c *v39; // x0
  UILabel_o *v40; // x19
  int32_t mDrawStart; // w20
  const MethodInfo *v42; // x2
  UnityEngine_Ray_o v44; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Ray_o v45; // [xsp+20h] [xbp-80h] BYREF
  float v46; // [xsp+88h] [xbp-18h]
  float v47; // [xsp+8Ch] [xbp-14h]
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CF98 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF98 = 1;
  }
  label = this->fields.label;
  memset(&v45, 0, sizeof(v45));
  if ( !label )
    goto LABEL_29;
  v5 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)label + 488LL))(
         label,
         *(_QWORD *)(*(_QWORD *)label + 496LL));
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
  label = UICamera__get_currentRay(&v44, 0);
  v45 = v44;
  if ( !v5 )
    goto LABEL_29;
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    sub_21FFED4(label);
  v7 = *(float *)(v5 + 32);
  v6 = *(float *)(v5 + 36);
  v8 = *(float *)(v5 + 52);
  v9 = *(float *)(v5 + 60);
  v10 = *(float *)(v5 + 64);
  v12 = *(float *)(v5 + 40);
  v11 = *(float *)(v5 + 44);
  v13 = *(float *)(v5 + 56) - v7;
  v14 = *(float *)(v5 + 48) - v6;
  v46 = v6;
  v15 = v9 - v6;
  v16 = v8 - v12;
  v17 = v10 - v12;
  v18 = v11 - v7;
  v19 = v14 * v13;
  v20 = v14 * v17;
  v21 = v16 * v15;
  v22 = v16 * v13;
  v23 = v18 * v17;
  v24 = v18 * v15;
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v25 = v20 - v21;
  v26 = v22 - v23;
  v27 = v24 - v19;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  v47 = v7;
  v28 = sqrtf((float)(v27 * v27) + (float)((float)(v25 * v25) + (float)(v26 * v26)));
  if ( v28 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v25 / v28;
    y = v26 / v28;
    z = v27 / v28;
  }
  v33 = *(_QWORD *)&v45.fields.m_Origin.fields.y;
  v34 = v45.fields.m_Origin.fields.x;
  v35 = (float)(z * v45.fields.m_Direction.fields.z)
      + (float)((float)(x * v45.fields.m_Direction.fields.x) + (float)(y * v45.fields.m_Direction.fields.y));
  if ( !byte_5931944 )
  {
    sub_21FFC50(&UnityEngine_Mathf_TypeInfo);
    byte_5931944 = 1;
  }
  v36 = vabds_f32(0.0, v35);
  v37 = fmaxf(fabsf(v35), 0.0) * 0.000001;
  if ( v37 <= (float)(UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0) )
    v37 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
  if ( v36 >= v37 )
  {
    v38 = (float)((float)((float)(v12 * z) + (float)((float)(v47 * x) + (float)(v46 * y)))
                - (float)((float)(z * *((float *)&v33 + 1)) + (float)((float)(x * v34) + (float)(y * *(float *)&v33))))
        / v35;
    if ( v38 > 0.0 )
    {
      v39 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, method);
        v39 = UIInput_TypeInfo;
      }
      v40 = this->fields.label;
      mDrawStart = v39->static_fields->mDrawStart;
      Point = UnityEngine_Ray__GetPoint(&v45, v38, 0);
      if ( v40 )
        return UILabel__GetCharacterIndexAtPosition(v40, Point, 0, v42) + mDrawStart;
LABEL_29:
      sub_21FFECC(label, method);
    }
  }
  return 0;
}


System_String_o *UIInput__GetLeftText(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionEnd; // w20
  __int64 v4; // x1
  System_String_o *mValue; // x0

  if ( (byte_593CF95 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CF95 = 1;
  }
  if ( this->fields.mSelectionStart >= this->fields.mSelectionEnd )
    mSelectionEnd = this->fields.mSelectionEnd;
  else
    mSelectionEnd = this->fields.mSelectionStart;
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) || mSelectionEnd < 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( !mValue )
    sub_21FFECC(0, v4);
  return System_String__Substring_75489544(mValue, 0, mSelectionEnd, 0);
}


System_String_o *UIInput__GetRightText(UIInput_o *this, const MethodInfo *method)
{
  int32_t mSelectionEnd; // w20
  __int64 v4; // x1
  struct System_String_o *mValue; // x0

  if ( (byte_593CF96 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CF96 = 1;
  }
  if ( this->fields.mSelectionStart <= this->fields.mSelectionEnd )
    mSelectionEnd = this->fields.mSelectionEnd;
  else
    mSelectionEnd = this->fields.mSelectionStart;
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( !mValue )
    sub_21FFECC(0, v4);
  if ( mSelectionEnd >= mValue->fields._stringLength )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Substring(mValue, mSelectionEnd, 0);
}


System_String_o *UIInput__GetSelection(UIInput_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t mSelectionStart; // w8
  int32_t mSelectionEnd; // w9
  System_String_o *mValue; // x0
  int32_t v8; // w10
  int32_t v9; // w1

  if ( (byte_593CF97 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CF97 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.mValue, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  mSelectionStart = this->fields.mSelectionStart;
  mSelectionEnd = this->fields.mSelectionEnd;
  if ( mSelectionStart == mSelectionEnd )
    return (System_String_o *)StringLiteral_1/*""*/;
  mValue = this->fields.mValue;
  if ( !mValue )
    sub_21FFECC(0, v3);
  if ( mSelectionStart <= mSelectionEnd )
    v8 = this->fields.mSelectionEnd;
  else
    v8 = this->fields.mSelectionStart;
  if ( mSelectionStart >= mSelectionEnd )
    v9 = this->fields.mSelectionEnd;
  else
    v9 = this->fields.mSelectionStart;
  return System_String__Substring_75489544(mValue, v9, v8 - v9, 0);
}


void UIInput__Init(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  UILabel_o *cachedTransform; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UILabel_o *v12; // x8
  struct System_String_o *mText; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_593CF8F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Debug_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7995/*"Input fields using labels with justified alignment are not supported at this time"*/);
    byte_593CF8F = 1;
  }
  if ( this->fields.mDoInit )
  {
    label = (UnityEngine_Object_o *)this->fields.label;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    cachedTransform = (UILabel_o *)UnityEngine_Object__op_Inequality(label, 0, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v12 = this->fields.label;
      this->fields.mDoInit = 0;
      if ( !v12 )
        goto LABEL_18;
      mText = v12->fields.mText;
      this->fields.mDefaultText = mText;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mDefaultText,
        (int32_t)mText,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      cachedTransform = this->fields.label;
      if ( !cachedTransform )
        goto LABEL_18;
      this->fields.mDefaultColor = cachedTransform->fields.mColor;
      if ( cachedTransform->fields.mEncoding )
      {
        cachedTransform->fields.mEncoding = 0;
        cachedTransform->fields.mShouldBeProcessed = 1;
        cachedTransform->fields.mChanged = 1;
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
        if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v14);
        UnityEngine_Debug__LogWarning_82996268((Il2CppObject *)StringLiteral_7995/*"Input fields using labels with justified alignment are not supported at this time"*/, (UnityEngine_Object_o *)this, 0);
        cachedTransform = this->fields.label;
        if ( !cachedTransform )
          goto LABEL_18;
      }
      this->fields.mPivot = cachedTransform->fields.mPivot;
      cachedTransform = (UILabel_o *)UIRect__get_cachedTransform((UIRect_o *)cachedTransform, 0);
      if ( !cachedTransform )
LABEL_18:
        sub_21FFECC(cachedTransform, v5);
      LODWORD(this->fields.mPosition) = (unsigned int)UnityEngine_Transform__get_localPosition(
                                                        (UnityEngine_Transform_o *)cachedTransform,
                                                        0);
      UIInput__UpdateLabel(this, v15);
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
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1

  if ( (byte_593CF94 & 1) == 0 )
  {
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    byte_593CF94 = 1;
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
        v13 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo),
        System_Text_StringBuilder___ctor_75515192(v13, v11 + stringLength + v12, 0),
        !v13) )
  {
    sub_21FFECC(RightText, v8);
  }
  System_Text_StringBuilder__Append_75521760(v13, LeftText, 0);
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
      v22 = UIInput__Validate_56352980(this, v23, v24, v18, v25);
    }
    LOWORD(v18) = v22;
LABEL_18:
    if ( (_WORD)v18 )
      System_Text_StringBuilder__Append_75524092(v13, v18, 0);
    goto LABEL_20;
  }
LABEL_21:
  v26 = System_Text_StringBuilder__get_Length(v13, 0);
  v27 = v9->fields._stringLength;
  this->fields.mSelectionStart = v26;
  this->fields.mSelectionEnd = v26;
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
        v34 = UIInput__Validate_56352980(this, v35, v36, v31, v37);
        goto LABEL_27;
      }
LABEL_28:
      if ( (_WORD)v31 )
        System_Text_StringBuilder__Append_75524092(v13, v31, 0);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mValue, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  UIInput__UpdateLabel(this, v45);
  UIInput__ExecuteOnChange(this, v46);
}


void UIInput__LoadValue(UIInput_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *mValue; // x0
  System_String_o *String_83184936; // x20
  int32_t v6; // w1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2

  if ( (byte_593CFA1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_16645/*"\\n"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CFA1 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.savedAs, 0) )
  {
    mValue = this->fields.mValue;
    if ( !mValue )
      sub_21FFECC(0, v3);
    String_83184936 = System_String__Replace_75490096(
                        mValue,
                        (System_String_o *)StringLiteral_16645/*"\\n"*/,
                        (System_String_o *)StringLiteral_43/*"\n"*/,
                        0);
    v6 = (int)StringLiteral_1/*""*/;
    this->fields.mValue = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mValue, v6, v7, v8, v9, v10, v11, v12);
    if ( UnityEngine_PlayerPrefs__HasKey(this->fields.savedAs, 0) )
      String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(this->fields.savedAs, 0);
    UIInput__set_value(this, String_83184936, v13);
  }
}


void UIInput__OnDeselectEvent(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  UIInput_c *v12; // x8
  struct UIInput_StaticFields *static_fields; // x9
  struct UILabel_o *mKeyboard; // x0
  __int64 v15; // x1
  struct UIInput_StaticFields *v16; // x8
  struct UIInput_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x2
  bool IsNullOrEmpty; // w8
  const MethodInfo *v26; // x1
  UIInput_c *v27; // x0
  struct UIInput_StaticFields *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_593CF91 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF91 = 1;
  }
  if ( this->fields.mDoInit )
    UIInput__Init(this, method);
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4);
    if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
    {
      if ( this->fields.mDoInit )
        UIInput__Init(this, v4);
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mValue,
        (int32_t)this->fields.mValue,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      v12 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v11);
        v12 = UIInput_TypeInfo;
      }
      static_fields = v12->static_fields;
      mKeyboard = (struct UILabel_o *)static_fields->mKeyboard;
      if ( mKeyboard )
      {
        if ( *(&v12->_2.cctor_finished + 1) )
        {
          static_fields->mWaitForKeyboard = 0;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(v12, v11);
          v16 = UIInput_TypeInfo->static_fields;
          mKeyboard = (struct UILabel_o *)v16->mKeyboard;
          v16->mWaitForKeyboard = 0;
          if ( !mKeyboard )
            goto LABEL_30;
        }
        UnityEngine_TouchScreenKeyboard__set_active((UnityEngine_TouchScreenKeyboard_o *)mKeyboard, 0, 0);
        v17 = UIInput_TypeInfo->static_fields;
        v17->mKeyboard = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->mKeyboard, 0, v18, v19, v20, v21, v22, v23);
      }
      IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.mValue, 0);
      mKeyboard = this->fields.label;
      if ( IsNullOrEmpty )
      {
        if ( mKeyboard )
        {
          UILabel__set_text(mKeyboard, this->fields.mDefaultText, v24);
          mKeyboard = this->fields.label;
          if ( mKeyboard )
          {
            UIWidget__set_color((UIWidget_o *)mKeyboard, this->fields.mDefaultColor, 0);
LABEL_26:
            UnityEngine_Input__set_imeCompositionMode(0, 0);
            UIInput__RestoreLabelPivot(this, v26);
            goto LABEL_27;
          }
        }
      }
      else if ( mKeyboard )
      {
        UILabel__set_text(mKeyboard, this->fields.mValue, v24);
        goto LABEL_26;
      }
LABEL_30:
      sub_21FFECC(mKeyboard, v15);
    }
  }
LABEL_27:
  v27 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v4);
    v27 = UIInput_TypeInfo;
  }
  v28 = v27->static_fields;
  v28->selection = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->selection, 0, v5, v6, v7, v8, v9, v10);
  UIInput__UpdateLabel(this, v29);
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

  if ( (byte_593CF9A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CF9A = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v6 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v6 = UICamera_TypeInfo;
    }
    currentScheme = v6->static_fields->currentScheme;
    if ( !currentScheme )
      goto LABEL_12;
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
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
  __int64 v5; // x1
  UnityEngine_Object_o *label; // x20
  const MethodInfo *v7; // x1
  UICamera_c *v8; // x0
  int32_t currentScheme; // w8
  int32_t CharUnderMouse; // w0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( (byte_593CF99 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CF99 = 1;
  }
  if ( isPressed && UIInput__get_isSelected(this, (const MethodInfo *)isPressed) )
  {
    label = (UnityEngine_Object_o *)this->fields.label;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
    {
      v8 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v7);
        v8 = UICamera_TypeInfo;
      }
      currentScheme = v8->static_fields->currentScheme;
      if ( !currentScheme )
        goto LABEL_14;
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v7);
        currentScheme = UICamera_TypeInfo->static_fields->currentScheme;
      }
      if ( currentScheme == 1 )
      {
LABEL_14:
        CharUnderMouse = UIInput__GetCharUnderMouse(this, v7);
        UIInput__set_selectionEnd(this, CharUnderMouse, v11);
        if ( !UnityEngine_Input__GetKey(304, 0) && !UnityEngine_Input__GetKey(303, 0) )
          UIInput__set_selectionStart(this, this->fields.mSelectionEnd, v12);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UIInput_c *v9; // x0
  struct UIInput_StaticFields *static_fields; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *label; // x20
  __int64 v13; // x1

  if ( (byte_593CF90 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF90 = 1;
  }
  v9 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, method);
    v9 = UIInput_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->selection = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->selection, (int32_t)this, v2, v3, v4, v5, v6, v7);
  if ( this->fields.mDoInit )
    UIInput__Init(this, v11);
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v13);
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

  if ( (byte_593CF9E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF9E = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(label, 0, 0) )
  {
    v5 = (UIWidget_o *)this->fields.label;
    if ( !v5 )
      sub_21FFECC(0, v4);
    mPivot = this->fields.mPivot;
    if ( v5->fields.mPivot != mPivot )
      UIWidget__set_pivot(v5, mPivot, 0);
  }
}


void UIInput__SaveToPlayerPrefs(UIInput_o *this, System_String_o *val, const MethodInfo *method)
{
  bool IsNullOrEmpty; // w8
  System_String_o *savedAs; // x0

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
  v6.fields.x = 0.0;
  label = (UIWidget_o *)this->fields.label;
  Pivot = NGUIMath__GetPivot(v6, 0);
  if ( !label )
    sub_21FFECC(Pivot, v5);
  UIWidget__set_pivot(label, Pivot, 0);
}


void UIInput__SetPivotToRight(UIInput_o *this, const MethodInfo *method)
{
  UIWidget_o *label; // x19
  __int64 Pivot; // x0
  __int64 v5; // x1
  UnityEngine_Vector2_o v6; // 0:s0.4,4:s1.4

  v6.fields.y = NGUIMath__GetPivotOffset((int)this[192], 0).fields.y;
  v6.fields.x = 1.0;
  label = (UIWidget_o *)this->fields.label;
  Pivot = NGUIMath__GetPivot(v6, 0);
  if ( !label )
    sub_21FFECC(Pivot, v5);
  UIWidget__set_pivot(label, Pivot, 0);
}


void UIInput__Start(UIInput_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_selectOnTab; // x20
  UnityEngine_Object_o *selectOnTab; // x21
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  char *gameObject; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UnityEngine_GameObject_o *v21; // x1
  __int64 v22; // x1
  System_String_o *v23; // x1
  const MethodInfo *v24; // x2

  if ( (byte_593CF8E & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_16645/*"\\n"*/);
    byte_593CF8E = 1;
  }
  p_selectOnTab = &this->fields.selectOnTab;
  selectOnTab = (UnityEngine_Object_o *)this->fields.selectOnTab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(selectOnTab, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIKeyNavigation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (char *)UnityEngine_GameObject__AddComponent_object_(
                             (UnityEngine_GameObject_o *)gameObject,
                             (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation___);
      if ( !gameObject )
        goto LABEL_20;
      v21 = *p_selectOnTab;
      *((_QWORD *)gameObject + 6) = *p_selectOnTab;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(gameObject + 48), (int32_t)v21, v15, v16, v17, v18, v19, v20);
    }
    *p_selectOnTab = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectOnTab, 0, v8, v9, v10, v11, v12, v13);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v22);
    NGUITools__SetDirty((UnityEngine_Object_o *)this, 0);
  }
  if ( !this->fields.mLoadSavedValue || System_String__IsNullOrEmpty(this->fields.savedAs, 0) )
  {
    gameObject = (char *)this->fields.mValue;
    if ( gameObject )
    {
      v23 = System_String__Replace_75490096(
              (System_String_o *)gameObject,
              (System_String_o *)StringLiteral_16645/*"\\n"*/,
              (System_String_o *)StringLiteral_43/*"\n"*/,
              0);
      UIInput__set_value(this, v23, v24);
      return;
    }
LABEL_20:
    sub_21FFECC(gameObject, v5);
  }
  UIInput__LoadValue(this, v5);
}


void UIInput__Submit(UIInput_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  UIInput_c *v11; // x0
  UnityEngine_Object_o *current; // x20
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UIInput_c *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_EventDelegate__o *onSubmit; // x20
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_593CF9C & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF9C = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
  if ( NGUITools__GetActive((UnityEngine_Behaviour_o *)this, 0) )
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, v3);
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mValue,
      (int32_t)this->fields.mValue,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    v11 = UIInput_TypeInfo;
    if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v10);
      v11 = UIInput_TypeInfo;
    }
    current = (UnityEngine_Object_o *)v11->static_fields->current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      v20 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v13);
        v20 = UIInput_TypeInfo;
      }
      v20->static_fields->current = this;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)UIInput_TypeInfo->static_fields,
        (int32_t)this,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      onSubmit = this->fields.onSubmit;
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v21);
      EventDelegate__Execute_56080488(onSubmit, 0);
      UIInput_TypeInfo->static_fields->current = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)UIInput_TypeInfo->static_fields, 0, v23, v24, v25, v26, v27, v28);
    }
    UIInput__SaveToPlayerPrefs(this, this->fields.mValue, (const MethodInfo *)v14);
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
  _BOOL4 selectAllTextOnFocus; // w10
  int32_t mSelectionEnd; // w8
  __int64 v16; // x1
  unsigned int platform; // w0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  int32_t keyboardType; // w20
  System_String_o *v21; // x21
  int32_t inputType; // w20
  UIInput_c *v23; // x0
  int32_t v24; // w8
  UnityEngine_TouchScreenKeyboard_o *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  bool v33; // w22
  struct UILabel_o *v34; // x8
  _BOOL4 v35; // w24
  UnityEngine_TouchScreenKeyboard_o *v36; // x20
  UIInput_c *v37; // x0
  struct UIInput_StaticFields *v38; // x0
  const MethodInfo *v39; // x1
  System_String_o *v40; // x0
  UIInput_c *v41; // x0
  UnityEngine_TouchScreenKeyboard_o *v42; // x8
  System_String_o *text; // x20
  const MethodInfo *v44; // x1
  System_String_o *compositionString; // x20
  System_String_o *inputString; // x0
  System_String_o *v47; // x21
  int32_t v48; // w22
  uint16_t Chars; // w0
  System_String_o *v50; // x0
  UIInput_c *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int mSelectionStart; // w8
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  const MethodInfo *v65; // x2
  struct System_String_o *mValue; // x8
  UIInput_c *v67; // x0
  struct UIInput_StaticFields *v68; // x0
  const MethodInfo *v69; // x1
  const MethodInfo *v70; // x1
  System_String_o *v71; // x0
  UIInput_c *v72; // x0
  UIInput_c *v73; // x0
  UIInput_c *v74; // x0
  UIInput_c *v75; // x0
  const MethodInfo *v76; // x1
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  UIInput_c *v83; // x0
  struct UIInput_StaticFields *v84; // x0
  const MethodInfo *v85; // x2
  int32_t v86; // w1
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  UnityEngine_Object_o *mCaret; // x20
  const MethodInfo *v94; // x1
  float mNextBlink; // s8
  float time; // s0
  UnityEngine_Behaviour_o *v97; // x20
  bool enabled; // w0
  struct UILabel_o *label; // x8
  int32_t onReturnKey; // w8
  struct UILabel_o *v101; // x8
  struct UILabel_o *v102; // x8
  UICamera_c *v103; // x0
  struct UICamera_StaticFields *v104; // x8
  UICamera_c *v105; // x0
  UnityEngine_Object_o *current; // x20
  UICamera_c *v107; // x0
  __int64 v108; // x1
  UnityEngine_Object_o *cachedCamera; // x20
  UICamera_c *v110; // x0
  struct UILabel_o *v111; // x8
  UnityEngine_Camera_o *v112; // x20
  float x; // s8
  float y; // s9
  float v115; // s9
  uint16_t v116; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector2_o v117; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593CF92 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    sub_21FFC50(&StringLiteral_26596/*"|"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CF92 = 1;
  }
  v116 = 0;
  if ( UIInput__get_isSelected(this, method) )
  {
    if ( this->fields.mDoInit )
      UIInput__Init(this, v3);
    v4 = UIInput_TypeInfo;
    if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v3);
      v4 = UIInput_TypeInfo;
    }
    static_fields = v4->static_fields;
    if ( static_fields->mWaitForKeyboard )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, v3);
        v4 = UIInput_TypeInfo;
        static_fields = UIInput_TypeInfo->static_fields;
      }
      mKeyboard = static_fields->mKeyboard;
      if ( mKeyboard )
      {
        if ( !*(&v4->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v4, v3);
          mKeyboard = UIInput_TypeInfo->static_fields->mKeyboard;
          if ( !mKeyboard )
            goto LABEL_163;
        }
        if ( !UnityEngine_TouchScreenKeyboard__get_active(mKeyboard, 0) )
          return;
        v4 = UIInput_TypeInfo;
      }
      if ( !*(&v4->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v4, v3);
        v4 = UIInput_TypeInfo;
      }
      v4->static_fields->mWaitForKeyboard = 0;
    }
    mSelectMe = this->fields.mSelectMe;
    if ( mSelectMe == -1 || mSelectMe == UnityEngine_Time__get_frameCount(0) )
    {
LABEL_58:
      v41 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v3);
        v41 = UIInput_TypeInfo;
      }
      v42 = v41->static_fields->mKeyboard;
      if ( v42 )
      {
        if ( !*(&v41->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v41, v3);
          v42 = UIInput_TypeInfo->static_fields->mKeyboard;
          if ( !v42 )
            goto LABEL_163;
        }
        text = UnityEngine_TouchScreenKeyboard__get_text(v42, 0);
        if ( UIInput__get_inputShouldBeHidden(this, v44) )
        {
          if ( System_String__op_Inequality(text, (System_String_o *)StringLiteral_26596/*"|"*/, 0) )
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
              v71 = System_String__Substring(text, 1, 0);
              ((void (__fastcall *)(UIInput_o *, System_String_o *, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
                this,
                v71,
                this->klass->vtable._6_Insert.method);
            }
            v72 = UIInput_TypeInfo;
            if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
              v72 = UIInput_TypeInfo;
            }
            IsNullOrEmpty = (__int64)v72->static_fields->mKeyboard;
            if ( !IsNullOrEmpty )
              goto LABEL_163;
            UnityEngine_TouchScreenKeyboard__set_text(
              (UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty,
              (System_String_o *)StringLiteral_26596/*"|"*/,
              0);
          }
        }
        else if ( System_String__op_Inequality(this->fields.mCached, text, 0) )
        {
          this->fields.mCached = text;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.mCached,
            (int32_t)text,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          UIInput__set_value(this, text, v65);
        }
        v73 = UIInput_TypeInfo;
        if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
          v73 = UIInput_TypeInfo;
        }
        IsNullOrEmpty = (__int64)v73->static_fields->mKeyboard;
        if ( !IsNullOrEmpty )
          goto LABEL_163;
        if ( UnityEngine_TouchScreenKeyboard__get_done((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
          goto LABEL_105;
        v74 = UIInput_TypeInfo;
        if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
          v74 = UIInput_TypeInfo;
        }
        IsNullOrEmpty = (__int64)v74->static_fields->mKeyboard;
        if ( !IsNullOrEmpty )
          goto LABEL_163;
        if ( !UnityEngine_TouchScreenKeyboard__get_active((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
        {
LABEL_105:
          v75 = UIInput_TypeInfo;
          if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
            v75 = UIInput_TypeInfo;
          }
          IsNullOrEmpty = (__int64)v75->static_fields->mKeyboard;
          if ( !IsNullOrEmpty )
            goto LABEL_163;
          if ( !UnityEngine_TouchScreenKeyboard__get_wasCanceled((UnityEngine_TouchScreenKeyboard_o *)IsNullOrEmpty, 0) )
            UIInput__Submit(this, v76);
          v83 = UIInput_TypeInfo;
          if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v76);
            v83 = UIInput_TypeInfo;
          }
          v84 = v83->static_fields;
          v84->mKeyboard = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v84->mKeyboard, 0, v77, v78, v79, v80, v81, v82);
          UIInput__set_isSelected(this, 0, v85);
          v86 = (int)StringLiteral_1/*""*/;
          this->fields.mCached = (struct System_String_o *)StringLiteral_1/*""*/;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mCached, v86, v87, v88, v89, v90, v91, v92);
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
            v47 = (System_String_o *)IsNullOrEmpty;
            if ( *(int *)(IsNullOrEmpty + 16) >= 1 )
            {
              v48 = 0;
              do
              {
                Chars = System_String__get_Chars(v47, v48, 0);
                v116 = Chars;
                if ( Chars >= 0x20u && (Chars & 0xFFFC) != 0xF700 )
                {
                  if ( !*(_DWORD *)(qword_594C0B0 + 228) )
                    j_il2cpp_runtime_class_init_0(qword_594C0B0, v8);
                  v50 = System_Char__ToString((uint16_t)&v116, 0);
                  ((void (__fastcall *)(UIInput_o *, System_String_o *, const MethodInfo *))this->klass->vtable._6_Insert.methodPtr)(
                    this,
                    v50,
                    this->klass->vtable._6_Insert.method);
                }
                ++v48;
              }
              while ( v48 < v47->fields._stringLength );
            }
          }
        }
        v51 = UIInput_TypeInfo;
        if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
          v51 = UIInput_TypeInfo;
        }
        if ( System_String__op_Inequality(v51->static_fields->mLastIME, compositionString, 0) )
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
          v67 = UIInput_TypeInfo;
          this->fields.mSelectionEnd = mSelectionStart;
          if ( !*(&v67->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v67, v8);
            v67 = UIInput_TypeInfo;
          }
          v68 = v67->static_fields;
          v68->mLastIME = compositionString;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v68->mLastIME,
            (int32_t)compositionString,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57);
          UIInput__UpdateLabel(this, v69);
          UIInput__ExecuteOnChange(this, v70);
        }
      }
      mCaret = (UnityEngine_Object_o *)this->fields.mCaret;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(mCaret, 0, 0) )
      {
        mNextBlink = this->fields.mNextBlink;
        if ( mNextBlink < RealTime__get_time(0) )
        {
          time = RealTime__get_time(0);
          v97 = (UnityEngine_Behaviour_o *)this->fields.mCaret;
          this->fields.mNextBlink = time + 0.5;
          if ( !v97 )
            goto LABEL_163;
          enabled = UnityEngine_Behaviour__get_enabled(v97, 0);
          UnityEngine_Behaviour__set_enabled(v97, !enabled, 0);
        }
      }
      IsNullOrEmpty = UIInput__get_isSelected(this, v94);
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
      v101 = this->fields.label;
      if ( v101 )
      {
        if ( v101->fields.mMaxLineCount == 1
          || UnityEngine_Input__GetKey(306, 0)
          || (IsNullOrEmpty = UnityEngine_Input__GetKey(305, 0), (IsNullOrEmpty & 1) != 0) )
        {
LABEL_134:
          v103 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
            v103 = UICamera_TypeInfo;
          }
          v104 = v103->static_fields;
          v104->currentScheme = 2;
          v104->currentKey = 13;
          UIInput__Submit(this, v8);
          UICamera_TypeInfo->static_fields->currentKey = 0;
          return;
        }
        v102 = this->fields.label;
        if ( v102 )
        {
          if ( v102->fields.mOverflow == 1 || this->fields.validation )
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
      sub_21FFECC(IsNullOrEmpty, v8);
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
    v13 = UIInput_TypeInfo;
    this->fields.mSelectionEnd = stringLength;
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v8);
      v13 = UIInput_TypeInfo;
    }
    selectAllTextOnFocus = this->fields.selectAllTextOnFocus;
    mSelectionEnd = 0;
    v13->static_fields->mDrawStart = 0;
    if ( !selectAllTextOnFocus )
      mSelectionEnd = this->fields.mSelectionEnd;
    IsNullOrEmpty = (__int64)this->fields.label;
    this->fields.mSelectionStart = mSelectionEnd;
    if ( !IsNullOrEmpty )
      goto LABEL_163;
    UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, this->fields.activeTextColor, 0);
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v16);
    platform = UnityEngine_Application__get_platform(0);
    if ( platform <= 0x16 && ((1 << platform) & 0x7C0900) != 0 )
    {
      if ( UIInput__get_inputShouldBeHidden(this, v18) )
      {
        UnityEngine_TouchScreenKeyboard__set_hideInput(1, 0);
        keyboardType = this->fields.keyboardType;
        v21 = (System_String_o *)StringLiteral_26596/*"|"*/;
      }
      else
      {
        inputType = this->fields.inputType;
        UnityEngine_TouchScreenKeyboard__set_hideInput(0, 0);
        if ( inputType == 2 )
          keyboardType = 0;
        else
          keyboardType = this->fields.keyboardType;
        v21 = this->fields.mValue;
        this->fields.mSelectionStart = this->fields.mSelectionEnd;
      }
      v23 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v19);
        v23 = UIInput_TypeInfo;
      }
      v24 = this->fields.inputType;
      v23->static_fields->mWaitForKeyboard = 1;
      if ( v24 == 2 )
      {
        v25 = UnityEngine_TouchScreenKeyboard__Open_83265528(v21, keyboardType, 0, 0, 1, 0);
      }
      else
      {
        IsNullOrEmpty = UIInput__get_inputShouldBeHidden(this, v19);
        v33 = (IsNullOrEmpty & 1) == 0 && this->fields.inputType == 1;
        v34 = this->fields.label;
        if ( !v34 )
          goto LABEL_163;
        v35 = v34->fields.mMaxLineCount != 1 && !this->fields.hideInput;
        if ( this->fields.mDoInit )
          UIInput__Init(this, v8);
        v25 = UnityEngine_TouchScreenKeyboard__Open_83265500(
                v21,
                keyboardType,
                v33,
                v35,
                0,
                0,
                this->fields.mDefaultText,
                0);
      }
      v36 = v25;
      v37 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v26);
        v37 = UIInput_TypeInfo;
      }
      v38 = v37->static_fields;
      v38->mKeyboard = v36;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->mKeyboard, (int32_t)v36, v27, v28, v29, v30, v31, v32);
      goto LABEL_57;
    }
    v105 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v18);
      v105 = UICamera_TypeInfo;
    }
    current = (UnityEngine_Object_o *)v105->static_fields->current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( !UnityEngine_Object__op_Inequality(current, 0, 0) )
      goto LABEL_158;
    v107 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
      v107 = UICamera_TypeInfo;
    }
    IsNullOrEmpty = (__int64)v107->static_fields->current;
    if ( !IsNullOrEmpty )
      goto LABEL_163;
    cachedCamera = (UnityEngine_Object_o *)UICamera__get_cachedCamera((UICamera_o *)IsNullOrEmpty, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108);
    if ( UnityEngine_Object__op_Inequality(cachedCamera, 0, 0) )
    {
      v110 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        v110 = UICamera_TypeInfo;
      }
      IsNullOrEmpty = (__int64)v110->static_fields->current;
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      IsNullOrEmpty = (__int64)UICamera__get_cachedCamera((UICamera_o *)IsNullOrEmpty, 0);
      v111 = this->fields.label;
      if ( !v111 )
        goto LABEL_163;
      v112 = (UnityEngine_Camera_o *)IsNullOrEmpty;
      IsNullOrEmpty = (__int64)((__int64 (__fastcall *)(struct UILabel_o *__return_ptr, struct UILabel_o *, const MethodInfo *))v111->klass->vtable._11_get_worldCorners.methodPtr)(
                                 v111,
                                 this->fields.label,
                                 v111->klass->vtable._11_get_worldCorners.method);
      if ( !IsNullOrEmpty )
        goto LABEL_163;
      if ( *(_DWORD *)(IsNullOrEmpty + 24) )
      {
        if ( !v112 )
          goto LABEL_163;
        v118 = UnityEngine_Camera__WorldToScreenPoint_82984900(v112, *(UnityEngine_Vector3_o *)(IsNullOrEmpty + 32), 0);
        x = v118.fields.x;
        y = v118.fields.y;
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
        v115 = (float)UnityEngine_Screen__get_height(0) - y;
        UnityEngine_Input__set_imeCompositionMode(1, 0);
        v117.fields.x = x;
        v117.fields.y = v115;
        UnityEngine_Input__set_compositionCursorPos(v117, 0);
LABEL_57:
        UIInput__UpdateLabel(this, v39);
        v40 = UnityEngine_Input__get_inputString(0);
        if ( System_String__IsNullOrEmpty(v40, 0) )
          return;
        goto LABEL_58;
      }
    }
    sub_21FFED4(IsNullOrEmpty);
  }
}


void UIInput__UpdateLabel(UIInput_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *label; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  _BOOL4 isSelected; // w20
  struct System_String_o *mValue; // x21
  unsigned __int64 v8; // x1
  System_String_o *compositionString; // x0
  _BOOL4 IsNullOrEmpty; // w8
  void *bmFont; // x0
  char v12; // w22
  struct UnityEngine_Color_o *p_mDefaultColor; // x8
  float *p_g; // x9
  float *p_b; // x10
  float *p_a; // x11
  struct UILabel_o *v17; // x8
  UnityEngine_Object_o *mFont; // x24
  System_String_o *v19; // x22
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
  int v35; // w8
  struct UIInput_StaticFields *static_fields; // x8
  int v37; // w10
  int32_t mDrawStart; // w9
  UIInput_c *v39; // x0
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x1
  UIInput_c *v42; // x0
  int32_t mSelectionStart; // w23
  struct UnityEngine_Texture2D_o **p_mBlankTex; // x20
  UnityEngine_Object_o *mBlankTex; // x21
  int32_t mSelectionEnd; // w26
  int32_t v47; // w24
  __int64 v48; // x1
  UnityEngine_Texture2D_o *v49; // x21
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t i; // w21
  char v57; // w8
  char v58; // w22
  struct UITexture_o **p_mHighlight; // x21
  UnityEngine_Object_o *mHighlight; // x22
  __int64 v61; // x1
  UnityEngine_GameObject_o *cachedGameObject; // x22
  Il2CppObject *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct UILabel_o *v70; // x8
  UIRect_o *v71; // x21
  struct UILabel_o *v72; // x8
  struct UITexture_o **p_mCaret; // x21
  UnityEngine_Object_o *mCaret; // x22
  __int64 v75; // x1
  UnityEngine_GameObject_o *v76; // x22
  Il2CppObject *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct UILabel_o *v84; // x8
  UIRect_o *v85; // x20
  const MethodInfo *v86; // x5
  struct UILabel_o *v87; // x8
  struct UITexture_o *v88; // x8
  int32_t v89; // w2
  __int64 v90; // x1
  UnityEngine_Object_o *v91; // x20
  bool hasVertices; // w1
  struct UITexture_o *v93; // x9
  struct UITexture_o *v94; // x20
  float time; // s0
  struct UILabel_o *v96; // x8
  UILabel_o *v97; // x22
  const MethodInfo *v98; // x2
  int32_t v99; // w0
  UIInput_c *v100; // x8
  int32_t v101; // w22
  struct UIInput_StaticFields *v102; // x9
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593CF9D & 1) == 0 )
  {
    sub_21FFC50(&Method_NGUITools_AddWidget_UITexture___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    sub_21FFC50(&StringLiteral_26191/*"x"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_821/*"*"*/);
    sub_21FFC50(&StringLiteral_7989/*"Input Caret"*/);
    sub_21FFC50(&StringLiteral_7990/*"Input Highlight"*/);
    byte_593CF9D = 1;
  }
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      bmFont = this->fields.label;
      v12 = !IsNullOrEmpty;
      if ( IsNullOrEmpty && !isSelected )
      {
        v12 = 0;
        p_mDefaultColor = &this->fields.mDefaultColor;
        p_g = &this->fields.mDefaultColor.fields.g;
        p_b = &this->fields.mDefaultColor.fields.b;
        p_a = &this->fields.mDefaultColor.fields.a;
        goto LABEL_15;
      }
    }
    else
    {
      bmFont = this->fields.label;
      v12 = 1;
    }
    p_mDefaultColor = &this->fields.activeTextColor;
    p_g = &this->fields.activeTextColor.fields.g;
    p_b = &this->fields.activeTextColor.fields.b;
    p_a = &this->fields.activeTextColor.fields.a;
LABEL_15:
    if ( !bmFont )
      goto LABEL_162;
    v103.fields.a = *p_a;
    v103.fields.b = *p_b;
    v103.fields.g = *p_g;
    v103.fields.r = p_mDefaultColor->fields.r;
    UIWidget__set_color((UIWidget_o *)bmFont, v103, 0);
    if ( (v12 & 1) == 0 )
    {
      p_mDefaultText = (struct System_String_o **)&StringLiteral_1/*""*/;
      if ( !isSelected )
        p_mDefaultText = &this->fields.mDefaultText;
      v31 = *p_mDefaultText;
      goto LABEL_59;
    }
    if ( this->fields.inputType == 2 )
    {
      v17 = this->fields.label;
      if ( !v17 )
        goto LABEL_162;
      mFont = (UnityEngine_Object_o *)v17->fields.mFont;
      v19 = (System_String_o *)StringLiteral_1/*""*/;
      v20 = (System_String_o *)StringLiteral_821/*"*"*/;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      bmFont = (void *)UnityEngine_Object__op_Inequality(mFont, 0, 0);
      if ( ((unsigned __int8)bmFont & 1) != 0 )
      {
        v21 = this->fields.label;
        if ( !v21 )
          goto LABEL_162;
        bmFont = v21->fields.mFont;
        if ( !bmFont )
          goto LABEL_162;
        bmFont = UIFont__get_bmFont((UIFont_o *)bmFont, (const MethodInfo *)v8);
        if ( bmFont )
        {
          v22 = this->fields.label;
          if ( !v22 )
            goto LABEL_162;
          bmFont = v22->fields.mFont;
          if ( !bmFont )
            goto LABEL_162;
          bmFont = UIFont__get_bmFont((UIFont_o *)bmFont, (const MethodInfo *)v8);
          if ( !bmFont )
            goto LABEL_162;
          bmFont = BMFont__GetGlyph_56125680((BMFont_o *)bmFont, 42, 0);
          if ( !bmFont )
            v20 = (System_String_o *)StringLiteral_26191/*"x"*/;
        }
      }
      if ( !mValue )
        goto LABEL_162;
      stringLength = mValue->fields._stringLength;
      if ( stringLength >= 1 )
      {
        do
        {
          bmFont = System_String__Concat_75438412(v19, v20, 0);
          --stringLength;
          v19 = (System_String_o *)bmFont;
        }
        while ( stringLength );
      }
      if ( isSelected )
        goto LABEL_34;
    }
    else
    {
      v19 = mValue;
      if ( isSelected )
      {
LABEL_34:
        if ( !v19 )
          goto LABEL_162;
        v24 = v19->fields._stringLength;
        cursorPosition = UIInput__get_cursorPosition(this, (const MethodInfo *)v8);
        if ( v24 >= cursorPosition )
          v26 = cursorPosition;
        else
          v26 = v24;
        v27 = System_String__Substring_75489544(v19, 0, v26, 0);
        v28 = UnityEngine_Input__get_compositionString(0);
        v29 = System_String__Concat_75438412(v27, v28, 0);
        goto LABEL_45;
      }
    }
    if ( !v19 )
      goto LABEL_162;
    v29 = System_String__Substring_75489544(v19, 0, 0, 0);
    v26 = 0;
LABEL_45:
    v32 = System_String__Substring_75489544(v19, v26, v19->fields._stringLength - v26, 0);
    v31 = System_String__Concat_75438412(v29, v32, 0);
    if ( isSelected )
    {
      bmFont = this->fields.label;
      if ( !bmFont )
        goto LABEL_162;
      if ( *((_DWORD *)bmFont + 119) == 1 && *((_DWORD *)bmFont + 110) == 1 )
      {
        v34 = UILabel__CalculateOffsetToFit((UILabel_o *)bmFont, v31, v33);
        bmFont = UIInput_TypeInfo;
        v35 = *(&UIInput_TypeInfo->_2.cctor_finished + 1);
        if ( v34 )
        {
          if ( !v35 )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
            bmFont = UIInput_TypeInfo;
          }
          static_fields = (struct UIInput_StaticFields *)*((_QWORD *)bmFont + 23);
          v37 = *((_DWORD *)bmFont + 57);
          mDrawStart = static_fields->mDrawStart;
          if ( v26 < mDrawStart )
          {
            if ( !v37 )
            {
              j_il2cpp_runtime_class_init_0(bmFont, v8);
              static_fields = UIInput_TypeInfo->static_fields;
            }
            static_fields->mDrawStart = v26;
LABEL_146:
            UIInput__SetPivotToLeft(this, (const MethodInfo *)v8);
            goto LABEL_147;
          }
          if ( !v37 )
          {
            j_il2cpp_runtime_class_init_0(bmFont, v8);
            bmFont = UIInput_TypeInfo;
            static_fields = UIInput_TypeInfo->static_fields;
            mDrawStart = static_fields->mDrawStart;
          }
          if ( v34 < mDrawStart )
          {
            if ( !*((_DWORD *)bmFont + 57) )
            {
              j_il2cpp_runtime_class_init_0(bmFont, v8);
              static_fields = UIInput_TypeInfo->static_fields;
            }
            static_fields->mDrawStart = v34;
            goto LABEL_146;
          }
          if ( !v31 )
            goto LABEL_162;
          v97 = this->fields.label;
          bmFont = System_String__Substring_75489544(v31, 0, v26, 0);
          if ( !v97 )
            goto LABEL_162;
          v99 = UILabel__CalculateOffsetToFit(v97, (System_String_o *)bmFont, v98);
          v100 = UIInput_TypeInfo;
          v101 = v99;
          if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
            v100 = UIInput_TypeInfo;
          }
          v102 = v100->static_fields;
          if ( v101 > v102->mDrawStart )
          {
            if ( !*(&v100->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v100, v8);
              v102 = UIInput_TypeInfo->static_fields;
            }
            v102->mDrawStart = v101;
            UIInput__SetPivotToRight(this, (const MethodInfo *)v8);
          }
        }
        else
        {
          if ( !v35 )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
            bmFont = UIInput_TypeInfo;
          }
          *(_DWORD *)(*((_QWORD *)bmFont + 23) + 16LL) = 0;
          UIInput__RestoreLabelPivot(this, (const MethodInfo *)v8);
        }
LABEL_147:
        bmFont = UIInput_TypeInfo;
        if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
          bmFont = UIInput_TypeInfo;
        }
        if ( *(_DWORD *)(*((_QWORD *)bmFont + 23) + 16LL) )
        {
          if ( !*((_DWORD *)bmFont + 57) )
            j_il2cpp_runtime_class_init_0(bmFont, v8);
          if ( !v31 )
            goto LABEL_162;
          v31 = System_String__Substring_75489544(
                  v31,
                  UIInput_TypeInfo->static_fields->mDrawStart,
                  v31->fields._stringLength - UIInput_TypeInfo->static_fields->mDrawStart,
                  0);
        }
LABEL_60:
        bmFont = this->fields.label;
        if ( !bmFont )
          goto LABEL_162;
        UILabel__set_text((UILabel_o *)bmFont, v31, v40);
        if ( isSelected )
        {
          v42 = UIInput_TypeInfo;
          if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v41);
            v42 = UIInput_TypeInfo;
          }
          if ( !v42->static_fields->mKeyboard )
          {
LABEL_67:
            mSelectionStart = this->fields.mSelectionStart;
            if ( !*(&v42->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v42, v41);
              v42 = UIInput_TypeInfo;
            }
            p_mBlankTex = &this->fields.mBlankTex;
            mBlankTex = (UnityEngine_Object_o *)this->fields.mBlankTex;
            mSelectionEnd = this->fields.mSelectionEnd;
            v47 = v42->static_fields->mDrawStart;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
            if ( UnityEngine_Object__op_Equality(mBlankTex, 0, 0) )
            {
              v49 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
              UnityEngine_Texture2D___ctor_83105640(v49, 2, 2, 5, 0, 0);
              *p_mBlankTex = v49;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields.mBlankTex,
                (int32_t)v49,
                v50,
                v51,
                v52,
                v53,
                v54,
                v55);
              for ( i = 0; i != 2; ++i )
              {
                v8 = 0;
                v57 = 1;
                do
                {
                  bmFont = *p_mBlankTex;
                  if ( !*p_mBlankTex )
                    goto LABEL_162;
                  v104.fields.r = 1.0;
                  v104.fields.g = 1.0;
                  v104.fields.b = 1.0;
                  v104.fields.a = 1.0;
                  v58 = v57;
                  UnityEngine_Texture2D__SetPixel((UnityEngine_Texture2D_o *)bmFont, v8, i, v104, 0);
                  v57 = 0;
                  v8 = 1;
                }
                while ( (v58 & 1) != 0 );
              }
              bmFont = *p_mBlankTex;
              if ( !*p_mBlankTex )
                goto LABEL_162;
              UnityEngine_Texture2D__Apply_83107520((UnityEngine_Texture2D_o *)bmFont, 0);
            }
            if ( mSelectionStart != mSelectionEnd )
            {
              p_mHighlight = &this->fields.mHighlight;
              mHighlight = (UnityEngine_Object_o *)this->fields.mHighlight;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
              bmFont = (void *)UnityEngine_Object__op_Equality(mHighlight, 0, 0);
              if ( ((unsigned __int8)bmFont & 1) != 0 )
              {
                bmFont = this->fields.label;
                if ( !bmFont )
                  goto LABEL_162;
                cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)bmFont, 0);
                if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v61);
                v63 = NGUITools__AddWidget_object_(
                        cachedGameObject,
                        (const MethodInfo_38BD284 *)Method_NGUITools_AddWidget_UITexture___);
                *p_mHighlight = (struct UITexture_o *)v63;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.mHighlight,
                  (int32_t)v63,
                  v64,
                  v65,
                  v66,
                  v67,
                  v68,
                  v69);
                bmFont = *p_mHighlight;
                if ( !*p_mHighlight )
                  goto LABEL_162;
                UnityEngine_Object__set_name((UnityEngine_Object_o *)bmFont, (System_String_o *)StringLiteral_7990/*"Input Highlight"*/, 0);
                bmFont = *p_mHighlight;
                if ( !*p_mHighlight )
                  goto LABEL_162;
                (*(void (__fastcall **)(void *, struct UnityEngine_Texture2D_o *, _QWORD))(*(_QWORD *)bmFont + 744LL))(
                  bmFont,
                  *p_mBlankTex,
                  *(_QWORD *)(*(_QWORD *)bmFont + 752LL));
                bmFont = *p_mHighlight;
                if ( !*p_mHighlight )
                  goto LABEL_162;
                v70 = this->fields.label;
                *((_BYTE *)bmFont + 248) = 0;
                if ( !v70 )
                  goto LABEL_162;
                UIWidget__set_pivot((UIWidget_o *)bmFont, v70->fields.mPivot, 0);
                bmFont = this->fields.label;
                if ( !bmFont )
                  goto LABEL_162;
                v71 = (UIRect_o *)this->fields.mHighlight;
                bmFont = UIRect__get_cachedTransform((UIRect_o *)bmFont, 0);
                if ( !v71 )
                  goto LABEL_162;
                UIRect__SetAnchor(v71, (UnityEngine_Transform_o *)bmFont, 0);
              }
              else
              {
                v72 = this->fields.label;
                if ( !v72 )
                  goto LABEL_162;
                bmFont = this->fields.mHighlight;
                if ( !bmFont )
                  goto LABEL_162;
                UIWidget__set_pivot((UIWidget_o *)bmFont, v72->fields.mPivot, 0);
                bmFont = *p_mHighlight;
                if ( !*p_mHighlight )
                  goto LABEL_162;
                (*(void (__fastcall **)(void *, struct UnityEngine_Texture2D_o *, _QWORD))(*(_QWORD *)bmFont + 744LL))(
                  bmFont,
                  *p_mBlankTex,
                  *(_QWORD *)(*(_QWORD *)bmFont + 752LL));
                bmFont = *p_mHighlight;
                if ( !*p_mHighlight )
                  goto LABEL_162;
                (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)bmFont + 792LL))(
                  bmFont,
                  *(_QWORD *)(*(_QWORD *)bmFont + 800LL));
                bmFont = *p_mHighlight;
                if ( !*p_mHighlight )
                  goto LABEL_162;
                UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bmFont, 1, 0);
              }
            }
            p_mCaret = &this->fields.mCaret;
            mCaret = (UnityEngine_Object_o *)this->fields.mCaret;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
            bmFont = (void *)UnityEngine_Object__op_Equality(mCaret, 0, 0);
            if ( ((unsigned __int8)bmFont & 1) != 0 )
            {
              bmFont = this->fields.label;
              if ( !bmFont )
                goto LABEL_162;
              v76 = UIRect__get_cachedGameObject((UIRect_o *)bmFont, 0);
              if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v75);
              v77 = NGUITools__AddWidget_object_(
                      v76,
                      (const MethodInfo_38BD284 *)Method_NGUITools_AddWidget_UITexture___);
              *p_mCaret = (struct UITexture_o *)v77;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&this->fields.mCaret,
                (int32_t)v77,
                v78,
                v79,
                v80,
                v81,
                v82,
                v83);
              bmFont = *p_mCaret;
              if ( !*p_mCaret )
                goto LABEL_162;
              UnityEngine_Object__set_name((UnityEngine_Object_o *)bmFont, (System_String_o *)StringLiteral_7989/*"Input Caret"*/, 0);
              bmFont = *p_mCaret;
              if ( !*p_mCaret )
                goto LABEL_162;
              (*(void (__fastcall **)(void *, struct UnityEngine_Texture2D_o *, _QWORD))(*(_QWORD *)bmFont + 744LL))(
                bmFont,
                *p_mBlankTex,
                *(_QWORD *)(*(_QWORD *)bmFont + 752LL));
              bmFont = *p_mCaret;
              if ( !*p_mCaret )
                goto LABEL_162;
              v84 = this->fields.label;
              *((_BYTE *)bmFont + 248) = 0;
              if ( !v84 )
                goto LABEL_162;
              UIWidget__set_pivot((UIWidget_o *)bmFont, v84->fields.mPivot, 0);
              bmFont = this->fields.label;
              if ( !bmFont )
                goto LABEL_162;
              v85 = (UIRect_o *)this->fields.mCaret;
              bmFont = UIRect__get_cachedTransform((UIRect_o *)bmFont, 0);
              if ( !v85 )
                goto LABEL_162;
              UIRect__SetAnchor(v85, (UnityEngine_Transform_o *)bmFont, 0);
            }
            else
            {
              v87 = this->fields.label;
              if ( !v87 )
                goto LABEL_162;
              bmFont = this->fields.mCaret;
              if ( !bmFont )
                goto LABEL_162;
              UIWidget__set_pivot((UIWidget_o *)bmFont, v87->fields.mPivot, 0);
              bmFont = *p_mCaret;
              if ( !*p_mCaret )
                goto LABEL_162;
              (*(void (__fastcall **)(void *, struct UnityEngine_Texture2D_o *, _QWORD))(*(_QWORD *)bmFont + 744LL))(
                bmFont,
                *p_mBlankTex,
                *(_QWORD *)(*(_QWORD *)bmFont + 752LL));
              bmFont = *p_mCaret;
              if ( !*p_mCaret )
                goto LABEL_162;
              (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)bmFont + 792LL))(
                bmFont,
                *(_QWORD *)(*(_QWORD *)bmFont + 800LL));
              bmFont = *p_mCaret;
              if ( !*p_mCaret )
                goto LABEL_162;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bmFont, 1, 0);
            }
            bmFont = this->fields.label;
            v88 = this->fields.mCaret;
            v8 = (unsigned int)(mSelectionStart - v47);
            v89 = mSelectionEnd - v47;
            if ( mSelectionStart == mSelectionEnd )
            {
              if ( !v88 || !bmFont )
                goto LABEL_162;
              UILabel__PrintOverlay(
                (UILabel_o *)bmFont,
                v8,
                v89,
                v88->fields.geometry,
                0,
                this->fields.caretColor,
                this->fields.selectionColor,
                v86);
              v91 = (UnityEngine_Object_o *)this->fields.mHighlight;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
              if ( !UnityEngine_Object__op_Inequality(v91, 0, 0) )
                goto LABEL_134;
              bmFont = this->fields.mHighlight;
              if ( !bmFont )
                goto LABEL_162;
              hasVertices = 0;
            }
            else
            {
              if ( !v88 )
                goto LABEL_162;
              v93 = this->fields.mHighlight;
              if ( !v93 )
                goto LABEL_162;
              if ( !bmFont )
                goto LABEL_162;
              UILabel__PrintOverlay(
                (UILabel_o *)bmFont,
                v8,
                v89,
                v88->fields.geometry,
                v93->fields.geometry,
                this->fields.caretColor,
                this->fields.selectionColor,
                v86);
              v94 = this->fields.mHighlight;
              if ( !v94 )
                goto LABEL_162;
              bmFont = v94->fields.geometry;
              if ( !bmFont )
                goto LABEL_162;
              hasVertices = UIGeometry__get_hasVertices((UIGeometry_o *)bmFont, 0);
              bmFont = v94;
            }
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)bmFont, hasVertices, 0);
LABEL_134:
            time = RealTime__get_time(0);
            v96 = this->fields.label;
            this->fields.mNextBlink = time + 0.5;
            if ( v96 )
            {
              this->fields.mLastAlpha = v96->fields.finalAlpha;
              return;
            }
LABEL_162:
            sub_21FFECC(bmFont, v8);
          }
          if ( UIInput__get_inputShouldBeHidden(this, v41) )
          {
            v42 = UIInput_TypeInfo;
            goto LABEL_67;
          }
        }
        ((void (__fastcall *)(UIInput_o *, const MethodInfo *))this->klass->vtable._9_Cleanup.methodPtr)(
          this,
          this->klass->vtable._9_Cleanup.method);
        return;
      }
    }
    v39 = UIInput_TypeInfo;
    if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
      v39 = UIInput_TypeInfo;
    }
    v39->static_fields->mDrawStart = 0;
LABEL_59:
    UIInput__RestoreLabelPivot(this, (const MethodInfo *)v8);
    goto LABEL_60;
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

  if ( (byte_593CF8D & 1) == 0 )
  {
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593CF8D = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(val, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !val )
    goto LABEL_25;
  stringLength = val->fields._stringLength;
  v9 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_75515192(v9, stringLength, 0);
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
        IsNullOrEmpty = UIInput__Validate_56352980(this, v15, Length, v12, v17);
        goto LABEL_14;
      }
LABEL_15:
      if ( (_WORD)v12 )
      {
        if ( !v9 )
          goto LABEL_25;
        IsNullOrEmpty = (unsigned __int64)System_Text_StringBuilder__Append_75524092(v9, v12, 0);
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
    sub_21FFECC(IsNullOrEmpty, v6);
  }
  if ( !v9 )
    goto LABEL_25;
  v18 = System_Text_StringBuilder__get_Length(v9, 0);
  characterLimit = this->fields.characterLimit;
  if ( v18 > characterLimit )
    return System_Text_StringBuilder__ToString_75518504(v9, 0, characterLimit, 0);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v9->klass->vtable._3_ToString.methodPtr)(
                              v9,
                              v9->klass->vtable._3_ToString.method);
}


uint16_t UIInput__Validate_56352980(
        UIInput_o *this,
        System_String_o *text,
        int32_t pos,
        uint16_t ch,
        const MethodInfo *method)
{
  _BOOL8 enabled; // x0
  __int64 v10; // x1
  int32_t validation; // w8
  int32_t stringLength; // w8
  bool v13; // vf
  int v14; // w8
  int32_t v15; // w1
  uint16_t Chars; // w0
  int32_t v17; // w8
  __int16 v18; // w22
  int v19; // w8
  int32_t v20; // w1
  uint16_t v21; // w0
  unsigned int v22; // w8
  unsigned __int16 v23; // w8
  unsigned int v24; // w9

  if ( (byte_593CF9F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_551/*"'"*/);
    sub_21FFC50(&StringLiteral_1063/*"."*/);
    byte_593CF9F = 1;
  }
  if ( this->fields.validation )
  {
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
    if ( enabled )
    {
      validation = this->fields.validation;
      if ( validation > 2 )
      {
        switch ( validation )
        {
          case 3:
            if ( ch >= 0x41u )
            {
              if ( ch < 0x5Bu )
                return ch;
              v23 = ch - 123;
              v24 = 65510;
              goto LABEL_38;
            }
            break;
          case 4:
            if ( (unsigned __int16)(ch - 91) >= 0xFFE6u )
              goto LABEL_67;
            if ( ch >= 0x61u )
            {
              if ( ch <= 0x7Au )
                return ch;
              return 0;
            }
            break;
          case 5:
            if ( text )
            {
              stringLength = text->fields._stringLength;
              v13 = __OFSUB__(stringLength, 1);
              v14 = stringLength - 1;
              if ( v14 < 0 != v13 )
              {
                if ( (unsigned __int16)(ch - 123) < 0xFFE6u )
                {
                  v18 = 32;
                  v21 = 10;
LABEL_55:
                  if ( (unsigned __int16)(ch - 91) < 0xFFE6u )
                  {
                    if ( ch != 32 )
                    {
                      if ( ch == 39
                        && v18 != 32
                        && v18 != 39
                        && v21 != 39
                        && !System_String__Contains(text, (System_String_o *)StringLiteral_551/*"'"*/, 0) )
                      {
                        return 39;
                      }
                      return 0;
                    }
                    if ( v18 != 32 && v18 != 39 )
                    {
                      if ( v21 == 39 || v21 == 32 )
                        return 0;
                      else
                        return 32;
                    }
                    return 0;
                  }
                  if ( v18 == 32 || v18 == 39 )
                    return ch;
LABEL_67:
                  ch |= 0x20u;
                  return ch;
                }
              }
              else
              {
                if ( pos < v14 )
                  v14 = pos;
                if ( pos >= 0 )
                  v15 = v14;
                else
                  v15 = 0;
                Chars = System_String__get_Chars(text, v15, 0);
                v17 = text->fields._stringLength;
                v18 = Chars;
                v13 = __OFSUB__(v17, 1);
                v19 = v17 - 1;
                if ( v19 < 0 != v13 )
                {
                  v21 = 10;
                }
                else
                {
                  if ( pos + 1 < v19 )
                    v19 = pos + 1;
                  if ( pos + 1 >= 0 )
                    v20 = v19;
                  else
                    v20 = 0;
                  v21 = System_String__get_Chars(text, v20, 0);
                }
                if ( (unsigned __int16)(ch - 123) < 0xFFE6u )
                  goto LABEL_55;
                if ( v18 != 32 )
                  return ch;
              }
              ch -= 32;
              return ch;
            }
LABEL_76:
            sub_21FFECC(enabled, v10);
          default:
            return 0;
        }
        v23 = ch - 58;
        v24 = 65526;
LABEL_38:
        if ( v24 <= v23 )
          return ch;
        return 0;
      }
      if ( validation == 1 )
      {
        v22 = ch;
        if ( ch < 0x30u )
        {
          if ( pos || ch != 45 )
            return 0;
          goto LABEL_43;
        }
      }
      else
      {
        if ( validation != 2 )
          return 0;
        v22 = ch;
        if ( ch < 0x30u )
        {
          if ( pos || ch != 45 )
          {
            if ( ch != 46 )
              return 0;
            if ( text )
            {
              if ( !System_String__Contains(text, (System_String_o *)StringLiteral_1063/*"."*/, 0) )
                return 46;
              return 0;
            }
            goto LABEL_76;
          }
LABEL_43:
          if ( text )
          {
            if ( !System_String__Contains(text, (System_String_o *)StringLiteral_923/*"-"*/, 0) )
              return 45;
            return 0;
          }
          goto LABEL_76;
        }
      }
      if ( v22 <= 0x39 )
        return ch;
      return 0;
    }
  }
  return ch;
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

  if ( (byte_593CF87 & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF87 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, method);
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
      sub_21FFECC(ShouldBeHidden, method);
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

  if ( (byte_593CF83 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF83 = 1;
  }
  if ( !this->fields.hideInput )
    return 0;
  label = (UnityEngine_Object_o *)this->fields.label;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(label, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.label;
  if ( !v6 )
    sub_21FFECC(v4, v5);
  return v6->fields.mMaxLineCount == 1 && this->fields.inputType != 2;
}


bool UIInput__get_isSelected(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  UnityEngine_Object_o *selection; // x20

  if ( (byte_593CF85 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF85 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, method);
    v3 = UIInput_TypeInfo;
  }
  selection = (UnityEngine_Object_o *)v3->static_fields->selection;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Equality(selection, (UnityEngine_Object_o *)this, 0);
}


int32_t UIInput__get_selectionEnd(UIInput_o *this, const MethodInfo *method)
{
  UIInput_c *v3; // x0
  _BOOL8 ShouldBeHidden; // x0
  int32_t *p_mSelectionEnd; // x8
  struct System_String_o *mValue; // x8

  if ( (byte_593CF8B & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF8B = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, method);
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
      sub_21FFECC(ShouldBeHidden, method);
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

  if ( (byte_593CF89 & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF89 = 1;
  }
  v3 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, method);
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
      sub_21FFECC(isSelected, v5);
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

  if ( (byte_593CF88 & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF88 = 1;
  }
  if ( UIInput__get_isSelected(this, *(const MethodInfo **)&value) )
  {
    v6 = UIInput_TypeInfo;
    if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v5);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x1

  if ( this->fields.mDoInit )
    UIInput__Init(this, (const MethodInfo *)value);
  this->fields.mDefaultText = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mDefaultText,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  UIInput__UpdateLabel(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void UIInput__set_isSelected(UIInput_o *this, bool value, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UICamera_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_593CF86 & 1) == 0 )
  {
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593CF86 = 1;
  }
  if ( value )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v7 = UICamera_TypeInfo;
    v8 = gameObject;
  }
  else
  {
    if ( !UIInput__get_isSelected(this, (const MethodInfo *)value) )
      return;
    v7 = UICamera_TypeInfo;
    v8 = 0;
  }
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, v6);
  UICamera__set_selectedObject(v8, 0);
}


// attributes: thunk
void UIInput__set_selected(UIInput_o *this, bool value, const MethodInfo *method)
{
  UIInput__set_isSelected(this, value, method);
}


// local variable allocation has failed, the output may be wrong!
void UIInput__set_selectionEnd(UIInput_o *this, int32_t value, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UIInput_c *v6; // x0

  if ( (byte_593CF8C & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF8C = 1;
  }
  if ( UIInput__get_isSelected(this, *(const MethodInfo **)&value) )
  {
    v6 = UIInput_TypeInfo;
    if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v5);
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

  if ( (byte_593CF8A & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF8A = 1;
  }
  if ( UIInput__get_isSelected(this, *(const MethodInfo **)&value) )
  {
    v6 = UIInput_TypeInfo;
    if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v5);
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
  __int64 v8; // x1
  UIInput_c *v9; // x0
  const MethodInfo *v10; // x1
  UIInput_c *v11; // x0
  UnityEngine_TouchScreenKeyboard_o *mKeyboard; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int32_t stringLength; // w8
  const MethodInfo *v28; // x1

  if ( (byte_593CF84 & 1) == 0 )
  {
    sub_21FFC50(&UIInput_TypeInfo);
    byte_593CF84 = 1;
  }
  if ( this->fields.mDoInit )
    UIInput__Init(this, (const MethodInfo *)value);
  v5 = UIInput_TypeInfo;
  if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, value);
    v5 = UIInput_TypeInfo;
  }
  v5->static_fields->mDrawStart = 0;
  v6 = UIInput__Validate(this, value, method);
  if ( UIInput__get_isSelected(this, v7) )
  {
    v9 = UIInput_TypeInfo;
    if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v8);
      v9 = UIInput_TypeInfo;
    }
    if ( v9->static_fields->mKeyboard && System_String__op_Inequality(this->fields.mCached, v6, 0) )
    {
      v11 = UIInput_TypeInfo;
      if ( !*(&UIInput_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIInput_TypeInfo, v10);
        v11 = UIInput_TypeInfo;
      }
      mKeyboard = v11->static_fields->mKeyboard;
      if ( !mKeyboard )
        goto LABEL_25;
      UnityEngine_TouchScreenKeyboard__set_text(mKeyboard, v6, 0);
      this->fields.mCached = v6;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mCached, (int32_t)v6, v13, v14, v15, v16, v17, v18);
    }
  }
  if ( System_String__op_Inequality(this->fields.mValue, v6, 0) )
  {
    this->fields.mValue = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mValue, (int32_t)v6, v19, v20, v21, v22, v23, v24);
    this->fields.mLoadSavedValue = 0;
    if ( !UIInput__get_isSelected(this, v25) )
    {
      UIInput__SaveToPlayerPrefs(this, v6, v26);
      goto LABEL_24;
    }
    mKeyboard = (UnityEngine_TouchScreenKeyboard_o *)System_String__IsNullOrEmpty(v6, 0);
    if ( ((unsigned __int8)mKeyboard & 1) != 0 )
    {
      *(_QWORD *)&this->fields.mSelectionStart = 0;
LABEL_24:
      UIInput__UpdateLabel(this, v10);
      UIInput__ExecuteOnChange(this, v28);
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
    sub_21FFECC(mKeyboard, v10);
  }
}


void UIInput_OnValidate___ctor(UIInput_OnValidate_o *this, Il2CppObject *object, intptr_t method, const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( v12 == 2 )
    {
      v13 = sub_2004AB8;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 3 )
    goto LABEL_8;
  v13 = sub_2004ADC;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_2004A50;
}


System_IAsyncResult_o *UIInput_OnValidate__BeginInvoke(
        UIInput_OnValidate_o *this,
        System_String_o *text,
        int32_t charIndex,
        uint16_t addedChar,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int128 v11; // [xsp+0h] [xbp-50h] BYREF
  __int128 v12; // [xsp+10h] [xbp-40h]
  uint16_t v13[2]; // [xsp+28h] [xbp-28h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-24h] BYREF

  v14 = charIndex;
  v13[0] = addedChar;
  v12 = 0u;
  v11 = (unsigned __int64)text;
  *((_QWORD *)&v11 + 1) = j_il2cpp_value_box_0(qword_594C070, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_594C0B0, v13);
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v11, callback, object);
}


uint16_t UIInput_OnValidate__EndInvoke(
        UIInput_OnValidate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  v3 = sub_21FFC08(result, 0, method);
  if ( !v3 )
    sub_21FFECC(0, v4);
  return *(_WORD *)j_il2cpp_object_unbox_0(v3, v4, v5);
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