void __fastcall QuestBoardInformationText___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  QuestBoardInformationText_c *v7; // x8
  struct QuestBoardInformationText_StaticFields *static_fields; // x9
  struct QuestBoardInformationText_StaticFields *v9; // x9
  struct QuestBoardInformationText_StaticFields *v10; // x9

  if ( (byte_4BD935F & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&StringLiteral_17997/*"caldeagate_notice_{0:00}"*/);
    byte_4BD935F = 1;
  }
  QuestBoardInformationText_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17997/*"caldeagate_notice_{0:00}"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)QuestBoardInformationText_TypeInfo->static_fields,
    StringLiteral_17997/*"caldeagate_notice_{0:00}"*/,
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
  v10->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BFDC90;
  v10->INFO_LABEL_BASE_WIDTH = 355;
  v7->static_fields->CAMPAIGN_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BFDF90;
  __asm { FMOV            V0.4S, #1.0 }
  v7->static_fields->NORMAL_TOP_COLOR = _Q0;
  v7->static_fields->NORMAL_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BFE270;
  v7->static_fields->CHANGE_START_REMAINING_TIME = 86399LL;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2

  v12 = isCampaign;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dispText = dispText;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v13, v14, v15, v16, v17, v18);
  this->fields.dispTextExtend = dispTextExtend;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.dispTextExtend,
    (int64_t)dispTextExtend,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v25);
}


void __fastcall QuestBoardInformationText___ctor_35042164(
        QuestBoardInformationText_o *this,
        System_String_o *inDispText,
        int64_t inTime,
        int64_t checkTime,
        System_String_o *defaultColor,
        System_String_o *changedColor,
        const MethodInfo *method)
{
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  QuestBoardInformationText_o *v19; // x0
  const MethodInfo *v20; // x4
  struct QuestBoardInformationText_TimeData_array *TimeDataList; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dispText = inDispText;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)inDispText, v13, v14, v15, v16, v17, v18);
  this->fields.time = inTime;
  TimeDataList = QuestBoardInformationText__CreateTimeDataList(v19, inTime, defaultColor, changedColor, v20);
  this->fields.timeDataList = TimeDataList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.timeDataList,
    (int64_t)TimeDataList,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v28);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v29);
}


void __fastcall QuestBoardInformationText___ctor_35043080(
        QuestBoardInformationText_o *this,
        BoardMessageEntity_o *boardMessageEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  bool IsLeft; // w0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)boardMessageEntity, v13, v14, v15, v16, v17, v18);
  this->fields.dispText = dispText;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventCampaignEnt,
    (int64_t)eventCampaignEnt,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v31);
  if ( boardMessageEntity )
    IsLeft = BoardMessageEntity__IsLeft(boardMessageEntity, 0LL);
  else
    IsLeft = 0;
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, IsLeft, v32);
}


void __fastcall QuestBoardInformationText___ctor_35043248(
        QuestBoardInformationText_o *this,
        EventEntity_o *eventEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEntity = eventEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventEntity,
    (int64_t)eventEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventCampaignEnt,
    (int64_t)eventCampaignEnt,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestBoardInformationText__SetParamFromScript(this, checkTime, v31);
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v32);
}


