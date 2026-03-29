void QuestBoardInformationText___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  QuestBoardInformationText_c *v7; // x8
  struct QuestBoardInformationText_StaticFields *static_fields; // x9
  struct QuestBoardInformationText_StaticFields *v9; // x9
  struct QuestBoardInformationText_StaticFields *v10; // x9

  if ( (byte_4D2D578 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    sub_1C93AD4(&StringLiteral_17832/*"caldeagate_notice_{0:00}"*/);
    byte_4D2D578 = 1;
  }
  QuestBoardInformationText_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17832/*"caldeagate_notice_{0:00}"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)QuestBoardInformationText_TypeInfo->static_fields,
    StringLiteral_17832/*"caldeagate_notice_{0:00}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = QuestBoardInformationText_TypeInfo;
  static_fields = QuestBoardInformationText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_FRAME_RIGHT_OFFSET.fields.x = 0xC180000043C58000LL;
  static_fields->INFO_FRAME_RIGHT_OFFSET.fields.z = 0.0;
  v9 = v7->static_fields;
  *(_QWORD *)&v9->INFO_FRAME_LEFT_OFFSET.fields.x = 0xC1800000C3070000LL;
  v9->INFO_FRAME_LEFT_OFFSET.fields.z = 0.0;
  v10 = v7->static_fields;
  *(_QWORD *)&v10->INFO_FRAME_SIDE_SIZE = 0x1200000050LL;
  v10->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_D004C0;
  v10->INFO_LABEL_BASE_WIDTH = 355;
  v7->static_fields->CAMPAIGN_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_D00800;
  __asm { FMOV            V0.4S, #1.0 }
  v7->static_fields->NORMAL_TOP_COLOR = _Q0;
  v7->static_fields->NORMAL_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_D00B50;
  v7->static_fields->CHANGE_START_REMAINING_TIME = 86399;
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  const MethodInfo *v25; // x2

  v12 = isCampaign;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.dispText = dispText;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dispText, (int32_t)dispText, v13, v14, v15, v16, v17, v18);
  this->fields.dispTextExtend = dispTextExtend;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.dispTextExtend,
    (int32_t)dispTextExtend,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v25);
}


void QuestBoardInformationText___ctor_37033472(
        QuestBoardInformationText_o *this,
        System_String_o *inDispText,
        int64_t inTime,
        int64_t checkTime,
        System_String_o *defaultColor,
        System_String_o *changedColor,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  QuestBoardInformationText_o *v19; // x0
  const MethodInfo *v20; // x4
  struct QuestBoardInformationText_TimeData_array *TimeDataList; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.dispText = inDispText;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dispText, (int32_t)inDispText, v13, v14, v15, v16, v17, v18);
  this->fields.time = inTime;
  TimeDataList = QuestBoardInformationText__CreateTimeDataList(v19, inTime, defaultColor, changedColor, v20);
  this->fields.timeDataList = TimeDataList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.timeDataList,
    (int32_t)TimeDataList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v28);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v29);
}


void QuestBoardInformationText___ctor_37034388(
        QuestBoardInformationText_o *this,
        BoardMessageEntity_o *boardMessageEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  int32_t pivotType; // w1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)boardMessageEntity, v13, v14, v15, v16, v17, v18);
  this->fields.dispText = dispText;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dispText, (int32_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventCampaignEnt,
    (int32_t)eventCampaignEnt,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v31);
  if ( boardMessageEntity )
    pivotType = boardMessageEntity->fields.pivotType;
  else
    pivotType = 0;
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, pivotType, v32);
}


void QuestBoardInformationText___ctor_37034544(
        QuestBoardInformationText_o *this,
        EventEntity_o *eventEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventEntity = eventEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventEntity,
    (int32_t)eventEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dispText, (int32_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventCampaignEnt,
    (int32_t)eventCampaignEnt,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v31);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v32);
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
  __int64 RestTime2; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x21
  TerminalBoardOptionTextData_o *v18; // x0
  System_Object_array *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct TerminalBoardOptionTextData_o *v26; // x20
  int v27; // w22
  __int64 v28; // x21
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  __int64 v42; // x22
  const MethodInfo *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v52; // x0
  int64_t time; // x21
  __int64 v54; // x19
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  __int64 v61; // x21
  int32_t v62; // w1
  __int64 v63; // x0
  int v64; // [xsp+Ch] [xbp-44h] BYREF
  float v65; // [xsp+18h] [xbp-38h] BYREF
  float v66; // [xsp+1Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4D2D570 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&object___TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    this = (QuestBoardInformationText_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D570 = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v52 = sub_1C93B7C(object___TypeInfo, 1);
    time = v3->fields.time;
    v54 = v52;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1, 0);
    if ( !v54 )
      goto LABEL_39;
    v61 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C93C10(RestTime2, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v54 + 24) )
      {
        *(_QWORD *)(v54 + 32) = v61;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 32), v61, v55, v56, v57, v58, v59, v60);
        if ( dispTextExtend )
        {
          TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, (System_Object_array *)v54, 0);
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
    v8 = sub_1C93B7C(object___TypeInfo, 1);
    v66 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v66);
    if ( !v8 )
      goto LABEL_39;
    v17 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C93C10(RestTime2, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) )
      {
        *(_QWORD *)(v8 + 32) = v17;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 32), v17, v11, v12, v13, v14, v15, v16);
        if ( v7 )
        {
          v18 = v7;
          v19 = (System_Object_array *)v8;
LABEL_27:
          TerminalBoardOptionTextData__SetParamsToBehindText(v18, v19, 0);
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
    v26 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v26 )
      {
        v62 = StringLiteral_1/*""*/;
        v26->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v26->fields._BehindText_k__BackingField,
          v62,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        return;
      }
      goto LABEL_39;
    }
    v27 = RestTime2;
    v28 = sub_1C93B7C(object___TypeInfo, 3);
    v65 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v65);
    if ( !v28 )
      goto LABEL_39;
    v35 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C93C10(RestTime2, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_40;
      *(_QWORD *)(v28 + 32) = v35;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 32), v35, v29, v30, v31, v32, v33, v34);
      v64 = v27;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v64);
      v42 = RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_1C93C10(RestTime2, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v28 + 24) <= 1u )
          goto LABEL_40;
        *(_QWORD *)(v28 + 40) = v42;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 40), v42, v36, v37, v38, v39, v40, v41);
        RestTime2 = (__int64)QuestBoardInformationText__GetDailyDropUpRestTimeStr(v3, v43);
        v50 = RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_1C93C10(RestTime2, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v28 + 24) > 2u )
          {
            *(_QWORD *)(v28 + 48) = v50;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 48), v50, v44, v45, v46, v47, v48, v49);
            if ( v26 )
            {
              v18 = v26;
              v19 = (System_Object_array *)v28;
              goto LABEL_27;
            }
