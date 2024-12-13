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
  QuestBoardInformationText_c *v9; // x8
  struct QuestBoardInformationText_StaticFields *static_fields; // x9
  struct QuestBoardInformationText_StaticFields *v11; // x9
  struct QuestBoardInformationText_StaticFields *v12; // x9

  if ( (byte_4B34016 & 1) == 0 )
  {
    sub_1BD3458(&QuestBoardInformationText_TypeInfo, v1);
    sub_1BD3458(&StringLiteral_17904/*"caldeagate_notice_{0:00}"*/, v8);
    byte_4B34016 = 1;
  }
  QuestBoardInformationText_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17904/*"caldeagate_notice_{0:00}"*/;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)QuestBoardInformationText_TypeInfo->static_fields,
    StringLiteral_17904/*"caldeagate_notice_{0:00}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v9 = QuestBoardInformationText_TypeInfo;
  static_fields = QuestBoardInformationText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_FRAME_RIGHT_OFFSET.fields.x = 0xC180000043C58000LL;
  static_fields->INFO_FRAME_RIGHT_OFFSET.fields.z = 0.0;
  v11 = v9->static_fields;
  *(_QWORD *)&v11->INFO_FRAME_LEFT_OFFSET.fields.x = 0xC1800000C3070000LL;
  v11->INFO_FRAME_LEFT_OFFSET.fields.z = 0.0;
  v12 = v9->static_fields;
  *(_QWORD *)&v12->INFO_FRAME_SIDE_SIZE = 0x1200000050LL;
  v12->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BD7740;
  v12->INFO_LABEL_BASE_WIDTH = 355;
  v9->static_fields->CAMPAIGN_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BD7A40;
  __asm { FMOV            V0.4S, #1.0 }
  v9->static_fields->NORMAL_TOP_COLOR = _Q0;
  v9->static_fields->NORMAL_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BD7D20;
  v9->static_fields->CHANGE_START_REMAINING_TIME = 86399LL;
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v13, v14, v15, v16, v17, v18);
  this->fields.dispTextExtend = dispTextExtend;
  sub_1BD33FC(
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


void __fastcall QuestBoardInformationText___ctor_34623592(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)inDispText, v13, v14, v15, v16, v17, v18);
  this->fields.time = inTime;
  TimeDataList = QuestBoardInformationText__CreateTimeDataList(v19, inTime, defaultColor, changedColor, v20);
  this->fields.timeDataList = TimeDataList;
  sub_1BD33FC(
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


void __fastcall QuestBoardInformationText___ctor_34624456(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)boardMessageEntity, v13, v14, v15, v16, v17, v18);
  this->fields.dispText = dispText;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1BD33FC(
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


void __fastcall QuestBoardInformationText___ctor_34624624(
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
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.eventEntity,
    (int64_t)eventEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.dispText, (int64_t)dispText, v19, v20, v21, v22, v23, v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1BD33FC(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x21
  TerminalBoardOptionTextData_o *v25; // x0
  System_Object_array *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct TerminalBoardOptionTextData_o *v33; // x20
  int v34; // w22
  __int64 v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x23
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x22
  const MethodInfo *v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v65; // x0
  int64_t time; // x21
  __int64 v67; // x19
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x21
  void *v75; // x1
  __int64 v76; // x0
  int v77; // [xsp+Ch] [xbp-44h] BYREF
  int v78; // [xsp+18h] [xbp-38h] BYREF
  int v79; // [xsp+1Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B3400E & 1) == 0 )
  {
    sub_1BD3458(&int_TypeInfo, method);
    sub_1BD3458(&LocalizationManager_TypeInfo, v4);
    sub_1BD3458(&object___TypeInfo, v5);
    sub_1BD3458(&float_TypeInfo, v6);
    this = (QuestBoardInformationText_o *)sub_1BD3458(&StringLiteral_1/*""*/, v7);
    byte_4B3400E = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v65 = sub_1BD3500(object___TypeInfo, 1LL);
    time = v3->fields.time;
    v67 = v65;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1LL, 0LL);
    if ( !v67 )
      goto LABEL_39;
    v74 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1BD3594(RestTime2, *(_QWORD *)(*(_QWORD *)v67 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v67 + 24) )
      {
        *(_QWORD *)(v67 + 32) = v74;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v67 + 32), v74, v68, v69, v70, v71, v72, v73);
        if ( dispTextExtend )
        {
          TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, (System_Object_array *)v67, 0LL);
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
    v12 = sub_1BD3500(object___TypeInfo, 1LL);
    v79 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v79, v13, v14, v15);
    if ( !v12 )
      goto LABEL_39;
    v24 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1BD3594(RestTime2, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v12 + 24) )
      {
        *(_QWORD *)(v12 + 32) = v24;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 32), v24, v18, v19, v20, v21, v22, v23);
        if ( v11 )
        {
          v25 = v11;
          v26 = (System_Object_array *)v12;
LABEL_27:
          TerminalBoardOptionTextData__SetParamsToBehindText(v25, v26, 0LL);
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
    v33 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v33 )
      {
        v75 = StringLiteral_1/*""*/;
        v33->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v33->fields._BehindText_k__BackingField,
          (int64_t)v75,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        return;
      }
      goto LABEL_39;
    }
    v34 = RestTime2;
    v35 = sub_1BD3500(object___TypeInfo, 3LL);
    v78 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v78, v36, v37, v38);
    if ( !v35 )
      goto LABEL_39;
    v45 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1BD3594(RestTime2, *(_QWORD *)(*(_QWORD *)v35 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v35 + 24) )
        goto LABEL_40;
      *(_QWORD *)(v35 + 32) = v45;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v35 + 32), v45, v39, v40, v41, v42, v43, v44);
      v77 = v34;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v77, v46, v47, v48);
      v55 = RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_1BD3594(RestTime2, *(_QWORD *)(*(_QWORD *)v35 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v35 + 24) <= 1u )
          goto LABEL_40;
        *(_QWORD *)(v35 + 40) = v55;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v35 + 40), v55, v49, v50, v51, v52, v53, v54);
        RestTime2 = (__int64)QuestBoardInformationText__GetDailyDropUpRestTimeStr(v3, v56);
        v63 = RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_1BD3594(RestTime2, *(_QWORD *)(*(_QWORD *)v35 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v35 + 24) > 2u )
          {
            *(_QWORD *)(v35 + 48) = v63;
            sub_1BD33FC((PartyOrganizationUtility_o *)(v35 + 48), v63, v57, v58, v59, v60, v61, v62);
            if ( v33 )
            {
              v25 = v33;
              v26 = (System_Object_array *)v35;
              goto LABEL_27;
            }
LABEL_39:
            sub_1BD36B4(RestTime2, v17);
          }