void __fastcall QuestBoardInformationText__ChangeBehindText(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestBoardInformationText_o *v3; // x19
  int32_t *eventCampaignEnt; // x8
  struct BoardMessageEntity_o *boardMessageEnt; // x9
  int v6; // s8
  TerminalBoardOptionTextData_o *v7; // x19
  __int64 v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 RestTime2; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x21
  TerminalBoardOptionTextData_o *v21; // x0
  System_Object_array *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct TerminalBoardOptionTextData_o *v29; // x20
  int v30; // w22
  __int64 v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x22
  const MethodInfo *v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v61; // x0
  int64_t time; // x21
  __int64 v63; // x19
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x21
  void *v71; // x1
  __int64 v72; // x0
  int v73; // [xsp+Ch] [xbp-44h] BYREF
  int v74; // [xsp+18h] [xbp-38h] BYREF
  int v75; // [xsp+1Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4BD9357 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    this = (QuestBoardInformationText_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9357 = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v61 = sub_1C21EE0(object___TypeInfo, 1LL);
    time = v3->fields.time;
    v63 = v61;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1LL, 0LL);
    if ( !v63 )
      goto LABEL_39;
    v70 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C21F74(RestTime2, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v63 + 24) )
      {
        *(_QWORD *)(v63 + 32) = v70;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v63 + 32), v70, v64, v65, v66, v67, v68, v69);
        if ( dispTextExtend )
        {
          TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, (System_Object_array *)v63, 0LL);
          return;
        }
        goto LABEL_39;
      }
      goto LABEL_40;
    }
    goto LABEL_41;
  }
  boardMessageEnt = v3->fields.boardMessageEnt;
  *(float *)&v6 = (float)eventCampaignEnt[12] / 1000.0;
  if ( boardMessageEnt && boardMessageEnt->fields.referenceType == 5 )
  {
    v7 = v3->fields.dispTextExtend;
    v8 = sub_1C21EE0(object___TypeInfo, 1LL);
    v75 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v75, v9, v10, v11);
    if ( !v8 )
      goto LABEL_39;
    v20 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C21F74(RestTime2, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) )
      {
        *(_QWORD *)(v8 + 32) = v20;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v8 + 32), v20, v14, v15, v16, v17, v18, v19);
        if ( v7 )
        {
          v21 = v7;
          v22 = (System_Object_array *)v8;
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
    v29 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v29 )
      {
        v71 = StringLiteral_1/*""*/;
        v29->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v29->fields._BehindText_k__BackingField,
          (int64_t)v71,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        return;
      }
      goto LABEL_39;
    }
    v30 = RestTime2;
    v31 = sub_1C21EE0(object___TypeInfo, 3LL);
    v74 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v74, v32, v33, v34);
    if ( !v31 )
      goto LABEL_39;
    v41 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1C21F74(RestTime2, *(_QWORD *)(*(_QWORD *)v31 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v31 + 24) )
        goto LABEL_40;
      *(_QWORD *)(v31 + 32) = v41;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 32), v41, v35, v36, v37, v38, v39, v40);
      v73 = v30;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v73, v42, v43, v44);
      v51 = RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_1C21F74(RestTime2, *(_QWORD *)(*(_QWORD *)v31 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v31 + 24) <= 1u )
          goto LABEL_40;
        *(_QWORD *)(v31 + 40) = v51;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 40), v51, v45, v46, v47, v48, v49, v50);
        RestTime2 = (__int64)QuestBoardInformationText__GetDailyDropUpRestTimeStr(v3, v52);
        v59 = RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_1C21F74(RestTime2, *(_QWORD *)(*(_QWORD *)v31 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v31 + 24) > 2u )
          {
            *(_QWORD *)(v31 + 48) = v59;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 48), v59, v53, v54, v55, v56, v57, v58);
            if ( v29 )
            {
              v21 = v29;
              v22 = (System_Object_array *)v31;
              goto LABEL_27;
            }
LABEL_39:
            sub_1C22094(RestTime2, v13);
          }
LABEL_40:
          sub_1C2209C(RestTime2, v13);
        }
      }
    }
LABEL_41:
    v72 = sub_1C220B8();
    sub_1C21F60(v72, 0LL);
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

  if ( (byte_4BD9356 & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    byte_4BD9356 = 1;
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
    sub_1C22094(behindLabelText, component);
  }
  BoardOptionTextWithIconComponent__UpdateUI(
    behindLabelText,
    this->fields.dispTextExtend,
    QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH,
    0LL);
  return this->fields.isChangedText;
}


void __fastcall QuestBoardInformationText__CreateDispTextExtendIfNotExists(
        QuestBoardInformationText_o *this,
        bool isLeft,
        const MethodInfo *method)
{
  System_String_o *dispText; // x22
  TerminalBoardOptionTextData_o *v6; // x23
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BD9358 & 1) == 0 )
  {
    sub_1C21E38(&TerminalBoardOptionTextData_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9358 = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v6 = (TerminalBoardOptionTextData_o *)sub_1C22084(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v6, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, isLeft, 0LL);
    this->fields.dispTextExtend = v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dispTextExtend, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  }
}


QuestBoardInformationText_TimeData_array *__fastcall QuestBoardInformationText__CreateTimeDataList(
        QuestBoardInformationText_o *this,
        int64_t endTime,
        System_String_o *defaultColor,
        System_String_o *changedColor,
        const MethodInfo *method)
{
  QuestBoardInformationText_TimeData_array *v8; // x20
  int64_t v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x22
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  QuestBoardInformationText_c *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v41; // x0

  if ( (byte_4BD935E & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TimeData___TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TimeData_TypeInfo);
    byte_4BD935E = 1;
  }
  v8 = (QuestBoardInformationText_TimeData_array *)sub_1C21EE0(QuestBoardInformationText_TimeData___TypeInfo, 2LL);
  v9 = sub_1C22084(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 24) = defaultColor;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)defaultColor, v12, v13, v14, v15, v16, v17);
  if ( !v8 )
    goto LABEL_13;
  v18 = sub_1C21F74(v9, v8->obj.klass->_1.element_class);
  if ( !v18 )
    goto LABEL_14;
  if ( !v8->max_length )
    goto LABEL_15;
  v8->m_Items[0] = (QuestBoardInformationText_TimeData_o *)v9;
  sub_1C21DDC((PartyOrganizationUtility_o *)v8->m_Items, v9, v20, v21, v22, v23, v24, v25);
  v26 = sub_1C22084(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
LABEL_13:
    sub_1C22094(v10, v11);
  *(_QWORD *)(v26 + 24) = changedColor;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)changedColor, v27, v28, v29, v30, v31, v32);
  v33 = QuestBoardInformationText_TypeInfo;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
    v33 = QuestBoardInformationText_TypeInfo;
  }
  *(_QWORD *)(v26 + 16) = endTime - v33->static_fields->CHANGE_START_REMAINING_TIME;
  v18 = sub_1C21F74(v26, v8->obj.klass->_1.element_class);
  if ( !v18 )
  {
LABEL_14:
    v41 = sub_1C220B8();
    sub_1C21F60(v41, 0LL);
  }
  if ( v8->max_length <= 1 )
