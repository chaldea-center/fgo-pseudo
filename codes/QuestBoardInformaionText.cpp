void __fastcall QuestBoardInformaionText___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  QuestBoardInformaionText_c *v9; // x8
  struct QuestBoardInformaionText_StaticFields *v10; // x9
  float v11; // s4
  float v12; // s5
  float v13; // s6
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s4
  float v18; // s5
  float v19; // s6
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B18B3 & 1) == 0 )
  {
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    sub_B52984(&StringLiteral_17291/*"caldeagate_notice_{0:00}"*/);
    byte_42B18B3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestBoardInformaionText_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17291/*"caldeagate_notice_{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17291/*"caldeagate_notice_{0:00}"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = QuestBoardInformaionText_TypeInfo;
  v21.fields.r = 0.99608;
  v10 = QuestBoardInformaionText_TypeInfo->static_fields;
  *(_QWORD *)&v10->INFO_FRAME_OFFSET.fields.x = 0xC180000043C58000LL;
  v10->INFO_FRAME_OFFSET.fields.z = 0.0;
  v9->static_fields->INFO_FRAME_SIDE_SIZE = 80;
  v9->static_fields->INFO_FONT_SIZE = 18;
  v21.fields.b = 0.6;
  v9->static_fields->INFO_LABEL_BASE_WIDTH = 355;
  v21.fields.g = 0.93725;
  var40.return_type = 0LL;
  var40.parameters = 0LL;
  UnityEngine_Color___ctor_41463668(v21, v11, v12, v13, (const MethodInfo *)&var40.return_type);
  v22.fields.g = 0.64706;
  v22.fields.b = 0.27059;
  QuestBoardInformaionText_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = *(struct UnityEngine_Color_o *)&var40.return_type;
  v22.fields.r = 0.88235;
  var40.name = 0LL;
  var40.klass = 0LL;
  UnityEngine_Color___ctor_41463668(v22, v14, v15, v16, (const MethodInfo *)&var40.name);
  QuestBoardInformaionText_TypeInfo->static_fields->CAMPAIGN_BOTTOM_COLOR = *(struct UnityEngine_Color_o *)&var40.name;
  white = UnityEngine_Color__get_white(0LL);
  QuestBoardInformaionText_TypeInfo->static_fields->NORMAL_TOP_COLOR = white;
  white.fields.r = 0.78824;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  white.fields.g = 0.78824;
  white.fields.b = 0.78824;
  UnityEngine_Color___ctor_41463668(white, v17, v18, v19, &var40);
  QuestBoardInformaionText_TypeInfo->static_fields->NORMAL_BOTTOM_COLOR = *(struct UnityEngine_Color_o *)&var40.methodPointer;
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
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.dispText = dispText;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dispText,
    (System_Int32_array **)dispText,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.dispTextExtend = dispTextExtend;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dispTextExtend,
    (System_Int32_array **)dispTextExtend,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.time = time;
  this->fields.color.fields.r = r;
  this->fields.color.fields.g = g;
  this->fields.color.fields.b = b;
  this->fields.color.fields.a = a;
  this->fields.boardId = boardId;
  this->fields.sideSizeOffset = sideSizeOffset;
  this->fields.boardOffset.fields.x = x;
  this->fields.boardOffset.fields.y = y;
  this->fields.boardOffset.fields.z = z;
  this->fields.isCampaign = isCampaign;
  this->fields.isColorSetting = isColorSetting;
  this->fields.isFrameBg = isFrameBg;
  QuestBoardInformaionText__CreateDispTextExtendIfNotExists(this, v40);
}


void __fastcall QuestBoardInformaionText___ctor_27827872(
        QuestBoardInformaionText_o *this,
        BoardMessageEntity_o *boardMessageEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.boardMessageEnt = boardMessageEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)boardMessageEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dispText,
    (System_Int32_array **)dispText,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEnt,
    (System_Int32_array **)eventCampaignEnt,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestBoardInformaionText__SetParamFromScript(this, checkTime, v31);
  QuestBoardInformaionText__CreateDispTextExtendIfNotExists(this, v32);
}


void __fastcall QuestBoardInformaionText___ctor_27828296(
        QuestBoardInformaionText_o *this,
        EventEntity_o *eventEntity,
        System_String_o *dispText,
        int64_t time,
        int64_t checkTime,
        EventCampaignEntity_o *eventCampaignEnt,
        const MethodInfo *method)
{
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventEntity = eventEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)eventEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.dispText,
    (System_Int32_array **)dispText,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.time = time;
  this->fields.isCampaign = 0;
  this->fields.eventCampaignEnt = eventCampaignEnt;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEnt,
    (System_Int32_array **)eventCampaignEnt,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  QuestBoardInformaionText__SetParamFromScript(this, checkTime, v31);
  QuestBoardInformaionText__CreateDispTextExtendIfNotExists(this, v32);
}


void __fastcall QuestBoardInformaionText__ChangeBehindText(QuestBoardInformaionText_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestBoardInformaionText_o *v3; // x19
  int32_t *eventCampaignEnt; // x8
  struct BoardMessageEntity_o *boardMessageEnt; // x9
  int v6; // s8
  TerminalBoardOptionTextData_o *v7; // x19
  __int64 v8; // x20
  __int64 RestTime2; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x21
  TerminalBoardOptionTextData_o *v18; // x0
  System_Object_array *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct TerminalBoardOptionTextData_o *v26; // x20
  int v27; // w22
  __int64 v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x23
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  const MethodInfo *v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v52; // x0
  int64_t time; // x21
  __int64 v54; // x19
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x21
  System_Int32_array **v62; // x1
  __int64 v63; // x0
  __int64 v64; // x0
  int v65; // [xsp+4h] [xbp-3Ch] BYREF
  int v66; // [xsp+8h] [xbp-38h] BYREF
  int v67; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_42B18AC & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    this = (QuestBoardInformaionText_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18AC = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v52 = sub_B5299C(object___TypeInfo, 1LL);
    time = v3->fields.time;
    v54 = v52;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1LL, 0LL);
    if ( !v54 )
      goto LABEL_40;
    v61 = (System_Int32_array **)RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_B52A44(RestTime2, *(_QWORD *)(*(_QWORD *)v54 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v54 + 24) )
      {
        *(_QWORD *)(v54 + 32) = v61;
        sub_B52920((BattleServantConfConponent_o *)(v54 + 32), v61, v55, v56, v57, v58, v59, v60);
        if ( dispTextExtend )
        {
          TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, (System_Object_array *)v54, 0LL);
          return;
        }
        goto LABEL_40;
      }
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  boardMessageEnt = v3->fields.boardMessageEnt;
  *(float *)&v6 = (float)eventCampaignEnt[12] / 1000.0;
  if ( boardMessageEnt && boardMessageEnt->fields.referenceType == 5 )
  {
    v7 = v3->fields.dispTextExtend;
    v8 = sub_B5299C(object___TypeInfo, 1LL);
    v67 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v67);
    if ( !v8 )
      goto LABEL_40;
    v17 = (System_Int32_array **)RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_B52A44(RestTime2, *(_QWORD *)(*(_QWORD *)v8 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v8 + 24) )
      {
        *(_QWORD *)(v8 + 32) = v17;
        sub_B52920((BattleServantConfConponent_o *)(v8 + 32), v17, v11, v12, v13, v14, v15, v16);
        if ( v7 )
        {
          v18 = v7;
          v19 = (System_Object_array *)v8;
LABEL_27:
          TerminalBoardOptionTextData__SetParamsToBehindText(v18, v19, 0LL);
          return;
        }
        goto LABEL_40;
      }
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  if ( v3->fields.eventEntity && eventCampaignEnt[5] == 26 )
  {
    RestTime2 = QuestBoardInformaionText__GetDaliyDropUpRestCount(this, eventCampaignEnt[4], v2);
    v26 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v26 )
      {
        v62 = (System_Int32_array **)StringLiteral_1/*""*/;
        v26->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B52920(
          (BattleServantConfConponent_o *)&v26->fields._BehindText_k__BackingField,
          v62,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
        return;
      }
      goto LABEL_40;
    }
    v27 = RestTime2;
    v28 = sub_B5299C(object___TypeInfo, 3LL);
    v66 = v6;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v66);
    if ( !v28 )
      goto LABEL_40;
    v35 = (System_Int32_array **)RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_B52A44(RestTime2, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v28 + 32) = v35;
      sub_B52920((BattleServantConfConponent_o *)(v28 + 32), v35, v29, v30, v31, v32, v33, v34);
      v65 = v27;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v65);
      v42 = (System_Int32_array **)RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_B52A44(RestTime2, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v28 + 24) <= 1u )
          goto LABEL_41;
        *(_QWORD *)(v28 + 40) = v42;
        sub_B52920((BattleServantConfConponent_o *)(v28 + 40), v42, v36, v37, v38, v39, v40, v41);
        RestTime2 = (__int64)QuestBoardInformaionText__GetDaliyDropUpRestTimeStr(v3, v43);
        v50 = (System_Int32_array **)RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_B52A44(RestTime2, *(_QWORD *)(*(_QWORD *)v28 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v28 + 24) > 2u )
          {
            *(_QWORD *)(v28 + 48) = v50;
            sub_B52920((BattleServantConfConponent_o *)(v28 + 48), v50, v44, v45, v46, v47, v48, v49);
            if ( v26 )
            {
              v18 = v26;
              v19 = (System_Object_array *)v28;
              goto LABEL_27;
            }
LABEL_40:
            sub_B52A5C(RestTime2, v10);
          }
