void __fastcall QuestBoardInformationText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  QuestBoardInformationText_c *v5; // x8
  struct QuestBoardInformationText_StaticFields *static_fields; // x9
  struct QuestBoardInformationText_StaticFields *v7; // x9
  struct QuestBoardInformationText_StaticFields *v8; // x9

  if ( (byte_4A4B238 & 1) == 0 )
  {
    sub_1B863B8(&QuestBoardInformationText_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_17466/*"caldeagate_notice_{0:00}"*/, v4);
    byte_4A4B238 = 1;
  }
  QuestBoardInformationText_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17466/*"caldeagate_notice_{0:00}"*/;
  sub_1B8635C((CGThumbnailListItem_o *)QuestBoardInformationText_TypeInfo->static_fields, StringLiteral_17466/*"caldeagate_notice_{0:00}"*/, v2, v3);
  v5 = QuestBoardInformationText_TypeInfo;
  static_fields = QuestBoardInformationText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_FRAME_RIGHT_OFFSET.fields.x = 0xC180000043C58000LL;
  static_fields->INFO_FRAME_RIGHT_OFFSET.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->INFO_FRAME_LEFT_OFFSET.fields.x = 0xC1800000C3070000LL;
  v7->INFO_FRAME_LEFT_OFFSET.fields.z = 0.0;
  v8 = v5->static_fields;
  *(_QWORD *)&v8->INFO_FRAME_SIDE_SIZE = 0x1200000050LL;
  v8->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BC2660;
  v8->INFO_LABEL_BASE_WIDTH = 355;
  v5->static_fields->CAMPAIGN_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BC2960;
  __asm { FMOV            V0.4S, #1.0 }
  v5->static_fields->NORMAL_TOP_COLOR = _Q0;
  v5->static_fields->NORMAL_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BC2C70;
  v5->static_fields->CHANGE_START_REMAINING_TIME = 86399LL;
}


void __fastcall QuestBoardInformationText___ctor(
        QuestBoardInformationText_o *this,
        System_String_o *dispText,
        int64_t time,
        bool isCampaign,
        bool isFrameBg,
        TerminalBoardOptionTextData_o *dispTextExtend,
        const MethodInfo *method)
{
  bool v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  v12 = isCampaign;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dispText = dispText;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)dispText, v13, v14);
  this->fields.dispTextExtend = dispTextExtend;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispTextExtend, (int32_t)dispTextExtend, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = v12;
  this->fields.isColorSetting = 0;
  *(_QWORD *)&this->fields.color.fields.b = 0LL;
  *(_QWORD *)&this->fields.color.fields.r = 0LL;
  *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
  *(_QWORD *)&this->fields.textOffset.fields.x = 0LL;
  *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
  this->fields.textOffset.fields.z = 0.0;
  this->fields.boardId = -1;
  this->fields.isFrameBg = isFrameBg;
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v17);
}


void __fastcall QuestBoardInformationText___ctor_34701876(
        QuestBoardInformationText_o *this,
        System_String_o *inDispText,
        int64_t inTime,
        int64_t checkTime,
        System_String_o *defaultColor,
        System_String_o *changedColor,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  QuestBoardInformationText_o *v15; // x0
  const MethodInfo *v16; // x4
  struct QuestBoardInformationText_TimeData_array *TimeDataList; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dispText = inDispText;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)inDispText, v13, v14);
  this->fields.time = inTime;
  TimeDataList = QuestBoardInformationText__CreateTimeDataList(v15, inTime, defaultColor, changedColor, v16);
  this->fields.timeDataList = TimeDataList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.timeDataList, (int32_t)TimeDataList, v18, v19);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v20);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v21);
}


void __fastcall QuestBoardInformationText___ctor_34702792(
        QuestBoardInformationText_o *this,
        BoardMessageEntity_o *boardMessageEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  bool IsLeft; // w0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)boardMessageEntity, v13, v14);
  this->fields.dispText = dispText;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)dispText, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCampaignEnt, (int32_t)eventCampaignEnt, v17, v18);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v19);
  if ( boardMessageEntity )
    IsLeft = BoardMessageEntity__IsLeft(boardMessageEntity, 0LL);
  else
    IsLeft = 0;
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, IsLeft, v20);
}


void __fastcall QuestBoardInformationText___ctor_34702960(
        QuestBoardInformationText_o *this,
        EventEntity_o *eventEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEntity = eventEntity;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventEntity, (int32_t)eventEntity, v13, v14);
  this->fields.dispText = dispText;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)dispText, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventCampaignEnt, (int32_t)eventCampaignEnt, v17, v18);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v19);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v20);
}


