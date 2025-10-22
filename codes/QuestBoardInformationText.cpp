void QuestBoardInformationText___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  QuestBoardInformationText_c *v3; // x8
  struct QuestBoardInformationText_StaticFields *static_fields; // x9
  struct QuestBoardInformationText_StaticFields *v5; // x9
  struct QuestBoardInformationText_StaticFields *v6; // x9

  if ( (byte_4C539E1 & 1) == 0 )
  {
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    sub_1C3E564(&StringLiteral_17710/*"caldeagate_notice_{0:00}"*/);
    byte_4C539E1 = 1;
  }
  QuestBoardInformationText_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17710/*"caldeagate_notice_{0:00}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)QuestBoardInformationText_TypeInfo->static_fields, StringLiteral_17710/*"caldeagate_notice_{0:00}"*/, v1, v2);
  v3 = QuestBoardInformationText_TypeInfo;
  static_fields = QuestBoardInformationText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_FRAME_RIGHT_OFFSET.fields.x = 0xC180000043C58000LL;
  static_fields->INFO_FRAME_RIGHT_OFFSET.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->INFO_FRAME_LEFT_OFFSET.fields.x = 0xC1800000C3070000LL;
  v5->INFO_FRAME_LEFT_OFFSET.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->INFO_FRAME_SIDE_SIZE = 0x1200000050LL;
  v6->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_C11AB0;
  v6->INFO_LABEL_BASE_WIDTH = 355;
  v3->static_fields->CAMPAIGN_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_C11DE0;
  __asm { FMOV            V0.4S, #1.0 }
  v3->static_fields->NORMAL_TOP_COLOR = _Q0;
  v3->static_fields->NORMAL_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_C12130;
  v3->static_fields->CHANGE_START_REMAINING_TIME = 86399;
}


void QuestBoardInformationText___ctor(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.dispText = dispText;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)dispText, v13, v14);
  this->fields.dispTextExtend = dispTextExtend;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dispTextExtend, (int32_t)dispTextExtend, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = v12;
  this->fields.isColorSetting = 0;
  *(_QWORD *)&this->fields.color.fields.b = 0;
  *(_QWORD *)&this->fields.color.fields.r = 0;
  *(_QWORD *)&this->fields.boardOffset.fields.y = 0;
  *(_QWORD *)&this->fields.textOffset.fields.x = 0;
  *(_QWORD *)&this->fields.sideSizeOffset = 0;
  this->fields.textOffset.fields.z = 0.0;
  this->fields.boardId = -1;
  this->fields.isFrameBg = isFrameBg;
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v17);
}


void QuestBoardInformationText___ctor_36513108(
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.dispText = inDispText;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)inDispText, v13, v14);
  this->fields.time = inTime;
  TimeDataList = QuestBoardInformationText__CreateTimeDataList(v15, inTime, defaultColor, changedColor, v16);
  this->fields.timeDataList = TimeDataList;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.timeDataList, (int32_t)TimeDataList, v18, v19);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v20);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v21);
}


void QuestBoardInformationText___ctor_36514024(
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
  int32_t pivotType; // w1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)boardMessageEntity, v13, v14);
  this->fields.dispText = dispText;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)dispText, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventCampaignEnt, (int32_t)eventCampaignEnt, v17, v18);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v19);
  if ( boardMessageEntity )
    pivotType = boardMessageEntity->fields.pivotType;
  else
    pivotType = 0;
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, pivotType, v20);
}


void QuestBoardInformationText___ctor_36514180(
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

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventEntity = eventEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventEntity, (int32_t)eventEntity, v13, v14);
  this->fields.dispText = dispText;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dispText, (int32_t)dispText, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventCampaignEnt, (int32_t)eventCampaignEnt, v17, v18);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v19);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v20);
}