LABEL_15:
    sub_1C2209C(v18, v19);
  v8->m_Items[1] = (QuestBoardInformationText_TimeData_o *)v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->m_Items[1], v26, v34, v35, v36, v37, v38, v39);
  return v8;
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
        sub_1C22094(this, nowTime);
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
    sub_1C2209C(this, nowTime);
  return timeDataList->m_Items[v5];
}


int32_t __fastcall QuestBoardInformationText__GetDailyDropUpRestCount(
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
  int32_t Value; // w4
  int32_t v12; // w0
  int64_t NextDayTime_39808104; // x0
  uint64_t v14; // x20
  uint64_t v15; // x21
  uint64_t v16; // x20
  uint64_t v17; // x21
  int32_t v18; // w0
  System_DateTime_o t1; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x1.8
  System_DateTime_o v30; // 0:x1.8
  System_DateTime_o v31; // 0:x1.8

  if ( (byte_4BD9359 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_5098/*"DAILY_DROP_UP_RESET_AT"*/);
    sub_1C21E38(&StringLiteral_5097/*"DAILY_DROP_UP_COUNT"*/);
    byte_4BD9359 = 1;
  }
  t1.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_26:
    sub_1C22094(Instance, v5);
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
    v22.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v22, 0LL);
    v23.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v23, 0LL);
    v24.fields._dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v24, 0LL);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_5098/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    v25.fields._dateData = (uint64_t)&t1;
    System_DateTime___ctor_63794248(v25, Year, Month, Day, Value, 0, 0, 0LL);
    v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_5098/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    NextDayTime_39808104 = NetworkManager__getNextDayTime_39808104(v12, 0LL);
    v14 = NetworkManager__getServerDateTime_39807404(NextDayTime_39808104, 0LL).fields._dateData;
    v15 = NetworkManager__getServerDateTime_39807404(Entity->fields.updatedAt, 0LL).fields._dateData;
    v29.fields._dateData = v15;
    v26.fields._dateData = t1.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v26, v29, 0LL) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v27.fields._dateData = v15;
      v30.fields._dateData = v14;
      if ( System_DateTime__op_LessThan(v27, v30, 0LL) )
        goto LABEL_23;
    }
    v17 = t1.fields._dateData;
    v16 = dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v28.fields._dateData = v16;
    v31.fields._dateData = v17;
    if ( System_DateTime__op_LessThan(v28, v31, 0LL) )
LABEL_23:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v18 = ConstantMaster__getValue((System_String_o *)StringLiteral_5097/*"DAILY_DROP_UP_COUNT"*/, 0LL);
  return (v18 - (_DWORD)Entity) & ~((v18 - (int)Entity) >> 31);
}