void __fastcall QuestBoardInformationText__ChangeBehindText(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestBoardInformationText_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t *eventCampaignEnt; // x8
  struct BoardMessageEntity_o *boardMessageEnt; // x9
  int v10; // s8
  TerminalBoardOptionTextData_o *v11; // x19
  __int64 v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 RestTime2; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x21
  TerminalBoardOptionTextData_o *v21; // x0
  System_Object_array *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct TerminalBoardOptionTextData_o *v25; // x20
  int v26; // w22
  __int64 v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x22
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v45; // x0
  int64_t time; // x21
  __int64 v47; // x19
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x21
  int32_t v51; // w1
  __int64 v52; // x0
  int v53; // [xsp+Ch] [xbp-44h] BYREF
  int v54; // [xsp+18h] [xbp-38h] BYREF
  int v55; // [xsp+1Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4A4B230 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&object___TypeInfo, v5);
    sub_1B863B8(&float_TypeInfo, v6);
    this = (QuestBoardInformationText_o *)sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4B230 = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v45 = sub_1B86460(object___TypeInfo, 1LL);
    time = v3->fields.time;
    v47 = v45;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1LL, 0LL);
    if ( !v47 )
      goto LABEL_39;
    v50 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1B864F4(RestTime2, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v47 + 24) )
      {
        *(_QWORD *)(v47 + 32) = v50;
        sub_1B8635C((CGThumbnailListItem_o *)(v47 + 32), v50, v48, v49);
        if ( dispTextExtend )
        {
          TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, (System_Object_array *)v47, 0LL);
          return;
        }
        goto LABEL_39;
      }
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  boardMessageEnt = v3->fields.boardMessageEnt;
  *(float *)&v10 = (float)eventCampaignEnt[12] / 1000.0;
  if ( boardMessageEnt && boardMessageEnt->fields.referenceType == 5 )
  {
    v11 = v3->fields.dispTextExtend;
    v12 = sub_1B86460(object___TypeInfo, 1LL);
    v55 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v55, v13, v14, v15);
    if ( !v12 )
      goto LABEL_39;
    v20 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1B864F4(RestTime2, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v12 + 24) )
      {
        *(_QWORD *)(v12 + 32) = v20;
        sub_1B8635C((CGThumbnailListItem_o *)(v12 + 32), v20, v18, v19);
        if ( v11 )
        {
          v21 = v11;
          v22 = (System_Object_array *)v12;
LABEL_27:
          TerminalBoardOptionTextData__SetParamsToBehindText(v21, v22, 0LL);
          return;
        }
        goto LABEL_39;
      }
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  if ( v3->fields.eventEntity && eventCampaignEnt[5] == 26 )
  {
    RestTime2 = QuestBoardInformationText__GetDailyDropUpRestCount(this, eventCampaignEnt[4], v2);
    v25 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v25 )
      {
        v51 = (int)StringLiteral_1/*""*/;
        v25->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1B8635C((CGThumbnailListItem_o *)&v25->fields._BehindText_k__BackingField, v51, v23, v24);
        return;
      }
      goto LABEL_39;
    }
    v26 = RestTime2;
    v27 = sub_1B86460(object___TypeInfo, 3LL);
    v54 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v54, v28, v29, v30);
    if ( !v27 )
      goto LABEL_39;
    v33 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1B864F4(RestTime2, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_40;
      *(_QWORD *)(v27 + 32) = v33;
      sub_1B8635C((CGThumbnailListItem_o *)(v27 + 32), v33, v31, v32);
      v53 = v26;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v53, v34, v35, v36);
      v39 = RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_1B864F4(RestTime2, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v27 + 24) <= 1u )
          goto LABEL_40;
        *(_QWORD *)(v27 + 40) = v39;
        sub_1B8635C((CGThumbnailListItem_o *)(v27 + 40), v39, v37, v38);
        RestTime2 = (__int64)QuestBoardInformationText__GetDailyDropUpRestTimeStr(v3, v40);
        v43 = RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_1B864F4(RestTime2, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v27 + 24) > 2u )
          {
            *(_QWORD *)(v27 + 48) = v43;
            sub_1B8635C((CGThumbnailListItem_o *)(v27 + 48), v43, v41, v42);
            if ( v25 )
            {
              v21 = v25;
              v22 = (System_Object_array *)v27;
              goto LABEL_27;
            }
LABEL_39:
            sub_1B86614(RestTime2, v17);
          }
LABEL_40:
          sub_1B8661C(RestTime2, v17);
        }
      }
    }
LABEL_41:
    v52 = sub_1B86638();
    sub_1B864E0(v52, 0LL);
  }
}


