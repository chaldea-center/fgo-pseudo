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
  UnityEngine_Object_o *behindLabel; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  struct TerminalBoardOptionTextData_o *data; // x8
  int32_t BehindLabelWrappedWidth; // w20
  const MethodInfo *v8; // x1
  float v9; // s8
  const MethodInfo *v10; // x1
  int32_t v11; // w0
  int v12; // w8

  if ( (byte_4CE923D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE923D = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(behindLabel, 0, 0);
  if ( !v4 )
  {
    data = this->fields.data;
    if ( !data )
      sub_1C7BD40(v4, v5);
    if ( data->fields._Alignment_k__BackingField == 2 )
    {
      BehindLabelWrappedWidth = GrandQuestBoardOptionTextComponent__GetBehindLabelWrappedWidth(this, v5);
      v9 = GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v8) + (float)BehindLabelWrappedWidth;
      v11 = GrandQuestBoardOptionTextComponent__GetBehindLabelWrappedWidth(this, v10);
      if ( v9 == INFINITY )
        v12 = 0x80000000;
      else
        v12 = (int)v9;
      ComponentHelper__SetLocalPositionX(
        (UnityEngine_Component_o *)this->fields.behindLabel,
        (float)(this->fields._TextOffset_k__BackingField + (v12 - v11) / 2),
        0);
    }
  }
}


