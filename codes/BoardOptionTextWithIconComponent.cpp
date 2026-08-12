void BoardOptionTextWithIconComponent___ctor(BoardOptionTextWithIconComponent_o *this, const MethodInfo *method)
{
  this->fields.alpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoardOptionTextWithIconComponent__AdjustContentsAnchor(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *behindLabel; // x20
  void *rightAnchor; // x0
  const MethodInfo *v6; // x1
  struct TerminalBoardOptionTextData_o *data; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UILabel_o *v14; // x8
  char *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UILabel_o *v22; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  struct UnityEngine_Transform_o *target; // x1
  __int64 v25; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct UILabel_o *v32; // x8
  struct UIRect_AnchorPoint_o *v33; // x8
  struct UnityEngine_Transform_o *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct UILabel_o *v41; // x8
  char *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *itemIconSprite; // x20
  __int64 v46; // x2
  __int64 v47; // x8
  __int64 v48; // x9
  int v49; // w10
  UnityEngine_Object_o *forwardLabel; // x20
  struct UILabel_o *v51; // x8
  struct UIRect_AnchorPoint_o *v52; // x20
  float iconSpaceWidth; // s0
  unsigned int v54; // w8

  if ( (byte_596CE5A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE5A = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  rightAnchor = (void *)UnityEngine_Object__op_Equality(behindLabel, 0, 0);
  if ( ((unsigned __int8)rightAnchor & 1) == 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_46;
    rightAnchor = this->fields.behindLabel;
    if ( data->fields._Alignment_k__BackingField == 1 )
    {
      if ( !rightAnchor )
        goto LABEL_46;
      UIWidget__set_pivot((UIWidget_o *)rightAnchor, 3, 0);
      v14 = this->fields.behindLabel;
      if ( !v14 )
        goto LABEL_46;
      rightAnchor = v14->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_46;
      *((_QWORD *)rightAnchor + 2) = 0;
      v15 = (char *)rightAnchor + 16;
      *((_DWORD *)v15 + 3) = 38;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v15, 0, v8, v9, v10, v11, v12, v13);
      v22 = this->fields.behindLabel;
      if ( !v22 )
        goto LABEL_46;
      rightAnchor = v22->fields.leftAnchor;
      if ( !rightAnchor )
        goto LABEL_46;
      topAnchor = v22->fields.topAnchor;
      *((_DWORD *)rightAnchor + 7) = this->fields._anchorOffset_k__BackingField + 25;
      if ( !topAnchor )
        goto LABEL_46;
      target = topAnchor->fields.target;
      *((_QWORD *)rightAnchor + 2) = target;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)rightAnchor + 16),
        (int32_t)target,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      rightAnchor = this->fields.behindLabel;
      if ( !rightAnchor )
        goto LABEL_46;
      v25 = *((_QWORD *)rightAnchor + 4);
      if ( !v25 )
        goto LABEL_46;
      *(_DWORD *)(v25 + 24) = 0;
      UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
      rightAnchor = this->fields.behindLabel;
      if ( !rightAnchor )
        goto LABEL_46;
LABEL_45:
      UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0);
      return;
    }
    if ( rightAnchor )
    {
      UIWidget__set_pivot((UIWidget_o *)rightAnchor, 5, 0);
      v32 = this->fields.behindLabel;
      if ( v32 )
      {
        rightAnchor = v32->fields.rightAnchor;
        if ( rightAnchor )
        {
          v33 = v32->fields.topAnchor;
          *((_DWORD *)rightAnchor + 7) = -25 - this->fields._anchorOffset_k__BackingField;
          if ( v33 )
          {
            v34 = v33->fields.target;
            *((_QWORD *)rightAnchor + 2) = v34;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)rightAnchor + 16),
              (int32_t)v34,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            v41 = this->fields.behindLabel;
            if ( v41 )
            {
              rightAnchor = v41->fields.leftAnchor;
              if ( rightAnchor )
              {
                *((_QWORD *)rightAnchor + 2) = 0;
                v42 = (char *)rightAnchor + 16;
                *((_DWORD *)v42 + 3) = -38;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)v42, 0, v35, v36, v37, v38, v39, v40);
                rightAnchor = this->fields.behindLabel;
                if ( rightAnchor )
                {
                  UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
                  rightAnchor = this->fields.behindLabel;
                  if ( rightAnchor )
                  {
                    UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0);
                    itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
                    if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0, 0) )
                    {
                      rightAnchor = this->fields.itemIconSprite;
                      if ( !rightAnchor )
                        goto LABEL_46;
                      v47 = *((_QWORD *)rightAnchor + 5);
                      if ( !v47 )
                        goto LABEL_46;
                      v48 = *((_QWORD *)rightAnchor + 4);
                      v49 = -this->fields.itemIconPaddingLeft;
                      *(_DWORD *)(v47 + 28) = v49;
                      if ( !v48 )
                        goto LABEL_46;
                      *(_DWORD *)(v48 + 28) = v49 - *((_DWORD *)rightAnchor + 42);
                      UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
                      rightAnchor = this->fields.itemIconSprite;
                      if ( !rightAnchor )
                        goto LABEL_46;
                      UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0);
                    }
                    forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v46);
                    rightAnchor = (void *)UnityEngine_Object__op_Inequality(forwardLabel, 0, 0);
                    if ( ((unsigned __int8)rightAnchor & 1) == 0 )
                      return;
                    v51 = this->fields.forwardLabel;
                    if ( v51 )
                    {
                      v52 = v51->fields.rightAnchor;
                      iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v6);
                      if ( v52 )
                      {
                        rightAnchor = this->fields.forwardLabel;
                        v54 = iconSpaceWidth == INFINITY ? 0x80000000 : (int)iconSpaceWidth;
                        v52->fields.absolute = -v54;
                        if ( rightAnchor )
                        {
                          UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0);
                          rightAnchor = this->fields.forwardLabel;
                          if ( rightAnchor )
                            goto LABEL_45;
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
LABEL_46:
    sub_2213CDC(rightAnchor, v6);
  }
}