bool __fastcall QuestBoardInformationText__ChangeText(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        const MethodInfo *method)
{
  BoardOptionTextWithIconComponent_o *behindLabelText; // x0
  BoardOptionTextWithIconComponent_o *v6; // x21
  const MethodInfo *v7; // x1
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8

  if ( (byte_4A4B22F & 1) == 0 )
  {
    sub_1B863B8(&QuestBoardInformationText_TypeInfo, component);
    byte_4A4B22F = 1;
  }
  behindLabelText = (BoardOptionTextWithIconComponent_o *)QuestBoardInformationText_TypeInfo;
  v6 = *component;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
  if ( !v6
    || (BoardOptionTextWithIconComponent__set_LabelFontSize(
          v6,
          QuestBoardInformationText_TypeInfo->static_fields->INFO_FONT_SIZE,
          0LL),
        QuestBoardInformationText__ChangeBehindText(this, v7),
        (behindLabelText = *component) == 0LL)
    || (behindLabelText = (BoardOptionTextWithIconComponent_o *)BoardOptionTextWithIconComponent__get_behindLabelText(
                                                                  behindLabelText,
                                                                  0LL),
        (dispTextExtend = this->fields.dispTextExtend) == 0LL)
    || (this->fields.isChangedText = System_String__op_Inequality(
                                       (System_String_o *)behindLabelText,
                                       dispTextExtend->fields._BehindText_k__BackingField,
                                       0LL),
        (behindLabelText = *component) == 0LL) )
  {
    sub_1B86614(behindLabelText, component);
  }
  BoardOptionTextWithIconComponent__UpdateUI(
    behindLabelText,
    this->fields.dispTextExtend,
    QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH,
    0LL);
  return this->fields.isChangedText;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformationText__CreateDispTextExtendIfNotExists(
        QuestBoardInformationText_o *this,
        bool isLeft,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *dispText; // x22
  TerminalBoardOptionTextData_o *v7; // x23
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4B231 & 1) == 0 )
  {
    sub_1B863B8(&TerminalBoardOptionTextData_TypeInfo, isLeft);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    byte_4A4B231 = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v7 = (TerminalBoardOptionTextData_o *)sub_1B86604(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v7, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, isLeft, 0LL);
    this->fields.dispTextExtend = v7;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.dispTextExtend, (int32_t)v7, v8, v9);
  }
}


QuestBoardInformationText_TimeData_array *__fastcall QuestBoardInformationText__CreateTimeDataList(
        QuestBoardInformationText_o *this,
        int64_t endTime,
        System_String_o *defaultColor,
        System_String_o *changedColor,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  QuestBoardInformationText_TimeData_array *v10; // x20
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  QuestBoardInformationText_c *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v27; // x0

  if ( (byte_4A4B237 & 1) == 0 )
  {
    sub_1B863B8(&QuestBoardInformationText_TypeInfo, endTime);
    sub_1B863B8(&QuestBoardInformationText_TimeData___TypeInfo, v8);
    sub_1B863B8(&QuestBoardInformationText_TimeData_TypeInfo, v9);
    byte_4A4B237 = 1;
  }
  v10 = (QuestBoardInformationText_TimeData_array *)sub_1B86460(QuestBoardInformationText_TimeData___TypeInfo, 2LL);
  v11 = sub_1B86604(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 24) = defaultColor;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)defaultColor, v14, v15);
  if ( !v10 )
    goto LABEL_13;
  v16 = sub_1B864F4(v11, v10->obj.klass->_1.element_class);
  if ( !v16 )
    goto LABEL_14;
  if ( !v10->max_length )
    goto LABEL_15;
  v10->m_Items[0] = (QuestBoardInformationText_TimeData_o *)v11;
  sub_1B8635C((CGThumbnailListItem_o *)v10->m_Items, v11, v18, v19);
  v20 = sub_1B86604(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
LABEL_13:
    sub_1B86614(v12, v13);
  *(_QWORD *)(v20 + 24) = changedColor;
  sub_1B8635C((CGThumbnailListItem_o *)(v20 + 24), (int32_t)changedColor, v21, v22);
  v23 = QuestBoardInformationText_TypeInfo;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
    v23 = QuestBoardInformationText_TypeInfo;
  }
  *(_QWORD *)(v20 + 16) = endTime - v23->static_fields->CHANGE_START_REMAINING_TIME;
  v16 = sub_1B864F4(v20, v10->obj.klass->_1.element_class);
  if ( !v16 )
  {
LABEL_14:
    v27 = sub_1B86638();
    sub_1B864E0(v27, 0LL);
  }
  if ( v10->max_length <= 1 )
LABEL_15:
    sub_1B8661C(v16, v17);
  v10->m_Items[1] = (QuestBoardInformationText_TimeData_o *)v20;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->m_Items[1], v20, v24, v25);
  return v10;
}


BoardMessageEntity_TimeData_o *__fastcall QuestBoardInformationText__GetBoardMessageScriptData(
        QuestBoardInformationText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_TimeData_o *result; // x0

  result = (BoardMessageEntity_TimeData_o *)this->fields.boardMessageEnt;
  if ( result )
    return BoardMessageEntity__GetScriptDataCondCheck((BoardMessageEntity_o *)result, checkTime, 0LL);
  return result;
}


