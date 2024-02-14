void __fastcall QuestBoardInformaionText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1
  QuestBoardInformaionText_c *v11; // x8
  struct QuestBoardInformaionText_StaticFields *v12; // x9
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s4
  float v17; // s5
  float v18; // s6
  float v19; // s4
  float v20; // s5
  float v21; // s6
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4216CC1 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17224/*"caldeagate_notice_{0:00}"*/, v8);
    byte_4216CC1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestBoardInformaionText_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_17224/*"caldeagate_notice_{0:00}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17224/*"caldeagate_notice_{0:00}"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
  v11 = QuestBoardInformaionText_TypeInfo;
  v23.fields.r = 0.99608;
  v12 = QuestBoardInformaionText_TypeInfo->static_fields;
  *(_QWORD *)&v12->INFO_FRAME_OFFSET.fields.x = 0xC180000043C58000LL;
  v12->INFO_FRAME_OFFSET.fields.z = 0.0;
  v11->static_fields->INFO_FRAME_SIDE_SIZE = 80;
  v11->static_fields->INFO_FONT_SIZE = 18;
  v23.fields.b = 0.6;
  v11->static_fields->INFO_LABEL_BASE_WIDTH = 355;
  v23.fields.g = 0.93725;
  var40.return_type = 0LL;
  var40.parameters = 0LL;
  UnityEngine_Color___ctor_40757524(v23, v13, v14, v15, (const MethodInfo *)&var40.return_type);
  v24.fields.g = 0.64706;
  v24.fields.b = 0.27059;
  QuestBoardInformaionText_TypeInfo->static_fields->CAMPAIGN_TOP_COLOR = *(struct UnityEngine_Color_o *)&var40.return_type;
  v24.fields.r = 0.88235;
  var40.name = 0LL;
  var40.klass = 0LL;
  UnityEngine_Color___ctor_40757524(v24, v16, v17, v18, (const MethodInfo *)&var40.name);
  QuestBoardInformaionText_TypeInfo->static_fields->CAMPAIGN_BOTTOM_COLOR = *(struct UnityEngine_Color_o *)&var40.name;
  white = UnityEngine_Color__get_white(0LL);
  QuestBoardInformaionText_TypeInfo->static_fields->NORMAL_TOP_COLOR = white;
  white.fields.r = 0.78824;
  *(_OWORD *)&var40.methodPointer = 0uLL;
  white.fields.g = 0.78824;
  white.fields.b = 0.78824;
  UnityEngine_Color___ctor_40757524(white, v19, v20, v21, &var40);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.dispText,
    (System_Int32_array **)dispText,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.dispTextExtend = dispTextExtend;
  sub_B0D840(
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


void __fastcall QuestBoardInformaionText___ctor_28495360(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)boardMessageEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_B0D840(
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
  sub_B0D840(
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


void __fastcall QuestBoardInformaionText___ctor_28495784(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)eventEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.dispText = dispText;
  sub_B0D840(
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
  sub_B0D840(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t *eventCampaignEnt; // x8
  struct BoardMessageEntity_o *boardMessageEnt; // x9
  int v10; // s8
  TerminalBoardOptionTextData_o *v11; // x19
  __int64 v12; // x20
  __int64 RestTime2; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x21
  TerminalBoardOptionTextData_o *v21; // x0
  System_Object_array *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct TerminalBoardOptionTextData_o *v29; // x20
  int v30; // w22
  __int64 v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x22
  const MethodInfo *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x19
  TerminalBoardOptionTextData_o *dispTextExtend; // x20
  __int64 v55; // x0
  int64_t time; // x21
  __int64 v57; // x19
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x21
  System_Int32_array **v65; // x1
  __int64 v66; // x0
  __int64 v67; // x0
  int v68; // [xsp+4h] [xbp-3Ch] BYREF
  int v69; // [xsp+8h] [xbp-38h] BYREF
  int v70; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4216CBA & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&object___TypeInfo, v5);
    sub_B0D8A4(&float_TypeInfo, v6);
    this = (QuestBoardInformaionText_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4216CBA = 1;
  }
  eventCampaignEnt = (int32_t *)v3->fields.eventCampaignEnt;
  if ( !eventCampaignEnt )
  {
    dispTextExtend = v3->fields.dispTextExtend;
    v55 = sub_B0D8BC(object___TypeInfo, 1LL);
    time = v3->fields.time;
    v57 = v55;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    RestTime2 = (__int64)LocalizationManager__GetRestTime2(time, -1LL, 0LL);
    if ( !v57 )
      goto LABEL_40;
    v64 = (System_Int32_array **)RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_B0D964(RestTime2, *(_QWORD *)(*(_QWORD *)v57 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v57 + 24) )
      {
        *(_QWORD *)(v57 + 32) = v64;
        sub_B0D840((BattleServantConfConponent_o *)(v57 + 32), v64, v58, v59, v60, v61, v62, v63);
        if ( dispTextExtend )
        {
          TerminalBoardOptionTextData__SetParamsToBehindText(dispTextExtend, (System_Object_array *)v57, 0LL);
          return;
        }
        goto LABEL_40;
      }
      goto LABEL_41;
    }
    goto LABEL_42;
  }
  boardMessageEnt = v3->fields.boardMessageEnt;
  *(float *)&v10 = (float)eventCampaignEnt[12] / 1000.0;
  if ( boardMessageEnt && boardMessageEnt->fields.referenceType == 5 )
  {
    v11 = v3->fields.dispTextExtend;
    v12 = sub_B0D8BC(object___TypeInfo, 1LL);
    v70 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v70);
    if ( !v12 )
      goto LABEL_40;
    v20 = (System_Int32_array **)RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_B0D964(RestTime2, *(_QWORD *)(*(_QWORD *)v12 + 64LL))) != 0 )
    {
      if ( *(_DWORD *)(v12 + 24) )
      {
        *(_QWORD *)(v12 + 32) = v20;
        sub_B0D840((BattleServantConfConponent_o *)(v12 + 32), v20, v14, v15, v16, v17, v18, v19);
        if ( v11 )
        {
          v21 = v11;
          v22 = (System_Object_array *)v12;
LABEL_27:
          TerminalBoardOptionTextData__SetParamsToBehindText(v21, v22, 0LL);
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
    v29 = v3->fields.dispTextExtend;
    if ( (int)RestTime2 < 1 )
    {
      if ( v29 )
      {
        v65 = (System_Int32_array **)StringLiteral_1/*""*/;
        v29->fields._BehindText_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v29->fields._BehindText_k__BackingField,
          v65,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        return;
      }
      goto LABEL_40;
    }
    v30 = RestTime2;
    v31 = sub_B0D8BC(object___TypeInfo, 3LL);
    v69 = v10;
    RestTime2 = j_il2cpp_value_box_0(float_TypeInfo, &v69);
    if ( !v31 )
      goto LABEL_40;
    v38 = (System_Int32_array **)RestTime2;
    if ( !RestTime2 || (RestTime2 = sub_B0D964(RestTime2, *(_QWORD *)(*(_QWORD *)v31 + 64LL))) != 0 )
    {
      if ( !*(_DWORD *)(v31 + 24) )
        goto LABEL_41;
      *(_QWORD *)(v31 + 32) = v38;
      sub_B0D840((BattleServantConfConponent_o *)(v31 + 32), v38, v32, v33, v34, v35, v36, v37);
      v68 = v30;
      RestTime2 = j_il2cpp_value_box_0(int_TypeInfo, &v68);
      v45 = (System_Int32_array **)RestTime2;
      if ( !RestTime2 || (RestTime2 = sub_B0D964(RestTime2, *(_QWORD *)(*(_QWORD *)v31 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v31 + 24) <= 1u )
          goto LABEL_41;
        *(_QWORD *)(v31 + 40) = v45;
        sub_B0D840((BattleServantConfConponent_o *)(v31 + 40), v45, v39, v40, v41, v42, v43, v44);
        RestTime2 = (__int64)QuestBoardInformaionText__GetDaliyDropUpRestTimeStr(v3, v46);
        v53 = (System_Int32_array **)RestTime2;
        if ( !RestTime2 || (RestTime2 = sub_B0D964(RestTime2, *(_QWORD *)(*(_QWORD *)v31 + 64LL))) != 0 )
        {
          if ( *(_DWORD *)(v31 + 24) > 2u )
          {
            *(_QWORD *)(v31 + 48) = v53;
            sub_B0D840((BattleServantConfConponent_o *)(v31 + 48), v53, v47, v48, v49, v50, v51, v52);
            if ( v29 )
            {
              v21 = v29;
              v22 = (System_Object_array *)v31;
              goto LABEL_27;
            }
LABEL_40:
            sub_B0D97C(RestTime2);
          }
LABEL_41:
          v66 = sub_B0D9A8(RestTime2);
          sub_B0D948(v66, 0LL);
        }
      }
    }
LABEL_42:
    v67 = sub_B0D99C(RestTime2);
    sub_B0D948(v67, 0LL);
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

  if ( (byte_4216CB9 & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, component);
    byte_4216CB9 = 1;
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
    sub_B0D97C(behindLabelText);
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_String_o *dispText; // x21
  TerminalBoardOptionTextData_o *v6; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4216CBB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalBoardOptionTextData_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4216CBB = 1;
  }
  if ( !this->fields.dispTextExtend )
  {
    dispText = this->fields.dispText;
    v6 = (TerminalBoardOptionTextData_o *)sub_B0D974(TerminalBoardOptionTextData_TypeInfo, method, v2);
    TerminalBoardOptionTextData___ctor(v6, (System_String_o *)StringLiteral_1/*""*/, dispText, 0, 0LL);
    this->fields.dispTextExtend = v6;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.dispTextExtend,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserEventEntity_o *Entity; // x19
  int32_t Year; // w20
  int32_t Month; // w21
  int32_t Day; // w22
  int32_t Value; // w4
  int32_t v16; // w0
  int64_t NextDayTime_25505540; // x0
  uint64_t dateData; // x20
  System_DateTime_o v19; // x0
  uint64_t v20; // x22
  uint64_t v21; // x21
  uint64_t v22; // x20
  uint64_t v23; // x21
  int32_t v24; // w0
  System_DateTime_o t1; // [xsp+8h] [xbp-38h] BYREF
  System_DateTime_o v27; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v28; // 0:x0.8
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8
  System_DateTime_o v32; // 0:x0.8
  System_DateTime_o v33; // 0:x0.8
  System_DateTime_o v34; // 0:x0.8
  System_DateTime_o v35; // 0:x1.8
  System_DateTime_o v36; // 0:x1.8
  System_DateTime_o v37; // 0:x1.8

  if ( (byte_4216CBC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_DateTime_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_4566/*"DAILY_DROP_UP_RESET_AT"*/, v7);
    sub_B0D8A4(&StringLiteral_4565/*"DAILY_DROP_UP_COUNT"*/, v8);
    byte_4216CBC = 1;
  }
  v27.fields.dateData = 0LL;
  t1.fields.dateData = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_27:
    sub_B0D97C(Instance);
  Entity = UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0LL);
  if ( Entity )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v27.fields.dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
    v28.fields.dateData = (uint64_t)&v27;
    Year = System_DateTime__get_Year(v28, 0LL);
    v29.fields.dateData = (uint64_t)&v27;
    Month = System_DateTime__get_Month(v29, 0LL);
    v30.fields.dateData = (uint64_t)&v27;
    Day = System_DateTime__get_Day(v30, 0LL);
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4566/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    v31.fields.dateData = (uint64_t)&t1;
    System_DateTime___ctor_15033916(v31, Year, Month, Day, Value, 0, 0, 0LL);
    v16 = ConstantMaster__getValue((System_String_o *)StringLiteral_4566/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
    NextDayTime_25505540 = NetworkManager__getNextDayTime_25505540(v16, 0LL);
    dateData = NetworkManager__getServerDateTime_25504848(NextDayTime_25505540, 0LL).fields.dateData;
    v19.fields.dateData = NetworkManager__getServerDateTime_25504848(Entity->fields.updatedAt, 0LL).fields.dateData;
    v20 = t1.fields.dateData;
    v21 = v19.fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v32.fields.dateData = v20;
    v35.fields.dateData = v21;
    if ( System_DateTime__op_LessThanOrEqual(v32, v35, 0LL) )
    {
      if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_DateTime_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      }
      v33.fields.dateData = v21;
      v36.fields.dateData = dateData;
      if ( System_DateTime__op_LessThan(v33, v36, 0LL) )
        goto LABEL_24;
    }
    v22 = v27.fields.dateData;
    v23 = t1.fields.dateData;
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v34.fields.dateData = v22;
    v37.fields.dateData = v23;
    if ( System_DateTime__op_LessThan(v34, v37, 0LL) )
LABEL_24:
      LODWORD(Entity) = Entity->fields.value;
    else
      LODWORD(Entity) = 0;
  }
  v24 = ConstantMaster__getValue((System_String_o *)StringLiteral_4565/*"DAILY_DROP_UP_COUNT"*/, 0LL);
  return (v24 - (_DWORD)Entity) & ~((v24 - (int)Entity) >> 31);
}


