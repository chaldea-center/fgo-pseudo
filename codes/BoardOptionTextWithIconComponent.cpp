void BoardOptionTextWithIconComponent___ctor(BoardOptionTextWithIconComponent_o *this, const MethodInfo *method)
{
  this->fields.alpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoardOptionTextWithIconComponent__AdjustContentsAnchor(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  void *rightAnchor; // x0
  struct TerminalBoardOptionTextData_o *data; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UILabel_o *v8; // x8
  char *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UILabel_o *v12; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  struct UnityEngine_Transform_o *target; // x1
  __int64 v15; // x8
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UILabel_o *v18; // x8
  struct UIRect_AnchorPoint_o *v19; // x8
  struct UnityEngine_Transform_o *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UILabel_o *v23; // x8
  char *v24; // x0
  UnityEngine_Object_o *itemIconSprite; // x20
  __int64 v26; // x8
  int v27; // w9
  __int64 v28; // x8
  UnityEngine_Object_o *forwardLabel; // x20
  const MethodInfo *v30; // x1
  struct UILabel_o *v31; // x8
  struct UIRect_AnchorPoint_o *v32; // x20
  float iconSpaceWidth; // s0
  unsigned int v34; // w8

  if ( (byte_4C3F844 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F844 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rightAnchor = (void *)UnityEngine_Object__op_Equality(behindLabel, 0, 0);
  if ( ((unsigned __int8)rightAnchor & 1) == 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      rightAnchor = this->fields.behindLabel;
      if ( rightAnchor )
      {
        if ( data->fields._Alignment_k__BackingField == 1 )
        {
          UIWidget__set_pivot((UIWidget_o *)rightAnchor, 3, 0);
          v8 = this->fields.behindLabel;
          if ( !v8 )
            goto LABEL_45;
          rightAnchor = v8->fields.rightAnchor;
          if ( !rightAnchor )
            goto LABEL_45;
          *((_QWORD *)rightAnchor + 2) = 0;
          v9 = (char *)rightAnchor + 16;
          *((_DWORD *)v9 + 3) = 38;
          sub_1C36FFC((CGThumbnailListItem_o *)v9, 0, v6, v7);
          v12 = this->fields.behindLabel;
          if ( !v12 )
            goto LABEL_45;
          rightAnchor = v12->fields.leftAnchor;
          if ( !rightAnchor )
            goto LABEL_45;
          *((_DWORD *)rightAnchor + 7) = this->fields._anchorOffset_k__BackingField + 25;
          topAnchor = v12->fields.topAnchor;
          if ( !topAnchor )
            goto LABEL_45;
          target = topAnchor->fields.target;
          *((_QWORD *)rightAnchor + 2) = target;
          sub_1C36FFC((CGThumbnailListItem_o *)((char *)rightAnchor + 16), (int32_t)target, v10, v11);
          rightAnchor = this->fields.behindLabel;
          if ( !rightAnchor )
            goto LABEL_45;
          v15 = *((_QWORD *)rightAnchor + 4);
          if ( !v15 )
            goto LABEL_45;
          *(_DWORD *)(v15 + 24) = 0;
          UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
          rightAnchor = this->fields.behindLabel;
          if ( !rightAnchor )
            goto LABEL_45;
LABEL_44:
          UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0);
          return;
        }
        UIWidget__set_pivot((UIWidget_o *)rightAnchor, 5, 0);
        v18 = this->fields.behindLabel;
        if ( v18 )
        {
          rightAnchor = v18->fields.rightAnchor;
          if ( rightAnchor )
          {
            *((_DWORD *)rightAnchor + 7) = -25 - this->fields._anchorOffset_k__BackingField;
            v19 = v18->fields.topAnchor;
            if ( v19 )
            {
              v20 = v19->fields.target;
              *((_QWORD *)rightAnchor + 2) = v20;
              sub_1C36FFC((CGThumbnailListItem_o *)((char *)rightAnchor + 16), (int32_t)v20, v16, v17);
              v23 = this->fields.behindLabel;
              if ( v23 )
              {
                rightAnchor = v23->fields.leftAnchor;
                if ( rightAnchor )
                {
                  *((_QWORD *)rightAnchor + 2) = 0;
                  v24 = (char *)rightAnchor + 16;
                  *((_DWORD *)v24 + 3) = -38;
                  sub_1C36FFC((CGThumbnailListItem_o *)v24, 0, v21, v22);
                  rightAnchor = this->fields.behindLabel;
                  if ( rightAnchor )
                  {
                    UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
                    rightAnchor = this->fields.behindLabel;
                    if ( rightAnchor )
                    {
                      UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0);
                      itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0, 0) )
                      {
                        rightAnchor = this->fields.itemIconSprite;
                        if ( !rightAnchor )
                          goto LABEL_45;
                        v26 = *((_QWORD *)rightAnchor + 5);
                        if ( !v26 )
                          goto LABEL_45;
                        v27 = -this->fields.itemIconPaddingLeft;
                        *(_DWORD *)(v26 + 28) = v27;
                        v28 = *((_QWORD *)rightAnchor + 4);
                        if ( !v28 )
                          goto LABEL_45;
                        *(_DWORD *)(v28 + 28) = v27 - *((_DWORD *)rightAnchor + 42);
                        UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
                        rightAnchor = this->fields.itemIconSprite;
                        if ( !rightAnchor )
                          goto LABEL_45;
                        UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0);
                      }
                      forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      rightAnchor = (void *)UnityEngine_Object__op_Inequality(forwardLabel, 0, 0);
                      if ( ((unsigned __int8)rightAnchor & 1) == 0 )
                        return;
                      v31 = this->fields.forwardLabel;
                      if ( v31 )
                      {
                        v32 = v31->fields.rightAnchor;
                        iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v30);
                        if ( v32 )
                        {
                          v34 = iconSpaceWidth == INFINITY ? 0x80000000 : (int)iconSpaceWidth;
                          v32->fields.absolute = -v34;
                          rightAnchor = this->fields.forwardLabel;
                          if ( rightAnchor )
                          {
                            UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
                            rightAnchor = this->fields.forwardLabel;
                            if ( rightAnchor )
                              goto LABEL_44;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_1C372B4(rightAnchor);
  }
}


int32_t BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  struct UILabel_o *v5; // x0
  float FontWidth; // s0

  if ( (byte_4C3F843 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F843 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(behindLabel, 0, 0) )
    return 0;
  v5 = this->fields.behindLabel;
  if ( !v5 )
    sub_1C372B4(0);
  FontWidth = WrapControlText__getFontWidth(v5, v5->fields.mText, v5->fields.mFontSize, 0);
  if ( FontWidth == INFINITY )
    return 0x80000000;
  else
    return (int)FontWidth;
}


float BoardOptionTextWithIconComponent__GetBehindTextWidth(
        BoardOptionTextWithIconComponent_o *this,
        float totalTextWidth,
        const MethodInfo *method)
{
  struct TerminalBoardOptionTextData_o *data; // x8
  struct System_String_o *BehindText_k__BackingField; // x9
  int stringLength; // w9
  struct System_String_o *ForwardText_k__BackingField; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  BehindText_k__BackingField = data->fields._BehindText_k__BackingField;
  if ( !BehindText_k__BackingField )
    goto LABEL_7;
  stringLength = BehindText_k__BackingField->fields._stringLength;
  if ( stringLength >= 1 )
  {
    ForwardText_k__BackingField = data->fields._ForwardText_k__BackingField;
    if ( ForwardText_k__BackingField )
      return fmaxf(
               (float)((float)stringLength * totalTextWidth)
             / (float)(ForwardText_k__BackingField->fields._stringLength + stringLength),
               0.0);
LABEL_7:
    sub_1C372B4(this);
  }
  return 0.0;
}


float BoardOptionTextWithIconComponent__GetForwardTextWidth(
        BoardOptionTextWithIconComponent_o *this,
        float totalTextWidth,
        const MethodInfo *method)
{
  struct TerminalBoardOptionTextData_o *data; // x8
  struct System_String_o *ForwardText_k__BackingField; // x9
  int stringLength; // w9
  struct System_String_o *BehindText_k__BackingField; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  ForwardText_k__BackingField = data->fields._ForwardText_k__BackingField;
  if ( !ForwardText_k__BackingField )
    goto LABEL_7;
  stringLength = ForwardText_k__BackingField->fields._stringLength;
  if ( stringLength >= 1 )
  {
    BehindText_k__BackingField = data->fields._BehindText_k__BackingField;
    if ( BehindText_k__BackingField )
      return fmaxf(
               (float)((float)stringLength * totalTextWidth)
             / (float)(BehindText_k__BackingField->fields._stringLength + stringLength),
               0.0);
LABEL_7:
    sub_1C372B4(this);
  }
  return 0.0;
}


bool BoardOptionTextWithIconComponent__IsTextEmpty(BoardOptionTextWithIconComponent_o *this, const MethodInfo *method)
{
  System_String_o *forwardLabelText; // x0
  const MethodInfo *v4; // x1
  System_String_o *behindLabelText; // x0

  forwardLabelText = BoardOptionTextWithIconComponent__get_forwardLabelText(this, method);
  if ( !System_String__IsNullOrEmpty(forwardLabelText, 0) )
    return 0;
  behindLabelText = BoardOptionTextWithIconComponent__get_behindLabelText(this, v4);
  return System_String__IsNullOrEmpty(behindLabelText, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionTextWithIconComponent__SetAnchorOffset(
        BoardOptionTextWithIconComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  this->fields._anchorOffset_k__BackingField = offset;
  BoardOptionTextWithIconComponent__AdjustContentsAnchor(this, *(const MethodInfo **)&offset);
}


void BoardOptionTextWithIconComponent__SetBehindText(
        BoardOptionTextWithIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x21
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4C3F846 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F846 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(behindLabel, 0, 0) )
  {
    IsNullOrEmpty = this->fields.behindLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0), (IsNullOrEmpty = this->fields.behindLabel) == 0)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0),
          !gameObject) )
    {
      sub_1C372B4(IsNullOrEmpty);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  }
}


void BoardOptionTextWithIconComponent__SetCondensedScale(
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
  float ForwardTextWidth; // s0
  int32_t v12; // w1
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v14; // x1
  UILabel_o *v15; // x21
  float v16; // s0
  const MethodInfo *v17; // x1
  float BehindTextWidth; // s0
  int32_t v19; // w1

  if ( (byte_4C3F847 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F847 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v7 = this->fields.forwardLabel;
    iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v6);
    ForwardTextWidth = BoardOptionTextWithIconComponent__GetForwardTextWidth(
                         this,
                         (float)wholeWidth - iconSpaceWidth,
                         v9);
    if ( !v7 )
      goto LABEL_20;
    if ( ForwardTextWidth == INFINITY )
      v12 = 0x80000000;
    else
      v12 = (int)ForwardTextWidth;
    UILabel__SetCondensedScale(v7, v12, 0, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v15 = this->fields.behindLabel;
    v16 = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v14);
    BehindTextWidth = BoardOptionTextWithIconComponent__GetBehindTextWidth(this, (float)wholeWidth - v16, v17);
    if ( v15 )
    {
      if ( BehindTextWidth == INFINITY )
        v19 = 0x80000000;
      else
        v19 = (int)BehindTextWidth;
      UILabel__SetCondensedScale(v15, v19, 0, 0);
      return;
    }
LABEL_20:
    sub_1C372B4(v10);
  }
}


void BoardOptionTextWithIconComponent__SetForwardText(
        BoardOptionTextWithIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4C3F845 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F845 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(forwardLabel, 0, 0) )
  {
    IsNullOrEmpty = this->fields.forwardLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0), (IsNullOrEmpty = this->fields.forwardLabel) == 0)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0),
          !gameObject) )
    {
      sub_1C372B4(IsNullOrEmpty);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  }
}