QuestBoardInformationText_TimeData_o *__fastcall QuestBoardInformationText__GetCurrentTimeData(
        QuestBoardInformationText_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct QuestBoardInformationText_TimeData_array *timeDataList; // x8
  __int64 v4; // x9
  unsigned int v5; // w10
  unsigned int v6; // w11
  __int64 v7; // x12
  QuestBoardInformationText_TimeData_o *v8; // x13
  int64_t v9; // x13
  _BOOL4 v10; // w14
  _BOOL4 v11; // w15

  timeDataList = this->fields.timeDataList;
  if ( !timeDataList )
    return 0LL;
  v4 = *(_QWORD *)&timeDataList->max_length;
  if ( !v4 )
    return 0LL;
  if ( (int)v4 < 1 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v8 = timeDataList->m_Items[v6];
      if ( !v8 )
        sub_1B86614(this, nowTime);
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v5 = v6;
      ++v6;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (_DWORD)v4 != v6 );
  }
  if ( v5 >= (unsigned int)v4 )
    sub_1B8661C(this, nowTime);
  return timeDataList->m_Items[v5];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBoardInformationText__GetDailyDropUpRestCount(
        QuestBoardInformationText_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *Entity; // x19
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w22
  int32_t Value; // w4
  int32_t v17; // w0
  int64_t NextDayTime_39523668; // x0
  uint64_t v19; // x20
  uint64_t v20; // x21
  uint64_t v21; // x20
  uint64_t v22; // x21
  int32_t v23; // w0
  System_DateTime_o t1; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x1.8
  System_DateTime_o v35; // 0:x1.8
  System_DateTime_o v36; // 0:x1.8

  if ( (byte_4A4B232 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&System_DateTime_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_4926/*"DAILY_DROP_UP_RESET_AT"*/, v7);
    sub_1B863B8(&StringLiteral_4925/*"DAILY_DROP_UP_COUNT"*/, v8);
    byte_4A4B232 = 1;
  }
  t1.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    byte_4A48C25 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_26:
    sub_1B86614(Instance, v10);
  Entity = UserEventMaster__GetEntity(
             (UserEventMaster_o *)MasterData_object,
             *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
             eventId,
             0LL);
  if ( Entity )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v27.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v27, 0LL);
    v28.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v28, 0LL);
    v29.fields._dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v29, 0LL);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4926/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    v30.fields._dateData = (uint64_t)&t1;
    System_DateTime___ctor_63034776(v30, Year, Month, Day, Value, 0, 0, 0LL);
    v17 = ConstantMaster__getValue((System_String_o *)StringLiteral_4926/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    NextDayTime_39523668 = NetworkManager__getNextDayTime_39523668(v17, 0LL);
    v19 = NetworkManager__getServerDateTime_39522968(NextDayTime_39523668, 0LL).fields._dateData;
    v20 = NetworkManager__getServerDateTime_39522968(Entity->fields.updatedAt, 0LL).fields._dateData;
    v34.fields._dateData = v20;
    v31.fields._dateData = t1.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v31, v34, 0LL) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v32.fields._dateData = v20;
      v35.fields._dateData = v19;
      if ( System_DateTime__op_LessThan(v32, v35, 0LL) )
        goto LABEL_23;
    }
    v22 = t1.fields._dateData;
    v21 = dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v33.fields._dateData = v21;
    v36.fields._dateData = v22;
    if ( System_DateTime__op_LessThan(v33, v36, 0LL) )
LABEL_23:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v23 = ConstantMaster__getValue((System_String_o *)StringLiteral_4925/*"DAILY_DROP_UP_COUNT"*/, 0LL);
  return (v23 - (_DWORD)Entity) & ~((v23 - (int)Entity) >> 31);
}


