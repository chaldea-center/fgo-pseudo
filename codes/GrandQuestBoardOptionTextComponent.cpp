void GrandQuestBoardOptionTextComponent___ctor(GrandQuestBoardOptionTextComponent_o *this, const MethodInfo *method)
{
  this->fields.textMaxWidth = 500;
  this->fields.alpha = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandQuestBoardOptionTextComponent__AdjustTextOffset(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *behindLabel; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  struct TerminalBoardOptionTextData_o *data; // x8
  int32_t BehindLabelWrappedWidth; // w20
  const MethodInfo *v9; // x1
  float v10; // s8
  const MethodInfo *v11; // x1
  int32_t v12; // w0
  int v13; // w8

  if ( (byte_596B232 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B232 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Equality(behindLabel, 0, 0);
  if ( !v5 )
  {
    data = this->fields.data;
    if ( !data )
      sub_2213CDC(v5, v6);
    if ( data->fields._Alignment_k__BackingField == 2 )
    {
      BehindLabelWrappedWidth = GrandQuestBoardOptionTextComponent__GetBehindLabelWrappedWidth(this, v6);
      v10 = GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v9) + (float)BehindLabelWrappedWidth;
      v12 = GrandQuestBoardOptionTextComponent__GetBehindLabelWrappedWidth(this, v11);
      if ( v10 == INFINITY )
        v13 = 0x80000000;
      else
        v13 = (int)v10;
      ComponentHelper__SetLocalPositionX(
        (UnityEngine_Component_o *)this->fields.behindLabel,
        (float)(this->fields._TextOffset_k__BackingField + (v13 - v12) / 2),
        0);
    }
  }
}


int32_t GrandQuestBoardOptionTextComponent__GetBehindLabelWrappedWidth(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *behindLabel; // x20
  __int64 v5; // x1
  struct UILabel_o *v7; // x0
  float FontWidth; // s0

  if ( (byte_596B231 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B231 = 1;
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


float GrandQuestBoardOptionTextComponent__GetBehindTextWidth(
        GrandQuestBoardOptionTextComponent_o *this,
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


float GrandQuestBoardOptionTextComponent__GetForwardTextWidth(
        GrandQuestBoardOptionTextComponent_o *this,
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


float GrandQuestBoardOptionTextComponent__GetWholeWidth(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  int32_t BehindLabelWrappedWidth; // w20
  const MethodInfo *v4; // x1

  BehindLabelWrappedWidth = GrandQuestBoardOptionTextComponent__GetBehindLabelWrappedWidth(this, method);
  return GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v4) + (float)BehindLabelWrappedWidth;
}


bool GrandQuestBoardOptionTextComponent__IsTextEmpty(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *ForwardLabelText; // x0
  const MethodInfo *v4; // x1
  System_String_o *BehindLabelText; // x0

  ForwardLabelText = GrandQuestBoardOptionTextComponent__get_ForwardLabelText(this, method);
  if ( !System_String__IsNullOrEmpty(ForwardLabelText, 0) )
    return 0;
  BehindLabelText = GrandQuestBoardOptionTextComponent__get_BehindLabelText(this, v4);
  return System_String__IsNullOrEmpty(BehindLabelText, 0);
}


void GrandQuestBoardOptionTextComponent__SetBehindText(
        GrandQuestBoardOptionTextComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x21
  __int64 v6; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_596B234 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B234 = 1;
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
void GrandQuestBoardOptionTextComponent__SetCondensedScale(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  UILabel_o *v8; // x21
  float IconSpaceWidth; // s0
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

  if ( (byte_596B235 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B235 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&wholeWidth, method);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v8 = this->fields.forwardLabel;
    IconSpaceWidth = GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v6);
    ForwardTextWidth = GrandQuestBoardOptionTextComponent__GetForwardTextWidth(
                         this,
                         (float)wholeWidth - IconSpaceWidth,
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
    v18 = GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v16);
    BehindTextWidth = GrandQuestBoardOptionTextComponent__GetBehindTextWidth(this, (float)wholeWidth - v18, v19);
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


void GrandQuestBoardOptionTextComponent__SetForwardText(
        GrandQuestBoardOptionTextComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_596B233 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B233 = 1;
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
void GrandQuestBoardOptionTextComponent__SetItemIconAtlas(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t itemImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  BalanceConfig_c *v8; // x0
  UISprite_o *v9; // x21
  int v10; // w8
  UISprite_o *gameObject; // x0
  bool v12; // w1

  if ( (byte_596B236 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_22073/*"item_mini_49"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B236 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&itemImageId, method);
  if ( !UnityEngine_Object__op_Equality(itemIconSprite, 0, 0) )
  {
    if ( itemImageId < 1 )
    {
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        UISprite__set_atlas(gameObject, 0, 0);
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
              v12 = 0;
LABEL_24:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v12, 0);
              return;
            }
          }
        }
      }
    }
    else
    {
      v8 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v7);
        v8 = BalanceConfig_TypeInfo;
      }
      v9 = this->fields.itemIconSprite;
      v10 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
      if ( v8->static_fields->stormPodItemId == itemImageId )
      {
        if ( !v10 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
        AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_22073/*"item_mini_49"*/, 0);
      }
      else
      {
        if ( !v10 )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
        AtlasManager__SetItem(v9, itemImageId, 0);
      }
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          v12 = 1;
          goto LABEL_24;
        }
      }
    }
    sub_2213CDC(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandQuestBoardOptionTextComponent__SetTextOffset(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  this->fields._TextOffset_k__BackingField = offset;
  GrandQuestBoardOptionTextComponent__AdjustTextOffset(this, *(const MethodInfo **)&offset);
}


void GrandQuestBoardOptionTextComponent__UpdateUI(
        GrandQuestBoardOptionTextComponent_o *this,
        TerminalBoardOptionTextData_o *textData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct TerminalBoardOptionTextData_o **p_data; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x8
  System_String_o *v14; // x21
  struct UILabel_o *behindLabel; // x8
  System_String_o *mText; // x20
  const MethodInfo *v17; // x2
  struct TerminalBoardOptionTextData_o *data; // x8
  const MethodInfo *v19; // x2
  struct TerminalBoardOptionTextData_o *v20; // x8
  struct UILabel_o *forwardLabel; // x8
  System_String_o *v22; // x1
  const MethodInfo *v23; // x2
  struct UILabel_o *v24; // x8
  System_String_o *v25; // x1
  const MethodInfo *v26; // x1

  this->fields.data = textData;
  p_data = &this->fields.data;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)textData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = (__int64)*(p_data - 3);
  if ( v13 )
    v14 = *(System_String_o **)(v13 + 416);
  else
    v14 = 0;
  behindLabel = this->fields.behindLabel;
  if ( behindLabel )
    mText = behindLabel->fields.mText;
  else
    mText = 0;
  if ( !*p_data
    || (GrandQuestBoardOptionTextComponent__SetItemIconAtlas(this, (*p_data)->fields._ItemImageId_k__BackingField, v12),
        (data = this->fields.data) == 0)
    || (GrandQuestBoardOptionTextComponent__SetForwardText(this, data->fields._ForwardText_k__BackingField, v17),
        (v20 = this->fields.data) == 0) )
  {
    sub_2213CDC(v10, v11);
  }
  GrandQuestBoardOptionTextComponent__SetBehindText(this, v20->fields._BehindText_k__BackingField, v19);
  forwardLabel = this->fields.forwardLabel;
  if ( forwardLabel )
    v22 = forwardLabel->fields.mText;
  else
    v22 = 0;
  if ( System_String__op_Inequality(v14, v22, 0)
    || ((v24 = this->fields.behindLabel) == 0 ? (v25 = 0) : (v25 = v24->fields.mText),
        System_String__op_Inequality(mText, v25, 0)) )
  {
    GrandQuestBoardOptionTextComponent__SetCondensedScale(this, this->fields.textMaxWidth, v23);
  }
  GrandQuestBoardOptionTextComponent__AdjustTextOffset(this, v26);
}


float GrandQuestBoardOptionTextComponent__get_Alpha(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.alpha;
}


System_String_o *GrandQuestBoardOptionTextComponent__get_BehindLabelText(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *behindLabel; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  System_String_o **p_mText; // x8

  if ( (byte_596B22B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B22B = 1;
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


System_String_o *GrandQuestBoardOptionTextComponent__get_ForwardLabelText(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *forwardLabel; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8
  System_String_o **p_mText; // x8

  if ( (byte_596B22A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B22A = 1;
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


float GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemIconSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v9; // x8

  if ( (byte_596B230 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B230 = 1;
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


int32_t GrandQuestBoardOptionTextComponent__get_TextOffset(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._TextOffset_k__BackingField;
}


void GrandQuestBoardOptionTextComponent__set_Alpha(
        GrandQuestBoardOptionTextComponent_o *this,
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

  if ( (byte_596B22C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B22C = 1;
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
void GrandQuestBoardOptionTextComponent__set_LabelFontSize(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *v8; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_596B22F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B22F = 1;
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


void GrandQuestBoardOptionTextComponent__set_LabelGradientBottom(
        GrandQuestBoardOptionTextComponent_o *this,
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
  if ( (byte_596B22E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B22E = 1;
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


void GrandQuestBoardOptionTextComponent__set_LabelGradientTop(
        GrandQuestBoardOptionTextComponent_o *this,
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
  if ( (byte_596B22D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B22D = 1;
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


void GrandQuestBoardOptionTextComponent__set_TextOffset(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TextOffset_k__BackingField = value;
}