void QuestBoardInformationText__ChangeBehindText(QuestBoardInformationText_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestBoardInformationText_o *v3; // x19
  int32_t *eventCampaignEnt; // x8
  struct BoardMessageEntity_o *boardMessageEnt; // x9
  float v6; // s8
  TerminalBoardOptionTextData_o *v7; // x19
  __int64 v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  __int64 RestTime2; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x21
  TerminalBoardOptionTextData_o *v20; // x0
  System_Object_array *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct TerminalBoardOptionTextData_o *v24; // x20
  int v25; // w22
  __int64 v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x22
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v50; // x0
  int64_t time; // x21
  __int64 v52; // x19
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x21
  int32_t v56; // w1
  __int64 v57; // x0
  int v58; // [xsp+Ch] [xbp-44h] BYREF
  float v59; // [xsp+18h] [xbp-38h] BYREF
  float v60; // [xsp+1Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4C539D9 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    this = (QuestBoardInformationText_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C539D9 = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v50 = sub_1C3E60C(object___TypeInfo, 1);
    time = v3->fields.time;
    v52 = v50;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1, 0);
    if ( !v52 )
      goto LABEL_39;
    v55 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C3E6A0(RestTime2, *(_QWORD *)(*(_QWORD *)v52 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v52 + 24) )
      {
        *(_QWORD *)(v52 + 32) = v55;
        sub_1C3E508((CGThumbnailListItem_o *)(v52 + 32), v55, v53, v54);
        if ( dispTextExtend )
        {
          TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, (System_Object_array *)v52, 0);
          return;
        }
        goto LABEL_39;
      }
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  boardMessageEnt = v3->fields.boardMessageEnt;
  v6 = (float)eventCampaignEnt[12] / 1000.0;
  if ( boardMessageEnt && boardMessageEnt->fields.referenceType == 5 )
  {
    v7 = v3->fields.dispTextExtend;
    v8 = sub_1C3E60C(object___TypeInfo, 1);
    v60 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v60, v9, v10, v11, v12, v13, v14);
    if ( !v8 )
      goto LABEL_39;
    v19 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C3E6A0(RestTime2, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) )
      {
        *(_QWORD *)(v8 + 32) = v19;
        sub_1C3E508((CGThumbnailListItem_o *)(v8 + 32), v19, v17, v18);
        if ( v7 )
        {
          v20 = v7;
          v21 = (System_Object_array *)v8;
LABEL_27:
          TerminalBoardOptionTextData__SetParamsToBehindText(v20, v21, 0);
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
    v24 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v24 )
      {
        v56 = StringLiteral_1/*""*/;
        v24->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C3E508((CGThumbnailListItem_o *)&v24->fields._BehindText_k__BackingField, v56, v22, v23);
        return;
      }
      goto LABEL_39;
    }
    v25 = RestTime2;
    v26 = sub_1C3E60C(object___TypeInfo, 3);
    v59 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v59, v27, v28, v29, v30, v31, v32);
    if ( !v26 )
      goto LABEL_39;
    v35 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C3E6A0(RestTime2, *(_QWORD *)(*(_QWORD *)v26 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_40;
      *(_QWORD *)(v26 + 32) = v35;
      sub_1C3E508((CGThumbnailListItem_o *)(v26 + 32), v35, v33, v34);
      v58 = v25;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v58, v36, v37, v38, v39, v40, v41);
      v44 = RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_1C3E6A0(RestTime2, *(_QWORD *)(*(_QWORD *)v26 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v26 + 24) <= 1u )
          goto LABEL_40;
        *(_QWORD *)(v26 + 40) = v44;
        sub_1C3E508((CGThumbnailListItem_o *)(v26 + 40), v44, v42, v43);
        RestTime2 = (__int64)QuestBoardInformationText__GetDailyDropUpRestTimeStr(v3, v45);
        v48 = RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_1C3E6A0(RestTime2, *(_QWORD *)(*(_QWORD *)v26 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v26 + 24) > 2u )
          {
            *(_QWORD *)(v26 + 48) = v48;
            sub_1C3E508((CGThumbnailListItem_o *)(v26 + 48), v48, v46, v47);
            if ( v24 )
            {
              v20 = v24;
              v21 = (System_Object_array *)v26;
              goto LABEL_27;
            }
LABEL_39:
            sub_1C3E7C0(RestTime2, v16);
          }
LABEL_40:
          sub_1C3E7C8(RestTime2, v16);
        }
      }
    }
