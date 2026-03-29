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
  const MethodInfo *v5; // x1
  struct TerminalBoardOptionTextData_o *data; // x8
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UILabel_o *v13; // x8
  char *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UILabel_o *v21; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  struct UnityEngine_Transform_o *target; // x1
  __int64 v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UILabel_o *v31; // x8
  struct UIRect_AnchorPoint_o *v32; // x8
  struct UnityEngine_Transform_o *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct UILabel_o *v40; // x8
  char *v41; // x0
  UnityEngine_Object_o *itemIconSprite; // x20
  __int64 v43; // x8
  int v44; // w9
  __int64 v45; // x8
  UnityEngine_Object_o *forwardLabel; // x20
  struct UILabel_o *v47; // x8
  struct UIRect_AnchorPoint_o *v48; // x20
  float iconSpaceWidth; // s0
  unsigned int v50; // w8

  if ( (byte_4D2D0D6 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D6 = 1;
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
          v13 = this->fields.behindLabel;
          if ( !v13 )
            goto LABEL_45;
          rightAnchor = v13->fields.rightAnchor;
          if ( !rightAnchor )
            goto LABEL_45;
          *((_QWORD *)rightAnchor + 2) = 0;
          v14 = (char *)rightAnchor + 16;
          *((_DWORD *)v14 + 3) = 38;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)v14, 0, v7, v8, v9, v10, v11, v12);
          v21 = this->fields.behindLabel;
          if ( !v21 )
            goto LABEL_45;
          rightAnchor = v21->fields.leftAnchor;
          if ( !rightAnchor )
            goto LABEL_45;
          *((_DWORD *)rightAnchor + 7) = this->fields._anchorOffset_k__BackingField + 25;
          topAnchor = v21->fields.topAnchor;
          if ( !topAnchor )
            goto LABEL_45;
          target = topAnchor->fields.target;
          *((_QWORD *)rightAnchor + 2) = target;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)((char *)rightAnchor + 16),
            (int32_t)target,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          rightAnchor = this->fields.behindLabel;
          if ( !rightAnchor )
            goto LABEL_45;
          v24 = *((_QWORD *)rightAnchor + 4);
          if ( !v24 )
            goto LABEL_45;
          *(_DWORD *)(v24 + 24) = 0;
          UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
          rightAnchor = this->fields.behindLabel;
          if ( !rightAnchor )
            goto LABEL_45;
LABEL_44:
          UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0);
          return;
        }
        UIWidget__set_pivot((UIWidget_o *)rightAnchor, 5, 0);
        v31 = this->fields.behindLabel;
        if ( v31 )
        {
          rightAnchor = v31->fields.rightAnchor;
          if ( rightAnchor )
          {
            *((_DWORD *)rightAnchor + 7) = -25 - this->fields._anchorOffset_k__BackingField;
            v32 = v31->fields.topAnchor;
            if ( v32 )
            {
              v33 = v32->fields.target;
              *((_QWORD *)rightAnchor + 2) = v33;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)((char *)rightAnchor + 16),
                (int32_t)v33,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
              v40 = this->fields.behindLabel;
              if ( v40 )
              {
                rightAnchor = v40->fields.leftAnchor;
                if ( rightAnchor )
                {
                  *((_QWORD *)rightAnchor + 2) = 0;
                  v41 = (char *)rightAnchor + 16;
                  *((_DWORD *)v41 + 3) = -38;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)v41, 0, v34, v35, v36, v37, v38, v39);
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
                        v43 = *((_QWORD *)rightAnchor + 5);
                        if ( !v43 )
                          goto LABEL_45;
                        v44 = -this->fields.itemIconPaddingLeft;
                        *(_DWORD *)(v43 + 28) = v44;
                        v45 = *((_QWORD *)rightAnchor + 4);
                        if ( !v45 )
                          goto LABEL_45;
                        *(_DWORD *)(v45 + 28) = v44 - *((_DWORD *)rightAnchor + 42);
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
                      v47 = this->fields.forwardLabel;
                      if ( v47 )
                      {
                        v48 = v47->fields.rightAnchor;
                        iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v5);
                        if ( v48 )
                        {
                          v50 = iconSpaceWidth == INFINITY ? 0x80000000 : (int)iconSpaceWidth;
                          v48->fields.absolute = -v50;
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
    sub_1C93D2C(rightAnchor, v5);
  }
}


int32_t BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  __int64 v4; // x1
  struct UILabel_o *v6; // x0
  float FontWidth; // s0

  if ( (byte_4D2D0D5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D5 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(behindLabel, 0, 0) )
    return 0;
  v6 = this->fields.behindLabel;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  FontWidth = WrapControlText__getFontWidth(v6, v6->fields.mText, v6->fields.mFontSize, 0);
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
    sub_1C93D2C(this, method);
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
    sub_1C93D2C(this, method);
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
  __int64 v6; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4D2D0D8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D8 = 1;
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
      sub_1C93D2C(IsNullOrEmpty, v6);
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
  __int64 v11; // x1
  float ForwardTextWidth; // s0
  int32_t v13; // w1
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v15; // x1
  UILabel_o *v16; // x21
  float v17; // s0
  const MethodInfo *v18; // x1
  float BehindTextWidth; // s0
  int32_t v20; // w1

  if ( (byte_4D2D0D9 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D9 = 1;
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
      v13 = 0x80000000;
    else
      v13 = (int)ForwardTextWidth;
    UILabel__SetCondensedScale(v7, v13, 0, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v16 = this->fields.behindLabel;
    v17 = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v15);
    BehindTextWidth = BoardOptionTextWithIconComponent__GetBehindTextWidth(this, (float)wholeWidth - v17, v18);
    if ( v16 )
    {
      if ( BehindTextWidth == INFINITY )
        v20 = 0x80000000;
      else
        v20 = (int)BehindTextWidth;
      UILabel__SetCondensedScale(v16, v20, 0, 0);
      return;
    }
LABEL_20:
    sub_1C93D2C(v10, v11);
  }
}


void BoardOptionTextWithIconComponent__SetForwardText(
        BoardOptionTextWithIconComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4D2D0D7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D7 = 1;
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
      sub_1C93D2C(IsNullOrEmpty, v6);
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
  __int64 v7; // x1
  UISprite_o *v8; // x21
  bool v9; // w1

  if ( (byte_4D2D0DA & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D0DA = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UISprite_o *)UnityEngine_Object__op_Equality(itemIconSprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v8 = this->fields.itemIconSprite;
    if ( itemImageId < 1 )
    {
      if ( v8 )
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
              v9 = 0;
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
      AtlasManager__SetItem(v8, itemImageId, 0);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          v9 = 1;
LABEL_17:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9, 0);
          return;
        }
      }
    }
    sub_1C93D2C(gameObject, v7);
  }
}