System_String_o *__fastcall QuestBoardInformationText__GetDailyDropUpRestTimeStr(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  int32_t Value; // w20
  int64_t NextDayTime_39808104; // x0
  int64_t time; // x19
  uint32_t cctor_finished; // w9
  int64_t v7; // x20

  if ( (byte_4BD935A & 1) == 0 )
  {
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5098/*"DAILY_DROP_UP_RESET_AT"*/);
    byte_4BD935A = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_5098/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayTime_39808104 = NetworkManager__getNextDayTime_39808104(Value, 0LL);
  time = this->fields.time;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( time >= NextDayTime_39808104 )
  {
    v7 = NextDayTime_39808104;
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    time = v7;
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

  if ( (byte_4BD935D & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD935D = 1;
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
  BoardOptionTextWithIconComponent_o *IsTextEmpty; // x0
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  QuestBoardInformationText_c *v20; // x0
  struct QuestBoardInformationText_StaticFields *static_fields; // x10
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  struct QuestBoardInformationText_StaticFields *v25; // x10
  float v26; // s11
  float v27; // s12
  float v28; // s13
  System_String_o *QUEST_BOARD_INFO_FRAME_NAME; // x24
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  UISprite_o *v32; // x24
  System_String_o *v33; // x23
  int32_t BehindLabelWrappedWidth; // w0
  QuestBoardInformationText_c *v35; // x8
  int32_t INFO_LABEL_BASE_WIDTH; // w23
  int32_t v37; // w22
  int32_t mWidth; // w8
  bool v39; // vf
  int v40; // w8
  struct TerminalBoardOptionTextData_o *v41; // x9
  _BOOL4 IsLeft_k__BackingField; // w9
  float v43; // s1
  float v44; // s0
  int v45; // w8
  int v46; // w9
  int32_t v47; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  v13 = component;
  if ( (byte_4BD935B & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    byte_4BD935B = 1;
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
    sub_1C22094(IsTextEmpty, component);
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
    v20 = QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v20 = QuestBoardInformationText_TypeInfo;
    }
    static_fields = v20->static_fields;
    p_x = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.x;
    p_y = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.y;
    p_z = &static_fields->INFO_FRAME_LEFT_OFFSET.fields.z;
  }
  else
  {
    UIWidget__set_pivot((UIWidget_o *)IsTextEmpty, 5, 0LL);
    v20 = QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v20 = QuestBoardInformationText_TypeInfo;
    }
    v25 = v20->static_fields;
    p_x = &v25->INFO_FRAME_RIGHT_OFFSET.fields.x;
    p_y = &v25->INFO_FRAME_RIGHT_OFFSET.fields.y;
    p_z = &v25->INFO_FRAME_RIGHT_OFFSET.fields.z;
  }
  v26 = *p_x;
  v27 = *p_y;
  v28 = *p_z;
  if ( !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20);
    v20 = QuestBoardInformationText_TypeInfo;
  }
  QUEST_BOARD_INFO_FRAME_NAME = v20->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  v47 = boardId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v17, v18, v19);
  v31 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v30, 0LL);
  v32 = *frameSprite;
  v33 = v31;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v32, v33, 0LL);
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_51;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)IsTextEmpty,
                                                        0LL);
  if ( !IsTextEmpty )
    goto LABEL_51;
  v48.fields.z = z + v28;
  v48.fields.y = y + v27;
  v48.fields.x = x + v26;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsTextEmpty, v48, 0LL);
  IsTextEmpty = *v13;
  if ( !*v13 )
    goto LABEL_51;
  BehindLabelWrappedWidth = BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(IsTextEmpty, 0LL);
  v35 = QuestBoardInformationText_TypeInfo;
  if ( QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH >= BehindLabelWrappedWidth )
  {
    INFO_LABEL_BASE_WIDTH = BehindLabelWrappedWidth;
  }
  else
  {
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
      v35 = QuestBoardInformationText_TypeInfo;
    }
    INFO_LABEL_BASE_WIDTH = QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = QuestBoardInformationText_TypeInfo;
  }
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_51;
  v37 = INFO_LABEL_BASE_WIDTH + sideSizeOffset + v35->static_fields->INFO_FRAME_SIDE_SIZE;
  UIWidget__set_width((UIWidget_o *)IsTextEmpty, v37, 0LL);
  if ( !this->fields.isFrameBg )
    goto LABEL_46;
  if ( !*frameSprite )
    goto LABEL_51;
  mWidth = (*frameSprite)->fields.mWidth;
  v39 = __OFSUB__(mWidth, v37);
  v40 = mWidth - v37;
  if ( (v40 < 0) ^ v39 | (v40 == 0) )
  {
LABEL_46:
    IsTextEmpty = *v13;
    if ( !*v13 )
      goto LABEL_51;
    LODWORD(component) = 0;
  }
  else
  {
    v41 = this->fields.dispTextExtend;
    if ( !v41 )
      goto LABEL_51;
    IsLeft_k__BackingField = v41->fields._IsLeft_k__BackingField;
    v43 = INFINITY;
    v44 = -x;
    v45 = v40 + (v40 < 0);
    if ( !IsLeft_k__BackingField )
      v43 = -INFINITY;
    if ( IsLeft_k__BackingField )
      v44 = x;
    v46 = (int)v44;
    if ( x == v43 )
      v46 = 0x80000000;
    component = (BoardOptionTextWithIconComponent_o **)(unsigned int)(v46 + (v45 >> 1));
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

  if ( (byte_4BD935C & 1) == 0 )
  {
    sub_1C21E38(&QuestBoardInformationText_TypeInfo);
    byte_4BD935C = 1;
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
    sub_1C22094(v5, component);
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
    sub_1C22094(this, component);
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


void __fastcall QuestBoardInformationText__SetTime_35045252(
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