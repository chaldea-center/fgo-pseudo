void GrandQuestFolderInformationText___cctor(const MethodInfo *method)
{
  GrandQuestFolderInformationText_c *v1; // x8
  struct GrandQuestFolderInformationText_StaticFields *static_fields; // x9

  if ( (byte_4C326FD & 1) == 0 )
  {
    sub_1C32C20(&GrandQuestFolderInformationText_TypeInfo);
    sub_1C32C20(&StringLiteral_19897/*"grand_btnmenu_notice_bg"*/);
    byte_4C326FD = 1;
  }
  GrandQuestFolderInformationText_TypeInfo->static_fields->BoardInfoFrameName = (struct System_String_o *)StringLiteral_19897/*"grand_btnmenu_notice_bg"*/;
  sub_1C32BC4(GrandQuestFolderInformationText_TypeInfo->static_fields, StringLiteral_19897/*"grand_btnmenu_notice_bg"*/);
  v1 = GrandQuestFolderInformationText_TypeInfo;
  static_fields = GrandQuestFolderInformationText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->InfoFrameCenterOffset.fields.x = 0xC180000000000000LL;
  static_fields->InfoFrameCenterOffset.fields.z = 0.0;
  v1->static_fields->NormalTopColor = (struct UnityEngine_Color_o)xmmword_C0C4C0;
  v1->static_fields->NormalBottomColor = (struct UnityEngine_Color_o)xmmword_C0C7F0;
}


void GrandQuestFolderInformationText___ctor(
        GrandQuestFolderInformationText_o *this,
        BoardMessageEntity_o *boardMessageEntity,
        System_String_o *text,
        int64_t time,
        int64_t checkTime,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  int32_t pivotType; // w1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_1C32BC4(&this->fields, boardMessageEntity);
  this->fields.dispText = text;
  sub_1C32BC4(&this->fields.dispText, text);
  this->fields.dispTime = time;
  GrandQuestFolderInformationText__SetParamFromScript(this, checkTime, v11);
  if ( boardMessageEntity )
    pivotType = boardMessageEntity->fields.pivotType;
  else
    pivotType = 0;
  GrandQuestFolderInformationText__CreateDispTextExtendIfNotExists(this, pivotType, v12);
}


void GrandQuestFolderInformationText__ChangeBehindText(
        GrandQuestFolderInformationText_o *this,
        const MethodInfo *method)
{
  TerminalBoardOptionTextData_o *dispTextExtend; // x19
  __int64 v4; // x0
  int64_t dispTime; // x21
  System_Object_array *v6; // x20
  System_String_o *RestTime2; // x0
  Il2CppObject *v8; // x21
  __int64 v9; // x0

  if ( (byte_4C326F9 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    byte_4C326F9 = 1;
  }
  dispTextExtend = this->fields.dispTextExtend;
  v4 = sub_1C32CC8(object___TypeInfo, 1);
  dispTime = this->fields.dispTime;
  v6 = (System_Object_array *)v4;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  RestTime2 = LocalizationManager__GetRestTime2(dispTime, -1, 0);
  if ( !v6 )
    goto LABEL_11;
  v8 = (Il2CppObject *)RestTime2;
  if ( RestTime2 )
  {
    RestTime2 = (System_String_o *)sub_1C32D5C(RestTime2, v6->obj.klass->_1.element_class);
    if ( !RestTime2 )
    {
      v9 = sub_1C32EA0();
      sub_1C32D48(v9, 0);
    }
  }
  if ( !LODWORD(v6->max_length) )
    sub_1C32E84(RestTime2);
  v6->m_Items[0] = v8;
  RestTime2 = (System_String_o *)sub_1C32BC4(v6->m_Items, v8);
  if ( !dispTextExtend )
LABEL_11:
    sub_1C32E7C(RestTime2);
  TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, v6, 0);
}


bool GrandQuestFolderInformationText__ChangeText(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  GrandQuestBoardOptionTextComponent_o *BehindLabelText; // x0
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  const MethodInfo *v8; // x2

  GrandQuestFolderInformationText__ChangeBehindText(this, (const MethodInfo *)component);
  BehindLabelText = *component;
  if ( !*component
    || (BehindLabelText = (GrandQuestBoardOptionTextComponent_o *)GrandQuestBoardOptionTextComponent__get_BehindLabelText(
                                                                    BehindLabelText,
                                                                    v5),
        (dispTextExtend = this->fields.dispTextExtend) == 0)
    || (this->fields.isChangedText = System_String__op_Inequality(
                                       (System_String_o *)BehindLabelText,
                                       dispTextExtend->fields._BehindText_k__BackingField,
                                       0),
        (BehindLabelText = *component) == 0) )
  {
    sub_1C32E7C(BehindLabelText);
  }
  GrandQuestBoardOptionTextComponent__UpdateUI(BehindLabelText, this->fields.dispTextExtend, v8);
  return this->fields.isChangedText;
}


