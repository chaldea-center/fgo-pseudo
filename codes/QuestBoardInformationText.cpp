void __fastcall QuestBoardInformationText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  QuestBoardInformationText_c *v10; // x8
  struct QuestBoardInformationText_StaticFields *static_fields; // x9
  struct QuestBoardInformationText_StaticFields *v12; // x9
  struct QuestBoardInformationText_StaticFields *v13; // x9

  if ( (byte_4B1308A & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17878/*"caldeagate_notice_{0:00}"*/, v8, v9);
    byte_4B1308A = 1;
  }
  QuestBoardInformationText_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17878/*"caldeagate_notice_{0:00}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestBoardInformationText_TypeInfo->static_fields,
    StringLiteral_17878/*"caldeagate_notice_{0:00}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = QuestBoardInformationText_TypeInfo;
  static_fields = QuestBoardInformationText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_FRAME_RIGHT_OFFSET.fields.x = 0xC180000043C58000LL;
  static_fields->INFO_FRAME_RIGHT_OFFSET.fields.z = 0.0;
  v12 = v10->static_fields;
  *(_QWORD *)&v12->INFO_FRAME_LEFT_OFFSET.fields.x = 0xC1800000C3070000LL;
  v12->INFO_FRAME_LEFT_OFFSET.fields.z = 0.0;
  v13 = v10->static_fields;
  *(_QWORD *)&v13->INFO_FRAME_SIDE_SIZE = 0x1200000050LL;
  v13->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BD22F0;
  v13->INFO_LABEL_BASE_WIDTH = 355;
  v10->static_fields->CAMPAIGN_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BD2600;
  __asm { FMOV            V0.4S, #1.0 }
  v10->static_fields->NORMAL_TOP_COLOR = _Q0;
  v10->static_fields->NORMAL_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BD28E0;
  v10->static_fields->CHANGE_START_REMAINING_TIME = 86399LL;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v13, v14, v15, v16, v17, v18);
  this->fields.dispTextExtend = dispTextExtend;
  sub_1BCA784(
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
  *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
  *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
  this->fields.boardId = -1;
  this->fields.isFrameBg = isFrameBg;
  QuestBoardInformationText__CreateDispTextExtendIfNotExists(this, 0, v25);
}


void __fastcall QuestBoardInformationText___ctor_34571668(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)inDispText, v13, v14, v15, v16, v17, v18);
  this->fields.time = inTime;
  TimeDataList = QuestBoardInformationText__CreateTimeDataList(v19, inTime, defaultColor, changedColor, v20);
  this->fields.timeDataList = TimeDataList;
  sub_1BCA784(
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


void __fastcall QuestBoardInformationText___ctor_34572532(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)boardMessageEntity, v13, v14, v15, v16, v17, v18);
  this->fields.dispText = dispText;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1BCA784(
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


void __fastcall QuestBoardInformationText___ctor_34572700(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventEntity,
    (int64_t)eventEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1BCA784(
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t *eventCampaignEnt; // x8
  struct BoardMessageEntity_o *boardMessageEnt; // x9
  int v14; // s8
  TerminalBoardOptionTextData_o *v15; // x19
  __int64 v16; // x20
  __int64 RestTime2; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x21
  TerminalBoardOptionTextData_o *v26; // x0
  System_Object_array *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct TerminalBoardOptionTextData_o *v34; // x20
  int v35; // w22
  __int64 v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x22
  const MethodInfo *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v60; // x0
  __int64 v61; // x1
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
  if ( (byte_4B13082 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&object___TypeInfo, v6, v7);
    sub_1BCA7E0(&float_TypeInfo, v8, v9);
    this = (QuestBoardInformationText_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B13082 = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v60 = sub_1BCA888(object___TypeInfo, 1LL);
    time = v3->fields.time;
    v63 = v60;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61);
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1LL, 0LL);
    if ( !v63 )
      goto LABEL_39;
    v70 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1BCA91C(RestTime2, *(_QWORD *)(*(_QWORD *)v63 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v63 + 24) )
      {
        *(_QWORD *)(v63 + 32) = v70;
        sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 32), v70, v64, v65, v66, v67, v68, v69);
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
  *(float *)&v14 = (float)eventCampaignEnt[12] / 1000.0;
  if ( boardMessageEnt && boardMessageEnt->fields.referenceType == 5 )
  {
    v15 = v3->fields.dispTextExtend;
    v16 = sub_1BCA888(object___TypeInfo, 1LL);
    v75 = v14;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v75);
    if ( !v16 )
      goto LABEL_39;
    v25 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1BCA91C(RestTime2, *(_QWORD *)(*(_QWORD *)v16 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v16 + 24) )
      {
        *(_QWORD *)(v16 + 32) = v25;
        sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), v25, v19, v20, v21, v22, v23, v24);
        if ( v15 )
        {
          v26 = v15;
          v27 = (System_Object_array *)v16;
LABEL_27:
          TerminalBoardOptionTextData__SetParamsToBehindText(v26, v27, 0LL);
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
    v34 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v34 )
      {
        v71 = StringLiteral_1/*""*/;
        v34->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v34->fields._BehindText_k__BackingField,
          (int64_t)v71,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        return;
      }
      goto LABEL_39;
    }
    v35 = RestTime2;
    v36 = sub_1BCA888(object___TypeInfo, 3LL);
    v74 = v14;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v74);
    if ( !v36 )
      goto LABEL_39;
    v43 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1BCA91C(RestTime2, *(_QWORD *)(*(_QWORD *)v36 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v36 + 24) )
        goto LABEL_40;
      *(_QWORD *)(v36 + 32) = v43;
      sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 32), v43, v37, v38, v39, v40, v41, v42);
      v73 = v35;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v73);
      v50 = RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_1BCA91C(RestTime2, *(_QWORD *)(*(_QWORD *)v36 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v36 + 24) <= 1u )
          goto LABEL_40;
        *(_QWORD *)(v36 + 40) = v50;
        sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 40), v50, v44, v45, v46, v47, v48, v49);
        RestTime2 = (__int64)QuestBoardInformationText__GetDailyDropUpRestTimeStr(v3, v51);
        v58 = RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_1BCA91C(RestTime2, *(_QWORD *)(*(_QWORD *)v36 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v36 + 24) > 2u )
          {
            *(_QWORD *)(v36 + 48) = v58;
            sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 48), v58, v52, v53, v54, v55, v56, v57);
            if ( v34 )
            {
              v26 = v34;
              v27 = (System_Object_array *)v36;
              goto LABEL_27;
            }