System_String_o *__fastcall QuestBoardInformationText__GetDailyDropUpRestTimeStr(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Value; // w20
  int64_t NextDayTime_39523668; // x0
  int64_t time; // x19
  uint32_t cctor_finished; // w9
  int64_t v9; // x20

  if ( (byte_4A4B233 & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&StringLiteral_4926/*"DAILY_DROP_UP_RESET_AT"*/, v4);
    byte_4A4B233 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4926/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayTime_39523668 = NetworkManager__getNextDayTime_39523668(Value, 0LL);
  time = this->fields.time;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( time >= NextDayTime_39523668 )
  {
    v9 = NextDayTime_39523668;
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    time = v9;
  }
  else if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__GetRestTime2(time, -1LL, 0LL);
}


EventEntity_ScriptData_o *__fastcall QuestBoardInformationText__GetEventScriptData(
        QuestBoardInformationText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  EventEntity_ScriptData_o *result; // x0

  result = (EventEntity_ScriptData_o *)this->fields.eventEntity;
  if ( result )
    return EventEntity__GetScriptDataCondCheck((EventEntity_o *)result, checkTime, 0LL);
  return result;
}


bool __fastcall QuestBoardInformationText__IsQuestOpened(QuestBoardInformationText_o *this, const MethodInfo *method)
{
  struct BoardMessageEntity_o *boardMessageEnt; // x8
  int64_t time; // x19

  if ( (byte_4A4B236 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A4B236 = 1;
  }
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( !boardMessageEnt || boardMessageEnt->fields.referenceType != 2 )
    return 0;
  time = this->fields.time;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return time < NetworkManager__getTime(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformationText__SetFrameSprite(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        int32_t boardId,
        UnityEngine_Vector3_o boardOffset,
        int32_t sideSizeOffset,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s9
  float x; // s8
  BoardOptionTextWithIconComponent_o **v13; // x21
  __int64 v15; // x1
  __int64 v16; // x1
  BoardOptionTextWithIconComponent_o *IsTextEmpty; // x0
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  QuestBoardInformationText_c *v22; // x0
  struct QuestBoardInformationText_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct QuestBoardInformationText_StaticFields *v27; // x10
  float v28; // s11
  float v29; // s12
  float v30; // s13
  System_String_o *QUEST_BOARD_INFO_FRAME_NAME; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  UISprite_o *v34; // x24
  System_String_o *v35; // x23
  int32_t BehindLabelWrappedWidth; // w0
  QuestBoardInformationText_c *v37; // x8
  int32_t INFO_LABEL_BASE_WIDTH; // w23
  int32_t v39; // w22
  int32_t mWidth; // w8
  bool v41; // vf
  int v42; // w8
  struct TerminalBoardOptionTextData_o *v43; // x9
  _BOOL4 IsLeft_k__BackingField; // w9
  float v45; // s1
  float v46; // s0
  int v47; // w8
  int v48; // w9
  int32_t v49; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  v13 = component;
  if ( (byte_4A4B234 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, component);
    sub_1B863B8(&int_TypeInfo, v15);
    sub_1B863B8(&QuestBoardInformationText_TypeInfo, v16);
    byte_4A4B234 = 1;
  }
  if ( (boardId & 0x80000000) != 0 )
    goto LABEL_6;
  IsTextEmpty = *v13;
  if ( !*v13 )
    goto LABEL_51;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)BoardOptionTextWithIconComponent__IsTextEmpty(IsTextEmpty, 0LL);
  if ( ((unsigned __int8)IsTextEmpty & 1) != 0 )
  {
LABEL_6:
    IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
    if ( *frameSprite )
    {
      IsTextEmpty = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)IsTextEmpty,
                                                            0LL);
      if ( IsTextEmpty )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTextEmpty, 0, 0LL);
        IsTextEmpty = *v13;
        if ( *v13 )
        {
          BoardOptionTextWithIconComponent__SetAnchorOffset(IsTextEmpty, 0, 0LL);
          return;
        }
      }
    }
LABEL_51:
    sub_1B86614(IsTextEmpty, component);
  }
  dispTextExtend = this->fields.dispTextExtend;
  if ( !dispTextExtend )
    goto LABEL_51;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_51;
  if ( dispTextExtend->fields._IsLeft_k__BackingField )
  {
    UIWidget__set_pivot((UIWidget_o *)IsTextEmpty, 3, 0LL);
    v22 = QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v22 = QuestBoardInformationText_TypeInfo;
    }
    static_fields = v22->static_fields;
    p_x = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.x;
    p_y = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.y;
    p_z = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.z;
  }
  else
  {
    UIWidget__set_pivot((UIWidget_o *)IsTextEmpty, 5, 0LL);
    v22 = QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v22 = QuestBoardInformationText_TypeInfo;
    }
    v27 = v22->static_fields;
    p_x = &v27->INFO_FRAME_RIGHT_OFFSET.fields.x;
    p_y = &v27->INFO_FRAME_RIGHT_OFFSET.fields.y;
    p_z = &v27->INFO_FRAME_RIGHT_OFFSET.fields.z;
  }
  v28 = *p_x;
  v29 = *p_y;
  v30 = *p_z;
  if ( !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = QuestBoardInformationText_TypeInfo;
  }
  QUEST_BOARD_INFO_FRAME_NAME = v22->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  v49 = boardId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v19, v20, v21);
  v33 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v32, 0LL);
  v34 = *frameSprite;
  v35 = v33;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v34, v35, 0LL);
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_51;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)IsTextEmpty,
                                                        0LL);
  if ( !IsTextEmpty )
    goto LABEL_51;
  v50.fields.z = z + v30;
  v50.fields.y = y + v29;
  v50.fields.x = x + v28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsTextEmpty, v50, 0LL);
  IsTextEmpty = *v13;
  if ( !*v13 )
    goto LABEL_51;
  BehindLabelWrappedWidth = BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(IsTextEmpty, 0LL);
  v37 = QuestBoardInformationText_TypeInfo;
  if ( QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH >= BehindLabelWrappedWidth )
  {
    INFO_LABEL_BASE_WIDTH = BehindLabelWrappedWidth;
  }
  else
  {
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v37 = QuestBoardInformationText_TypeInfo;
    }
    INFO_LABEL_BASE_WIDTH = QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  if ( !v37->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v37);
    v37 = QuestBoardInformationText_TypeInfo;
  }
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_51;
  v39 = INFO_LABEL_BASE_WIDTH + sideSizeOffset + v37->static_fields->INFO_FRAME_SIDE_SIZE;
  UIWidget__set_width((UIWidget_o *)IsTextEmpty, v39, 0LL);
  if ( !this->fields.isFrameBg )
    goto LABEL_46;
  if ( !*frameSprite )
    goto LABEL_51;
  mWidth = (*frameSprite)->fields.mWidth;
  v41 = __OFSUB__(mWidth, v39);
  v42 = mWidth - v39;
  if ( (v42 < 0) ^ v41 | (v42 == 0) )
  {
LABEL_46:
    IsTextEmpty = *v13;
    if ( !*v13 )
      goto LABEL_51;
    LODWORD(component) = 0;
  }
  else
  {
    v43 = this->fields.dispTextExtend;
    if ( !v43 )
      goto LABEL_51;
    IsLeft_k__BackingField = v43->fields._IsLeft_k__BackingField;
    v45 = INFINITY;
    v46 = -x;
    v47 = v42 + (v42 < 0);
    if ( !IsLeft_k__BackingField )
      v45 = -INFINITY;
    if ( IsLeft_k__BackingField )
      v46 = x;
    v48 = (int)v46;
    if ( x == v45 )
      v48 = 0x80000000;
    component = (BoardOptionTextWithIconComponent_o **)(unsigned int)(v48 + (v47 >> 1));
    this->fields.initFrameOffset = (int)component;
    IsTextEmpty = *v13;
    if ( !*v13 )
      goto LABEL_51;
  }
  BoardOptionTextWithIconComponent__SetAnchorOffset(IsTextEmpty, (int32_t)component, 0LL);
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_51;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)IsTextEmpty,
                                                        0LL);
  if ( !IsTextEmpty )
    goto LABEL_51;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsTextEmpty, this->fields.isFrameBg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformationText__SetParam(
        QuestBoardInformationText_o *this,
        bool isColorSetting,
        UnityEngine_Color_o color,
        int32_t boardId,
        int32_t sideSizeOffset,
        UnityEngine_Vector3_o boardOffset,
        UnityEngine_Vector3_o textOffset,
        bool isFrameBg,
        const MethodInfo *method)
{
  this->fields.color = color;
  this->fields.boardId = boardId;
  this->fields.sideSizeOffset = sideSizeOffset;
  this->fields.boardOffset = boardOffset;
  this->fields.isColorSetting = isColorSetting;
  this->fields.textOffset = textOffset;
  this->fields.isFrameBg = isFrameBg;
}