int32_t GrandQuestBoardOptionTextComponent__GetBehindLabelWrappedWidth(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *behindLabel; // x20
  __int64 v4; // x1
  struct UILabel_o *v6; // x0
  float FontWidth; // s0

  if ( (byte_4CE923C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE923C = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(behindLabel, 0, 0) )
    return 0;
  v6 = this->fields.behindLabel;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  FontWidth = WrapControlText__getFontWidth(v6, v6->fields.mText, v6->fields.mFontSize, 0);
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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

  if ( (byte_4CE923F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE923F = 1;
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
      sub_1C7BD40(IsNullOrEmpty, v6);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  }
}


void GrandQuestBoardOptionTextComponent__SetCondensedScale(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t wholeWidth,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  const MethodInfo *v6; // x1
  UILabel_o *v7; // x21
  float IconSpaceWidth; // s0
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

  if ( (byte_4CE9240 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9240 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(forwardLabel, 0, 0) )
  {
    v7 = this->fields.forwardLabel;
    IconSpaceWidth = GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v6);
    ForwardTextWidth = GrandQuestBoardOptionTextComponent__GetForwardTextWidth(
                         this,
                         (float)wholeWidth - IconSpaceWidth,
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
    v17 = GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v15);
    BehindTextWidth = GrandQuestBoardOptionTextComponent__GetBehindTextWidth(this, (float)wholeWidth - v17, v18);
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
    sub_1C7BD40(v10, v11);
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

  if ( (byte_4CE923E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE923E = 1;
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
      sub_1C7BD40(IsNullOrEmpty, v6);
    }
    UnityEngine_GameObject__SetActive(gameObject, ((unsigned __int8)IsNullOrEmpty & 1) == 0, 0);
  }
}


void GrandQuestBoardOptionTextComponent__SetItemIconAtlas(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t itemImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x21
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  UISprite_o *v8; // x21
  int32_t stormPodItemId; // w22
  UISprite_o *gameObject; // x0
  bool v11; // w1

  if ( (byte_4CE9241 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_21219/*"item_mini_49"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9241 = 1;
  }
  itemIconSprite = (UnityEngine_Object_o *)this->fields.itemIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
              v11 = 0;
LABEL_22:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0);
              return;
            }
          }
        }
      }
    }
    else
    {
      v7 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v7 = BalanceConfig_TypeInfo;
      }
      v8 = this->fields.itemIconSprite;
      stormPodItemId = v7->static_fields->stormPodItemId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( stormPodItemId == itemImageId )
        AtlasManager__SetEventSprite(v8, (System_String_o *)StringLiteral_21219/*"item_mini_49"*/, 0);
      else
        AtlasManager__SetItem(v8, itemImageId, 0);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          v11 = 1;
          goto LABEL_22;
        }
      }
    }
    sub_1C7BD40(gameObject, v6);
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
  struct TerminalBoardOptionTextData_o **p_data; // x22
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  System_String_o *v9; // x21
  struct UILabel_o *behindLabel; // x8
  System_String_o *mText; // x20
  const MethodInfo *v12; // x2
  struct TerminalBoardOptionTextData_o *data; // x8
  const MethodInfo *v14; // x2
  struct TerminalBoardOptionTextData_o *v15; // x8
  struct UILabel_o *forwardLabel; // x8
  System_String_o *v17; // x1
  const MethodInfo *v18; // x2
  struct UILabel_o *v19; // x8
  System_String_o *v20; // x1
  const MethodInfo *v21; // x1

  this->fields.data = textData;
  p_data = &this->fields.data;
  v5 = sub_1C7BA8C(&this->fields.data, textData);
  v8 = (__int64)*(p_data - 3);
  if ( v8 )
    v9 = *(System_String_o **)(v8 + 416);
  else
    v9 = 0;
  behindLabel = this->fields.behindLabel;
  if ( behindLabel )
    mText = behindLabel->fields.mText;
  else
    mText = 0;
  if ( !*p_data
    || (GrandQuestBoardOptionTextComponent__SetItemIconAtlas(this, (*p_data)->fields._ItemImageId_k__BackingField, v7),
        (data = this->fields.data) == 0)
    || (GrandQuestBoardOptionTextComponent__SetForwardText(this, data->fields._ForwardText_k__BackingField, v12),
        (v15 = this->fields.data) == 0) )
  {
    sub_1C7BD40(v5, v6);
  }
  GrandQuestBoardOptionTextComponent__SetBehindText(this, v15->fields._BehindText_k__BackingField, v14);
  forwardLabel = this->fields.forwardLabel;
  if ( forwardLabel )
    v17 = forwardLabel->fields.mText;
  else
    v17 = 0;
  if ( System_String__op_Inequality(v9, v17, 0)
    || ((v19 = this->fields.behindLabel) == 0 ? (v20 = 0) : (v20 = v19->fields.mText),
        System_String__op_Inequality(mText, v20, 0)) )
  {
    GrandQuestBoardOptionTextComponent__SetCondensedScale(this, this->fields.textMaxWidth, v18);
  }
  GrandQuestBoardOptionTextComponent__AdjustTextOffset(this, v21);
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
  UnityEngine_Object_o *behindLabel; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4CE9236 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9236 = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(behindLabel, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.behindLabel;
    if ( !v6 )
      sub_1C7BD40(v4, v5);
    p_mText = &v6->fields.mText;
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
  UnityEngine_Object_o *forwardLabel; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4CE9235 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9235 = 1;
  }
  forwardLabel = (UnityEngine_Object_o *)this->fields.forwardLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(forwardLabel, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.forwardLabel;
    if ( !v6 )
      sub_1C7BD40(v4, v5);
    p_mText = &v6->fields.mText;
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
  UnityEngine_Object_o *itemIconSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v8; // x8

  if ( (byte_4CE923B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE923B = 1;
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
          sub_1C7BD40(v4, v5);
        return (float)(this->fields.itemIconPaddingLeft + v8->fields.mWidth + this->fields.itemIconPaddingRight);
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
  UnityEngine_Object_o *forwardLabel; // x20
  __int64 v6; // x1
  void *v7; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20

  if ( (byte_4CE9237 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9237 = 1;
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
    sub_1C7BD40(v7, v6);
  }
}


void GrandQuestBoardOptionTextComponent__set_LabelFontSize(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_4CE923A & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE923A = 1;
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
    sub_1C7BD40(v7, v6);
  }
}


void GrandQuestBoardOptionTextComponent__set_LabelGradientBottom(
        GrandQuestBoardOptionTextComponent_o *this,
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
  if ( (byte_4CE9239 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9239 = 1;
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
    sub_1C7BD40(v10, v9);
  }
}


void GrandQuestBoardOptionTextComponent__set_LabelGradientTop(
        GrandQuestBoardOptionTextComponent_o *this,
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
  if ( (byte_4CE9238 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CE9238 = 1;
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
    sub_1C7BD40(v10, v9);
  }
}


void GrandQuestBoardOptionTextComponent__set_TextOffset(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TextOffset_k__BackingField = value;
}