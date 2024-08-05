void __fastcall QuestBoardInformaionText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  QuestBoardInformaionText_c *v5; // x8
  struct QuestBoardInformaionText_StaticFields *static_fields; // x9
  struct QuestBoardInformaionText_StaticFields *v7; // x9

  if ( (byte_49FB4C7 & 1) == 0 )
  {
    sub_1B64870(&QuestBoardInformaionText_TypeInfo, v1);
    sub_1B64870(&StringLiteral_17631/*"caldeagate_notice_{0:00}"*/, v4);
    byte_49FB4C7 = 1;
  }
  QuestBoardInformaionText_TypeInfo->static_fields->QUEST_BOARD_INFO_FRAME_NAME = (struct System_String_o *)StringLiteral_17631/*"caldeagate_notice_{0:00}"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)QuestBoardInformaionText_TypeInfo->static_fields,
    StringLiteral_17631/*"caldeagate_notice_{0:00}"*/,
    v2,
    v3);
  v5 = QuestBoardInformaionText_TypeInfo;
  static_fields = QuestBoardInformaionText_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_FRAME_OFFSET.fields.x = 0xC180000043C58000LL;
  static_fields->INFO_FRAME_OFFSET.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->INFO_FRAME_SIDE_SIZE = 0x1200000050LL;
  v7->CAMPAIGN_TOP_COLOR = (struct UnityEngine_Color_o)xmmword_BA2C90;
  v7->INFO_LABEL_BASE_WIDTH = 355;
  v5->static_fields->CAMPAIGN_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BA2FA0;
  __asm { FMOV            V0.4S, #1.0 }
  v5->static_fields->NORMAL_TOP_COLOR = _Q0;
  v5->static_fields->NORMAL_BOTTOM_COLOR = (struct UnityEngine_Color_o)xmmword_BA3280;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformaionText___ctor(
        QuestBoardInformaionText_o *this,
        System_String_o *dispText,
        int64_t time,
        bool isCampaign,
        bool isColorSetting,
        UnityEngine_Color_o color,
        int32_t boardId,
        int32_t sideSizeOffset,
        UnityEngine_Vector3_o boardOffset,
        bool isFrameBg,
        EventCampaignEntity_o *eventCampaignEnt,
        TerminalBoardOptionTextData_o *dispTextExtend,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float a; // s11
  float b; // s12
  float g; // s13
  float r; // s14
  bool v27; // w27
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v27 = isCampaign;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dispText = dispText;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dispText, (int32_t)dispText, v28, v29);
  this->fields.dispTextExtend = dispTextExtend;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dispTextExtend, (int32_t)dispTextExtend, v30, v31);
  this->fields.time = time;
  this->fields.isCampaign = v27;
  this->fields.color.fields.r = r;
  this->fields.color.fields.g = g;
  this->fields.color.fields.b = b;
  this->fields.color.fields.a = a;
  this->fields.boardId = boardId;
  this->fields.sideSizeOffset = sideSizeOffset;
  this->fields.boardOffset.fields.x = x;
  this->fields.boardOffset.fields.y = y;
  this->fields.boardOffset.fields.z = z;
  this->fields.isColorSetting = isColorSetting;
  this->fields.isFrameBg = isFrameBg;
  QuestBoardInformaionText__CreateDispTextExtendIfNotExists(this, v32);
}


void __fastcall QuestBoardInformaionText___ctor_33672824(
        QuestBoardInformaionText_o *this,
        BoardMessageEntity_o *boardMessageEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)boardMessageEntity, v13, v14);
  this->fields.dispText = dispText;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dispText, (int32_t)dispText, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEnt, (int32_t)eventCampaignEnt, v17, v18);
  QuestBoardInformaionText__SetParamFromScript(this, checkTime, v19);
  QuestBoardInformaionText__CreateDispTextExtendIfNotExists(this, v20);
}


