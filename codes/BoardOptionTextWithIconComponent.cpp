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
  void *rightAnchor; // x0
  const MethodInfo *v5; // x1
  struct TerminalBoardOptionTextData_o *data; // x8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UILabel_o *v13; // x8
  char *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UILabel_o *v21; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  int64_t target; // x1
  __int64 v24; // x8
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UILabel_o *v31; // x8
  struct UIRect_AnchorPoint_o *v32; // x8
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
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

  if ( (byte_4BC453B & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC453B = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rightAnchor = (void *)UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL);
  if ( ((unsigned __int8)rightAnchor & 1) == 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      rightAnchor = this->fields.behindLabel;
      if ( rightAnchor )
      {
        if ( data->fields._IsLeft_k__BackingField )
        {
          UIWidget__set_pivot((UIWidget_o *)rightAnchor, 3, 0LL);
          v13 = this->fields.behindLabel;
          if ( !v13 )
            goto LABEL_45;
          rightAnchor = v13->fields.rightAnchor;
          if ( !rightAnchor )
            goto LABEL_45;
          *((_QWORD *)rightAnchor + 2) = 0LL;
          v14 = (char *)rightAnchor + 16;
          *((_DWORD *)v14 + 3) = 38;
          sub_1C1AB78((PartyOrganizationUtility_o *)v14, 0LL, v7, v8, v9, v10, v11, v12);
          v21 = this->fields.behindLabel;
          if ( !v21 )
            goto LABEL_45;
          rightAnchor = v21->fields.leftAnchor;
          if ( !rightAnchor )
            goto LABEL_45;
          *((_DWORD *)rightAnchor + 7) = this->fields.anchorOffset + 25;
          topAnchor = v21->fields.topAnchor;
          if ( !topAnchor )
            goto LABEL_45;
          target = (int64_t)topAnchor->fields.target;
          *((_QWORD *)rightAnchor + 2) = target;
          sub_1C1AB78((PartyOrganizationUtility_o *)((char *)rightAnchor + 16), target, v15, v16, v17, v18, v19, v20);
          rightAnchor = this->fields.behindLabel;
          if ( !rightAnchor )
            goto LABEL_45;
          v24 = *((_QWORD *)rightAnchor + 4);
          if ( !v24 )
            goto LABEL_45;
          *(_DWORD *)(v24 + 24) = 0;
          UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0LL);
          rightAnchor = this->fields.behindLabel;
          if ( !rightAnchor )
            goto LABEL_45;
LABEL_44:
          UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0LL);
          return;
        }
        UIWidget__set_pivot((UIWidget_o *)rightAnchor, 5, 0LL);
        v31 = this->fields.behindLabel;
        if ( v31 )
        {
          rightAnchor = v31->fields.rightAnchor;
          if ( rightAnchor )
          {
            *((_DWORD *)rightAnchor + 7) = -25 - this->fields.anchorOffset;
            v32 = v31->fields.topAnchor;
            if ( v32 )
            {
              v33 = (int64_t)v32->fields.target;
              *((_QWORD *)rightAnchor + 2) = v33;
              sub_1C1AB78((PartyOrganizationUtility_o *)((char *)rightAnchor + 16), v33, v25, v26, v27, v28, v29, v30);
              v40 = this->fields.behindLabel;
              if ( v40 )
              {
                rightAnchor = v40->fields.leftAnchor;
                if ( rightAnchor )
                {
                  *((_QWORD *)rightAnchor + 2) = 0LL;
                  v41 = (char *)rightAnchor + 16;
                  *((_DWORD *)v41 + 3) = -38;
                  sub_1C1AB78((PartyOrganizationUtility_o *)v41, 0LL, v34, v35, v36, v37, v38, v39);
                  rightAnchor = this->fields.behindLabel;
                  if ( rightAnchor )
                  {
                    UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0LL);
                    rightAnchor = this->fields.behindLabel;
                    if ( rightAnchor )
                    {
                      UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0LL);
                      itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(itemIconSprite, 0LL, 0LL) )
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
                        UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0LL);
                        rightAnchor = this->fields.itemIconSprite;
                        if ( !rightAnchor )
                          goto LABEL_45;
                        UIRect__UpdateAnchors((UIRect_o *)rightAnchor, 0LL);
                      }
                      forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      rightAnchor = (void *)UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL);
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
                            UIRect__ResetAnchors((UIRect_o *)rightAnchor, 0LL);
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
    sub_1C1AE30(rightAnchor, v5);
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

  if ( (byte_4BC453A & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC453A = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
    return 0;
  v6 = this->fields.behindLabel;
  if ( !v6 )
    sub_1C1AE30(0LL, v4);
  FontWidth = WrapControlText__getFontWidth(v6, v6->fields.mText, v6->fields.mFontSize, 0LL);
  if ( FontWidth == INFINITY )
    return 0x80000000;
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
    sub_1C1AE30(this, method);
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
    sub_1C1AE30(this, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__SetAnchorOffset(
        BoardOptionTextWithIconComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  this->fields.anchorOffset = offset;
  BoardOptionTextWithIconComponent__AdjustContentsAnchor(this, *(const MethodInfo **)&offset);
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

  if ( (byte_4BC453D & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, text);
    byte_4BC453D = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(behindLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = this->fields.behindLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0LL), (IsNullOrEmpty = this->fields.behindLabel) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0LL),
          !gameObject) )
    {
      sub_1C1AE30(IsNullOrEmpty, v6);
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
  int32_t v13; // w1
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v15; // x1
  UILabel_o *v16; // x21
  float v17; // s0
  const MethodInfo *v18; // x1
  float BehindTextWidth; // s0
  int32_t v20; // w1

  if ( (byte_4BC453E & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&wholeWidth);
    byte_4BC453E = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
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
    UILabel__SetCondensedScale(v7, v13, 0, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
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
      UILabel__SetCondensedScale(v16, v20, 0, 0LL);
      return;
    }
LABEL_20:
    sub_1C1AE30(v10, v11);
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

  if ( (byte_4BC453C & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, text);
    byte_4BC453C = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(forwardLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = this->fields.forwardLabel;
    if ( !IsNullOrEmpty
      || (UILabel__set_text(IsNullOrEmpty, text, 0LL), (IsNullOrEmpty = this->fields.forwardLabel) == 0LL)
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0LL),
          IsNullOrEmpty = (UILabel_o *)System_String__IsNullOrEmpty(text, 0LL),
          !gameObject) )
    {
      sub_1C1AE30(IsNullOrEmpty, v6);
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

  if ( (byte_4BC453F & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, *(_QWORD *)&itemImageId);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v6);
    byte_4BC453F = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      AtlasManager__SetItem(v10, itemImageId, 0LL);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v11 = 1;
LABEL_17:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0LL);
          return;
        }
      }
    }
    sub_1C1AE30(gameObject, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionTextWithIconComponent__UpdateUI(
        BoardOptionTextWithIconComponent_o *this,
        TerminalBoardOptionTextData_o *data,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.data,
    (int64_t)data,
    *(int64_t *)&wholeWidth,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v15 = (__int64)*(p_data - 4);
  if ( v15 )
    v16 = *(System_String_o **)(v15 + 416);
  else
    v16 = 0LL;
  behindLabel = this->fields.behindLabel;
  if ( behindLabel )
  {
    mText = behindLabel->fields.mText;
    if ( data )
      goto LABEL_6;
LABEL_9:
    sub_1C1AE30(v12, v13);
  }
  mText = 0LL;
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
    v22 = 0LL;
  if ( System_String__op_Inequality(v16, v22, 0LL)
    || ((v24 = this->fields.behindLabel) == 0LL ? (v25 = 0LL) : (v25 = v24->fields.mText),
        System_String__op_Inequality(mText, v25, 0LL)) )
  {
    BoardOptionTextWithIconComponent__SetCondensedScale(this, wholeWidth, v23);
  }
  BoardOptionTextWithIconComponent__AdjustContentsAnchor(this, v26);
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

  if ( (byte_4BC4534 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v3);
    byte_4BC4534 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.behindLabel;
    if ( !v7 )
      sub_1C1AE30(v5, v6);
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

  if ( (byte_4BC4533 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v3);
    byte_4BC4533 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.forwardLabel;
    if ( !v7 )
      sub_1C1AE30(v5, v6);
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

  if ( (byte_4BC4539 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC4539 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1C1AE30(v4, v5);
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

  if ( (byte_4BC4535 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC4535 = 1;
  }
  this->fields.alpha = value;
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
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
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
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
LABEL_19:
    sub_1C1AE30(v7, v6);
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

  if ( (byte_4BC4538 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_4BC4538 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v7 = this->fields.forwardLabel;
    if ( !v7 )
      goto LABEL_14;
    UILabel__set_fontSize(v7, value, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(behindLabel, 0LL, 0LL) )
  {
    v7 = this->fields.behindLabel;
    if ( v7 )
    {
      UILabel__set_fontSize(v7, value, 0LL);
      return;
    }
LABEL_14:
    sub_1C1AE30(v7, v6);
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
  if ( (byte_4BC4537 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC4537 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v10 = this->fields.forwardLabel;
    if ( !v10 )
      goto LABEL_14;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientBottom(v10, v12, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
    sub_1C1AE30(v10, v9);
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
  if ( (byte_4BC4536 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC4536 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0LL, 0LL) )
  {
    v10 = this->fields.forwardLabel;
    if ( !v10 )
      goto LABEL_14;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UILabel__set_gradientTop(v10, v12, 0LL);
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
    sub_1C1AE30(v10, v9);
  }
}