System_String_o *__fastcall QuestBoardInformaionText__GetDaliyDropUpRestTimeStr(
        QuestBoardInformaionText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t Value; // w20
  int64_t NextDayTime_25505540; // x0
  int64_t time; // x19
  int64_t v8; // x20

  if ( (byte_4216CBD & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_4566/*"DAILY_DROP_UP_RESET_AT"*/, v4);
    byte_4216CBD = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_4566/*"DAILY_DROP_UP_RESET_AT"*/, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NextDayTime_25505540 = NetworkManager__getNextDayTime_25505540(Value, 0LL);
  time = this->fields.time;
  if ( time >= NextDayTime_25505540 )
  {
    v8 = NextDayTime_25505540;
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    time = v8;
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

  if ( (byte_4216CC0 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    byte_4216CC0 = 1;
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
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0
  QuestBoardInformaionText_c *v18; // x0
  System_String_o *QUEST_BOARD_INFO_FRAME_NAME; // x24
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UISprite_o *v22; // x24
  System_String_o *v23; // x23
  struct QuestBoardInformaionText_StaticFields *static_fields; // x8
  QuestBoardInformaionText_c *v25; // x8
  int32_t INFO_LABEL_BASE_WIDTH; // w22
  UIWidget_o *v27; // x23
  int32_t v28; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = boardOffset.fields.z;
  y = boardOffset.fields.y;
  x = boardOffset.fields.x;
  if ( (byte_4216CBE & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, component);
    sub_B0D8A4(&int_TypeInfo, v15);
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, v16);
    byte_4216CBE = 1;
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
    sub_B0D97C(gameObject);
  }
  v18 = QuestBoardInformaionText_TypeInfo;
  if ( (BYTE3(QuestBoardInformaionText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
    v18 = QuestBoardInformaionText_TypeInfo;
  }
  QUEST_BOARD_INFO_FRAME_NAME = v18->static_fields->QUEST_BOARD_INFO_FRAME_NAME;
  v28 = boardId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v21 = System_String__Format(QUEST_BOARD_INFO_FRAME_NAME, v20, 0LL);
  v22 = *frameSprite;
  v23 = v21;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(v22, v23, 0LL);
  gameObject = (UnityEngine_Component_o *)*frameSprite;
  if ( !*frameSprite )
    goto LABEL_31;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  static_fields = QuestBoardInformaionText_TypeInfo->static_fields;
  v29.fields.x = x + static_fields->INFO_FRAME_OFFSET.fields.x;
  v29.fields.y = y + static_fields->INFO_FRAME_OFFSET.fields.y;
  v29.fields.z = z + static_fields->INFO_FRAME_OFFSET.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0LL);
  gameObject = (UnityEngine_Component_o *)*component;
  if ( !*component )
    goto LABEL_31;
  gameObject = (UnityEngine_Component_o *)BoardOptionTextWithIconComponent__GetBehindLabelWrappedWidth(
                                            (BoardOptionTextWithIconComponent_o *)gameObject,
                                            0LL);
  v25 = QuestBoardInformaionText_TypeInfo;
  if ( QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH >= (int)gameObject )
  {
    INFO_LABEL_BASE_WIDTH = (int)gameObject;
  }
  else if ( (BYTE3(QuestBoardInformaionText_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
         && !QuestBoardInformaionText_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBoardInformaionText_TypeInfo);
    v25 = QuestBoardInformaionText_TypeInfo;
    INFO_LABEL_BASE_WIDTH = QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  else
  {
    INFO_LABEL_BASE_WIDTH = QuestBoardInformaionText_TypeInfo->static_fields->INFO_LABEL_BASE_WIDTH;
  }
  v27 = (UIWidget_o *)*frameSprite;
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v25);
  if ( !v27 )
    goto LABEL_31;
  UIWidget__set_width(
    v27,
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

  if ( (byte_4216CBF & 1) == 0 )
  {
    sub_B0D8A4(&QuestBoardInformaionText_TypeInfo, component);
    byte_4216CBF = 1;
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
    sub_B0D97C(v5);
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