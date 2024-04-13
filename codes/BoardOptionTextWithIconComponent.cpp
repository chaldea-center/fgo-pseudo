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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20
  UIRect_o *v7; // x0
  const MethodInfo *v8; // x1
  struct UISprite_o *v9; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  struct UISprite_o *v11; // x8
  struct UIRect_AnchorPoint_o *v12; // x9
  struct UIRect_AnchorPoint_o *leftAnchor; // x10
  UnityEngine_Object_o *forwardLabel; // x20
  struct UILabel_o *v15; // x8
  struct UIRect_AnchorPoint_o *v16; // x20
  float iconSpaceWidth; // s0
  double v18; // d0

  if ( (byte_42E864B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E864B = 1;
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
    v7 = (UIRect_o *)UnityEngine_Object__op_Inequality(itemIconSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v9 = this->fields.itemIconSprite;
      if ( !v9 )
        goto LABEL_32;
      rightAnchor = v9->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_32;
      rightAnchor->fields.absolute = -this->fields.itemIconPaddingLeft;
      v11 = this->fields.itemIconSprite;
      if ( !v11 )
        goto LABEL_32;
      v12 = v11->fields.rightAnchor;
      if ( !v12 )
        goto LABEL_32;
      leftAnchor = v11->fields.leftAnchor;
      if ( !leftAnchor )
        goto LABEL_32;
      leftAnchor->fields.absolute = v12->fields.absolute - v11->fields.mWidth;
      v7 = (UIRect_o *)this->fields.itemIconSprite;
      if ( !v7 )
        goto LABEL_32;
      UIRect__ResetAnchors(v7, 0LL);
      v7 = (UIRect_o *)this->fields.itemIconSprite;
      if ( !v7 )
        goto LABEL_32;
      UIRect__UpdateAnchors(v7, 0LL);
    }
    forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UIRect_o *)UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v15 = this->fields.forwardLabel;
      if ( v15 )
      {
        v16 = v15->fields.rightAnchor;
        iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v8);
        if ( v16 )
        {
          v18 = iconSpaceWidth == INFINITY ? -iconSpaceWidth : iconSpaceWidth;
          v16->fields.absolute = -(int)v18;
          v7 = (UIRect_o *)this->fields.forwardLabel;
          if ( v7 )
          {
            UIRect__ResetAnchors(v7, 0LL);
            v7 = (UIRect_o *)this->fields.forwardLabel;
            if ( v7 )
            {
              UIRect__UpdateAnchors(v7, 0LL);
              return;
            }
          }
        }
      }
LABEL_32:
      sub_B5D69C(v7, v8);
    }
  }
}


int32_t __fastcall BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *behindLabel; // x20
  __int64 v6; // x1
  struct UILabel_o *v8; // x0
  float FontWidth; // s0

  if ( (byte_42E864A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E864A = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
    return 0;
  v8 = this->fields.behindLabel;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  FontWidth = WrapControlText__getFontWidth(v8, v8->fields.mText, v8->fields.mFontSize, 0LL);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  UnityEngine_Object_o *behindLabel; // x21
  __int64 v7; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_42E864D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)text, (_DWORD)method, v3);
    byte_42E864D = 1;
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
      sub_B5D69C(IsNullOrEmpty, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0LL);
  }
}


void __fastcall BoardOptionTextWithIconComponent__SetCondensedScale(
        BoardOptionTextWithIconComponent_o *this,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *forwardLabel; // x21
  const MethodInfo *v7; // x1
  UILabel_o *v8; // x21
  float iconSpaceWidth; // s0
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  float ForwardTextWidth; // s0
  double v14; // d0
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v16; // x1
  UILabel_o *v17; // x21
  float v18; // s0
  const MethodInfo *v19; // x1
  float BehindTextWidth; // s0
  double v21; // d0

  if ( (byte_42E864E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, wholeWidth, (_DWORD)method, v3);
    byte_42E864E = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v8 = this->fields.forwardLabel;
    iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v7);
    ForwardTextWidth = BoardOptionTextWithIconComponent__GetForwardTextWidth(
                         this,
                         (float)wholeWidth - iconSpaceWidth,
                         v10);
    if ( !v8 )
      goto LABEL_22;
    if ( ForwardTextWidth == INFINITY )
      v14 = -ForwardTextWidth;
    else
      v14 = ForwardTextWidth;
    UILabel__SetCondensedScale(v8, (int)v14, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v17 = this->fields.behindLabel;
    v18 = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v16);
    BehindTextWidth = BoardOptionTextWithIconComponent__GetBehindTextWidth(this, (float)wholeWidth - v18, v19);
    if ( v17 )
    {
      if ( BehindTextWidth == INFINITY )
        v21 = -BehindTextWidth;
      else
        v21 = BehindTextWidth;
      UILabel__SetCondensedScale(v17, (int)v21, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(v11, v12);
  }
}


void __fastcall BoardOptionTextWithIconComponent__SetForwardText(
        BoardOptionTextWithIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v7; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_42E864C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)text, (_DWORD)method, v3);
    byte_42E864C = 1;
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
      sub_B5D69C(IsNullOrEmpty, v7);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0LL);
  }
}