LABEL_39:
            sub_1BCAA3C(RestTime2, v18);
          }
LABEL_40:
          sub_1BCAA44(RestTime2, v18);
        }
      }
    }
LABEL_41:
    v72 = sub_1BCAA60();
    sub_1BCA908(v72, 0LL);
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

  if ( (byte_4B13081 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, component, method);
    byte_4B13081 = 1;
  }
  behindLabelText = (BoardOptionTextWithIconComponent_o *)QuestBoardInformationText_TypeInfo;
  v6 = *component;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo, component);
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
    sub_1BCAA3C(behindLabelText, component);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *dispText; // x22
  TerminalBoardOptionTextData_o *v9; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B13083 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalBoardOptionTextData_TypeInfo, isLeft, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B13083 = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v9 = (TerminalBoardOptionTextData_o *)sub_1BCAA2C(TerminalBoardOptionTextData_TypeInfo, isLeft, method, v3);
    TerminalBoardOptionTextData___ctor(v9, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, isLeft, 0LL);
    this->fields.dispTextExtend = v9;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dispTextExtend, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  QuestBoardInformationText_TimeData_array *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  int64_t v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  int64_t v36; // x22
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x1
  QuestBoardInformationText_c *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v52; // x0

  if ( (byte_4B13089 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, endTime, defaultColor);
    sub_1BCA7E0(&QuestBoardInformationText_TimeData___TypeInfo, v8, v9);
    sub_1BCA7E0(&QuestBoardInformationText_TimeData_TypeInfo, v10, v11);
    byte_4B13089 = 1;
  }
  v12 = (QuestBoardInformationText_TimeData_array *)sub_1BCA888(QuestBoardInformationText_TimeData___TypeInfo, 2LL);
  v16 = sub_1BCAA2C(QuestBoardInformationText_TimeData_TypeInfo, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_13;
  *(_QWORD *)(v16 + 24) = defaultColor;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)defaultColor, v19, v20, v21, v22, v23, v24);
  if ( !v12 )
    goto LABEL_13;
  v25 = sub_1BCA91C(v16, v12->obj.klass->_1.element_class);
  if ( !v25 )
    goto LABEL_14;
  if ( !v12->max_length )
    goto LABEL_15;
  v12->m_Items[0] = (QuestBoardInformationText_TimeData_o *)v16;
  sub_1BCA784((PartyOrganizationUtility_o *)v12->m_Items, v16, v27, v28, v29, v30, v31, v32);
  v36 = sub_1BCAA2C(QuestBoardInformationText_TimeData_TypeInfo, v33, v34, v35);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
