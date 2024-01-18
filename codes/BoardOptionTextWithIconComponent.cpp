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
  UIRect_o *v5; // x0
  const MethodInfo *v6; // x1
  struct UISprite_o *v7; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  struct UISprite_o *v9; // x8
  struct UIRect_AnchorPoint_o *v10; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x10
  UnityEngine_Object_o *forwardLabel; // x20
  struct UILabel_o *v13; // x8
  struct UIRect_AnchorPoint_o *v14; // x20
  float iconSpaceWidth; // s0
  double v16; // d0

  if ( (byte_4187DB1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187DB1 = 1;
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
    v5 = (UIRect_o *)UnityEngine_Object__op_Inequality(itemIconSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v7 = this->fields.itemIconSprite;
      if ( !v7 )
        goto LABEL_32;
      rightAnchor = v7->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_32;
      rightAnchor->fields.absolute = -this->fields.itemIconPaddingLeft;
      v9 = this->fields.itemIconSprite;
      if ( !v9 )
        goto LABEL_32;
      v10 = v9->fields.rightAnchor;
      if ( !v10 )
        goto LABEL_32;
      leftAnchor = v9->fields.leftAnchor;
      if ( !leftAnchor )
        goto LABEL_32;
      leftAnchor->fields.absolute = v10->fields.absolute - v9->fields.mWidth;
      v5 = (UIRect_o *)this->fields.itemIconSprite;
      if ( !v5 )
        goto LABEL_32;
      UIRect__ResetAnchors(v5, 0LL);
      v5 = (UIRect_o *)this->fields.itemIconSprite;
      if ( !v5 )
        goto LABEL_32;
      UIRect__UpdateAnchors(v5, 0LL);
    }
    forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v5 = (UIRect_o *)UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v13 = this->fields.forwardLabel;
      if ( v13 )
      {
        v14 = v13->fields.rightAnchor;
        iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v6);
        if ( v14 )
        {
          v16 = iconSpaceWidth == INFINITY ? -iconSpaceWidth : iconSpaceWidth;
          v14->fields.absolute = -(int)v16;
          v5 = (UIRect_o *)this->fields.forwardLabel;
          if ( v5 )
          {
            UIRect__ResetAnchors(v5, 0LL);
            v5 = (UIRect_o *)this->fields.forwardLabel;
            if ( v5 )
            {
              UIRect__UpdateAnchors(v5, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B2C434(v5, v6);
    }
  }
}


int32_t __fastcall BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  __int64 v4; // x1
  struct UILabel_o *v6; // x0
  float FontWidth; // s0

  if ( (byte_4187DB0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187DB0 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
    return 0;
  v6 = this->fields.behindLabel;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  FontWidth = WrapControlText__getFontWidth(v6, v6->fields.mText, v6->fields.mFontSize, 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
  __int64 v6; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4187DB3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, text);
    byte_4187DB3 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = this->fields.behindLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0LL), (IsNullOrEmpty = this->fields.behindLabel) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0LL),
          !gameObject) )
    {
      sub_B2C434(IsNullOrEmpty, v6);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0LL);
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
  __int64 v10; // x0
  __int64 v11; // x1
  float ForwardTextWidth; // s0
  double v13; // d0
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v15; // x1
  UILabel_o *v16; // x21
  float v17; // s0
  const MethodInfo *v18; // x1
  float BehindTextWidth; // s0
  double v20; // d0

  if ( (byte_4187DB4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&wholeWidth);
    byte_4187DB4 = 1;
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
      v13 = -ForwardTextWidth;
    else
      v13 = ForwardTextWidth;
    UILabel__SetCondensedScale(v7, (int)v13, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v16 = this->fields.behindLabel;
    v17 = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v15);
    BehindTextWidth = BoardOptionTextWithIconComponent__GetBehindTextWidth(this, (float)wholeWidth - v17, v18);
    if ( v16 )
    {
      if ( BehindTextWidth == INFINITY )
        v20 = -BehindTextWidth;
      else
        v20 = BehindTextWidth;
      UILabel__SetCondensedScale(v16, (int)v20, 0LL);
      return;
    }
LABEL_22:
    sub_B2C434(v10, v11);
  }
}