void __fastcall BoardOptionTextWithIconComponent__SetItemIconAtlas(
        BoardOptionTextWithIconComponent_o *this,
        int32_t itemImageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *itemIconSprite; // x21
  UISprite_o *gameObject; // x0
  __int64 v14; // x1
  UISprite_o *v15; // x21
  bool v16; // w1

  if ( (byte_42E864F & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, itemImageId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E864F = 1;
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
    v15 = this->fields.itemIconSprite;
    if ( itemImageId < 1 )
    {
      if ( v15 )
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
              v16 = 0;
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
      AtlasManager__SetItem(v15, itemImageId, 0LL);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v16 = 1;
LABEL_19:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(gameObject, v14);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)data,
    *(System_String_array ***)&wholeWidth,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    sub_B5D69C(v11, v12);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *behindLabel; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct UILabel_o *v11; // x8
  System_String_o **p_mText; // x8

  if ( (byte_42E8644 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E8644 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL);
  if ( v9 )
  {
    v11 = this->fields.behindLabel;
    if ( !v11 )
      sub_B5D69C(v9, v10);
    p_mText = &v11->fields.mText;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *forwardLabel; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  struct UILabel_o *v11; // x8
  System_String_o **p_mText; // x8

  if ( (byte_42E8643 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E8643 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL);
  if ( v9 )
  {
    v11 = this->fields.forwardLabel;
    if ( !v11 )
      sub_B5D69C(v9, v10);
    p_mText = &v11->fields.mText;
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *itemIconSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v10; // x8

  if ( (byte_42E8649 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8649 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(itemIconSprite, 0LL, 0LL);
  result = 0.0;
  if ( !v6 )
  {
    data = this->fields.data;
    if ( data )
    {
      if ( data->fields._ItemImageId_k__BackingField >= 1 )
      {
        v10 = this->fields.itemIconSprite;
        if ( !v10 )
          sub_B5D69C(v6, v7);
        return (float)(this->fields.itemIconPaddingLeft + v10->fields.mWidth + this->fields.itemIconPaddingRight);
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
  int v3; // w2
  __int64 v4; // x3
  UnityEngine_Object_o *forwardLabel; // x20
  __int64 v8; // x1
  void *v9; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20

  if ( (byte_42E8645 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8645 = 1;
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
    v9 = this->fields.forwardLabel;
    if ( !v9 )
      goto LABEL_22;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
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
    v9 = this->fields.behindLabel;
    if ( !v9 )
      goto LABEL_22;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v9 + 440LL))(
      v9,
      *(_QWORD *)(*(_QWORD *)v9 + 448LL),
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
    v9 = this->fields.itemIconSprite;
    if ( v9 )
    {
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v9 + 440LL))(
        v9,
        *(_QWORD *)(*(_QWORD *)v9 + 448LL),
        this->fields.alpha);
      return;
    }
LABEL_22:
    sub_B5D69C(v9, v8);
  }
}


void __fastcall BoardOptionTextWithIconComponent__set_LabelFontSize(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v7; // x1
  UILabel_o *v8; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_42E8648 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42E8648 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v8 = this->fields.forwardLabel;
    if ( !v8 )
      goto LABEL_16;
    UILabel__set_fontSize(v8, value, 0LL);
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
    sub_B5D69C(v8, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__set_LabelGradientBottom(
        BoardOptionTextWithIconComponent_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *forwardLabel; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_42E8647 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8647 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v12 = this->fields.forwardLabel;
    if ( !v12 )
      goto LABEL_16;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UILabel__set_gradientBottom(v12, v14, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v12 = this->fields.behindLabel;
    if ( v12 )
    {
      v15.fields.b = b;
      v15.fields.a = a;
      v15.fields.r = r;
      v15.fields.g = g;
      UILabel__set_gradientBottom(v12, v15, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v12, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__set_LabelGradientTop(
        BoardOptionTextWithIconComponent_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *forwardLabel; // x20
  __int64 v11; // x1
  UILabel_o *v12; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_42E8646 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8646 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v12 = this->fields.forwardLabel;
    if ( !v12 )
      goto LABEL_16;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UILabel__set_gradientTop(v12, v14, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v12 = this->fields.behindLabel;
    if ( v12 )
    {
      v15.fields.b = b;
      v15.fields.a = a;
      v15.fields.r = r;
      v15.fields.g = g;
      UILabel__set_gradientTop(v12, v15, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(v12, v11);
  }
}