LABEL_13:
    sub_1BCAA3C(v17, v18);
  *(_QWORD *)(v36 + 24) = changedColor;
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 24), (int64_t)changedColor, v37, v38, v39, v40, v41, v42);
  v44 = QuestBoardInformationText_TypeInfo;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo, v43);
    v44 = QuestBoardInformationText_TypeInfo;
  }
  *(_QWORD *)(v36 + 16) = endTime - v44->static_fields->CHANGE_START_REMAINING_TIME;
  v25 = sub_1BCA91C(v36, v12->obj.klass->_1.element_class);
  if ( !v25 )
  {
LABEL_14:
    v52 = sub_1BCAA60();
    sub_1BCA908(v52, 0LL);
  }
  if ( v12->max_length <= 1 )
LABEL_15:
    sub_1BCAA44(v25, v26);
  v12->m_Items[1] = (QuestBoardInformationText_TimeData_o *)v36;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->m_Items[1], v36, v45, v46, v47, v48, v49, v50);
  return v12;
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
        sub_1BCAA3C(this, nowTime);
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
    sub_1BCAA44(this, nowTime);
  return timeDataList->m_Items[v5];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBoardInformationText__GetDailyDropUpRestCount(
        QuestBoardInformationText_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v18; // x1
  UserEventEntity_o *Entity; // x19
  __int64 v20; // x1
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w22
  int32_t Value; // w4
  int32_t v25; // w0
  int64_t NextDayTime_39271192; // x0
  uint64_t v27; // x20
  uint64_t v28; // x21
  __int64 v29; // x1
  uint64_t v30; // x20
  uint64_t v31; // x21
  int32_t v32; // w0
  System_DateTime_o t1; // [xsp+0h] [xbp-50h] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x1.8
  System_DateTime_o v44; // 0:x1.8
  System_DateTime_o v45; // 0:x1.8

  if ( (byte_4B13084 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_5064/*"DAILY_DROP_UP_RESET_AT"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_5063/*"DAILY_DROP_UP_COUNT"*/, v12, v13);
    byte_4B13084 = 1;
  }
  t1.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_22:
    sub_1BCAA3C(Instance, v15);
  Entity = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
  if ( Entity )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
    dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v20);
    v36.fields._dateData = (uint64_t)&dateData;
    Year = System_DateTime__get_Year(v36, 0LL);
    v37.fields._dateData = (uint64_t)&dateData;
    Month = System_DateTime__get_Month(v37, 0LL);
    v38.fields._dateData = (uint64_t)&dateData;
    Day = System_DateTime__get_Day(v38, 0LL);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_5064/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    v39.fields._dateData = (uint64_t)&t1;
    System_DateTime___ctor_63079992(v39, Year, Month, Day, Value, 0, 0, 0LL);
    v25 = ConstantMaster__getValue((System_String_o *)StringLiteral_5064/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    NextDayTime_39271192 = NetworkManager__getNextDayTime_39271192(v25, 0LL);
    v27 = NetworkManager__getServerDateTime_39270492(NextDayTime_39271192, 0LL).fields._dateData;
    v28 = NetworkManager__getServerDateTime_39270492(Entity->fields.updatedAt, 0LL).fields._dateData;
    v43.fields._dateData = v28;
    v40.fields._dateData = t1.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v40, v43, 0LL) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v29);
      v41.fields._dateData = v28;
      v44.fields._dateData = v27;
      if ( System_DateTime__op_LessThan(v41, v44, 0LL) )
        goto LABEL_19;
    }
    v31 = t1.fields._dateData;
    v30 = dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v29);
    v42.fields._dateData = v30;
    v45.fields._dateData = v31;
    if ( System_DateTime__op_LessThan(v42, v45, 0LL) )