LABEL_41:
    v57 = sub_1C3E7E4();
    sub_1C3E68C(v57, 0);
  }
}


bool QuestBoardInformationText__ChangeText(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        const MethodInfo *method)
{
  BoardOptionTextWithIconComponent_o *behindLabelText; // x0
  BoardOptionTextWithIconComponent_o *v6; // x21
  const MethodInfo *v7; // x1
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8

  if ( (byte_4C539D8 & 1) == 0 )
  {
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    byte_4C539D8 = 1;
  }
  behindLabelText = (BoardOptionTextWithIconComponent_o *)QuestBoardInformationText_TypeInfo;
  v6 = *component;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
  if ( !v6
    || (BoardOptionTextWithIconComponent__set_LabelFontSize(
          v6,
          QuestBoardInformationText_TypeInfo->static_fields->INFO_FONT_SIZE,
          0),
        QuestBoardInformationText__ChangeBehindText(this, v7),
        (behindLabelText = *component) == 0)
    || (behindLabelText = (BoardOptionTextWithIconComponent_o *)BoardOptionTextWithIconComponent__get_behindLabelText(
                                                                  behindLabelText,
                                                                  0),
        (dispTextExtend = this->fields.dispTextExtend) == 0)
    || (this->fields.isChangedText = System_String__op_Inequality(
                                       (System_String_o *)behindLabelText,
                                       dispTextExtend->fields._BehindText_k__BackingField,
                                       0),
        (behindLabelText = *component) == 0) )
  {
    sub_1C3E7C0(behindLabelText, component);
  }
  BoardOptionTextWithIconComponent__UpdateUI(
    behindLabelText,
    this->fields.dispTextExtend,
    QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH,
    0);
  return this->fields.isChangedText;
}


void QuestBoardInformationText__CreateDispTextExtendIfNotExists(
        QuestBoardInformationText_o *this,
        int32_t alignment,
        const MethodInfo *method)
{
  System_String_o *dispText; // x22
  TerminalBoardOptionTextData_o *v6; // x23
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C539DA & 1) == 0 )
  {
    sub_1C3E564(&TerminalBoardOptionTextData_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C539DA = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v6 = (TerminalBoardOptionTextData_o *)sub_1C3E7B0(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v6, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, 0, 0, alignment, 0);
    this->fields.dispTextExtend = v6;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.dispTextExtend, (int32_t)v6, v7, v8);
  }
}


QuestBoardInformationText_TimeData_array *QuestBoardInformationText__CreateTimeDataList(
        QuestBoardInformationText_o *this,
        int64_t endTime,
        System_String_o *defaultColor,
        System_String_o *changedColor,
        const MethodInfo *method)
{
  QuestBoardInformationText_TimeData_array *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  QuestBoardInformationText_c *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v25; // x0

  if ( (byte_4C539E0 & 1) == 0 )
  {
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    sub_1C3E564(&QuestBoardInformationText_TimeData___TypeInfo);
    sub_1C3E564(&QuestBoardInformationText_TimeData_TypeInfo);
    byte_4C539E0 = 1;
  }
  v8 = (QuestBoardInformationText_TimeData_array *)sub_1C3E60C(QuestBoardInformationText_TimeData___TypeInfo, 2);
  v9 = sub_1C3E7B0(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 24) = defaultColor;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)defaultColor, v12, v13);
  if ( !v8 )
    goto LABEL_13;
  v14 = sub_1C3E6A0(v9, v8->obj.klass->_1.element_class);
  if ( !v14 )
    goto LABEL_14;
  if ( !LODWORD(v8->max_length) )
    goto LABEL_15;
  v8->m_Items[0] = (QuestBoardInformationText_TimeData_o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)v8->m_Items, v9, v16, v17);
  v18 = sub_1C3E7B0(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
LABEL_13:
    sub_1C3E7C0(v10, v11);
  *(_QWORD *)(v18 + 24) = changedColor;
  sub_1C3E508((CGThumbnailListItem_o *)(v18 + 24), (int32_t)changedColor, v19, v20);
  v21 = QuestBoardInformationText_TypeInfo;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
    v21 = QuestBoardInformationText_TypeInfo;
  }
  *(_QWORD *)(v18 + 16) = endTime - v21->static_fields->CHANGE_START_REMAINING_TIME;
  v14 = sub_1C3E6A0(v18, v8->obj.klass->_1.element_class);
  if ( !v14 )
  {
LABEL_14:
    v25 = sub_1C3E7E4();
    sub_1C3E68C(v25, 0);
  }
  if ( LODWORD(v8->max_length) <= 1 )
