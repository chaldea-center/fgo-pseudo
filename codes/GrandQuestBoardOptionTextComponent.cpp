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

  if ( (byte_4C3DC9D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC9D = 1;
  }
  behindLabel = (UnityEngine_Object_o *)this->fields.behindLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(behindLabel, 0, 0);
  if ( !v4 )
  {
    data = this->fields.data;
    if ( !data )
      sub_1C372B4(v4);
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
  struct UILabel_o *v5; // x0
  float FontWidth; // s0

  if ( (byte_4C3DC9C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC9C = 1;
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4C3DC9F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC9F = 1;
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
  float ForwardTextWidth; // s0
  int32_t v12; // w1
  UnityEngine_Object_o *behindLabel; // x21
  const MethodInfo *v14; // x1
  UILabel_o *v15; // x21
  float v16; // s0
  const MethodInfo *v17; // x1
  float BehindTextWidth; // s0
  int32_t v19; // w1

  if ( (byte_4C3DCA0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DCA0 = 1;
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
    v16 = GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(this, v14);
    BehindTextWidth = GrandQuestBoardOptionTextComponent__GetBehindTextWidth(this, (float)wholeWidth - v16, v17);
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


void GrandQuestBoardOptionTextComponent__SetForwardText(
        GrandQuestBoardOptionTextComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  UILabel_o *IsNullOrEmpty; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4C3DC9E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC9E = 1;
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


void GrandQuestBoardOptionTextComponent__SetItemIconAtlas(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t itemImageId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x21
  BalanceConfig_c *v6; // x0
  UISprite_o *v7; // x21
  int32_t stormPodItemId; // w22
  UISprite_o *gameObject; // x0
  bool v10; // w1

  if ( (byte_4C3DCA1 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_21029/*"item_mini_49"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DCA1 = 1;
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
              v10 = 0;
LABEL_22:
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0);
              return;
            }
          }
        }
      }
    }
    else
    {
      v6 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      v7 = this->fields.itemIconSprite;
      stormPodItemId = v6->static_fields->stormPodItemId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( stormPodItemId == itemImageId )
        AtlasManager__SetEventSprite(v7, (System_String_o *)StringLiteral_21029/*"item_mini_49"*/, 0);
      else
        AtlasManager__SetItem(v7, itemImageId, 0);
      gameObject = this->fields.itemIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          v10 = 1;
          goto LABEL_22;
        }
      }
    }
    sub_1C372B4(gameObject);
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
  const MethodInfo *v6; // x2
  __int64 v7; // x8
  System_String_o *v8; // x21
  struct UILabel_o *behindLabel; // x8
  System_String_o *mText; // x20
  const MethodInfo *v11; // x2
  struct TerminalBoardOptionTextData_o *data; // x8
  const MethodInfo *v13; // x2
  struct TerminalBoardOptionTextData_o *v14; // x8
  struct UILabel_o *forwardLabel; // x8
  System_String_o *v16; // x1
  const MethodInfo *v17; // x2
  struct UILabel_o *v18; // x8
  System_String_o *v19; // x1
  const MethodInfo *v20; // x1

  this->fields.data = textData;
  p_data = &this->fields.data;
  v5 = sub_1C36FFC(&this->fields.data, textData);
  v7 = (__int64)*(p_data - 3);
  if ( v7 )
    v8 = *(System_String_o **)(v7 + 416);
  else
    v8 = 0;
  behindLabel = this->fields.behindLabel;
  if ( behindLabel )
    mText = behindLabel->fields.mText;
  else
    mText = 0;
  if ( !*p_data
    || (GrandQuestBoardOptionTextComponent__SetItemIconAtlas(this, (*p_data)->fields._ItemImageId_k__BackingField, v6),
        (data = this->fields.data) == 0)
    || (GrandQuestBoardOptionTextComponent__SetForwardText(this, data->fields._ForwardText_k__BackingField, v11),
        (v14 = this->fields.data) == 0) )
  {
    sub_1C372B4(v5);
  }
  GrandQuestBoardOptionTextComponent__SetBehindText(this, v14->fields._BehindText_k__BackingField, v13);
  forwardLabel = this->fields.forwardLabel;
  if ( forwardLabel )
    v16 = forwardLabel->fields.mText;
  else
    v16 = 0;
  if ( System_String__op_Inequality(v8, v16, 0)
    || ((v18 = this->fields.behindLabel) == 0 ? (v19 = 0) : (v19 = v18->fields.mText),
        System_String__op_Inequality(mText, v19, 0)) )
  {
    GrandQuestBoardOptionTextComponent__SetCondensedScale(this, this->fields.textMaxWidth, v17);
  }
  GrandQuestBoardOptionTextComponent__AdjustTextOffset(this, v20);
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
  struct UILabel_o *v5; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4C3DC96 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DC96 = 1;
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


System_String_o *GrandQuestBoardOptionTextComponent__get_ForwardLabelText(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x20
  _BOOL8 v4; // x0
  struct UILabel_o *v5; // x8
  System_String_o **p_mText; // x8

  if ( (byte_4C3DC95 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DC95 = 1;
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


float GrandQuestBoardOptionTextComponent__get_IconSpaceWidth(
        GrandQuestBoardOptionTextComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemIconSprite; // x20
  _BOOL8 v4; // x0
  float result; // s0
  struct TerminalBoardOptionTextData_o *data; // x8
  struct UISprite_o *v7; // x8

  if ( (byte_4C3DC9B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC9B = 1;
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
  void *v6; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Object_o *itemIconSprite; // x20

  if ( (byte_4C3DC97 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC97 = 1;
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


void GrandQuestBoardOptionTextComponent__set_LabelFontSize(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *forwardLabel; // x21
  UILabel_o *v6; // x0
  UnityEngine_Object_o *behindLabel; // x21

  if ( (byte_4C3DC9A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC9A = 1;
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
  UILabel_o *v9; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4C3DC99 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC99 = 1;
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
  UILabel_o *v9; // x0
  UnityEngine_Object_o *behindLabel; // x20
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = value.fields.a;
  b = value.fields.b;
  g = value.fields.g;
  r = value.fields.r;
  if ( (byte_4C3DC98 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3DC98 = 1;
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


void GrandQuestBoardOptionTextComponent__set_TextOffset(
        GrandQuestBoardOptionTextComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TextOffset_k__BackingField = value;
}