LABEL_40:
          sub_1BD36BC(RestTime2, v17);
        }
      }
    }
LABEL_41:
    v76 = sub_1BD36D8();
    sub_1BD3580(v76, 0LL);
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

  if ( (byte_4B3400D & 1) == 0 )
  {
    sub_1BD3458(&QuestBoardInformationText_TypeInfo, component);
    byte_4B3400D = 1;
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
    sub_1BD36B4(behindLabelText, component);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B3400F & 1) == 0 )
  {
    sub_1BD3458(&TerminalBoardOptionTextData_TypeInfo, isLeft);
    sub_1BD3458(&StringLiteral_1/*""*/, v5);
    byte_4B3400F = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v7 = (TerminalBoardOptionTextData_o *)sub_1BD36A4(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v7, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, isLeft, 0LL);
    this->fields.dispTextExtend = v7;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.dispTextExtend, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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
  int64_t v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  QuestBoardInformationText_c *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v43; // x0

  if ( (byte_4B34015 & 1) == 0 )
  {
    sub_1BD3458(&QuestBoardInformationText_TypeInfo, endTime);
    sub_1BD3458(&QuestBoardInformationText_TimeData___TypeInfo, v8);
    sub_1BD3458(&QuestBoardInformationText_TimeData_TypeInfo, v9);
    byte_4B34015 = 1;
  }
  v10 = (QuestBoardInformationText_TimeData_array *)sub_1BD3500(QuestBoardInformationText_TimeData___TypeInfo, 2LL);
  v11 = sub_1BD36A4(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 24) = defaultColor;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)defaultColor, v14, v15, v16, v17, v18, v19);
  if ( !v10 )
    goto LABEL_13;
  v20 = sub_1BD3594(v11, v10->obj.klass->_1.element_class);
  if ( !v20 )
    goto LABEL_14;
  if ( !v10->max_length )
    goto LABEL_15;
  v10->m_Items[0] = (QuestBoardInformationText_TimeData_o *)v11;
  sub_1BD33FC((PartyOrganizationUtility_o *)v10->m_Items, v11, v22, v23, v24, v25, v26, v27);
  v28 = sub_1BD36A4(QuestBoardInformationText_TimeData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
LABEL_13:
    sub_1BD36B4(v12, v13);
  *(_QWORD *)(v28 + 24) = changedColor;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)changedColor, v29, v30, v31, v32, v33, v34);
  v35 = QuestBoardInformationText_TypeInfo;
  if ( !QuestBoardInformationText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformationText_TypeInfo);
    v35 = QuestBoardInformationText_TypeInfo;
  }
  *(_QWORD *)(v28 + 16) = endTime - v35->static_fields->CHANGE_START_REMAINING_TIME;
  v20 = sub_1BD3594(v28, v10->obj.klass->_1.element_class);
  if ( !v20 )
  {
LABEL_14:
    v43 = sub_1BD36D8();
    sub_1BD3580(v43, 0LL);
  }
  if ( v10->max_length <= 1 )