LABEL_15:
    sub_1C3E7C8(v14, v15);
  v8->m_Items[1] = (QuestBoardInformationText_TimeData_o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->m_Items[1], v18, v22, v23);
  return v8;
}


BoardMessageEntity_TimeData_o *QuestBoardInformationText__GetBoardMessageScriptData(
        QuestBoardInformationText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_TimeData_o *result; // x0

  result = (BoardMessageEntity_TimeData_o *)this->fields.boardMessageEnt;
  if ( result )
    return BoardMessageEntity__GetScriptDataCondCheck((BoardMessageEntity_o *)result, checkTime, 0);
  return result;
}


QuestBoardInformationText_TimeData_o *QuestBoardInformationText__GetCurrentTimeData(
        QuestBoardInformationText_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct QuestBoardInformationText_TimeData_array *timeDataList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v5; // w10
  unsigned int v6; // w11
  __int64 v7; // x12
  QuestBoardInformationText_TimeData_o *v8; // x13
  int64_t v9; // x13
  _BOOL4 v10; // w14
  _BOOL4 v11; // w15

  timeDataList = this->fields.timeDataList;
  if ( !timeDataList )
    return 0;
  max_length = timeDataList->max_length;
  if ( !max_length )
    return 0;
  if ( (int)max_length < 1 )
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
        sub_1C3E7C0(this, nowTime);
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v5 = v6;
      ++v6;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (_DWORD)max_length != v6 );
  }
  if ( v5 >= (unsigned int)max_length )
    sub_1C3E7C8(this, nowTime);
  return timeDataList->m_Items[v5];
}


int32_t QuestBoardInformationText__GetDailyDropUpRestCount(
        QuestBoardInformationText_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  UserEventEntity_o *Entity; // x19
  System_DateTime_o v8; // x0
  int32_t Year; // w20
  System_DateTime_o v10; // x0
  int32_t Month; // w21
  System_DateTime_o v12; // x0
  int32_t Day; // w22
  int32_t Value; // w4
  System_DateTime_o v15; // x0
  int32_t v16; // w0
  int64_t NextDayTime_41416704; // x0
  System_DateTime_o v18; // x20
  System_DateTime_o v19; // x21
  System_DateTime_o v20; // x1
  System_DateTime_o v21; // x0
  System_DateTime_o v22; // x0
  System_DateTime_o v23; // x1
  uint64_t v24; // x20
  uint64_t v25; // x21
  System_DateTime_o v26; // x0
  System_DateTime_o v27; // x1
  int32_t v28; // w0
  System_DateTime_o t1; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C539DB & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C3E564(&System_DateTime_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_4957/*"DAILY_DROP_UP_RESET_AT"*/);
    sub_1C3E564(&StringLiteral_4956/*"DAILY_DROP_UP_COUNT"*/);
    byte_4C539DB = 1;
  }
  t1.fields._dateData = 0;
  dateData = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_26:
    sub_1C3E7C0(Instance, v5);
  Entity = UserEventMaster__GetEntity(
             (UserEventMaster_o *)MasterData_object,
             *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
             eventId,
             0);
  if ( Entity )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    dateData = NetworkManager__getServerDateTime(0).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v8.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v8, 0);
    v10.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v10, 0);
    v12.fields._dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v12, 0);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4957/*"DAILY_DROP_UP_RESET_AT"*/, 0);
    v15.fields._dateData = (uint64_t)&t1;
    System_DateTime___ctor_65022812(v15, Year, Month, Day, Value, 0, 0, 0);
    v16 = ConstantMaster__getValue((System_String_o *)StringLiteral_4957/*"DAILY_DROP_UP_RESET_AT"*/, 0);
    NextDayTime_41416704 = NetworkManager__getNextDayTime_41416704(v16, 0);
    v18.fields._dateData = NetworkManager__getServerDateTime_41416004(NextDayTime_41416704, 0).fields._dateData;
    v19.fields._dateData = NetworkManager__getServerDateTime_41416004(Entity->fields.updatedAt, 0).fields._dateData;
    v20.fields._dateData = v19.fields._dateData;
    v21.fields._dateData = t1.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v21, v20, 0) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v22.fields._dateData = v19.fields._dateData;
      v23.fields._dateData = v18.fields._dateData;
      if ( System_DateTime__op_LessThan(v22, v23, 0) )
        goto LABEL_23;
    }
    v25 = t1.fields._dateData;
    v24 = dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v26.fields._dateData = v24;
    v27.fields._dateData = v25;
    if ( System_DateTime__op_LessThan(v26, v27, 0) )