void BoardOptionTextWithIconComponent__UpdateUI(
        BoardOptionTextWithIconComponent_o *this,
        TerminalBoardOptionTextData_o *data,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct TerminalBoardOptionTextData_o **p_data; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x8
  System_String_o *v16; // x22
  struct UILabel_o *behindLabel; // x8
  System_String_o *mText; // x21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  struct UILabel_o *forwardLabel; // x8
  System_String_o *v22; // x1
  const MethodInfo *v23; // x2
  struct UILabel_o *v24; // x8
  System_String_o *v25; // x1
  const MethodInfo *v26; // x1

  this->fields.data = data;
  p_data = &this->fields.data;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.data,
    (int32_t)data,
    wholeWidth,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v15 = (__int64)*(p_data - 4);
  if ( v15 )
    v16 = *(System_String_o **)(v15 + 416);
  else
    v16 = 0;
  behindLabel = this->fields.behindLabel;
  if ( behindLabel )
  {
    mText = behindLabel->fields.mText;
    if ( data )
      goto LABEL_6;
LABEL_9:
    sub_1C93D2C(v12, v13);
  }
  mText = 0;
  if ( !data )
    goto LABEL_9;
LABEL_6:
  BoardOptionTextWithIconComponent__SetItemIconAtlas(this, data->fields._ItemImageId_k__BackingField, v14);
  BoardOptionTextWithIconComponent__SetForwardText(this, data->fields._ForwardText_k__BackingField, v19);
  BoardOptionTextWithIconComponent__SetBehindText(this, data->fields._BehindText_k__BackingField, v20);
  forwardLabel = this->fields.forwardLabel;
  if ( forwardLabel )
    v22 = forwardLabel->fields.mText;
  else
    v22 = 0;
  if ( System_String__op_Inequality(v16, v22, 0)
    || ((v24 = this->fields.behindLabel) == 0 ? (v25 = 0) : (v25 = v24->fields.mText),
        System_String__op_Inequality(mText, v25, 0)) )
  {
    BoardOptionTextWithIconComponent__SetCondensedScale(this, wholeWidth, v23);
  }
  BoardOptionTextWithIconComponent__AdjustContentsAnchor(this, v26);
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
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4D2D0CF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D0CF = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(behindLabel, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.behindLabel;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
    p_mText = &v6->fields.mText;
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
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4D2D0CE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D0CE = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(forwardLabel, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.forwardLabel;
    if ( !v6 )
      sub_1C93D2C(v4, v5);
    p_mText = &v6->fields.mText;
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
  __int64 v5; // x1
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v8; // x8

  if ( (byte_4D2D0D4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D4 = 1;
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
        v8 = this->fields.itemIconSprite;
        if ( !v8 )
          sub_1C93D2C(v4, v5);
        return (float)(this->fields.itemIconPaddingLeft + v8->fields.mWidth + this->fields.itemIconPaddingRight);
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
  __int64 v6; // x1
  void *v7; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20

  if ( (byte_4D2D0D0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D0 = 1;
  }
  this->fields.alpha = value;
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v7 = this->fields.forwardLabel;
    if ( !v7 )
      goto LABEL_19;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      this->fields.alpha);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v7 = this->fields.behindLabel;
    if ( !v7 )
      goto LABEL_19;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v7 + 440LL))(
      v7,
      *(_QWORD *)(*(_QWORD *)v7 + 448LL),
      this->fields.alpha);
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0, 0) )
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
LABEL_19:
    sub_1C93D2C(v7, v6);
  }
}


void BoardOptionTextWithIconComponent__set_LabelFontSize(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_4D2D0D3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D3 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v7 = this->fields.forwardLabel;
    if ( !v7 )
      goto LABEL_14;
    UILabel__set_fontSize(v7, value, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v7 = this->fields.behindLabel;
    if ( v7 )
    {
      UILabel__set_fontSize(v7, value, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(v7, v6);
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
  __int64 v9; // x1
  UILabel_o *v10; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4D2D0D2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D2 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v10 = this->fields.forwardLabel;
    if ( !v10 )
      goto LABEL_14;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientBottom(v10, v12, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v10 = this->fields.behindLabel;
    if ( v10 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UILabel__set_gradientBottom(v10, v13, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(v10, v9);
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
  __int64 v9; // x1
  UILabel_o *v10; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4D2D0D1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D0D1 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v10 = this->fields.forwardLabel;
    if ( !v10 )
      goto LABEL_14;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientTop(v10, v12, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v10 = this->fields.behindLabel;
    if ( v10 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UILabel__set_gradientTop(v10, v13, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(v10, v9);
  }
}


void BoardOptionTextWithIconComponent__set_anchorOffset(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._anchorOffset_k__BackingField = value;
}