LABEL_15:
    sub_1BD36BC(v20, v21);
  v10->m_Items[1] = (QuestBoardInformationText_TimeData_o *)v28;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v10->m_Items[1], v28, v36, v37, v38, v39, v40, v41);
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
        sub_1BD36B4(this, nowTime);
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
    sub_1BD36BC(this, nowTime);
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
  int64_t NextDayTime_39342520; // x0
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

  if ( (byte_4B34010 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_1BD3458(&System_DateTime_TypeInfo, v4);
    sub_1BD3458(&NetworkManager_TypeInfo, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1BD3458(&StringLiteral_5072/*"DAILY_DROP_UP_RESET_AT"*/, v7);
    sub_1BD3458(&StringLiteral_5071/*"DAILY_DROP_UP_COUNT"*/, v8);
    byte_4B34010 = 1;
  }
  t1.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v10);
    byte_4B31D77 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_26:
    sub_1BD36B4(Instance, v10);
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_5072/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    v30.fields._dateData = (uint64_t)&t1;
    System_DateTime___ctor_63204020(v30, Year, Month, Day, Value, 0, 0, 0LL);
    v17 = ConstantMaster__getValue((System_String_o *)StringLiteral_5072/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    NextDayTime_39342520 = NetworkManager__getNextDayTime_39342520(v17, 0LL);
    v19 = NetworkManager__getServerDateTime_39341820(NextDayTime_39342520, 0LL).fields._dateData;
    v20 = NetworkManager__getServerDateTime_39341820(Entity->fields.updatedAt, 0LL).fields._dateData;
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
  v23 = ConstantMaster__getValue((System_String_o *)StringLiteral_5071/*"DAILY_DROP_UP_COUNT"*/, 0LL);
  return (v23 - (_DWORD)Entity) & ~((v23 - (int)Entity) >> 31);
}


System_String_o *__fastcall QuestBoardInformationText__GetDailyDropUpRestTimeStr(
        QuestBoardInformationText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Value; // w20
  int64_t NextDayTime_39342520; // x0
  int64_t time; // x19
  uint32_t cctor_finished; // w9
  int64_t v9; // x20

  if ( (byte_4B34011 & 1) == 0 )
  {
    sub_1BD3458(&LocalizationManager_TypeInfo, method);
    sub_1BD3458(&NetworkManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_5072/*"DAILY_DROP_UP_RESET_AT"*/, v4);
    byte_4B34011 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_5072/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayTime_39342520 = NetworkManager__getNextDayTime_39342520(Value, 0LL);
  time = this->fields.time;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( time >= NextDayTime_39342520 )
  {
    v9 = NextDayTime_39342520;
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

  if ( (byte_4B34014 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    byte_4B34014 = 1;
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
  float v45; // s0
  float v46; // s1
  int v47; // w9
  int32_t v48; // w1
  int32_t v49; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  if ( (byte_4B34012 & 1) == 0 )
  {
    sub_1BD3458(&AtlasManager_TypeInfo, component);
    sub_1BD3458(&int_TypeInfo, v15);
    sub_1BD3458(&QuestBoardInformationText_TypeInfo, v16);
    byte_4B34012 = 1;
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
    sub_1BD36B4(IsTextEmpty, component);
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
    goto LABEL_52;
  IsTextEmpty = (BoardOptionTextWithIconComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)IsTextEmpty,
                                                        0LL);
  if ( !IsTextEmpty )
    goto LABEL_52;
  v50.fields.z = z + v30;
  v50.fields.y = y + v29;
  v50.fields.x = x + v28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsTextEmpty, v50, 0LL);
  IsTextEmpty = *component;
  if ( !*component )
    goto LABEL_52;
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
    goto LABEL_52;
  v39 = INFO_LABEL_BASE_WIDTH + sideSizeOffset + v37->static_fields->INFO_FRAME_SIDE_SIZE;
  UIWidget__set_width((UIWidget_o *)IsTextEmpty, v39, 0LL);
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
    IsTextEmpty = *component;
    if ( !*component )
      goto LABEL_52;
    v48 = 0;
  }
  else
  {
    v43 = this->fields.dispTextExtend;
    if ( !v43 )
      goto LABEL_52;
    IsTextEmpty = *component;
    if ( !*component )
      goto LABEL_52;
    IsLeft_k__BackingField = v43->fields._IsLeft_k__BackingField;
    v45 = INFINITY;
    if ( !IsLeft_k__BackingField )
      v45 = -INFINITY;
    v46 = -x;
    if ( IsLeft_k__BackingField )
      v46 = x;
    if ( x == v45 )
      v47 = 0x80000000;
    else
      v47 = (int)v46;
    v48 = v47 + v42 / 2;
  }
  BoardOptionTextWithIconComponent__SetAnchorOffset(IsTextEmpty, v48, 0LL);
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

  if ( (byte_4B34013 & 1) == 0 )
  {
    sub_1BD3458(&QuestBoardInformationText_TypeInfo, component);
    byte_4B34013 = 1;
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
    sub_1BD36B4(v5, component);
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


void __fastcall QuestBoardInformationText__SetTime_34626440(
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