int32_t BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
        BoardOptionTextWithIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *behindLabel; // x20
  __int64 v5; // x1
  struct UILabel_o *v7; // x0
  float FontWidth; // s0

  if ( (byte_596CE59 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE59 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(behindLabel, 0, 0) )
    return 0;
  v7 = this->fields.behindLabel;
  if ( !v7 )
    sub_2213CDC(0, v5);
  FontWidth = WrapControlText__getFontWidth(v7, v7->fields.mText, v7->fields.mFontSize, 0);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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

  if ( (byte_596CE5C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE5C = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text, method);
  if ( !UnityEngine_Object__op_Equality(behindLabel, 0, 0) )
  {
    IsNullOrEmpty = this->fields.behindLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0), (IsNullOrEmpty = this->fields.behindLabel) == 0)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0),
          !gameObject) )
    {
      sub_2213CDC(IsNullOrEmpty, v6);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionTextWithIconComponent__SetCondensedScale(
        BoardOptionTextWithIconComponent_o *this,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  UILabel_o *v8; // x21
  float iconSpaceWidth; // s0
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  float ForwardTextWidth; // s0
  int32_t v14; // w1
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v16; // x1
  UILabel_o *v17; // x21
  float v18; // s0
  const MethodInfo *v19; // x1
  float BehindTextWidth; // s0
  int32_t v21; // w1

  if ( (byte_596CE5D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE5D = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&wholeWidth, method);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v8 = this->fields.forwardLabel;
    iconSpaceWidth = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v6);
    ForwardTextWidth = BoardOptionTextWithIconComponent__GetForwardTextWidth(
                         this,
                         (float)wholeWidth - iconSpaceWidth,
                         v10);
    if ( !v8 )
      goto LABEL_20;
    if ( ForwardTextWidth == INFINITY )
      v14 = 0x80000000;
    else
      v14 = (int)ForwardTextWidth;
    UILabel__SetCondensedScale(v8, v14, 0, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v17 = this->fields.behindLabel;
    v18 = BoardOptionTextWithIconComponent__get_iconSpaceWidth(this, v16);
    BehindTextWidth = BoardOptionTextWithIconComponent__GetBehindTextWidth(this, (float)wholeWidth - v18, v19);
    if ( v17 )
    {
      if ( BehindTextWidth == INFINITY )
        v21 = 0x80000000;
      else
        v21 = (int)BehindTextWidth;
      UILabel__SetCondensedScale(v17, v21, 0, 0);
      return;
    }
LABEL_20:
    sub_2213CDC(v11, v12);
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

  if ( (byte_596CE5B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE5B = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text, method);
  if ( !UnityEngine_Object__op_Equality(forwardLabel, 0, 0) )
  {
    IsNullOrEmpty = this->fields.forwardLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0), (IsNullOrEmpty = this->fields.forwardLabel) == 0)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0),
          !gameObject) )
    {
      sub_2213CDC(IsNullOrEmpty, v6);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionTextWithIconComponent__SetItemIconAtlas(
        BoardOptionTextWithIconComponent_o *this,
        int32_t itemImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x21
  UISprite_o *gameObject; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UISprite_o *v9; // x21
  bool v10; // w1

  if ( (byte_596CE5E & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CE5E = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&itemImageId, method);
  gameObject = (UISprite_o *)UnityEngine_Object__op_Equality(itemIconSprite, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    v9 = this->fields.itemIconSprite;
    if ( itemImageId < 1 )
    {
      if ( v9 )
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
              v10 = 0;
              goto LABEL_17;
            }
          }
        }
      }
    }
    else
    {
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v8);
      AtlasManager__SetItem(v9, itemImageId, 0);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          v10 = 1;