void BoardOptionTextWithIconComponent__SetItemIconAtlas(
        BoardOptionTextWithIconComponent_o *this,
        int32_t itemImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x21
  UISprite_o *gameObject; // x0
  UISprite_o *v7; // x21
  bool v8; // w1

  if ( (byte_4C3F848 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F848 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UISprite_o *)UnityEngine_Object__op_Equality(itemIconSprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v7 = this->fields.itemIconSprite;
    if ( itemImageId < 1 )
    {
      if ( v7 )
      {
        UISprite__set_atlas(this->fields.itemIconSprite, 0, 0);
        gameObject = this->fields.itemIconSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          gameObject = this->fields.itemIconSprite;
          if ( gameObject )
          {
            gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              v8 = 0;
              goto LABEL_17;
            }
          }
        }
      }
    }
    else
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetItem(v7, itemImageId, 0);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          v8 = 1;
LABEL_17:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v8, 0);
          return;
        }
      }
    }
    sub_1C372B4(gameObject);
  }
}


void BoardOptionTextWithIconComponent__UpdateUI(
        BoardOptionTextWithIconComponent_o *this,
        TerminalBoardOptionTextData_o *data,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  struct TerminalBoardOptionTextData_o **p_data; // x21
  __int64 v8; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x8
  System_String_o *v11; // x22
  struct UILabel_o *behindLabel; // x8
  System_String_o *mText; // x21
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  struct UILabel_o *forwardLabel; // x8
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2
  struct UILabel_o *v19; // x8
  System_String_o *v20; // x1
  const MethodInfo *v21; // x1

  this->fields.data = data;
  p_data = &this->fields.data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, wholeWidth, method);
  v10 = (__int64)*(p_data - 4);
  if ( v10 )
    v11 = *(System_String_o **)(v10 + 416);
  else
    v11 = 0;
  behindLabel = this->fields.behindLabel;
  if ( behindLabel )
  {
    mText = behindLabel->fields.mText;
    if ( data )
      goto LABEL_6;
LABEL_9:
    sub_1C372B4(v8);
  }
  mText = 0;
  if ( !data )
    goto LABEL_9;