void GrandQuestFolderInformationText__CreateDispTextExtendIfNotExists(
        GrandQuestFolderInformationText_o *this,
        int32_t alignment,
        const MethodInfo *method)
{
  System_String_o *dispText; // x22
  int32_t itemIconId; // w23
  TerminalBoardOptionTextData_o *v7; // x24

  if ( (byte_4C326FA & 1) == 0 )
  {
    sub_1C32C20(&TerminalBoardOptionTextData_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C326FA = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    itemIconId = this->fields.itemIconId;
    v7 = (TerminalBoardOptionTextData_o *)sub_1C32E6C(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v7, (System_String_o *)StringLiteral_1/*""*/, dispText, itemIconId, 0, 0, alignment, 0);
    this->fields.dispTextExtend = v7;
    sub_1C32BC4(&this->fields.dispTextExtend, v7);
  }
}


BoardMessageEntity_TimeData_o *GrandQuestFolderInformationText__GetBoardMessageScriptData(
        GrandQuestFolderInformationText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_TimeData_o *result; // x0

  result = (BoardMessageEntity_TimeData_o *)this->fields.boardMessageEnt;
  if ( result )
    return BoardMessageEntity__GetScriptDataCondCheck((BoardMessageEntity_o *)result, checkTime, 0);
  return result;
}


void GrandQuestFolderInformationText__SetFrameSprite(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        UISprite_o **frameSprite,
        int32_t boardId,
        UnityEngine_Vector3_o boardOffset,
        int32_t sideSizeOffset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  GrandQuestBoardOptionTextComponent_o *IsTextEmpty; // x0
  const MethodInfo *v15; // x1
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  GrandQuestFolderInformationText_c *v17; // x0
  UISprite_o *v18; // x22
  System_String_o *BoardInfoFrameName; // x21
  struct GrandQuestFolderInformationText_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  if ( (byte_4C326FB & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&GrandQuestFolderInformationText_TypeInfo);
    byte_4C326FB = 1;
  }
  if ( boardId < 0 )
    goto LABEL_6;
  IsTextEmpty = *component;
  if ( !*component )
    goto LABEL_23;
  IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)GrandQuestBoardOptionTextComponent__IsTextEmpty(
                                                          IsTextEmpty,
                                                          (const MethodInfo *)component);
  if ( ((unsigned __int8)IsTextEmpty & 1) != 0 )
  {
LABEL_6:
    IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)*frameSprite;
    if ( *frameSprite )
    {
      IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)IsTextEmpty,
                                                              0);
      if ( IsTextEmpty )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTextEmpty, 0, 0);
        IsTextEmpty = *component;
        if ( *component )
        {
          IsTextEmpty->fields._TextOffset_k__BackingField = 0;
          GrandQuestBoardOptionTextComponent__AdjustTextOffset(IsTextEmpty, v15);
          return;
        }
      }
    }
    goto LABEL_23;
  }
  dispTextExtend = this->fields.dispTextExtend;
  if ( !dispTextExtend )
    goto LABEL_23;
  if ( dispTextExtend->fields._Alignment_k__BackingField == 2 )
  {
    IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)*frameSprite;
    if ( !*frameSprite )
      goto LABEL_23;
    UIWidget__set_pivot((UIWidget_o *)IsTextEmpty, 4, 0);
  }
  v17 = GrandQuestFolderInformationText_TypeInfo;
  if ( !GrandQuestFolderInformationText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestFolderInformationText_TypeInfo);
    v17 = GrandQuestFolderInformationText_TypeInfo;
  }
  v18 = *frameSprite;
  BoardInfoFrameName = v17->static_fields->BoardInfoFrameName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v18, BoardInfoFrameName, 0);
  IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_23;
  IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)IsTextEmpty,
                                                          0);
  if ( !IsTextEmpty
    || (static_fields = GrandQuestFolderInformationText_TypeInfo->static_fields,
        v21.fields.z = z + static_fields->InfoFrameCenterOffset.fields.z,
        v21.fields.y = y + static_fields->InfoFrameCenterOffset.fields.y,
        v21.fields.x = x + static_fields->InfoFrameCenterOffset.fields.x,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsTextEmpty, v21, 0),
        (IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)*frameSprite) == 0)
    || (IsTextEmpty = (GrandQuestBoardOptionTextComponent_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)IsTextEmpty,
                                                                0)) == 0 )
  {
LABEL_23:
    sub_1C32E7C(IsTextEmpty);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTextEmpty, this->fields.isDispFrameBg, 0);
}