LABEL_39:
            sub_1C93D2C(RestTime2, v10);
          }
LABEL_40:
          sub_1C93D34(RestTime2);
        }
      }
    }
LABEL_41:
    v63 = sub_1C93D50();
    sub_1C93BFC(v63, 0);
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

  if ( (byte_4D2D56F & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    byte_4D2D56F = 1;
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
    sub_1C93D2C(behindLabelText, component);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2D571 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalBoardOptionTextData_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D571 = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v6 = (TerminalBoardOptionTextData_o *)sub_1C93D20(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v6, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, 0, 0, alignment, 0);
    this->fields.dispTextExtend = v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.dispTextExtend, (int32_t)v6, v7, v8, v9, v10, v11, v12);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  __int64 v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  QuestBoardInformationText_c *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  __int64 v40; // x0

  if ( (byte_4D2D577 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    sub_1C93AD4(&QuestBoardInformationText_TimeData___TypeInfo);
    sub_1C93AD4(&QuestBoardInformationText_TimeData_TypeInfo);
    byte_4D2D577 = 1;
  }
  v8 = (QuestBoardInformationText_TimeData_array *)sub_1C93B7C(QuestBoardInformationText_TimeData___TypeInfo, 2);
  v9 = sub_1C93D20(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 24) = defaultColor;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)defaultColor, v12, v13, v14, v15, v16, v17);
  if ( !v8 )
    goto LABEL_13;
  v18 = sub_1C93C10(v9, v8->obj.klass->_1.element_class);
  if ( !v18 )
    goto LABEL_14;
  if ( !LODWORD(v8->max_length) )
    goto LABEL_15;
  v8->m_Items[0] = (QuestBoardInformationText_TimeData_o *)v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v8->m_Items, v9, v19, v20, v21, v22, v23, v24);
  v25 = sub_1C93D20(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  if ( !v25 )
LABEL_13:
    sub_1C93D2C(v10, v11);
  *(_QWORD *)(v25 + 24) = changedColor;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 24), (int32_t)changedColor, v26, v27, v28, v29, v30, v31);
  v32 = QuestBoardInformationText_TypeInfo;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
    v32 = QuestBoardInformationText_TypeInfo;
  }
  *(_QWORD *)(v25 + 16) = endTime - v32->static_fields->CHANGE_START_REMAINING_TIME;
  v18 = sub_1C93C10(v25, v8->obj.klass->_1.element_class);
  if ( !v18 )
  {
LABEL_14:
    v40 = sub_1C93D50();
    sub_1C93BFC(v40, 0);
  }
  if ( LODWORD(v8->max_length) <= 1 )