LABEL_17:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0);
          return;
        }
      }
    }
    sub_2213CDC(gameObject, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionTextWithIconComponent__UpdateUI(
        BoardOptionTextWithIconComponent_o *this,
        TerminalBoardOptionTextData_o *data,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)data,
    *(System_String_o **)&wholeWidth,
    (System_String_o *)method,
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
    sub_2213CDC(v12, v13);
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
  __int64 v2; // x2
  UnityEngine_Object_o *behindLabel; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  System_String_o **p_mText; // x8

  if ( (byte_596CE53 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CE53 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(behindLabel, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.behindLabel;
    if ( !v7 )
      sub_2213CDC(v5, v6);
    p_mText = &v7->fields.mText;
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
  __int64 v2; // x2
  UnityEngine_Object_o *forwardLabel; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  System_String_o **p_mText; // x8

  if ( (byte_596CE52 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CE52 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(forwardLabel, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.forwardLabel;
    if ( !v7 )
      sub_2213CDC(v5, v6);
    p_mText = &v7->fields.mText;
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
  __int64 v2; // x2
  UnityEngine_Object_o *itemIconSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v9; // x8

  if ( (byte_596CE58 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE58 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(itemIconSprite, 0, 0);
  result = 0.0;
  if ( !v5 )
  {
    data = this->fields.data;
    if ( data )
    {
      if ( data->fields._ItemImageId_k__BackingField >= 1 )
      {
        v9 = this->fields.itemIconSprite;
        if ( !v9 )
          sub_2213CDC(v5, v6);
        return (float)(this->fields.itemIconPaddingLeft + this->fields.itemIconPaddingRight + v9->fields.mWidth);
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
  __int64 v3; // x2
  UnityEngine_Object_c *v6; // x0
  UnityEngine_Object_o *forwardLabel; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  void *v10; // x0
  UnityEngine_Object_o *behindLabel; // x20
  __int64 v12; // x2
  UnityEngine_Object_o *itemIconSprite; // x20

  if ( (byte_596CE54 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE54 = 1;
  }
  v6 = UnityEngine_Object_TypeInfo;
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  this->fields.alpha = value;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, method, v3);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v10 = this->fields.forwardLabel;
    if ( !v10 )
      goto LABEL_19;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v10 + 440LL))(
      v10,
      *(_QWORD *)(*(_QWORD *)v10 + 448LL),
      this->fields.alpha);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v10 = this->fields.behindLabel;
    if ( !v10 )
      goto LABEL_19;
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v10 + 440LL))(
      v10,
      *(_QWORD *)(*(_QWORD *)v10 + 448LL),
      this->fields.alpha);
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v12);
  if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0, 0) )
  {
    v10 = this->fields.itemIconSprite;
    if ( v10 )
    {
      (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)v10 + 440LL))(
        v10,
        *(_QWORD *)(*(_QWORD *)v10 + 448LL),
        this->fields.alpha);
      return;
    }
LABEL_19:
    sub_2213CDC(v10, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoardOptionTextWithIconComponent__set_LabelFontSize(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *v8; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_596CE57 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE57 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value, method);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v8 = this->fields.forwardLabel;
    if ( !v8 )
      goto LABEL_14;
    UILabel__set_fontSize(v8, value, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v8 = this->fields.behindLabel;
    if ( v8 )
    {
      UILabel__set_fontSize(v8, value, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v8, v6);
  }
}


void BoardOptionTextWithIconComponent__set_LabelGradientBottom(
        BoardOptionTextWithIconComponent_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *forwardLabel; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *v12; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_596CE56 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE56 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v12 = this->fields.forwardLabel;
    if ( !v12 )
      goto LABEL_14;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UILabel__set_gradientBottom(v12, v14, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v12 = this->fields.behindLabel;
    if ( v12 )
    {
      v15.fields.b = b;
      v15.fields.a = a;
      v15.fields.r = r;
      v15.fields.g = g;
      UILabel__set_gradientBottom(v12, v15, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v12, v10);
  }
}


void BoardOptionTextWithIconComponent__set_LabelGradientTop(
        BoardOptionTextWithIconComponent_o *this,
        UnityEngine_Color_o value,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *forwardLabel; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *v12; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_596CE55 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE55 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v3);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v12 = this->fields.forwardLabel;
    if ( !v12 )
      goto LABEL_14;
    v14.fields.r = r;
    v14.fields.g = g;
    v14.fields.b = b;
    v14.fields.a = a;
    UILabel__set_gradientTop(v12, v14, 0);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0, 0) )
  {
    v12 = this->fields.behindLabel;
    if ( v12 )
    {
      v15.fields.b = b;
      v15.fields.a = a;
      v15.fields.r = r;
      v15.fields.g = g;
      UILabel__set_gradientTop(v12, v15, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v12, v10);
  }
}


void BoardOptionTextWithIconComponent__set_anchorOffset(
        BoardOptionTextWithIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._anchorOffset_k__BackingField = value;
}