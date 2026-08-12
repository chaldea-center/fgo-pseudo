void GrandQuestFolderInformationText___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  GrandQuestFolderInformationText_c *v8; // x8
  struct GrandQuestFolderInformationText_StaticFields *static_fields; // x9

  if ( (byte_596B27D & 1) == 0 )
  {
    sub_2213A60(&GrandQuestFolderInformationText_TypeInfo);
    sub_2213A60(&StringLiteral_20840/*"grand_btnmenu_notice_bg"*/);
    byte_596B27D = 1;
  }
  v7 = StringLiteral_20840/*"grand_btnmenu_notice_bg"*/;
  GrandQuestFolderInformationText_TypeInfo->static_fields->BoardInfoFrameName = (struct System_String_o *)StringLiteral_20840/*"grand_btnmenu_notice_bg"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GrandQuestFolderInformationText_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = GrandQuestFolderInformationText_TypeInfo;
  static_fields = GrandQuestFolderInformationText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->InfoFrameCenterOffset.fields.x = 0xC180000000000000LL;
  static_fields->InfoFrameCenterOffset.fields.z = 0.0;
  v8->static_fields->NormalTopColor = (struct UnityEngine_Color_o)xmmword_E9C0F0;
  v8->static_fields->NormalBottomColor = (struct UnityEngine_Color_o)xmmword_E9C040;
}


void GrandQuestFolderInformationText___ctor(
        GrandQuestFolderInformationText_o *this,
        BoardMessageEntity_o *boardMessageEntity,
        System_String_o *text,
        int64_t time,
        int64_t checkTime,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  int32_t pivotType; // w1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)boardMessageEntity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.dispText = text;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.dispText, (int32_t)text, v17, v18, v19, v20, v21, v22);
  this->fields.dispTime = time;
  GrandQuestFolderInformationText__SetParamFromScript(this, checkTime, v23);
  if ( boardMessageEntity )
    pivotType = boardMessageEntity->fields.pivotType;
  else
    pivotType = 0;
  GrandQuestFolderInformationText__CreateDispTextExtendIfNotExists(this, pivotType, v24);
}


void GrandQuestFolderInformationText__ChangeBehindText(
        GrandQuestFolderInformationText_o *this,
        const MethodInfo *method)
{
  TerminalBoardOptionTextData_o *dispTextExtend; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  int64_t dispTime; // x21
  System_Object_array *v8; // x20
  System_String_o *RestTime2; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x0

  if ( (byte_596B279 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&object___TypeInfo);
    byte_596B279 = 1;
  }
  dispTextExtend = this->fields.dispTextExtend;
  v4 = sub_2213B20(object___TypeInfo, 1);
  dispTime = this->fields.dispTime;
  v8 = (System_Object_array *)v4;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  RestTime2 = LocalizationManager__GetRestTime2(dispTime, -1, 0);
  if ( !v8 )
    goto LABEL_11;
  v17 = (Il2CppObject *)RestTime2;
  if ( RestTime2 )
  {
    RestTime2 = (System_String_o *)sub_2213BB4(RestTime2, v8->obj.klass->_1.element_class);
    if ( !RestTime2 )
    {
      v19 = sub_2213D00(0, v18);
      sub_2213BA0(v19, 0);
    }
  }
  if ( !LODWORD(v8->max_length) )
    sub_2213CE4(RestTime2);
  v8->m_Items[0] = v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v8->m_Items, (int32_t)v17, v11, v12, v13, v14, v15, v16);
  if ( !dispTextExtend )
LABEL_11:
    sub_2213CDC(RestTime2, v10);
  TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, v8, 0);
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
  bool v9; // w8

  GrandQuestFolderInformationText__ChangeBehindText(this, (const MethodInfo *)component);
  BehindLabelText = *component;
  if ( !*component
    || (BehindLabelText = (GrandQuestBoardOptionTextComponent_o *)GrandQuestBoardOptionTextComponent__get_BehindLabelText(
                                                                    BehindLabelText,
                                                                    v5),
        (dispTextExtend = this->fields.dispTextExtend) == 0)
    || (v9 = System_String__op_Inequality(
               (System_String_o *)BehindLabelText,
               dispTextExtend->fields._BehindText_k__BackingField,
               0),
        BehindLabelText = *component,
        this->fields.isChangedText = v9,
        !BehindLabelText) )
  {
    sub_2213CDC(BehindLabelText, v5);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596B27A & 1) == 0 )
  {
    sub_2213A60(&TerminalBoardOptionTextData_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B27A = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    itemIconId = this->fields.itemIconId;
    v7 = (TerminalBoardOptionTextData_o *)sub_2213CCC(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v7, (System_String_o *)StringLiteral_1/*""*/, dispText, itemIconId, 0, 0, alignment, 0);
    this->fields.dispTextExtend = v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.dispTextExtend,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
  float z; // s10
  float y; // s9
  float x; // s8
  GrandQuestBoardOptionTextComponent_o *IsTextEmpty; // x0
  __int64 v15; // x2
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  GrandQuestFolderInformationText_c *v17; // x0
  UISprite_o *v18; // x22
  System_String_o *BoardInfoFrameName; // x21
  struct GrandQuestFolderInformationText_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  if ( (byte_596B27B & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&GrandQuestFolderInformationText_TypeInfo);
    byte_596B27B = 1;
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
          GrandQuestBoardOptionTextComponent__AdjustTextOffset(IsTextEmpty, (const MethodInfo *)component);
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
  if ( !*(&GrandQuestFolderInformationText_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandQuestFolderInformationText_TypeInfo, component, v15);
    v17 = GrandQuestFolderInformationText_TypeInfo;
  }
  v18 = *frameSprite;
  BoardInfoFrameName = v17->static_fields->BoardInfoFrameName;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, component, v15);
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
    sub_2213CDC(IsTextEmpty, component);
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
  this->fields.color.fields.r = textColor.fields.r;
  this->fields.color.fields.g = textColor.fields.g;
  this->fields.existColorSetting = isColorSetting;
  this->fields.color.fields.b = textColor.fields.b;
  this->fields.color.fields.a = textColor.fields.a;
  this->fields.boardId = boardImageId;
  this->fields.sideSizeOffset = mSideSizeOffset;
  this->fields.boardOffset = mBoardOffset;
  this->fields.informationTextOffset = textOffset;
  this->fields.isDispFrameBg = isFrameBg;
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
  __int128 v9; // q1
  __int64 v10; // d2
  __int64 v11; // d3
  char isFrameBg; // w9
  int32_t itemIconId; // w8
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF

  boardMessageEnt = this->fields.boardMessageEnt;
  *(_QWORD *)&v19.fields.r = 0;
  if ( boardMessageEnt && (v5 = BoardMessageEntity__GetScriptDataCondCheck(boardMessageEnt, checkTime, 0)) != 0 )
  {
    v6 = v5;
    v7 = UnityEngine_ColorUtility__TryParseHtmlString(v5->fields.color, &v19, 0);
    v8 = v19;
    v9 = *(_OWORD *)&v6->fields.frameOffset.fields.x;
    v10 = *(_QWORD *)&v6->fields.textOffset.fields.y;
    v11 = *(_QWORD *)&v6->fields.imgId;
    this->fields.existColorSetting = v7;
    isFrameBg = v6->fields.isFrameBg;
    itemIconId = v6->fields.itemIconId;
    this->fields.color = v8;
    *(_QWORD *)&this->fields.boardId = v11;
    *(_OWORD *)&this->fields.boardOffset.fields.x = v9;
    *(_QWORD *)&this->fields.informationTextOffset.fields.y = v10;
  }
  else
  {
    __asm { FMOV            V0.4S, #1.0 }
    itemIconId = 0;
    this->fields.boardId = -1;
    isFrameBg = 1;
    this->fields.existColorSetting = 0;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0;
    *(_QWORD *)&this->fields.informationTextOffset.fields.x = 0;
    this->fields.color = _Q0;
    *(_QWORD *)&this->fields.sideSizeOffset = 0;
    this->fields.informationTextOffset.fields.z = 0.0;
  }
  this->fields.isDispFrameBg = isFrameBg;
  this->fields.itemIconId = itemIconId;
}