void __fastcall BoardOptionTextWithIconComponent__SetForwardText(
        BoardOptionTextWithIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4187DB2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, text);
    byte_4187DB2 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(forwardLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = this->fields.forwardLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0LL), (IsNullOrEmpty = this->fields.forwardLabel) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0LL),
          !gameObject) )
    {
      sub_B2C434(IsNullOrEmpty, v6);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0LL);
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
  UISprite_o *gameObject; // x0
  __int64 v9; // x1
  UISprite_o *v10; // x21
  bool v11; // w1

  if ( (byte_4187DB5 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&itemImageId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4187DB5 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UISprite_o *)UnityEngine_Object__op_Equality(itemIconSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v10 = this->fields.itemIconSprite;
    if ( itemImageId < 1 )
    {
      if ( v10 )
      {
        UISprite__set_atlas(this->fields.itemIconSprite, 0LL, 0LL);
        gameObject = this->fields.itemIconSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          gameObject = this->fields.itemIconSprite;
          if ( gameObject )
          {
            gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
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
      AtlasManager__SetItem(v10, itemImageId, 0LL);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v11 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0LL);
          return;
        }
      }
    }
    sub_B2C434(gameObject, v9);
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
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1

  this->fields.data = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)data,
    *(System_String_array ***)&wholeWidth,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    sub_B2C434(v11, v12);
  BoardOptionTextWithIconComponent__SetItemIconAtlas(this, data->fields._ItemImageId_k__BackingField, v13);
  BoardOptionTextWithIconComponent__SetForwardText(this, data->fields._ForwardText_k__BackingField, v14);
  BoardOptionTextWithIconComponent__SetBehindText(this, data->fields._BehindText_k__BackingField, v15);
  BoardOptionTextWithIconComponent__SetCondensedScale(this, wholeWidth, v16);
  BoardOptionTextWithIconComponent__AdjustContentsAnchor(this, v17);
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
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4187DAA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4187DAA = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.behindLabel;
    if ( !v7 )
      sub_B2C434(v5, v6);
    p_mText = &v7->fields.mText;
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
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4187DA9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_4187DA9 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.forwardLabel;
    if ( !v7 )
      sub_B2C434(v5, v6);
    p_mText = &v7->fields.mText;
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
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v8; // x8

  if ( (byte_4187DAF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187DAF = 1;
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
        v8 = this->fields.itemIconSprite;
        if ( !v8 )
          sub_B2C434(v4, v5);
        return (float)(this->fields.itemIconPaddingLeft + v8->fields.mWidth + this->fields.itemIconPaddingRight);
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
  __int64 v6; // x1
  void *v7; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20

  if ( (byte_4187DAB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187DAB = 1;
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
    v7 = this->fields.forwardLabel;
    if ( !v7 )
      goto LABEL_22;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
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
    v7 = this->fields.behindLabel;
    if ( !v7 )
      goto LABEL_22;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
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
    v7 = this->fields.itemIconSprite;
    if ( v7 )
    {
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
        v7,
        *(_QWORD *)(*(_QWORD *)v7 + 448LL),
        this->fields.alpha);
      return;
    }
LABEL_22:
    sub_B2C434(v7, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__set_LabelFontSize(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_4187DAE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_4187DAE = 1;
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
    if ( !v7 )
      goto LABEL_16;
    UILabel__set_fontSize(v7, value, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v7 = this->fields.behindLabel;
    if ( v7 )
    {
      UILabel__set_fontSize(v7, value, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(v7, v6);
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
  __int64 v9; // x1
  UILabel_o *v10; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4187DAD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187DAD = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v10 = this->fields.forwardLabel;
    if ( !v10 )
      goto LABEL_16;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientBottom(v10, v12, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v10 = this->fields.behindLabel;
    if ( v10 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UILabel__set_gradientBottom(v10, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(v10, v9);
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
  __int64 v9; // x1
  UILabel_o *v10; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4187DAC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187DAC = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v10 = this->fields.forwardLabel;
    if ( !v10 )
      goto LABEL_16;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientTop(v10, v12, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v10 = this->fields.behindLabel;
    if ( v10 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UILabel__set_gradientTop(v10, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(v10, v9);
  }
}