void __fastcall QuestBoardInformaionText___ctor_33673244(
        QuestBoardInformaionText_o *this,
        EventEntity_o *eventEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEntity = eventEntity;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventEntity, (int32_t)eventEntity, v13, v14);
  this->fields.dispText = dispText;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dispText, (int32_t)dispText, v15, v16);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventCampaignEnt, (int32_t)eventCampaignEnt, v17, v18);
  QuestBoardInformaionText__SetParamFromScript(this, checkTime, v19);
  QuestBoardInformaionText__CreateDispTextExtendIfNotExists(this, v20);
}


void __fastcall QuestBoardInformaionText__ChangeBehindText(QuestBoardInformaionText_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestBoardInformaionText_o *v3; // x19
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
  int32_t v19; // w3
  __int64 v20; // x21
  TerminalBoardOptionTextData_o *v21; // x0
  System_Object_array *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  struct TerminalBoardOptionTextData_o *v25; // x20
  int v26; // w22
  __int64 v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x23
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x22
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v45; // x0
  int64_t time; // x21
  __int64 v47; // x19
  int32_t v48; // w2
  int32_t v49; // w3
  __int64 v50; // x21
  int32_t v51; // w1
  __int64 v52; // x0
  int v53; // [xsp+Ch] [xbp-44h] BYREF
  int v54; // [xsp+18h] [xbp-38h] BYREF
  int v55; // [xsp+1Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_49FB4C0 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, method);
    sub_1B64870(&LocalizationManager_TypeInfo, v4);
    sub_1B64870(&object___TypeInfo, v5);
    sub_1B64870(&float_TypeInfo, v6);
    this = (QuestBoardInformaionText_o *)sub_1B64870(&StringLiteral_1/*""*/, v7);
    byte_49FB4C0 = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v45 = sub_1B64918(object___TypeInfo, 1LL);
    time = v3->fields.time;
    v47 = v45;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1LL, 0LL);
    if ( !v47 )
      goto LABEL_39;
    v50 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1B649AC(RestTime2, *(_QWORD *)(*(_QWORD *)v47 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v47 + 24) )
      {
        *(_QWORD *)(v47 + 32) = v50;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v47 + 32), v50, v48, v49);
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
    v12 = sub_1B64918(object___TypeInfo, 1LL);
    v55 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v55, v13, v14, v15);
    if ( !v12 )
      goto LABEL_39;
    v20 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1B649AC(RestTime2, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v12 + 24) )
      {
        *(_QWORD *)(v12 + 32) = v20;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v12 + 32), v20, v18, v19);
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
    RestTime2 = QuestBoardInformaionText__GetDaliyDropUpRestCount(this, eventCampaignEnt[4], v2);
    v25 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v25 )
      {
        v51 = (int)StringLiteral_1/*""*/;
        v25->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v25->fields._BehindText_k__BackingField, v51, v23, v24);
        return;
      }
      goto LABEL_39;
    }
    v26 = RestTime2;
    v27 = sub_1B64918(object___TypeInfo, 3LL);
    v54 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v54, v28, v29, v30);
    if ( !v27 )
      goto LABEL_39;
    v33 = RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_1B649AC(RestTime2, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_40;
      *(_QWORD *)(v27 + 32) = v33;
      sub_1B64814((ServantStatusBattleListViewItem_o *)(v27 + 32), v33, v31, v32);
      v53 = v26;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v53, v34, v35, v36);
      v39 = RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_1B649AC(RestTime2, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v27 + 24) <= 1u )
          goto LABEL_40;
        *(_QWORD *)(v27 + 40) = v39;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v27 + 40), v39, v37, v38);
        RestTime2 = (__int64)QuestBoardInformaionText__GetDaliyDropUpRestTimeStr(v3, v40);
        v43 = RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_1B649AC(RestTime2, *(_QWORD *)(*(_QWORD *)v27 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v27 + 24) > 2u )
          {
            *(_QWORD *)(v27 + 48) = v43;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v27 + 48), v43, v41, v42);
            if ( v25 )
            {
              v21 = v25;
              v22 = (System_Object_array *)v27;
              goto LABEL_27;
            }
