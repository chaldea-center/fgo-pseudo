void __fastcall BoardOptionTextWithIconComponent___ctor(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  this->fields.alpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoardOptionTextWithIconComponent__AdjustContentsAnchor(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20
  struct UISprite_o *v5; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  struct UISprite_o *v7; // x8
  struct UIRect_AnchorPoint_o *v8; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x10
  UIRect_o *v10; // x0
  UIRect_o *v11; // x0
  UnityEngine_Object_o *forwardLabel; // x20
  const MethodInfo *v13; // x1
  struct UILabel_o *v14; // x8
  struct UIRect_AnchorPoint_o *v15; // x20
  float iconSpaceWidth; // s0
  double v17; // d0
  UIRect_o *v18; // x0
  UIRect_o *v19; // x0

  if ( (byte_40FB0E0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB0E0 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
  {
    itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0LL, 0LL) )
    {
      v5 = this->fields.itemIconSprite;
      if ( !v5 )
        goto LABEL_32;
      rightAnchor = v5->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_32;
      rightAnchor->fields.absolute = -this->fields.itemIconPaddingLeft;
      v7 = this->fields.itemIconSprite;
      if ( !v7 )
        goto LABEL_32;
      v8 = v7->fields.rightAnchor;
      if ( !v8 )
        goto LABEL_32;
      leftAnchor = v7->fields.leftAnchor;
      if ( !leftAnchor )
        goto LABEL_32;
      leftAnchor->fields.absolute = v8->fields.absolute - v7->fields.mWidth;
      v10 = (UIRect_o *)this->fields.itemIconSprite;
      if ( !v10 )
        goto LABEL_32;
      UIRect__ResetAnchors(v10, 0LL);
      v11 = (UIRect_o *)this->fields.itemIconSprite;
      if ( !v11 )
        goto LABEL_32;
      UIRect__UpdateAnchors(v11, 0LL);
    }
    forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
    {
      v14 = this->fields.forwardLabel;
      if ( v14 )
      {
        v15 = v14->fields.rightAnchor;
        iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v13);
        if ( v15 )
        {
          v17 = iconSpaceWidth == INFINITY ? -iconSpaceWidth : iconSpaceWidth;
          v15->fields.absolute = -(int)v17;
          v18 = (UIRect_o *)this->fields.forwardLabel;
          if ( v18 )
          {
            UIRect__ResetAnchors(v18, 0LL);
            v19 = (UIRect_o *)this->fields.forwardLabel;
            if ( v19 )
            {
              UIRect__UpdateAnchors(v19, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B170D4();
    }
  }
}


int32_t __fastcall BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  struct UILabel_o *v5; // x0
  float FontWidth; // s0

  if ( (byte_40FB0DF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB0DF = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
    return 0;
  v5 = this->fields.behindLabel;
  if ( !v5 )
    sub_B170D4();
  FontWidth = WrapControlText__getFontWidth(v5, v5->fields.mText, v5->fields.mFontSize, 0LL);
  if ( FontWidth == INFINITY )
    return (int)-FontWidth;
  else
    return (int)FontWidth;
}


float __fastcall BoardOptionTextWithIconComponent__GetBehindTextWidth(
        BoardOptionTextWithIconComponent_o *this,
        float totalTextWidth,
        const MethodInfo *method)
{
  struct TerminalBoardOptionTextData_o *data; // x8
  struct System_String_o *BehindText_k__BackingField; // x9
  int m_stringLength; // w9
  struct System_String_o *ForwardText_k__BackingField; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  BehindText_k__BackingField = data->fields._BehindText_k__BackingField;
  if ( !BehindText_k__BackingField )
    goto LABEL_7;
  m_stringLength = BehindText_k__BackingField->fields.m_stringLength;
  if ( m_stringLength >= 1 )
  {
    ForwardText_k__BackingField = data->fields._ForwardText_k__BackingField;
    if ( ForwardText_k__BackingField )
      return fmaxf(
               (float)((float)m_stringLength * totalTextWidth)
             / (float)(ForwardText_k__BackingField->fields.m_stringLength + m_stringLength),
               0.0);
LABEL_7:
    sub_B170D4();
  }
  return 0.0;
}


float __fastcall BoardOptionTextWithIconComponent__GetForwardTextWidth(
        BoardOptionTextWithIconComponent_o *this,
        float totalTextWidth,
        const MethodInfo *method)
{
  struct TerminalBoardOptionTextData_o *data; // x8
  struct System_String_o *ForwardText_k__BackingField; // x9
  int m_stringLength; // w9
  struct System_String_o *BehindText_k__BackingField; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  ForwardText_k__BackingField = data->fields._ForwardText_k__BackingField;
  if ( !ForwardText_k__BackingField )
    goto LABEL_7;
  m_stringLength = ForwardText_k__BackingField->fields.m_stringLength;
  if ( m_stringLength >= 1 )
  {
    BehindText_k__BackingField = data->fields._BehindText_k__BackingField;
    if ( BehindText_k__BackingField )
      return fmaxf(
               (float)((float)m_stringLength * totalTextWidth)
             / (float)(BehindText_k__BackingField->fields.m_stringLength + m_stringLength),
               0.0);
LABEL_7:
    sub_B170D4();
  }
  return 0.0;
}


bool __fastcall BoardOptionTextWithIconComponent__IsTextEmpty(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *forwardLabelText; // x0
  const MethodInfo *v4; // x1
  System_String_o *behindLabelText; // x0

  forwardLabelText = BoardOptionTextWithIconComponent__get_forwardLabelText(this, method);
  if ( !System_String__IsNullOrEmpty(forwardLabelText, 0LL) )
    return 0;
  behindLabelText = BoardOptionTextWithIconComponent__get_behindLabelText(this, v4);
  return System_String__IsNullOrEmpty(behindLabelText, 0LL);
}


void __fastcall BoardOptionTextWithIconComponent__SetBehindText(
        BoardOptionTextWithIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x21
  UILabel_o *v6; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsNullOrEmpty; // w0

  if ( (byte_40FB0E2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, text);
    byte_40FB0E2 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
  {
    v6 = this->fields.behindLabel;
    if ( !v6
      || (UILabel__set_text(v6, text, 0LL), (v7 = (UnityEngine_Component_o *)this->fields.behindLabel) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject(v7, 0LL),
          IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL),
          !gameObject) )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, !IsNullOrEmpty, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__SetCondensedScale(
        BoardOptionTextWithIconComponent_o *this,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  const MethodInfo *v6; // x1
  UILabel_o *v7; // x21
  float iconSpaceWidth; // s0
  const MethodInfo *v9; // x1
  float ForwardTextWidth; // s0
  double v11; // d0
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v13; // x1
  UILabel_o *v14; // x21
  float v15; // s0
  const MethodInfo *v16; // x1
  float BehindTextWidth; // s0
  double v18; // d0

  if ( (byte_40FB0E3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&wholeWidth);
    byte_40FB0E3 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v7 = this->fields.forwardLabel;
    iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v6);
    ForwardTextWidth = BoardOptionTextWithIconComponent__GetForwardTextWidth(
                         this,
                         (float)wholeWidth - iconSpaceWidth,
                         v9);
    if ( !v7 )
      goto LABEL_22;
    if ( ForwardTextWidth == INFINITY )
      v11 = -ForwardTextWidth;
    else
      v11 = ForwardTextWidth;
    UILabel__SetCondensedScale(v7, (int)v11, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v14 = this->fields.behindLabel;
    v15 = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v13);
    BehindTextWidth = BoardOptionTextWithIconComponent__GetBehindTextWidth(this, (float)wholeWidth - v15, v16);
    if ( v14 )
    {
      if ( BehindTextWidth == INFINITY )
        v18 = -BehindTextWidth;
      else
        v18 = BehindTextWidth;
      UILabel__SetCondensedScale(v14, (int)v18, 0LL);
      return;
    }
LABEL_22:
    sub_B170D4();
  }
}


void __fastcall BoardOptionTextWithIconComponent__SetForwardText(
        BoardOptionTextWithIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  UILabel_o *v6; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsNullOrEmpty; // w0

  if ( (byte_40FB0E1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, text);
    byte_40FB0E1 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(forwardLabel, 0LL, 0LL) )
  {
    v6 = this->fields.forwardLabel;
    if ( !v6
      || (UILabel__set_text(v6, text, 0LL), (v7 = (UnityEngine_Component_o *)this->fields.forwardLabel) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject(v7, 0LL),
          IsNullOrEmpty = System_String__IsNullOrEmpty(text, 0LL),
          !gameObject) )
    {
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(gameObject, !IsNullOrEmpty, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__SetItemIconAtlas(
        BoardOptionTextWithIconComponent_o *this,
        int32_t itemImageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *itemIconSprite; // x21
  UISprite_o *v8; // x21
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v11; // w1
  UISprite_o *v12; // x0
  UnityEngine_Component_o *v13; // x0

  if ( (byte_40FB0E4 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&itemImageId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FB0E4 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(itemIconSprite, 0LL, 0LL) )
  {
    v8 = this->fields.itemIconSprite;
    if ( itemImageId < 1 )
    {
      if ( v8 )
      {
        UISprite__set_atlas(this->fields.itemIconSprite, 0LL, 0LL);
        v12 = this->fields.itemIconSprite;
        if ( v12 )
        {
          UISprite__set_spriteName(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          v13 = (UnityEngine_Component_o *)this->fields.itemIconSprite;
          if ( v13 )
          {
            gameObject = UnityEngine_Component__get_gameObject(v13, 0LL);
            if ( gameObject )
            {
              v11 = 0;
              goto LABEL_19;
            }
          }
        }
      }
    }
    else
    {
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetItem(v8, itemImageId, 0LL);
      v9 = (UnityEngine_Component_o *)this->fields.itemIconSprite;
      if ( v9 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
        if ( gameObject )
        {
          v11 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive(gameObject, v11, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__UpdateUI(
        BoardOptionTextWithIconComponent_o *this,
        TerminalBoardOptionTextData_o *data,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1

  this->fields.data = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)data,
    *(System_String_array ***)&wholeWidth,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    sub_B170D4();
  BoardOptionTextWithIconComponent__SetItemIconAtlas(this, data->fields._ItemImageId_k__BackingField, v11);
  BoardOptionTextWithIconComponent__SetForwardText(this, data->fields._ForwardText_k__BackingField, v12);
  BoardOptionTextWithIconComponent__SetBehindText(this, data->fields._BehindText_k__BackingField, v13);
  BoardOptionTextWithIconComponent__SetCondensedScale(this, wholeWidth, v14);
  BoardOptionTextWithIconComponent__AdjustContentsAnchor(this, v15);
}


float __fastcall BoardOptionTextWithIconComponent__get_Alpha(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.alpha;
}


System_String_o *__fastcall BoardOptionTextWithIconComponent__get_behindLabelText(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *behindLabel; // x20
  struct UILabel_o *v5; // x8
  System_String_o **p_mText; // x8

  if ( (byte_40FB0D9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FB0D9 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v5 = this->fields.behindLabel;
    if ( !v5 )
      sub_B170D4();
    p_mText = &v5->fields.mText;
  }
  else
  {
    p_mText = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_mText;
}


System_String_o *__fastcall BoardOptionTextWithIconComponent__get_forwardLabelText(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *forwardLabel; // x20
  struct UILabel_o *v5; // x8
  System_String_o **p_mText; // x8

  if ( (byte_40FB0D8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FB0D8 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v5 = this->fields.forwardLabel;
    if ( !v5 )
      sub_B170D4();
    p_mText = &v5->fields.mText;
  }
  else
  {
    p_mText = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_mText;
}


float __fastcall BoardOptionTextWithIconComponent__get_iconSpaceWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x20
  bool v4; // w0
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v7; // x8

  if ( (byte_40FB0DE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB0DE = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Equality(itemIconSprite, 0LL, 0LL);
  result = 0.0;
  if ( !v4 )
  {
    data = this->fields.data;
    if ( data )
    {
      if ( data->fields._ItemImageId_k__BackingField >= 1 )
      {
        v7 = this->fields.itemIconSprite;
        if ( !v7 )
          sub_B170D4();
        return (float)(this->fields.itemIconPaddingLeft + v7->fields.mWidth + this->fields.itemIconPaddingRight);
      }
    }
  }
  return result;
}


void __fastcall BoardOptionTextWithIconComponent__set_Alpha(
        BoardOptionTextWithIconComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x20
  struct UILabel_o *v6; // x0
  UnityEngine_Object_o *behindLabel; // x20
  struct UILabel_o *v8; // x0
  UnityEngine_Object_o *itemIconSprite; // x20
  struct UISprite_o *v10; // x0

  if ( (byte_40FB0DA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB0DA = 1;
  }
  this->fields.alpha = value;
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v6 = this->fields.forwardLabel;
    if ( !v6 )
      goto LABEL_22;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      this->fields.alpha);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v8 = this->fields.behindLabel;
    if ( !v8 )
      goto LABEL_22;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))v8->klass->vtable._8_set_alpha.method)(
      v8,
      v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      this->fields.alpha);
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0LL, 0LL) )
  {
    v10 = this->fields.itemIconSprite;
    if ( v10 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))v10->klass->vtable._8_set_alpha.method)(
        v10,
        v10->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        this->fields.alpha);
      return;
    }
LABEL_22:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__set_LabelFontSize(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  UILabel_o *v6; // x0
  UnityEngine_Object_o *behindLabel; // x21
  UILabel_o *v8; // x0

  if ( (byte_40FB0DD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_40FB0DD = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v6 = this->fields.forwardLabel;
    if ( !v6 )
      goto LABEL_16;
    UILabel__set_fontSize(v6, value, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v8 = this->fields.behindLabel;
    if ( v8 )
    {
      UILabel__set_fontSize(v8, value, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__set_LabelGradientBottom(
        BoardOptionTextWithIconComponent_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *forwardLabel; // x20
  UILabel_o *v9; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UILabel_o *v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_40FB0DC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB0DC = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v9 = this->fields.forwardLabel;
    if ( !v9 )
      goto LABEL_16;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientBottom(v9, v12, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v11 = this->fields.behindLabel;
    if ( v11 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UILabel__set_gradientBottom(v11, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__set_LabelGradientTop(
        BoardOptionTextWithIconComponent_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *forwardLabel; // x20
  UILabel_o *v9; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UILabel_o *v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_40FB0DB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB0DB = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v9 = this->fields.forwardLabel;
    if ( !v9 )
      goto LABEL_16;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientTop(v9, v12, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v11 = this->fields.behindLabel;
    if ( v11 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UILabel__set_gradientTop(v11, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}