LABEL_41:
          v63 = sub_B52A88(RestTime2);
          sub_B52A28(v63, 0LL);
        }
      }
    }
LABEL_42:
    v64 = sub_B52A7C(RestTime2);
    sub_B52A28(v64, 0LL);
  }
}


bool __fastcall QuestBoardInformaionText__ChangeText(
        QuestBoardInformaionText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        const MethodInfo *method)
{
  BoardOptionTextWithIconComponent_o *v5; // x21
  BoardOptionTextWithIconComponent_o *behindLabelText; // x0
  const MethodInfo *v7; // x1
  struct TerminalBoardOptionTextData_o *dispTextExtend; // x8

  if ( (byte_42B18AB & 1) == 0 )
  {
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    byte_42B18AB = 1;
  }
  v5 = *component;
  behindLabelText = (BoardOptionTextWithIconComponent_o *)QuestBoardInformaionText_TypeInfo;
  if ( (BYTE3(QuestBoardInformaionText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
  }
  if ( !v5
    || (BoardOptionTextWithIconComponent__set_LabelFontSize(
          v5,
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
    sub_B52A5C(behindLabelText, component);
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
  System_String_o *dispText; // x21
  TerminalBoardOptionTextData_o *v4; // x22
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42B18AD & 1) == 0 )
  {
    sub_B52984(&TerminalBoardOptionTextData_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B18AD = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v4 = (TerminalBoardOptionTextData_o *)sub_B52A54(TerminalBoardOptionTextData_TypeInfo);
    TerminalBoardOptionTextData___ctor(v4, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, 0LL);
    this->fields.dispTextExtend = v4;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.dispTextExtend,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
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


int32_t __fastcall QuestBoardInformaionText__GetDaliyDropUpRestCount(
        QuestBoardInformaionText_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventEntity_o *Entity; // x19
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w22
  int32_t Value; // w4
  int32_t v12; // w0
  int64_t NextDayTime_25742892; // x0
  uint64_t dateData; // x20
  System_DateTime_o v15; // x0
  uint64_t v16; // x22
  uint64_t v17; // x21
  uint64_t v18; // x20
  uint64_t v19; // x21
  int32_t v20; // w0
  System_DateTime_o t1; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v23; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8
  System_DateTime_o v26; // 0:x0.8
  System_DateTime_o v27; // 0:x0.8
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x1.8
  System_DateTime_o v32; // 0:x1.8
  System_DateTime_o v33; // 0:x1.8

  if ( (byte_42B18AE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B52984(&System_DateTime_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_4590/*"DAILY_DROP_UP_RESET_AT"*/);
    sub_B52984(&StringLiteral_4589/*"DAILY_DROP_UP_COUNT"*/);
    byte_42B18AE = 1;
  }
  v23.fields.dateData = 0LL;
  t1.fields.dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_27:
    sub_B52A5C(Instance, v5);
  Entity = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0LL);
  if ( Entity )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v23.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v24.fields.dateData = (uint64_t)&v23;
    Year = System_DateTime__get_Year(v24, 0LL);
    v25.fields.dateData = (uint64_t)&v23;
    Month = System_DateTime__get_Month(v25, 0LL);
    v26.fields.dateData = (uint64_t)&v23;
    Day = System_DateTime__get_Day(v26, 0LL);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4590/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    v27.fields.dateData = (uint64_t)&t1;
    System_DateTime___ctor_15506540(v27, Year, Month, Day, Value, 0, 0, 0LL);
    v12 = ConstantMaster__getValue((System_String_o *)StringLiteral_4590/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    NextDayTime_25742892 = NetworkManager__getNextDayTime_25742892(v12, 0LL);
    dateData = NetworkManager__getServerDateTime_25742200(NextDayTime_25742892, 0LL).fields.dateData;
    v15.fields.dateData = NetworkManager__getServerDateTime_25742200(Entity->fields.updatedAt, 0LL).fields.dateData;
    v16 = t1.fields.dateData;
    v17 = v15.fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v28.fields.dateData = v16;
    v31.fields.dateData = v17;
    if ( System_DateTime__op_LessThanOrEqual(v28, v31, 0LL) )
    {
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      v29.fields.dateData = v17;
      v32.fields.dateData = dateData;
      if ( System_DateTime__op_LessThan(v29, v32, 0LL) )
        goto LABEL_24;
    }
    v18 = v23.fields.dateData;
    v19 = t1.fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v30.fields.dateData = v18;
    v33.fields.dateData = v19;
    if ( System_DateTime__op_LessThan(v30, v33, 0LL) )
LABEL_24:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v20 = ConstantMaster__getValue((System_String_o *)StringLiteral_4589/*"DAILY_DROP_UP_COUNT"*/, 0LL);
  return (v20 - (_DWORD)Entity) & ~((v20 - (int)Entity) >> 31);
}


System_String_o *__fastcall QuestBoardInformaionText__GetDaliyDropUpRestTimeStr(
        QuestBoardInformaionText_o *this,
        const MethodInfo *method)
{
  int32_t Value; // w20
  int64_t NextDayTime_25742892; // x0
  int64_t time; // x19
  int64_t v6; // x20

  if ( (byte_42B18AF & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_4590/*"DAILY_DROP_UP_RESET_AT"*/);
    byte_42B18AF = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4590/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NextDayTime_25742892 = NetworkManager__getNextDayTime_25742892(Value, 0LL);
  time = this->fields.time;
  if ( time >= NextDayTime_25742892 )
  {
    v6 = NextDayTime_25742892;
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    time = v6;
  }
  else if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
         && !LocalizationManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_42B18B2 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B18B2 = 1;
  }
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( !boardMessageEnt || boardMessageEnt->fields.referenceType != 2 )
    return 0;
  time = this->fields.time;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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
  UnityEngine_Component_o *gameObject; // x0
  QuestBoardInformaionText_c *v16; // x0
  System_String_o *QUEST_BOARD_INFO_FRAME_NAME; // x24
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  UISprite_o *v20; // x24
  System_String_o *v21; // x23
  struct QuestBoardInformaionText_StaticFields *static_fields; // x8
  QuestBoardInformaionText_c *v23; // x8
  int32_t INFO_LABEL_BASE_WIDTH; // w22
  UIWidget_o *v25; // x23
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  if ( (byte_42B18B0 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    byte_42B18B0 = 1;
  }
  if ( (boardId & 0x80000000) != 0 )
    goto LABEL_6;
  gameObject = (UnityEngine_Component_o *)*component;
  if ( !*component )
    goto LABEL_31;
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
LABEL_31:
    sub_B52A5C(gameObject, component);
  }
  v16 = QuestBoardInformaionText_TypeInfo;
  if ( (BYTE3(QuestBoardInformaionText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
    v16 = QuestBoardInformaionText_TypeInfo;
  }
  QUEST_BOARD_INFO_FRAME_NAME = v16->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  v26 = boardId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v19 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v18, 0LL);
  v20 = *frameSprite;
  v21 = v19;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v20, v21, 0LL);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_31;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  static_fields = QuestBoardInformaionText_TypeInfo->static_fields;
  v27.fields.x = x + static_fields->INFO_FRAME_OFFSET.fields.x;
  v27.fields.y = y + static_fields->INFO_FRAME_OFFSET.fields.y;
  v27.fields.z = z + static_fields->INFO_FRAME_OFFSET.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v27, 0LL);
  gameObject = (UnityEngine_Component_o *)*component;
  if ( !*component )
    goto LABEL_31;
  gameObject = (UnityEngine_Component_o *)BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
                                            (BoardOptionTextWithIconComponent_o *)gameObject,
                                            0LL);
  v23 = QuestBoardInformaionText_TypeInfo;
  if ( QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH >= (int)gameObject )
  {
    INFO_LABEL_BASE_WIDTH = (int)gameObject;
  }
  else if ( (BYTE3(QuestBoardInformaionText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
         && !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
    v23 = QuestBoardInformaionText_TypeInfo;
    INFO_LABEL_BASE_WIDTH = QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  else
  {
    INFO_LABEL_BASE_WIDTH = QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  v25 = (UIWidget_o *)*frameSprite;
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v23);
  if ( !v25 )
    goto LABEL_31;
  UIWidget__set_width(
    v25,
    INFO_LABEL_BASE_WIDTH + sideSizeOffset + QuestBoardInformaionText_TypeInfo->static_fields->INFO_FRAME_SIDE_SIZE,
    0LL);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_31;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_31;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformaionText__SetParamFromScript(
        QuestBoardInformaionText_o *this,
        int64_t checkTime,
        const MethodInfo *method)
{
  BoardMessageEntity_o *boardMessageEnt; // x0
  BoardMessageEntity_TimeData_o *v6; // x20
  EventEntity_o *eventEntity; // x0
  EventEntity_ScriptData_o *v8; // x21
  bool v9; // w0
  UnityEngine_Color_o v10; // q0
  __int128 v11; // q1
  float z; // w8
  char isFrameBg; // w9
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  unsigned __int128 v18; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  *(_QWORD *)&color.fields.r = 0LL;
  v18 = 0uLL;
  boardMessageEnt = this->fields.boardMessageEnt;
  if ( boardMessageEnt )
    v6 = BoardMessageEntity__GetScriptDataCondCheck(boardMessageEnt, checkTime, 0LL);
  else
    v6 = 0LL;
  eventEntity = this->fields.eventEntity;
  if ( eventEntity )
    v8 = EventEntity__GetScriptDataCondCheck(eventEntity, checkTime, 0LL);
  else
    v8 = 0LL;
  if ( v6 )
  {
    color = UnityEngine_Color__get_white(0LL);
    v9 = UnityEngine_ColorUtility__TryParseHtmlString(v6->fields.color, &color, 0LL);
    v10 = color;
    v11 = *(_OWORD *)&v6->fields.imgId;
    z = v6->fields.frameOffset.fields.z;
    isFrameBg = v6->fields.isFrameBg;
  }
  else
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( !v8 )
    {
      isFrameBg = 1;
      this->fields.isColorSetting = 0;
      this->fields.color.fields.r = v14;
      this->fields.color.fields.g = v15;
      this->fields.color.fields.b = v16;
      this->fields.color.fields.a = v17;
      *(_QWORD *)&this->fields.sideSizeOffset = 0LL;
      *(_QWORD *)&this->fields.boardOffset.fields.y = 0LL;
      this->fields.boardId = -1;
      goto LABEL_12;
    }
    *(float *)&v18 = v14;
    *((float *)&v18 + 1) = v15;
    *((float *)&v18 + 2) = v16;
    *((float *)&v18 + 3) = v17;
    v9 = UnityEngine_ColorUtility__TryParseHtmlString(v8->fields.color, (UnityEngine_Color_o *)&v18, 0LL);
    v10 = (UnityEngine_Color_o)v18;
    v11 = *(_OWORD *)&v8->fields.imgId;
    z = v8->fields.frameOffset.fields.z;
    isFrameBg = v8->fields.isFrameBg;
  }
  this->fields.isColorSetting = v9;
  this->fields.color = v10;
  *(_OWORD *)&this->fields.boardId = v11;
  this->fields.boardOffset.fields.z = z;
LABEL_12:
  this->fields.isFrameBg = isFrameBg;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestBoardInformaionText__SetTextColor(
        QuestBoardInformaionText_o *this,
        BoardOptionTextWithIconComponent_o **component,
        const MethodInfo *method)
{
  BoardOptionTextWithIconComponent_o *v5; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  _BOOL4 isCampaign; // w9
  BoardOptionTextWithIconComponent_o *v11; // x20
  struct QuestBoardInformaionText_StaticFields *static_fields; // x8
  struct QuestBoardInformaionText_StaticFields *v13; // x8

  if ( (byte_42B18B1 & 1) == 0 )
  {
    sub_B52984(&QuestBoardInformaionText_TypeInfo);
    byte_42B18B1 = 1;
  }
  if ( !this->fields.isColorSetting )
  {
    isCampaign = this->fields.isCampaign;
    v11 = *component;
    v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformaionText_TypeInfo;
    if ( isCampaign )
    {
      if ( (WORD1(QuestBoardInformaionText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
        v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformaionText_TypeInfo;
      }
      if ( v11 )
      {
        BoardOptionTextWithIconComponent__set_LabelGradientTop(
          v11,
          *(UnityEngine_Color_o *)&v5[2].fields.itemIconSprite->fields.rightAnchor,
          0LL);
        v5 = *component;
        if ( *component )
        {
          static_fields = QuestBoardInformaionText_TypeInfo->static_fields;
          r = static_fields->CAMPAIGN_BOTTOM_COLOR.fields.r;
          g = static_fields->CAMPAIGN_BOTTOM_COLOR.fields.g;
          b = static_fields->CAMPAIGN_BOTTOM_COLOR.fields.b;
          a = static_fields->CAMPAIGN_BOTTOM_COLOR.fields.a;
          goto LABEL_20;
        }
      }
    }
    else
    {
      if ( (WORD1(QuestBoardInformaionText_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
        v5 = (BoardOptionTextWithIconComponent_o *)QuestBoardInformaionText_TypeInfo;
      }
      if ( v11 )
      {
        BoardOptionTextWithIconComponent__set_LabelGradientTop(
          v11,
          *(UnityEngine_Color_o *)&v5[2].fields.itemIconSprite->fields.mGo,
          0LL);
        v5 = *component;
        if ( *component )
        {
          v13 = QuestBoardInformaionText_TypeInfo->static_fields;
          r = v13->NORMAL_BOTTOM_COLOR.fields.r;
          g = v13->NORMAL_BOTTOM_COLOR.fields.g;
          b = v13->NORMAL_BOTTOM_COLOR.fields.b;
          a = v13->NORMAL_BOTTOM_COLOR.fields.a;
          goto LABEL_20;
        }
      }
    }
LABEL_21:
    sub_B52A5C(v5, component);
  }
  v5 = *component;
  if ( !*component )
    goto LABEL_21;
  BoardOptionTextWithIconComponent__set_LabelGradientTop(v5, this->fields.color, 0LL);
  v5 = *component;
  if ( !*component )
    goto LABEL_21;
  r = this->fields.color.fields.r;
  g = this->fields.color.fields.g;
  b = this->fields.color.fields.b;
  a = this->fields.color.fields.a;
LABEL_20:
  BoardOptionTextWithIconComponent__set_LabelGradientBottom(v5, *(UnityEngine_Color_o *)&r, 0LL);
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