void GrandQuestFolderInformationText__SetTextColor(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        const MethodInfo *method)
{
  GrandQuestFolderInformationText_o *v4; // x19
  GrandQuestBoardOptionTextComponent_o *v5; // x21
  float *p_r; // x19
  float r; // t1
  float *p_a; // x22
  float *p_b; // x23
  float *p_g; // x24
  struct GrandQuestFolderInformationText_StaticFields *static_fields; // x8
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_596B27C & 1) == 0 )
  {
    this = (GrandQuestFolderInformationText_o *)sub_2213A60(&GrandQuestFolderInformationText_TypeInfo);
    byte_596B27C = 1;
  }
  v5 = *component;
  if ( v4->fields.existColorSetting )
  {
    if ( !v5 )
      goto LABEL_13;
    r = v4->fields.color.fields.r;
    p_r = &v4->fields.color.fields.r;
    v12.fields.r = r;
    p_a = p_r + 3;
    v12.fields.a = p_r[3];
    p_b = p_r + 2;
    v12.fields.b = p_r[2];
    p_g = p_r + 1;
    v12.fields.g = p_r[1];
    GrandQuestBoardOptionTextComponent__set_LabelGradientTop(*component, v12, (const MethodInfo *)component);
    this = (GrandQuestFolderInformationText_o *)*component;
    if ( !*component )
      goto LABEL_13;
  }
  else
  {
    this = (GrandQuestFolderInformationText_o *)GrandQuestFolderInformationText_TypeInfo;
    if ( !*(&GrandQuestFolderInformationText_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(GrandQuestFolderInformationText_TypeInfo, component, method);
    if ( !v5
      || (GrandQuestBoardOptionTextComponent__set_LabelGradientTop(
            v5,
            GrandQuestFolderInformationText_TypeInfo->static_fields->NormalTopColor,
            (const MethodInfo *)component),
          (this = (GrandQuestFolderInformationText_o *)*component) == 0) )
    {
LABEL_13:
      sub_2213CDC(this, component);
    }
    static_fields = GrandQuestFolderInformationText_TypeInfo->static_fields;
    p_a = &static_fields->NormalBottomColor.fields.a;
    p_r = &static_fields->NormalBottomColor.fields.r;
    p_b = &static_fields->NormalBottomColor.fields.b;
    p_g = &static_fields->NormalBottomColor.fields.g;
  }
  v13.fields.r = *p_r;
  v13.fields.a = *p_a;
  v13.fields.b = *p_b;
  v13.fields.g = *p_g;
  GrandQuestBoardOptionTextComponent__set_LabelGradientBottom(
    (GrandQuestBoardOptionTextComponent_o *)this,
    v13,
    (const MethodInfo *)component);
}


void GrandQuestFolderInformationText__SetTextOffset(
        GrandQuestFolderInformationText_o *this,
        GrandQuestBoardOptionTextComponent_o **component,
        UnityEngine_Vector3_o textOffset,
        const MethodInfo *method)
{
  GrandQuestFolderInformationText_o *v4; // x20
  float x; // s8
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  float v8; // s0
  float v9; // s1
  float v10; // w8

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
    sub_2213CDC(this, component);
  v8 = -x;
  v9 = INFINITY;
  if ( dispTextExtend->fields._Alignment_k__BackingField )
    v8 = x;
  else
    v9 = -INFINITY;
  LODWORD(v10) = (int)v8;
  if ( x == v9 )
    v10 = -0.0;
  this->fields.informationTextOffset.fields.x = v10;
  GrandQuestBoardOptionTextComponent__AdjustTextOffset(
    (GrandQuestBoardOptionTextComponent_o *)this,
    (const MethodInfo *)component);
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


void GrandQuestFolderInformationText__SetTime_39596128(
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