LABEL_6:
  BoardOptionTextWithIconComponent__SetItemIconAtlas(this, data->fields._ItemImageId_k__BackingField, v9);
  BoardOptionTextWithIconComponent__SetForwardText(this, data->fields._ForwardText_k__BackingField, v14);
  BoardOptionTextWithIconComponent__SetBehindText(this, data->fields._BehindText_k__BackingField, v15);
  forwardLabel = this->fields.forwardLabel;
  if ( forwardLabel )
    v17 = forwardLabel->fields.mText;
  else
    v17 = 0;
  if ( System_String__op_Inequality(v11, v17, 0)
    || ((v19 = this->fields.behindLabel) == 0 ? (v20 = 0) : (v20 = v19->fields.mText),
        System_String__op_Inequality(mText, v20, 0)) )
  {
    BoardOptionTextWithIconComponent__SetCondensedScale(this, wholeWidth, v18);
  }
  BoardOptionTextWithIconComponent__AdjustContentsAnchor(this, v21);
}


float BoardOptionTextWithIconComponent__get_Alpha(BoardOptionTextWithIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.alpha;
}


int32_t BoardOptionTextWithIconComponent__get_anchorOffset(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._anchorOffset_k__BackingField;
}


System_String_o *BoardOptionTextWithIconComponent__get_behindLabelText(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  _BOOL8 v4; // x0
  struct UILabel_o *v5; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4C3F83D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F83D = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(behindLabel, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.behindLabel;
    if ( !v5 )
      sub_1C372B4(v4);
    p_mText = &v5->fields.mText;
  }
  else
  {
    p_mText = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_mText;
}


System_String_o *BoardOptionTextWithIconComponent__get_forwardLabelText(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x20
  _BOOL8 v4; // x0
  struct UILabel_o *v5; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4C3F83C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F83C = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(forwardLabel, 0, 0);
  if ( v4 )
  {
    v5 = this->fields.forwardLabel;
    if ( !v5 )
      sub_1C372B4(v4);
    p_mText = &v5->fields.mText;
  }
  else
  {
    p_mText = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *p_mText;
}


float BoardOptionTextWithIconComponent__get_iconSpaceWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x20
  _BOOL8 v4; // x0
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v7; // x8

  if ( (byte_4C3F842 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F842 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(itemIconSprite, 0, 0);
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
          sub_1C372B4(v4);
        return (float)(this->fields.itemIconPaddingLeft + v7->fields.mWidth + this->fields.itemIconPaddingRight);
      }
    }
  }
  return result;
}