void GrandQuestFolderInformationText__SetParam(
        GrandQuestFolderInformationText_o *this,
        bool isColorSetting,
        UnityEngine_Color_o textColor,
        int32_t boardImageId,
        int32_t mSideSizeOffset,
        UnityEngine_Vector3_o mBoardOffset,
        UnityEngine_Vector3_o textOffset,
        bool isFrameBg,
        int32_t iconId,
        const MethodInfo *method)
{
  this->fields.color = textColor;
  this->fields.boardId = boardImageId;
  this->fields.sideSizeOffset = mSideSizeOffset;
  this->fields.boardOffset = mBoardOffset;
  this->fields.existColorSetting = isColorSetting;
  this->fields.isDispFrameBg = isFrameBg;
  this->fields.informationTextOffset = textOffset;
  this->fields.itemIconId = iconId;
}


void GrandQuestFolderInformationText__SetParamFromScript(
        GrandQuestFolderInformationText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_o *boardMessageEnt; // x0
  BoardMessageEntity_TimeData_o *v5; // x0
  BoardMessageEntity_TimeData_o *v6; // x20
  bool v7; // w0
  struct UnityEngine_Color_o v8; // q0
  __int64 v9; // d1
  __int128 v10; // q2
  __int64 v11; // d3
  bool isFrameBg; // w9
  int32_t itemIconId; // w8
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF

  *(_QWORD *)&v19.fields.r = 0;
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( boardMessageEnt && (v5 = BoardMessageEntity__GetScriptDataCondCheck(boardMessageEnt, checkTime, 0)) != 0 )
  {
    v6 = v5;
    v7 = UnityEngine_ColorUtility__TryParseHtmlString(v5->fields.color, &v19, 0);
    v8 = v19;
    v9 = *(_QWORD *)&v6->fields.imgId;
    v10 = *(_OWORD *)&v6->fields.frameOffset.fields.x;
    v11 = *(_QWORD *)&v6->fields.textOffset.fields.y;
    isFrameBg = v6->fields.isFrameBg;
    itemIconId = v6->fields.itemIconId;
    this->fields.existColorSetting = v7;
    this->fields.color = v8;
    *(_QWORD *)&this->fields.boardId = v9;
    *(_OWORD *)&this->fields.boardOffset.fields.x = v10;
    *(_QWORD *)&this->fields.informationTextOffset.fields.y = v11;
    this->fields.isDispFrameBg = isFrameBg;
  }
  else
  {
    itemIconId = 0;
    __asm { FMOV            V0.4S, #1.0 }
    this->fields.existColorSetting = 0;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0;
    *(_QWORD *)&this->fields.informationTextOffset.fields.x = 0;
    *(_QWORD *)&this->fields.sideSizeOffset = 0;
    this->fields.informationTextOffset.fields.z = 0.0;
    this->fields.color = _Q0;
    this->fields.boardId = -1;
    this->fields.isDispFrameBg = 1;
  }
  this->fields.itemIconId = itemIconId;
}


void GrandQuestFolderInformationText__SetTextColor(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        const MethodInfo *method)
{
  GrandQuestFolderInformationText_o *v4; // x21
  GrandQuestBoardOptionTextComponent_o *v5; // x20
  float *p_r; // x22
  float *p_g; // x23
  float *p_b; // x24
  float *p_a; // x21
  float a; // t1
  const MethodInfo *v11; // x1
  struct GrandQuestFolderInformationText_StaticFields *static_fields; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C326FC & 1) == 0 )
  {
    this = (GrandQuestFolderInformationText_o *)sub_1C32C20(&GrandQuestFolderInformationText_TypeInfo);
    byte_4C326FC = 1;
  }
  v5 = *component;
  if ( v4->fields.existColorSetting )
  {
    if ( !v5 )
      goto LABEL_13;
    p_r = &v4->fields.color.fields.r;
    p_g = &v4->fields.color.fields.g;
    p_b = &v4->fields.color.fields.b;
    a = v4->fields.color.fields.a;
    p_a = &v4->fields.color.fields.a;
    v13.fields.a = a;
    v13.fields.b = *p_b;
    v13.fields.g = *p_g;
    v13.fields.r = *p_r;
    GrandQuestBoardOptionTextComponent__set_LabelGradientTop(*component, v13, (const MethodInfo *)component);
    this = (GrandQuestFolderInformationText_o *)*component;
    if ( !*component )
      goto LABEL_13;
  }
  else
  {
    this = (GrandQuestFolderInformationText_o *)GrandQuestFolderInformationText_TypeInfo;
    if ( !GrandQuestFolderInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandQuestFolderInformationText_TypeInfo);
      this = (GrandQuestFolderInformationText_o *)GrandQuestFolderInformationText_TypeInfo;
    }
    if ( !v5
      || (GrandQuestBoardOptionTextComponent__set_LabelGradientTop(
            v5,
            *(UnityEngine_Color_o *)(*(_QWORD *)&this[1].fields.boardOffset.fields.y + 20LL),
            (const MethodInfo *)component),
          (this = (GrandQuestFolderInformationText_o *)*component) == 0) )
    {
LABEL_13:
      sub_1C32E7C(this);
    }
    static_fields = GrandQuestFolderInformationText_TypeInfo->static_fields;
    p_a = &static_fields->NormalBottomColor.fields.a;
    p_b = &static_fields->NormalBottomColor.fields.b;
    p_g = &static_fields->NormalBottomColor.fields.g;
    p_r = &static_fields->NormalBottomColor.fields.r;
  }
  v14.fields.a = *p_a;
  v14.fields.b = *p_b;
  v14.fields.g = *p_g;
  v14.fields.r = *p_r;
  GrandQuestBoardOptionTextComponent__set_LabelGradientBottom((GrandQuestBoardOptionTextComponent_o *)this, v14, v11);
}