LABEL_39:
            sub_1B64ACC(RestTime2, v17);
          }
LABEL_40:
          sub_1B64AD4(RestTime2, v17);
        }
      }
    }
LABEL_41:
    v52 = sub_1B64AF0();
    sub_1B64998(v52, 0LL);
  }
}


bool __fastcall QuestBoardInformaionText__ChangeText(
        QuestBoardInformaionText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        const MethodInfo *method)
{
  BoardOptionTextWithIconComponent_o *behindLabelText; // x0
  BoardOptionTextWithIconComponent_o *v6; // x21
  const MethodInfo *v7; // x1
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8

  if ( (byte_49FB4BF & 1) == 0 )
  {
    sub_1B64870(&QuestBoardInformaionText_TypeInfo, component);
    byte_49FB4BF = 1;
  }
  behindLabelText = (BoardOptionTextWithIconComponent_o *)QuestBoardInformaionText_TypeInfo;
  v6 = *component;
  if ( !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
  if ( !v6
    || (BoardOptionTextWithIconComponent__set_LabelFontSize(
          v6,
          QuestBoardInformaionText_TypeInfo->static_fields->INFO_FONT_SIZE,
          0LL),
        QuestBoardInformaionText__ChangeBehindText(this, v7),
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
    sub_1B64ACC(behindLabelText, component);
  }
  BoardOptionTextWithIconComponent__UpdateUI(
    behindLabelText,
    this->fields.dispTextExtend,
    QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH,
    0LL);
  return this->fields.isChangedText;
}


void __fastcall QuestBoardInformaionText__CreateDispTextExtendIfNotExists(
        QuestBoardInformaionText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *dispText; // x21
  TerminalBoardOptionTextData_o *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB4C1 & 1) == 0 )
  {
    sub_1B64870(&TerminalBoardOptionTextData_TypeInfo, method);
    sub_1B64870(&StringLiteral_1/*""*/, v3);
    byte_49FB4C1 = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v5 = (TerminalBoardOptionTextData_o *)sub_1B64ABC(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v5, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, 0LL);
    this->fields.dispTextExtend = v5;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.dispTextExtend, (int32_t)v5, v6, v7);
  }
}


BoardMessageEntity_TimeData_o *__fastcall QuestBoardInformaionText__GetBoardMessageScriptData(
        QuestBoardInformaionText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_TimeData_o *result; // x0

  result = (BoardMessageEntity_TimeData_o *)this->fields.boardMessageEnt;
  if ( result )
    return BoardMessageEntity__GetScriptDataCondCheck((BoardMessageEntity_o *)result, checkTime, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBoardInformaionText__GetDaliyDropUpRestCount(
        QuestBoardInformaionText_o *this,
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
  int64_t NextDayTime_38167464; // x0
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

  if ( (byte_49FB4C2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&System_DateTime_TypeInfo, v4);
    sub_1B64870(&NetworkManager_TypeInfo, v5);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B64870(&StringLiteral_4968/*"DAILY_DROP_UP_RESET_AT"*/, v7);
    sub_1B64870(&StringLiteral_4967/*"DAILY_DROP_UP_COUNT"*/, v8);
    byte_49FB4C2 = 1;
  }
  t1.fields._dateData = 0LL;
  dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_22:
    sub_1B64ACC(Instance, v10);
  Entity = UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
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
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4968/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    v30.fields._dateData = (uint64_t)&t1;
    System_DateTime___ctor_62062012(v30, Year, Month, Day, Value, 0, 0, 0LL);
    v17 = ConstantMaster__getValue((System_String_o *)StringLiteral_4968/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    NextDayTime_38167464 = NetworkManager__getNextDayTime_38167464(v17, 0LL);
    v19 = NetworkManager__getServerDateTime_38082464(NextDayTime_38167464, 0LL).fields._dateData;
    v20 = NetworkManager__getServerDateTime_38082464(Entity->fields.updatedAt, 0LL).fields._dateData;
    v34.fields._dateData = v20;
    v31.fields._dateData = t1.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v31, v34, 0LL) )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v32.fields._dateData = v20;
      v35.fields._dateData = v19;
      if ( System_DateTime__op_LessThan(v32, v35, 0LL) )
        goto LABEL_19;
    }
    v22 = t1.fields._dateData;
    v21 = dateData;
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v33.fields._dateData = v21;
    v36.fields._dateData = v22;
    if ( System_DateTime__op_LessThan(v33, v36, 0LL) )
LABEL_19:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v23 = ConstantMaster__getValue((System_String_o *)StringLiteral_4967/*"DAILY_DROP_UP_COUNT"*/, 0LL);
  return (v23 - (_DWORD)Entity) & ~((v23 - (int)Entity) >> 31);
}