LABEL_15:
    sub_1C93D34(v18);
  v8->m_Items[1] = (QuestBoardInformationText_TimeData_o *)v25;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->m_Items[1], v25, v33, v34, v35, v36, v37, v38);
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
        sub_1C93D2C(this, nowTime);
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
    sub_1C93D34(this);
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
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w22
  int32_t Value; // w0
  int32_t v12; // w0
  int64_t NextDayTime_42097784; // x0
  System_DateTime_o v14; // x20
  System_DateTime_o v15; // x21
  System_DateTime_o v16; // x20
  uint64_t v17; // x21
  int32_t v18; // w0
  System_DateTime_o t1; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2D572 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_4977/*"DAILY_DROP_UP_RESET_AT"*/);
    sub_1C93AD4(&StringLiteral_4976/*"DAILY_DROP_UP_COUNT"*/);
    byte_4D2D572 = 1;
  }
  t1.fields._dateData = 0;
  dateData = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_26:
    sub_1C93D2C(Instance, v5);
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
    Year = System_DateTime__get_Year((System_DateTime_o)&dateData, 0);
    Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
    Day = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4977/*"DAILY_DROP_UP_RESET_AT"*/, 0);
    System_DateTime___ctor_65810456((System_DateTime_o)&t1, Year, Month, Day, Value, 0, 0, 0);
    v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_4977/*"DAILY_DROP_UP_RESET_AT"*/, 0);
    NextDayTime_42097784 = NetworkManager__getNextDayTime_42097784(v12, 0);
    v14.fields._dateData = NetworkManager__getServerDateTime_42097084(NextDayTime_42097784, 0).fields._dateData;
    v15.fields._dateData = NetworkManager__getServerDateTime_42097084(Entity->fields.updatedAt, 0).fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(t1, v15, 0) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      if ( System_DateTime__op_LessThan(v15, v14, 0) )
        goto LABEL_23;
    }
    v17 = t1.fields._dateData;
    v16.fields._dateData = dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    if ( System_DateTime__op_LessThan(v16, (System_DateTime_o)v17, 0) )
LABEL_23:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v18 = ConstantMaster__getValue((System_String_o *)StringLiteral_4976/*"DAILY_DROP_UP_COUNT"*/, 0);
  return (v18 - (_DWORD)Entity) & ~((v18 - (int)Entity) >> 31);
}