LABEL_19:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v32 = ConstantMaster__getValue((System_String_o *)StringLiteral_5063/*"DAILY_DROP_UP_COUNT"*/, 0LL);
  return (v32 - (_DWORD)Entity) & ~((v32 - (int)Entity) >> 31);
}


System_String_o *__fastcall QuestBoardInformationText__GetDailyDropUpRestTimeStr(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int32_t Value; // w20
  int64_t NextDayTime_39271192; // x0
  __int64 v11; // x1
  int64_t time; // x19
  uint32_t cctor_finished; // w9
  int64_t v14; // x20

  if ( (byte_4B13085 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5064/*"DAILY_DROP_UP_RESET_AT"*/, v6, v7);
    byte_4B13085 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_5064/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  NextDayTime_39271192 = NetworkManager__getNextDayTime_39271192(Value, 0LL);
  time = this->fields.time;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( time >= NextDayTime_39271192 )
  {
    v14 = NextDayTime_39271192;
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
    time = v14;
  }
  else if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
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
  __int64 v2; // x2
  struct BoardMessageEntity_o *boardMessageEnt; // x8
  int64_t time; // x19

  if ( (byte_4B13088 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B13088 = 1;
  }
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( !boardMessageEnt || boardMessageEnt->fields.referenceType != 2 )
    return 0;
  time = this->fields.time;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  BoardOptionTextWithIconComponent_o *IsTextEmpty; // x0
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8
  __int64 v21; // x1
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
  __int64 v34; // x1
  UISprite_o *v35; // x24
  System_String_o *v36; // x23
  int32_t BehindLabelWrappedWidth; // w0
  QuestBoardInformationText_c *v38; // x8
  int32_t INFO_LABEL_BASE_WIDTH; // w23
  int32_t v40; // w22
  int32_t mWidth; // w8
  bool v42; // vf
  int v43; // w8
  struct TerminalBoardOptionTextData_o *v44; // x9
  _BOOL4 IsLeft_k__BackingField; // w9
  float v46; // s0
  float v47; // s1
  int v48; // w9
  int32_t v49; // w1
  int32_t v50; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  if ( (byte_4B13086 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, component, frameSprite);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, v17, v18);
    byte_4B13086 = 1;
  }
  if ( (boardId & 0x80000000) != 0 )
    goto LABEL_6;
  IsTextEmpty = *component;
  if ( !*component )
    goto LABEL_52;
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
        IsTextEmpty = *component;
        if ( *component )
        {
          BoardOptionTextWithIconComponent__SetAnchorOffset(IsTextEmpty, 0, 0LL);
          return;
        }
      }
    }