System_String_o *__fastcall QuestBoardInformaionText__GetDaliyDropUpRestTimeStr(
        QuestBoardInformaionText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Value; // w20
  int64_t NextDayTime_38167464; // x0
  int64_t time; // x19
  uint32_t cctor_finished; // w9
  int64_t v9; // x20

  if ( (byte_49FB4C3 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&NetworkManager_TypeInfo, v3);
    sub_1B64870(&StringLiteral_4968/*"DAILY_DROP_UP_RESET_AT"*/, v4);
    byte_49FB4C3 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4968/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NextDayTime_38167464 = NetworkManager__getNextDayTime_38167464(Value, 0LL);
  time = this->fields.time;
  cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
  if ( time >= NextDayTime_38167464 )
  {
    v9 = NextDayTime_38167464;
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


EventEntity_ScriptData_o *__fastcall QuestBoardInformaionText__GetEventScriptData(
        QuestBoardInformaionText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  EventEntity_ScriptData_o *result; // x0

  result = (EventEntity_ScriptData_o *)this->fields.eventEntity;
  if ( result )
    return EventEntity__GetScriptDataCondCheck((EventEntity_o *)result, checkTime, 0LL);
  return result;
}


bool __fastcall QuestBoardInformaionText__IsQuestOpened(QuestBoardInformaionText_o *this, const MethodInfo *method)
{
  struct BoardMessageEntity_o *boardMessageEnt; // x8
  int64_t time; // x19

  if ( (byte_49FB4C6 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    byte_49FB4C6 = 1;
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
void __fastcall QuestBoardInformaionText__SetFrameSprite(
        QuestBoardInformaionText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        int32_t boardId,
        UnityEngine_Vector3_o boardOffset,
        int32_t sideSizeOffset,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  QuestBoardInformaionText_c *v21; // x0
  System_String_o *QUEST_BOARD_INFO_FRAME_NAME; // x24
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UISprite_o *v25; // x24
  System_String_o *v26; // x23
  struct QuestBoardInformaionText_StaticFields *static_fields; // x8
  QuestBoardInformaionText_c *v28; // x8
  int32_t INFO_LABEL_BASE_WIDTH; // w22
  UIWidget_o *v30; // x23
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  if ( (byte_49FB4C4 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, component);
    sub_1B64870(&int_TypeInfo, v15);
    sub_1B64870(&QuestBoardInformaionText_TypeInfo, v16);
    byte_49FB4C4 = 1;
  }
  if ( (boardId & 0x80000000) != 0 )
    goto LABEL_6;
  gameObject = (UnityEngine_Component_o *)*component;
  if ( !*component )
    goto LABEL_27;
  if ( BoardOptionTextWithIconComponent__IsTextEmpty((BoardOptionTextWithIconComponent_o *)gameObject, 0LL) )
  {
LABEL_6:
    gameObject = (UnityEngine_Component_o *)*frameSprite;
    if ( *frameSprite )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        return;
      }
    }
LABEL_27:
    sub_1B64ACC(gameObject, component);
  }
  v21 = QuestBoardInformaionText_TypeInfo;
  if ( !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
    v21 = QuestBoardInformaionText_TypeInfo;
  }
  QUEST_BOARD_INFO_FRAME_NAME = v21->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  v31 = boardId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v18, v19, v20);
  v24 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v23, 0LL);
  v25 = *frameSprite;
  v26 = v24;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v25, v26, 0LL);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_27;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  static_fields = QuestBoardInformaionText_TypeInfo->static_fields;
  v32.fields.z = z + static_fields->INFO_FRAME_OFFSET.fields.z;
  v32.fields.y = y + static_fields->INFO_FRAME_OFFSET.fields.y;
  v32.fields.x = x + static_fields->INFO_FRAME_OFFSET.fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v32, 0LL);
  gameObject = (UnityEngine_Component_o *)*component;
  if ( !*component )
    goto LABEL_27;
  gameObject = (UnityEngine_Component_o *)BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
                                            (BoardOptionTextWithIconComponent_o *)gameObject,
                                            0LL);
  v28 = QuestBoardInformaionText_TypeInfo;
  if ( QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH >= (int)gameObject )
  {
    INFO_LABEL_BASE_WIDTH = (int)gameObject;
  }
  else
  {
    if ( !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
      v28 = QuestBoardInformaionText_TypeInfo;
    }
    INFO_LABEL_BASE_WIDTH = QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  v30 = (UIWidget_o *)*frameSprite;
  if ( !v28->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v28);
  if ( !v30 )
    goto LABEL_27;
  UIWidget__set_width(
    v30,
    INFO_LABEL_BASE_WIDTH + sideSizeOffset + QuestBoardInformaionText_TypeInfo->static_fields->INFO_FRAME_SIDE_SIZE,
    0LL);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_27;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, this->fields.isFrameBg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformaionText__SetParam(
        QuestBoardInformaionText_o *this,
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


void __fastcall QuestBoardInformaionText__SetParamFromScript(
        QuestBoardInformaionText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_o *boardMessageEnt; // x0
  BoardMessageEntity_TimeData_o *v6; // x0
  BoardMessageEntity_TimeData_o *v7; // x20
  EventEntity_ScriptData_o *v8; // x0
  EventEntity_o *eventEntity; // x0
  EventEntity_ScriptData_o *v10; // x21
  bool v16; // w0
  UnityEngine_Color_o v17; // q0
  __int64 v18; // d1
  __int64 v19; // d2
  float z; // s3
  bool isFrameBg; // w8
  unsigned __int128 v24; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  v24 = 0uLL;
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( boardMessageEnt )
  {
    v6 = BoardMessageEntity__GetScriptDataCondCheck(boardMessageEnt, checkTime, 0LL);
    v7 = v6;
    if ( this->fields.eventEntity )
    {
      v8 = EventEntity__GetScriptDataCondCheck(this->fields.eventEntity, checkTime, 0LL);
      if ( !v7 )
        goto LABEL_7;
    }
    else if ( !v6 )
    {
      goto LABEL_12;
    }
    __asm { FMOV            V0.4S, #1.0 }
    color = _Q0;
    v16 = UnityEngine_ColorUtility__TryParseHtmlString(v7->fields.color, &color, 0LL);
    v17 = color;
    v18 = *(_QWORD *)&v7->fields.imgId;
    v19 = *(_QWORD *)&v7->fields.frameOffset.fields.x;
    z = v7->fields.frameOffset.fields.z;
    isFrameBg = v7->fields.isFrameBg;
    goto LABEL_11;
  }
  eventEntity = this->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_12;
  v8 = EventEntity__GetScriptDataCondCheck(eventEntity, checkTime, 0LL);
LABEL_7:
  v10 = v8;
  if ( v8 )
  {
    __asm { FMOV            V0.4S, #1.0 }
    v24 = _Q0;
    v16 = UnityEngine_ColorUtility__TryParseHtmlString(v8->fields.color, (UnityEngine_Color_o *)&v24, 0LL);
    v17 = (UnityEngine_Color_o)v24;
    v18 = *(_QWORD *)&v10->fields.imgId;
    v19 = *(_QWORD *)&v10->fields.frameOffset.fields.x;
    z = v10->fields.frameOffset.fields.z;
    isFrameBg = v10->fields.isFrameBg;
LABEL_11:
    this->fields.isColorSetting = v16;
    this->fields.color = v17;
    *(_QWORD *)&this->fields.boardId = v18;
    *(_QWORD *)&this->fields.boardOffset.fields.x = v19;
    this->fields.boardOffset.fields.z = z;
    this->fields.isFrameBg = isFrameBg;
    return;
  }
LABEL_12:
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.isColorSetting = 0;
  *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
  *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
  this->fields.color = _Q0;
  this->fields.boardId = -1;
  this->fields.isFrameBg = 1;
}


void __fastcall QuestBoardInformaionText__SetTextColor(
        QuestBoardInformaionText_o *this,
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
  UnityEngine_Color_o *m_CancellationTokenSource; // x8
  struct QuestBoardInformaionText_StaticFields *static_fields; // x8
  struct QuestBoardInformaionText_StaticFields *v15; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FB4C5 & 1) == 0 )
  {
    sub_1B64870(&QuestBoardInformaionText_TypeInfo, component);
    byte_49FB4C5 = 1;
  }
  if ( !this->fields.isColorSetting )
  {
    isCampaign = this->fields.isCampaign;
    v12 = *component;
    v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformaionText_TypeInfo;
    if ( !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
      v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformaionText_TypeInfo;
    }
    m_CancellationTokenSource = (UnityEngine_Color_o *)v5[2].fields.m_CancellationTokenSource;
    if ( isCampaign )
    {
      if ( v12 )
      {
        BoardOptionTextWithIconComponent__set_LabelGradientTop(v12, m_CancellationTokenSource[2], 0LL);
        v5 = *component;
        if ( *component )
        {
          static_fields = QuestBoardInformaionText_TypeInfo->static_fields;
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
      BoardOptionTextWithIconComponent__set_LabelGradientTop(v12, m_CancellationTokenSource[4], 0LL);
      v5 = *component;
      if ( *component )
      {
        v15 = QuestBoardInformaionText_TypeInfo->static_fields;
        p_a = &v15->NORMAL_BOTTOM_COLOR.fields.a;
        p_b = &v15->NORMAL_BOTTOM_COLOR.fields.b;
        p_g = &v15->NORMAL_BOTTOM_COLOR.fields.g;
        p_CAMPAIGN_BOTTOM_COLOR = &v15->NORMAL_BOTTOM_COLOR;
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_1B64ACC(v5, component);
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


void __fastcall QuestBoardInformaionText__SetTime(
        QuestBoardInformaionText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x5

  QuestBoardInformaionText__SetTextColor(this, component, (const MethodInfo *)frameSprite);
  QuestBoardInformaionText__ChangeText(this, component, v7);
  QuestBoardInformaionText__SetFrameSprite(
    this,
    component,
    frameSprite,
    this->fields.boardId,
    this->fields.boardOffset,
    this->fields.sideSizeOffset,
    v8);
}


void __fastcall QuestBoardInformaionText__Update(
        QuestBoardInformaionText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        UISprite_o **frameSprite,
        int64_t checkTime,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x5

  QuestBoardInformaionText__SetParamFromScript(this, checkTime, (const MethodInfo *)frameSprite);
  QuestBoardInformaionText__SetTextColor(this, component, v8);
  QuestBoardInformaionText__SetFrameSprite(
    this,
    component,
    frameSprite,
    this->fields.boardId,
    this->fields.boardOffset,
    this->fields.sideSizeOffset,
    v9);
}