void __fastcall QuestBoardInformationText__SetParamFromScript(
        QuestBoardInformationText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_o *boardMessageEnt; // x0
  BoardMessageEntity_TimeData_o *v6; // x20
  EventEntity_o *eventEntity; // x0
  EventEntity_ScriptData_o *v8; // x22
  const MethodInfo *v9; // x2
  QuestBoardInformationText_TimeData_o *CurrentTimeData; // x0
  bool v11; // w0
  struct UnityEngine_Color_o v12; // q0
  __int64 v13; // d1
  __int64 v14; // d2
  float z; // s3
  bool isFrameBg; // w8
  bool v17; // w0
  struct UnityEngine_Color_o v18; // q0
  __int64 v19; // d1
  __int128 v20; // q2
  __int64 v21; // d3
  bool v22; // w0
  struct UnityEngine_Color_o v23; // q0
  unsigned __int128 v29; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o v31; // [xsp+20h] [xbp-40h] BYREF

  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v31.fields.r = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  v29 = 0uLL;
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( boardMessageEnt )
    v6 = BoardMessageEntity__GetScriptDataCondCheck(boardMessageEnt, checkTime, 0LL);
  else
    v6 = 0LL;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
  {
    CurrentTimeData = QuestBoardInformationText__GetCurrentTimeData(this, checkTime, method);
    if ( !v6 )
      goto LABEL_11;
LABEL_9:
    v17 = UnityEngine_ColorUtility__TryParseHtmlString(v6->fields.color, &v31, 0LL);
    v18 = v31;
    v19 = *(_QWORD *)&v6->fields.imgId;
    v20 = *(_OWORD *)&v6->fields.frameOffset.fields.x;
    v21 = *(_QWORD *)&v6->fields.textOffset.fields.y;
    isFrameBg = v6->fields.isFrameBg;
    this->fields.isColorSetting = v17;
    this->fields.color = v18;
    *(_QWORD *)&this->fields.boardId = v19;
    *(_OWORD *)&this->fields.boardOffset.fields.x = v20;
    *(_QWORD *)&this->fields.textOffset.fields.y = v21;
    goto LABEL_10;
  }
  v8 = EventEntity__GetScriptDataCondCheck(eventEntity, checkTime, 0LL);
  CurrentTimeData = QuestBoardInformationText__GetCurrentTimeData(this, checkTime, v9);
  if ( v6 )
    goto LABEL_9;
  if ( v8 )
  {
    v11 = UnityEngine_ColorUtility__TryParseHtmlString(v8->fields.color, &color, 0LL);
    v12 = color;
    v13 = *(_QWORD *)&v8->fields.imgId;
    v14 = *(_QWORD *)&v8->fields.frameOffset.fields.x;
    z = v8->fields.frameOffset.fields.z;
    isFrameBg = v8->fields.isFrameBg;
    *(_QWORD *)&this->fields.textOffset.fields.x = 0LL;
    this->fields.textOffset.fields.z = 0.0;
    this->fields.isColorSetting = v11;
    this->fields.color = v12;
    *(_QWORD *)&this->fields.boardId = v13;
    *(_QWORD *)&this->fields.boardOffset.fields.x = v14;
    this->fields.boardOffset.fields.z = z;
LABEL_10:
    this->fields.isFrameBg = isFrameBg;
    return;
  }
LABEL_11:
  if ( CurrentTimeData )
  {
    v22 = UnityEngine_ColorUtility__TryParseHtmlString(CurrentTimeData->fields.color, (UnityEngine_Color_o *)&v29, 0LL);
    v23 = (struct UnityEngine_Color_o)v29;
    this->fields.textOffset.fields.z = 0.0;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
    *(_QWORD *)&this->fields.textOffset.fields.x = 0LL;
    *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
    this->fields.isColorSetting = v22;
    this->fields.boardId = -1;
    this->fields.color = v23;
  }
  else
  {
    __asm { FMOV            V0.4S, #1.0 }
    this->fields.isColorSetting = 0;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
    *(_QWORD *)&this->fields.textOffset.fields.x = 0LL;
    *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
    this->fields.textOffset.fields.z = 0.0;
    this->fields.color = _Q0;
    this->fields.boardId = -1;
  }
  this->fields.isFrameBg = 1;
}


void __fastcall QuestBoardInformationText__SetTextColor(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        const MethodInfo *method)
{
  BoardOptionTextWithIconComponent_o *v5; // x0
  struct UnityEngine_Color_o *p_CAMPAIGN_BOTTOM_COLOR; // x23
  float *p_g; // x22
  float *p_b; // x21
  float *p_a; // x20
  float a; // t1
  _BOOL4 isCampaign; // w22
  BoardOptionTextWithIconComponent_o *v12; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  struct QuestBoardInformationText_StaticFields *static_fields; // x8
  struct QuestBoardInformationText_StaticFields *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A4B235 & 1) == 0 )
  {
    sub_1B863B8(&QuestBoardInformationText_TypeInfo, component);
    byte_4A4B235 = 1;
  }
  if ( !this->fields.isColorSetting )
  {
    isCampaign = this->fields.isCampaign;
    v12 = *component;
    v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformationText_TypeInfo;
    }
    m_CancellationTokenSource = v5[2].fields.m_CancellationTokenSource;
    if ( isCampaign )
    {
      if ( v12 )
      {
        BoardOptionTextWithIconComponent__set_LabelGradientTop(
          v12,
          *(UnityEngine_Color_o *)(&m_CancellationTokenSource->fields._disposed + 4),
          0LL);
        v5 = *component;
        if ( *component )
        {
          static_fields = QuestBoardInformationText_TypeInfo->static_fields;
          p_a = &static_fields->CAMPAIGN_BOTTOM_COLOR.fields.a;
          p_b = &static_fields->CAMPAIGN_BOTTOM_COLOR.fields.b;
          p_g = &static_fields->CAMPAIGN_BOTTOM_COLOR.fields.g;
          p_CAMPAIGN_BOTTOM_COLOR = &static_fields->CAMPAIGN_BOTTOM_COLOR;
          goto LABEL_16;
        }
      }
    }
    else if ( v12 )
    {
      BoardOptionTextWithIconComponent__set_LabelGradientTop(
        v12,
        *(UnityEngine_Color_o *)((char *)&m_CancellationTokenSource[1].monitor + 4),
        0LL);
      v5 = *component;
      if ( *component )
      {
        v15 = QuestBoardInformationText_TypeInfo->static_fields;
        p_a = &v15->NORMAL_BOTTOM_COLOR.fields.a;
        p_b = &v15->NORMAL_BOTTOM_COLOR.fields.b;
        p_g = &v15->NORMAL_BOTTOM_COLOR.fields.g;
        p_CAMPAIGN_BOTTOM_COLOR = &v15->NORMAL_BOTTOM_COLOR;
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_1B86614(v5, component);
  }
  v5 = *component;
  if ( !*component )
    goto LABEL_17;
  p_CAMPAIGN_BOTTOM_COLOR = &this->fields.color;
  p_g = &this->fields.color.fields.g;
  p_b = &this->fields.color.fields.b;
  a = this->fields.color.fields.a;
  p_a = &this->fields.color.fields.a;
  v16.fields.a = a;
  v16.fields.b = *p_b;
  v16.fields.g = *p_g;
  v16.fields.r = p_CAMPAIGN_BOTTOM_COLOR->fields.r;
  BoardOptionTextWithIconComponent__set_LabelGradientTop(v5, v16, 0LL);
  v5 = *component;
  if ( !*component )
    goto LABEL_17;
LABEL_16:
  v17.fields.a = *p_a;
  v17.fields.b = *p_b;
  v17.fields.g = *p_g;
  v17.fields.r = p_CAMPAIGN_BOTTOM_COLOR->fields.r;
  BoardOptionTextWithIconComponent__set_LabelGradientBottom(v5, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformationText__SetTextOffset(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UnityEngine_Vector3_o textOffset,
        const MethodInfo *method)
{
  QuestBoardInformationText_o *v5; // x19
  float x; // s8
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  _BOOL4 IsLeft_k__BackingField; // w8
  float v9; // s0
  float v10; // s1
  int v11; // w9

  if ( !*component )
    goto LABEL_12;
  v5 = this;
  x = textOffset.fields.x;
  this = (QuestBoardInformationText_o *)BoardOptionTextWithIconComponent__IsTextEmpty(*component, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  dispTextExtend = v5->fields.dispTextExtend;
  if ( !dispTextExtend || (this = (QuestBoardInformationText_o *)*component) == 0LL )
LABEL_12:
    sub_1B86614(this, component);
  IsLeft_k__BackingField = dispTextExtend->fields._IsLeft_k__BackingField;
  v9 = INFINITY;
  if ( !IsLeft_k__BackingField )
    v9 = -INFINITY;
  v10 = -x;
  if ( IsLeft_k__BackingField )
    v10 = x;
  v11 = (int)v10;
  if ( x == v9 )
    v11 = 0x80000000;
  BoardOptionTextWithIconComponent__SetAnchorOffset(
    (BoardOptionTextWithIconComponent_o *)this,
    v5->fields.initFrameOffset + v11,
    0LL);
}


void __fastcall QuestBoardInformationText__SetTime(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x5
  const MethodInfo *v9; // x2

  QuestBoardInformationText__SetTextColor(this, component, (const MethodInfo *)frameSprite);
  QuestBoardInformationText__ChangeText(this, component, v7);
  QuestBoardInformationText__SetFrameSprite(
    this,
    component,
    frameSprite,
    this->fields.boardId,
    this->fields.boardOffset,
    this->fields.sideSizeOffset,
    v8);
  QuestBoardInformationText__SetTextOffset(this, component, this->fields.textOffset, v9);
}


void __fastcall QuestBoardInformationText__SetTime_34704964(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        int64_t checkTime,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x5
  const MethodInfo *v11; // x2

  QuestBoardInformationText__SetParamFromScript(this, checkTime, (const MethodInfo *)frameSprite);
  QuestBoardInformationText__SetTextColor(this, component, v8);
  QuestBoardInformationText__ChangeText(this, component, v9);
  QuestBoardInformationText__SetFrameSprite(
    this,
    component,
    frameSprite,
    this->fields.boardId,
    this->fields.boardOffset,
    this->fields.sideSizeOffset,
    v10);
  QuestBoardInformationText__SetTextOffset(this, component, this->fields.textOffset, v11);
}


void __fastcall QuestBoardInformationText__Update(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        int64_t checkTime,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x2

  QuestBoardInformationText__SetParamFromScript(this, checkTime, (const MethodInfo *)frameSprite);
  QuestBoardInformationText__SetTextColor(this, component, v8);
  QuestBoardInformationText__SetFrameSprite(
    this,
    component,
    frameSprite,
    this->fields.boardId,
    this->fields.boardOffset,
    this->fields.sideSizeOffset,
    v9);
  QuestBoardInformationText__SetTextOffset(this, component, this->fields.textOffset, v10);
}


void __fastcall QuestBoardInformationText_TimeData___ctor(
        QuestBoardInformationText_TimeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}