LABEL_52:
    sub_1BCAA3C(IsTextEmpty, component);
  }
  dispTextExtend = this->fields.dispTextExtend;
  if ( !dispTextExtend )
    goto LABEL_52;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  if ( dispTextExtend->fields._IsLeft_k__BackingField )
  {
    UIWidget__set_pivot((UIWidget_o *)IsTextEmpty, 3, 0LL);
    v22 = QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo, v21);
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
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo, v21);
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
    j_il2cpp_runtime_class_init_0(v22, v21);
    v22 = QuestBoardInformationText_TypeInfo;
  }
  QUEST_BOARD_INFO_FRAME_NAME = v22->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  v50 = boardId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v33 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v32, 0LL);
  v35 = *frameSprite;
  v36 = v33;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34);
  AtlasManager__SetBanner(v35, v36, 0LL);
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)IsTextEmpty,
                                                        0LL);
  if ( !IsTextEmpty )
    goto LABEL_52;
  v51.fields.z = z + v30;
  v51.fields.y = y + v29;
  v51.fields.x = x + v28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsTextEmpty, v51, 0LL);
  IsTextEmpty = *component;
  if ( !*component )
    goto LABEL_52;
  BehindLabelWrappedWidth = BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(IsTextEmpty, 0LL);
  v38 = QuestBoardInformationText_TypeInfo;
  if ( QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH >= BehindLabelWrappedWidth )
  {
    INFO_LABEL_BASE_WIDTH = BehindLabelWrappedWidth;
  }
  else
  {
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo, component);
      v38 = QuestBoardInformationText_TypeInfo;
    }
    INFO_LABEL_BASE_WIDTH = QuestBoardInformationText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  if ( !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38, component);
    v38 = QuestBoardInformationText_TypeInfo;
  }
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  v40 = INFO_LABEL_BASE_WIDTH + sideSizeOffset + v38->static_fields->INFO_FRAME_SIDE_SIZE;
  UIWidget__set_width((UIWidget_o *)IsTextEmpty, v40, 0LL);
  if ( !this->fields.isFrameBg )
    goto LABEL_47;
  if ( !*frameSprite )
    goto LABEL_52;
  mWidth = (*frameSprite)->fields.mWidth;
  v42 = __OFSUB__(mWidth, v40);
  v43 = mWidth - v40;
  if ( (v43 < 0) ^ v42 | (v43 == 0) )
  {
LABEL_47:
    IsTextEmpty = *component;
    if ( !*component )
      goto LABEL_52;
    v49 = 0;
  }
  else
  {
    v44 = this->fields.dispTextExtend;
    if ( !v44 )
      goto LABEL_52;
    IsTextEmpty = *component;
    if ( !*component )
      goto LABEL_52;
    IsLeft_k__BackingField = v44->fields._IsLeft_k__BackingField;
    v46 = INFINITY;
    if ( !IsLeft_k__BackingField )
      v46 = -INFINITY;
    v47 = -x;
    if ( IsLeft_k__BackingField )
      v47 = x;
    if ( x == v46 )
      v48 = 0x80000000;
    else
      v48 = (int)v47;
    v49 = v48 + v43 / 2;
  }
  BoardOptionTextWithIconComponent__SetAnchorOffset(IsTextEmpty, v49, 0LL);
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_52;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)IsTextEmpty,
                                                        0LL);
  if ( !IsTextEmpty )
    goto LABEL_52;
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
        bool isFrameBg,
        const MethodInfo *method)
{
  this->fields.color = color;
  this->fields.boardId = boardId;
  this->fields.sideSizeOffset = sideSizeOffset;
  this->fields.boardOffset = boardOffset;
  this->fields.isColorSetting = isColorSetting;
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
  unsigned __int128 v24; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o v26; // [xsp+20h] [xbp-40h] BYREF

  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v26.fields.r = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  v24 = 0uLL;
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
    v11 = UnityEngine_ColorUtility__TryParseHtmlString(v6->fields.color, &v26, 0LL);
    v12 = v26;
    v13 = *(_QWORD *)&v6->fields.imgId;
    v14 = *(_QWORD *)&v6->fields.frameOffset.fields.x;
    z = v6->fields.frameOffset.fields.z;
    isFrameBg = v6->fields.isFrameBg;
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
LABEL_10:
    this->fields.isColorSetting = v11;
    this->fields.color = v12;
    *(_QWORD *)&this->fields.boardId = v13;
    *(_QWORD *)&this->fields.boardOffset.fields.x = v14;
    this->fields.boardOffset.fields.z = z;
    this->fields.isFrameBg = isFrameBg;
    return;
  }
LABEL_11:
  if ( CurrentTimeData )
  {
    v17 = UnityEngine_ColorUtility__TryParseHtmlString(CurrentTimeData->fields.color, (UnityEngine_Color_o *)&v24, 0LL);
    v18 = (struct UnityEngine_Color_o)v24;
    *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
    this->fields.isColorSetting = v17;
    this->fields.boardId = -1;
    this->fields.color = v18;
  }
  else
  {
    __asm { FMOV            V0.4S, #1.0 }
    this->fields.isColorSetting = 0;
    *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
    *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
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

  if ( (byte_4B13087 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBoardInformationText_TypeInfo, component, method);
    byte_4B13087 = 1;
  }
  if ( !this->fields.isColorSetting )
  {
    isCampaign = this->fields.isCampaign;
    v12 = *component;
    v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformationText_TypeInfo;
    if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo, component);
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
    sub_1BCAA3C(v5, component);
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


void __fastcall QuestBoardInformationText__SetTime(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x5

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
}


void __fastcall QuestBoardInformationText__SetTime_34574516(
        QuestBoardInformationText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        int64_t checkTime,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x5

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
}


void __fastcall QuestBoardInformationText_TimeData___ctor(
        QuestBoardInformationText_TimeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}