void BoardOptionTextWithIconComponent__set_Alpha(
        BoardOptionTextWithIconComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x20
  void *v6; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20

  if ( (byte_4C3F83E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F83E = 1;
  }
  this->fields.alpha = value;
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v6 = this->fields.forwardLabel;
    if ( !v6 )
      goto LABEL_19;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v6 + 440LL))(
      v6,
      *(_QWORD *)(*(_QWORD *)v6 + 448LL),
      this->fields.alpha);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v6 = this->fields.behindLabel;
    if ( !v6 )
      goto LABEL_19;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v6 + 440LL))(
      v6,
      *(_QWORD *)(*(_QWORD *)v6 + 448LL),
      this->fields.alpha);
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0, 0) )
  {
    v6 = this->fields.itemIconSprite;
    if ( v6 )
    {
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v6 + 440LL))(
        v6,
        *(_QWORD *)(*(_QWORD *)v6 + 448LL),
        this->fields.alpha);
      return;
    }
LABEL_19:
    sub_1C372B4(v6);
  }
}


void BoardOptionTextWithIconComponent__set_LabelFontSize(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  UILabel_o *v6; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_4C3F841 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F841 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v6 = this->fields.forwardLabel;
    if ( !v6 )
      goto LABEL_14;
    UILabel__set_fontSize(v6, value, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v6 = this->fields.behindLabel;
    if ( v6 )
    {
      UILabel__set_fontSize(v6, value, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v6);
  }
}


void BoardOptionTextWithIconComponent__set_LabelGradientBottom(
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
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4C3F840 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F840 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v9 = this->fields.forwardLabel;
    if ( !v9 )
      goto LABEL_14;
    v11.fields.r = r;
    v11.fields.g = g;
    v11.fields.b = b;
    v11.fields.a = a;
    UILabel__set_gradientBottom(v9, v11, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v9 = this->fields.behindLabel;
    if ( v9 )
    {
      v12.fields.b = b;
      v12.fields.a = a;
      v12.fields.r = r;
      v12.fields.g = g;
      UILabel__set_gradientBottom(v9, v12, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v9);
  }
}


void BoardOptionTextWithIconComponent__set_LabelGradientTop(
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
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4C3F83F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F83F = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v9 = this->fields.forwardLabel;
    if ( !v9 )
      goto LABEL_14;
    v11.fields.r = r;
    v11.fields.g = g;
    v11.fields.b = b;
    v11.fields.a = a;
    UILabel__set_gradientTop(v9, v11, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v9 = this->fields.behindLabel;
    if ( v9 )
    {
      v12.fields.b = b;
      v12.fields.a = a;
      v12.fields.r = r;
      v12.fields.g = g;
      UILabel__set_gradientTop(v9, v12, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(v9);
  }
}


void BoardOptionTextWithIconComponent__set_anchorOffset(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._anchorOffset_k__BackingField = value;
}