LABEL_23:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v28 = ConstantMaster__getValue((System_String_o *)StringLiteral_4956/*"DAILY_DROP_UP_COUNT"*/, 0);
  return (v28 - (_DWORD)Entity) & ~((v28 - (int)Entity) >> 31);
}


System_String_o *QuestBoardInformationText__GetDailyDropUpRestTimeStr(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  int32_t Value; // w20
  int64_t NextDayTime_41416704; // x0
  int64_t time; // x19
  uint32_t cctor_finished; // w9
  int64_t v7; // x20

  if ( (byte_4C539DC & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_4957/*"DAILY_DROP_UP_RESET_AT"*/);
    byte_4C539DC = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4957/*"DAILY_DROP_UP_RESET_AT"*/, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayTime_41416704 = NetworkManager__getNextDayTime_41416704(Value, 0);
  time = this->fields.time;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( time >= NextDayTime_41416704 )
  {
    v7 = NextDayTime_41416704;
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    time = v7;
  }
  else if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__GetRestTime2(time, -1, 0);
}


EventEntity_ScriptData_o *QuestBoardInformationText__GetEventScriptData(
        QuestBoardInformationText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  EventEntity_ScriptData_o *result; // x0

  result = (EventEntity_ScriptData_o *)this->fields.eventEntity;
  if ( result )
    return EventEntity__GetScriptDataCondCheck((EventEntity_o *)result, checkTime, 0);
  return result;
}


bool QuestBoardInformationText__IsQuestOpened(QuestBoardInformationText_o *this, const MethodInfo *method)
{
  struct BoardMessageEntity_o *boardMessageEnt; // x8
  int64_t time; // x19

  if ( (byte_4C539DF & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C539DF = 1;
  }
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( !boardMessageEnt || boardMessageEnt->fields.referenceType != 2 )
    return 0;
  time = this->fields.time;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return time < NetworkManager__getTime(0);
}


void QuestBoardInformationText__SetFrameSprite(
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
  UnityEngine_Component_o *gameObject; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
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
  int v42; // w22
  bool IsLeft; // w0
  int v44; // w9
  float v45; // s0
  float v46; // s1
  int v47; // w8
  int32_t v48; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  v13 = component;
  if ( (byte_4C539DD & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    byte_4C539DD = 1;
  }
  if ( boardId < 0 )
    goto LABEL_6;
  gameObject = (UnityEngine_Component_o *)*v13;
  if ( !*v13 )
    goto LABEL_52;
  if ( BoardOptionTextWithIconComponent__IsTextEmpty((BoardOptionTextWithIconComponent_o *)gameObject, 0) )
  {
LABEL_6:
    gameObject = (UnityEngine_Component_o *)*frameSprite;
    if ( *frameSprite )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (UnityEngine_Component_o *)*v13;
        if ( *v13 )
        {
          BoardOptionTextWithIconComponent__SetAnchorOffset((BoardOptionTextWithIconComponent_o *)gameObject, 0, 0);
          return;
        }
      }
    }
LABEL_52:
    sub_1C3E7C0(gameObject, component);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.dispTextExtend;
  if ( !gameObject )
    goto LABEL_52;
  gameObject = (UnityEngine_Component_o *)TerminalBoardOptionTextData__get_IsLeft(
                                            (TerminalBoardOptionTextData_o *)gameObject,
                                            0);
  if ( !*frameSprite )
    goto LABEL_52;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    UIWidget__set_pivot((UIWidget_o *)*frameSprite, 3, 0);
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
    UIWidget__set_pivot((UIWidget_o *)*frameSprite, 5, 0);
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
  v48 = boardId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v16, v17, v18, v19, v20, v21);
  v33 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v32, 0);
  v34 = *frameSprite;
  v35 = v33;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v34, v35, 0);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_52;
  v49.fields.z = z + v30;
  v49.fields.y = y + v29;
  v49.fields.x = x + v28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v49, 0);
  gameObject = (UnityEngine_Component_o *)*v13;
  if ( !*v13 )
    goto LABEL_52;
  BehindLabelWrappedWidth = BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
                              (BoardOptionTextWithIconComponent_o *)gameObject,
                              0);
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
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  v39 = INFO_LABEL_BASE_WIDTH + sideSizeOffset + v37->static_fields->INFO_FRAME_SIDE_SIZE;
  UIWidget__set_width((UIWidget_o *)gameObject, v39, 0);
  if ( !this->fields.isFrameBg )
    goto LABEL_47;
  if ( !*frameSprite )
    goto LABEL_52;
  mWidth = (*frameSprite)->fields.mWidth;
  v41 = __OFSUB__(mWidth, v39);
  v42 = mWidth - v39;
  if ( (v42 < 0) ^ v41 | (v42 == 0) )
  {
LABEL_47:
    gameObject = (UnityEngine_Component_o *)*v13;
    if ( !*v13 )
      goto LABEL_52;
    LODWORD(component) = 0;
  }
  else
  {
    gameObject = (UnityEngine_Component_o *)this->fields.dispTextExtend;
    if ( !gameObject )
      goto LABEL_52;
    IsLeft = TerminalBoardOptionTextData__get_IsLeft((TerminalBoardOptionTextData_o *)gameObject, 0);
    if ( v42 >= 0 )
      v44 = v42;
    else
      v44 = v42 + 1;
    v45 = -x;
    v46 = -INFINITY;
    if ( IsLeft )
    {
      v46 = INFINITY;
      v45 = x;
    }
    v47 = (int)v45;
    if ( x == v46 )
      v47 = 0x80000000;
    component = (BoardOptionTextWithIconComponent_o **)(unsigned int)(v47 + (v44 >> 1));
    this->fields.initFrameOffset = (int)component;
    gameObject = (UnityEngine_Component_o *)*v13;
    if ( !*v13 )
      goto LABEL_52;
  }
  BoardOptionTextWithIconComponent__SetAnchorOffset(
    (BoardOptionTextWithIconComponent_o *)gameObject,
    (int32_t)component,
    0);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, this->fields.isFrameBg, 0);
}