System_String_o *QuestBoardInformationText__GetDailyDropUpRestTimeStr(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  int32_t Value; // w20
  int64_t NextDayTime_42097784; // x0
  int64_t time; // x19
  uint32_t cctor_finished; // w9
  int64_t v7; // x20

  if ( (byte_4D2D573 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_4977/*"DAILY_DROP_UP_RESET_AT"*/);
    byte_4D2D573 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4977/*"DAILY_DROP_UP_RESET_AT"*/, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayTime_42097784 = NetworkManager__getNextDayTime_42097784(Value, 0);
  time = this->fields.time;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( time >= NextDayTime_42097784 )
  {
    v7 = NextDayTime_42097784;
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

  if ( (byte_4D2D576 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2D576 = 1;
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
  QuestBoardInformationText_c *v16; // x0
  struct QuestBoardInformationText_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct QuestBoardInformationText_StaticFields *v21; // x10
  float v22; // s11
  float v23; // s12
  float v24; // s13
  System_String_o *QUEST_BOARD_INFO_FRAME_NAME; // x24
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  UISprite_o *v28; // x24
  System_String_o *v29; // x23
  int32_t BehindLabelWrappedWidth; // w0
  QuestBoardInformationText_c *v31; // x8
  int32_t INFO_LABEL_BASE_WIDTH; // w23
  int32_t v33; // w22
  int32_t mWidth; // w8
  bool v35; // vf
  int v36; // w22
  bool IsLeft; // w0
  int v38; // w9
  float v39; // s0
  float v40; // s1
  int v41; // w8
  int32_t v42; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  v13 = component;
  if ( (byte_4D2D574 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    byte_4D2D574 = 1;
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
    sub_1C93D2C(gameObject, component);
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
    v16 = QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v16 = QuestBoardInformationText_TypeInfo;
    }
    static_fields = v16->static_fields;
    p_x = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.x;
    p_y = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.y;
    p_z = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.z;
  }
  else
  {
    UIWidget__set_pivot((UIWidget_o *)*frameSprite, 5, 0);
    v16 = QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v16 = QuestBoardInformationText_TypeInfo;
    }
    v21 = v16->static_fields;
    p_x = &v21->INFO_FRAME_RIGHT_OFFSET.fields.x;
    p_y = &v21->INFO_FRAME_RIGHT_OFFSET.fields.y;
    p_z = &v21->INFO_FRAME_RIGHT_OFFSET.fields.z;
  }
  v22 = *p_x;
  v23 = *p_y;
  v24 = *p_z;
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = QuestBoardInformationText_TypeInfo;
  }
  QUEST_BOARD_INFO_FRAME_NAME = v16->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  v42 = boardId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v27 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v26, 0);
  v28 = *frameSprite;
  v29 = v27;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v28, v29, 0);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_52;
  v43.fields.z = z + v24;
  v43.fields.y = y + v23;
  v43.fields.x = x + v22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v43, 0);
  gameObject = (UnityEngine_Component_o *)*v13;
  if ( !*v13 )
    goto LABEL_52;
  BehindLabelWrappedWidth = BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
                              (BoardOptionTextWithIconComponent_o *)gameObject,
                              0);
  v31 = QuestBoardInformationText_TypeInfo;
  if ( QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH >= BehindLabelWrappedWidth )
  {
    INFO_LABEL_BASE_WIDTH = BehindLabelWrappedWidth;
  }
  else
  {
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v31 = QuestBoardInformationText_TypeInfo;
    }
    INFO_LABEL_BASE_WIDTH = QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  if ( !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = QuestBoardInformationText_TypeInfo;
  }
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  v33 = INFO_LABEL_BASE_WIDTH + sideSizeOffset + v31->static_fields->INFO_FRAME_SIDE_SIZE;
  UIWidget__set_width((UIWidget_o *)gameObject, v33, 0);
  if ( !this->fields.isFrameBg )
    goto LABEL_47;
  if ( !*frameSprite )
    goto LABEL_52;
  mWidth = (*frameSprite)->fields.mWidth;
  v35 = __OFSUB__(mWidth, v33);
  v36 = mWidth - v33;
  if ( (v36 < 0) ^ v35 | (v36 == 0) )
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
    if ( v36 >= 0 )
      v38 = v36;
    else
      v38 = v36 + 1;
    v39 = -x;
    v40 = -INFINITY;
    if ( IsLeft )
    {
      v40 = INFINITY;
      v39 = x;
    }
    v41 = (int)v39;
    if ( x == v40 )
      v41 = 0x80000000;
    component = (BoardOptionTextWithIconComponent_o **)(unsigned int)(v41 + (v38 >> 1));
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

  if ( (byte_4D2D575 & 1) == 0 )
  {
    sub_1C93AD4(&QuestBoardInformationText_TypeInfo);
    byte_4D2D575 = 1;
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
    sub_1C93D2C(v5, component);
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
    sub_1C93D2C(this, component);
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


void QuestBoardInformationText__SetTime_37036572(
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