void GrandQuestFolderInformationText__SetTextOffset(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        UnityEngine_Vector3_o textOffset,
        const MethodInfo *method)
{
  GrandQuestFolderInformationText_o *v4; // x20
  float x; // s8
  const MethodInfo *v7; // x1
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  float v9; // s0
  float v10; // s1
  float v11; // w8

  if ( !*component )
    goto LABEL_11;
  v4 = this;
  x = textOffset.fields.x;
  this = (GrandQuestFolderInformationText_o *)GrandQuestBoardOptionTextComponent__IsTextEmpty(
                                                *component,
                                                (const MethodInfo *)component);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  dispTextExtend = v4->fields.dispTextExtend;
  if ( !dispTextExtend || (this = (GrandQuestFolderInformationText_o *)*component) == 0 )
LABEL_11:
    sub_1C32E7C(this);
  v9 = -x;
  v10 = INFINITY;
  if ( dispTextExtend->fields._Alignment_k__BackingField )
    v9 = x;
  else
    v10 = -INFINITY;
  LODWORD(v11) = (int)v9;
  if ( x == v10 )
    v11 = -0.0;
  this->fields.informationTextOffset.fields.x = v11;
  GrandQuestBoardOptionTextComponent__AdjustTextOffset((GrandQuestBoardOptionTextComponent_o *)this, v7);
}


void GrandQuestFolderInformationText__SetTime(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        UISprite_o **frameSprite,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  int32_t v8; // w4
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x2

  GrandQuestFolderInformationText__SetTextColor(this, component, (const MethodInfo *)frameSprite);
  GrandQuestFolderInformationText__ChangeText(this, component, v7);
  GrandQuestFolderInformationText__SetFrameSprite(
    this,
    component,
    frameSprite,
    this->fields.boardId,
    this->fields.boardOffset,
    v8,
    v9);
  GrandQuestFolderInformationText__SetTextOffset(this, component, this->fields.informationTextOffset, v10);
}


void GrandQuestFolderInformationText__SetTime_32806488(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        UISprite_o **frameSprite,
        int64_t checkTime,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  GrandQuestFolderInformationText__SetParamFromScript(this, checkTime, (const MethodInfo *)frameSprite);
  GrandQuestFolderInformationText__SetTime(this, component, frameSprite, v8);
}


void GrandQuestFolderInformationText__Update(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        UISprite_o **frameSprite,
        int64_t checkTime,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  GrandQuestFolderInformationText__SetParamFromScript(this, checkTime, (const MethodInfo *)frameSprite);
  GrandQuestFolderInformationText__SetTime(this, component, frameSprite, v8);
}