void QuestBoardInformationText__SetParam(
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


void QuestBoardInformationText__SetParamFromScript(
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

  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)&v31.fields.r = 0;
  *(_QWORD *)&color.fields.r = 0;
  v29 = 0u;
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( boardMessageEnt )
    v6 = BoardMessageEntity__GetScriptDataCondCheck(boardMessageEnt, checkTime, 0);
  else
    v6 = 0;
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
  {
    CurrentTimeData = QuestBoardInformationText__GetCurrentTimeData(this, checkTime, method);
    if ( !v6 )
      goto LABEL_11;
LABEL_9:
    v17 = UnityEngine_ColorUtility__TryParseHtmlString(v6->fields.color, &v31, 0);
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
  v8 = EventEntity__GetScriptDataCondCheck(eventEntity, checkTime, 0);
  CurrentTimeData = QuestBoardInformationText__GetCurrentTimeData(this, checkTime, v9);
  if ( v6 )
    goto LABEL_9;
  if ( v8 )
  {
    v11 = UnityEngine_ColorUtility__TryParseHtmlString(v8->fields.color, &color, 0);
    v12 = color;
    v13 = *(_QWORD *)&v8->fields.imgId;
    v14 = *(_QWORD *)&v8->fields.frameOffset.fields.x;
    z = v8->fields.frameOffset.fields.z;
    isFrameBg = v8->fields.isFrameBg;
    *(_QWORD *)&this->fields.textOffset.fields.x = 0;
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
    v22 = UnityEngine_ColorUtility__TryParseHtmlString(CurrentTimeData->fields.color, (UnityEngine_Color_o *)&v29, 0);
    v23 = (struct UnityEngine_Color_o)v29;
    this->fields.textOffset.fields.z = 0.0;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0;
    *(_QWORD *)&this->fields.textOffset.fields.x = 0;
    *(_QWORD *)&this->fields.sideSizeOffset = 0;
    this->fields.isColorSetting = v22;
    this->fields.boardId = -1;
    this->fields.color = v23;
  }
  else
  {
    __asm { FMOV            V0.4S, #1.0 }
    this->fields.isColorSetting = 0;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0;
    *(_QWORD *)&this->fields.textOffset.fields.x = 0;
    *(_QWORD *)&this->fields.sideSizeOffset = 0;
    this->fields.textOffset.fields.z = 0.0;
    this->fields.color = _Q0;
    this->fields.boardId = -1;
  }
  this->fields.isFrameBg = 1;
}


void QuestBoardInformationText__SetTextColor(
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

  if ( (byte_4C539DE & 1) == 0 )
  {
    sub_1C3E564(&QuestBoardInformationText_TypeInfo);
    byte_4C539DE = 1;
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
          0);
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
        0);
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
    sub_1C3E7C0(v5, component);
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
  BoardOptionTextWithIconComponent__set_LabelGradientTop(v5, v16, 0);
  v5 = *component;
  if ( !*component )
    goto LABEL_17;
LABEL_16:
  v17.fields.a = *p_a;
  v17.fields.b = *p_b;
  v17.fields.g = *p_g;
  v17.fields.r = p_CAMPAIGN_BOTTOM_COLOR->fields.r;
  BoardOptionTextWithIconComponent__set_LabelGradientBottom(v5, v17, 0);
}


void QuestBoardInformationText__SetTextOffset(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UnityEngine_Vector3_o textOffset,
        const MethodInfo *method)
{
  QuestBoardInformationText_o *v5; // x19
  float x; // s8
  float v7; // s0
  float v8; // s1
  int v9; // w10

  if ( !*component )
    goto LABEL_12;
  v5 = this;
  x = textOffset.fields.x;
  if ( BoardOptionTextWithIconComponent__IsTextEmpty(*component, 0) )
    return;
  this = (QuestBoardInformationText_o *)v5->fields.dispTextExtend;
  if ( !this
    || (this = (QuestBoardInformationText_o *)TerminalBoardOptionTextData__get_IsLeft(
                                                (TerminalBoardOptionTextData_o *)this,
                                                0),
        !*component) )
  {
LABEL_12:
    sub_1C3E7C0(this, component);
  }
  v7 = -INFINITY;
  if ( ((unsigned __int8)this & 1) != 0 )
    v7 = INFINITY;
  v8 = -x;
  if ( ((unsigned __int8)this & 1) != 0 )
    v8 = x;
  v9 = (int)v8;
  if ( x == v7 )
    v9 = 0x80000000;
  BoardOptionTextWithIconComponent__SetAnchorOffset(*component, v5->fields.initFrameOffset + v9, 0);
}


void QuestBoardInformationText__SetTime(
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


void QuestBoardInformationText__SetTime_36516208(
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


void QuestBoardInformationText__Update(
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


void QuestBoardInformationText_TimeData___ctor(QuestBoardInformationText_TimeData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}