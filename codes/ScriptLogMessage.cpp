void ScriptLogMessage___cctor(const MethodInfo *method)
{
  struct ScriptLogMessage_StaticFields *static_fields; // x8

  if ( (byte_593A67F & 1) == 0 )
  {
    sub_21FFC50(&ScriptLogMessage_TypeInfo);
    byte_593A67F = 1;
  }
  static_fields = ScriptLogMessage_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALIGN_LEFT_BASE = 3285975040LL;
  static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_593A67E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A67E = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  this->fields.defaultColorTag = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptLogMessage__AddLabel(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x23
  ScriptLogMessage_o *v11; // x19
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  System_String_o *v17; // x23
  int m_CancellationTokenSource; // w8
  int32_t maxFontSize; // w4
  int32_t verticalAlign; // w5
  int32_t fontSize; // w3
  UnityEngine_Font_o *fontType; // x7
  UILabel_o **p_main; // x1
  ScriptMessageLabel_o *v24; // x0
  System_String_o *rubyText; // x0
  System_String_o *v26; // x1
  ScriptBackLog_o *v27; // x19
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x1
  System_String_o *v30; // x23
  int v31; // w8
  ScriptLogMessage_o *v32; // x24
  struct ScriptBackLog_o *v33; // x23
  float v34; // s0
  float v35; // s8
  __int64 m_CancellationTokenSource_low; // x8
  const MethodInfo *v37; // x1
  System_String_o *v38; // x23
  ScriptLogMessage_o *v39; // x23
  int32_t v40; // w4
  System_String_o **p_mainPrefab; // x8
  UILabel_o *MainLabel; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct ScriptBackLog_o *backLogDialog; // x23
  int v50; // w8
  ScriptLogMessage_o *v51; // x23
  UILabel_o *RubyLabel; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_String_o *rubyPrefab; // x24
  ScriptLogMessage_o *v60; // x24
  int v61; // w25
  int32_t v62; // w0
  UnityEngine_Vector2_o v63; // 0:s1.4,4:s2.4

  v10 = text;
  v11 = this;
  if ( (byte_593A672 & 1) == 0 )
  {
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&StringLiteral_22271/*"line"*/);
    this = (ScriptLogMessage_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A672 = 1;
  }
  analyzeLabel = v11->fields.analyzeLabel;
  if ( !analyzeLabel
    || (analyzeLabel->fields.colorTag = colorTag,
        analyzeLabel->fields.stepTime = 0.0,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&analyzeLabel->fields.colorTag,
          (int32_t)colorTag,
          colorTag,
          (System_String_o *)isFoward,
          (int32_t)method,
          v5,
          v6,
          v7),
        !v10) )
  {
LABEL_61:
    sub_21FFECC(this, text);
  }
  dispPosition = v11->fields.dispPosition;
  if ( System_String__get_Chars(v10, 0, 0) != 91 )
  {
    ScriptLogMessage__FetchMainLabel(v11, v14);
    verticalAlign = v11->fields.verticalAlign;
    maxFontSize = v11->fields.maxFontSize;
    fontSize = v11->fields.fontSize;
    fontType = v11->fields.fontType;
    p_main = &analyzeLabel->fields.main;
    v24 = analyzeLabel;
LABEL_14:
    ScriptMessageLabel__UpdateLabel(
      v24,
      p_main,
      &v11->fields.dispPosition,
      fontSize,
      maxFontSize,
      verticalAlign,
      v10,
      fontType,
      0);
    goto LABEL_15;
  }
  if ( System_String__get_Chars(v10, 1, 0) == 35 )
  {
    ScriptLogMessage__FetchMainLabel(v11, v15);
    ScriptLogMessage__FetchRubyLabel(v11, v16);
    v17 = System_String__Substring_75489544(v10, 2, v10->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_21FFD10(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_61;
    text = (System_String_o *)this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !v17 )
        goto LABEL_61;
      this = (ScriptLogMessage_o *)System_String__Split_75492680(v17, (System_Char_array *)this, 0);
      if ( !this )
        goto LABEL_61;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource > 1 )
      {
        ScriptMessageLabel__UpdateRuby(
          analyzeLabel,
          &analyzeLabel->fields.main,
          &analyzeLabel->fields.ruby,
          &v11->fields.dispPosition,
          v11->fields.fontSize,
          v11->fields.maxFontSize,
          v11->fields.verticalAlign,
          (System_String_o *)this->fields.backLogDialog,
          (System_String_o *)this->fields.mainPrefab,
          v11->fields.fontType,
          0,
          0);
        goto LABEL_15;
      }
      if ( m_CancellationTokenSource )
      {
        ScriptMessageLabel__UpdateBouten(
          analyzeLabel,
          &analyzeLabel->fields.main,
          &analyzeLabel->fields.ruby,
          &v11->fields.dispPosition,
          v11->fields.fontSize,
          v11->fields.maxFontSize,
          v11->fields.verticalAlign,
          (System_String_o *)this->fields.backLogDialog,
          v11->fields.fontType,
          0);
        goto LABEL_15;
      }
    }
LABEL_62:
    sub_21FFED4(this);
  }
  if ( System_String__get_Chars(v10, 1, 0) == 94 )
  {
    ScriptLogMessage__FetchImageSprite(v11, v29);
    v30 = System_String__Substring_75489544(v10, 2, v10->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_21FFD10(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_61;
    text = (System_String_o *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_62;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v30 )
      goto LABEL_61;
    this = (ScriptLogMessage_o *)System_String__Split_75492680(v30, (System_Char_array *)this, 0);
    if ( !this )
      goto LABEL_61;
    v31 = (int)this->fields.m_CancellationTokenSource;
    v32 = this;
    if ( v31 <= 1 )
    {
      if ( !v31 )
        goto LABEL_62;
      backLogDialog = this->fields.backLogDialog;
      this = (ScriptLogMessage_o *)sub_21FFD10(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_61;
      text = (System_String_o *)this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_62;
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !backLogDialog )
        goto LABEL_61;
      this = (ScriptLogMessage_o *)System_String__Split_75492680(
                                     (System_String_o *)backLogDialog,
                                     (System_Char_array *)this,
                                     0);
      if ( !this )
        goto LABEL_61;
      v50 = (int)this->fields.m_CancellationTokenSource;
      v51 = this;
      if ( v50 <= 1 )
      {
        if ( !v50 )
          goto LABEL_62;
        ScriptMessageLabel__UpdateImage(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &v11->fields.dispPosition,
          v11->fields.fontSize,
          (System_String_o *)this->fields.backLogDialog,
          v11->fields.horizontalAlign,
          0);
      }
      else
      {
        RubyLabel = ScriptLogMessage__FetchRubyLabel(v11, (const MethodInfo *)text);
        analyzeLabel->fields.ruby = RubyLabel;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&analyzeLabel->fields.ruby,
          (int32_t)RubyLabel,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        if ( LODWORD(v51->fields.m_CancellationTokenSource) < 2 )
          goto LABEL_62;
        ScriptMessageLabel__UpdateImageRuby(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &analyzeLabel->fields.ruby,
          &v11->fields.dispPosition,
          v11->fields.fontSize,
          (System_String_o *)v51->fields.backLogDialog,
          (System_String_o *)v51->fields.mainPrefab,
          v11->fields.fontType,
          v11->fields.horizontalAlign,
          0);
      }
    }
    else
    {
      v33 = this->fields.backLogDialog;
      v34 = System_Single__Parse((System_String_o *)this->fields.mainPrefab, 0);
      v35 = v34;
      m_CancellationTokenSource_low = LODWORD(v32->fields.m_CancellationTokenSource);
      if ( m_CancellationTokenSource_low == 2 )
      {
        ScriptMessageLabel__UpdateImage_51817304(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &v11->fields.dispPosition,
          v11->fields.fontSize,
          v34,
          (System_String_o *)v33,
          v11->fields.horizontalAlign,
          0);
        goto LABEL_15;
      }
      if ( (int)m_CancellationTokenSource_low <= 3 )
      {
        if ( (unsigned int)m_CancellationTokenSource_low <= 2 )
          goto LABEL_62;
        rubyPrefab = (System_String_o *)v32->fields.rubyPrefab;
        this = (ScriptLogMessage_o *)sub_21FFD10(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_61;
        text = (System_String_o *)this;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_62;
        LOWORD(this->fields.backLogDialog) = 44;
        if ( !rubyPrefab )
          goto LABEL_61;
        this = (ScriptLogMessage_o *)System_String__Split_75492680(rubyPrefab, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_61;
        v60 = this;
        if ( !LODWORD(this->fields.m_CancellationTokenSource) )
          goto LABEL_62;
        this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0);
        if ( ((__int64)v60->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
          goto LABEL_62;
        v61 = (int)this;
        v62 = System_Int32__Parse((System_String_o *)v60->fields.mainPrefab, 0);
        v63.fields.x = (float)v61;
        v63.fields.y = (float)v62;
        ScriptMessageLabel__UpdateImage_51817456(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &v11->fields.dispPosition,
          v11->fields.fontSize,
          v35,
          (System_String_o *)v33,
          v63,
          v11->fields.horizontalAlign,
          0);
      }
    }
    goto LABEL_15;
  }
  if ( System_String__get_Chars(v10, 1, 0) != 126 )
  {
    MainLabel = ScriptLogMessage__FetchMainLabel(v11, v37);
    analyzeLabel->fields.main = MainLabel;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&analyzeLabel->fields,
      (int32_t)MainLabel,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    verticalAlign = v11->fields.verticalAlign;
    maxFontSize = v11->fields.maxFontSize;
    fontSize = v11->fields.fontSize;
    fontType = v11->fields.fontType;
    v24 = analyzeLabel;
    p_main = &analyzeLabel->fields.main;
    goto LABEL_14;
  }
  ScriptLogMessage__FetchImageSprite(v11, v37);
  v38 = System_String__Substring_75489544(v10, 2, v10->fields._stringLength - 3, 0);
  this = (ScriptLogMessage_o *)sub_21FFD10(char___TypeInfo, 1);
  if ( !this )
    goto LABEL_61;
  text = (System_String_o *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_62;
  LOWORD(this->fields.backLogDialog) = 32;
  if ( !v38 )
    goto LABEL_61;
  this = (ScriptLogMessage_o *)System_String__Split_75492680(v38, (System_Char_array *)this, 0);
  if ( !this )
    goto LABEL_61;
  v39 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_62;
  v40 = System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0);
  if ( SLODWORD(v39->fields.m_CancellationTokenSource) >= 2 )
    p_mainPrefab = (System_String_o **)&v39->fields.mainPrefab;
  else
    p_mainPrefab = (System_String_o **)&StringLiteral_22271/*"line"*/;
  ScriptMessageLabel__UpdateLine(
    analyzeLabel,
    &analyzeLabel->fields.image,
    &v11->fields.dispPosition,
    v11->fields.fontSize,
    v40,
    *p_mainPrefab,
    0);
LABEL_15:
  if ( isFoward )
  {
    rubyText = analyzeLabel->fields.rubyText;
    v26 = (System_String_o *)StringLiteral_1/*""*/;
    analyzeLabel->fields.mainPosition.fields.x = analyzeLabel->fields.mainPosition.fields.x
                                               - analyzeLabel->fields.widthSize;
    if ( System_String__op_Inequality(rubyText, v26, 0) )
      analyzeLabel->fields.rubyPosition.fields.x = analyzeLabel->fields.rubyPosition.fields.x
                                                 - analyzeLabel->fields.widthSize;
    v11->fields.dispPosition = dispPosition;
  }
  v27 = v11->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0);
  if ( !v27 )
    goto LABEL_61;
  ScriptBackLog__AddLog(v27, (ScriptMessageLabel_o *)this, v28);
}


void ScriptLogMessage__AddPlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  ScriptLogMessage_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v11 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceAssetName,
    (int32_t)assetName,
    objectName,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  v11->fields.voiceObjectName = objectName;
  v11 = (ScriptLogMessage_o *)((char *)v11 + 216);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v11, (int32_t)objectName, v12, v13, v14, v15, v16, v17);
  *(float *)&v11->monitor = volume;
}


void ScriptLogMessage__AddText(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ScriptLogMessage__UpdateLabels(this, text, 0, color, v4);
}


// local variable allocation has failed, the output may be wrong!
void ScriptLogMessage__AddText_51763476(
        ScriptLogMessage_o *this,
        System_String_o *text,
        bool isLineHead,
        int32_t lineLength,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  ScriptLogMessage__SetAlignedDispPosition(this, isLineHead, lineLength, *(const MethodInfo **)&lineLength);
  ScriptLogMessage__UpdateLabels(this, text, 0, 0, v7);
}


void ScriptLogMessage__ClearTalkName(ScriptLogMessage_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593A67C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A67C = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.talkName, v9, v2, v3, v4, v5, v6, v7);
}


void ScriptLogMessage__ClearText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ScriptLogMessage__Init(this, method);
  this->fields.dispPosition = this->fields.startPosition;
  ScriptLogMessage__SetDefaultState(this, v3);
}


void ScriptLogMessage__EraseLoopLog(ScriptLogMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ScriptBackLog_o *backLogDialog; // x8

  backLogDialog = this->fields.backLogDialog;
  this->fields.dispPosition = this->fields.eraseLoopLogDisplayPosition;
  if ( !backLogDialog )
    sub_21FFECC(this, method);
  ScriptBackLog__EraseLog(backLogDialog, this->fields.eraseLoopLogCount, v2);
}


UISprite_o *ScriptLogMessage__FetchImageSprite(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *image; // x19
  ScriptLogMessage_o *v4; // x20
  ScriptLogMessage_o *v5; // x20

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_10;
  image = (UnityEngine_Component_o *)analyzeLabel->fields.image;
  if ( !image )
    goto LABEL_10;
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)analyzeLabel->fields.image,
                                 0);
  v4 = this;
  if ( !byte_5931940 )
  {
    this = (ScriptLogMessage_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(image, 0);
  v5 = this;
  if ( !byte_5931945 )
  {
    this = (ScriptLogMessage_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_21FFECC(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  return (UISprite_o *)image;
}


UILabel_o *ScriptLogMessage__FetchMainLabel(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *main; // x19
  ScriptLogMessage_o *v4; // x20
  ScriptLogMessage_o *v5; // x20

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_10;
  main = (UnityEngine_Component_o *)analyzeLabel->fields.main;
  if ( !main )
    goto LABEL_10;
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)analyzeLabel->fields.main,
                                 0);
  v4 = this;
  if ( !byte_5931940 )
  {
    this = (ScriptLogMessage_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(main, 0);
  v5 = this;
  if ( !byte_5931945 )
  {
    this = (ScriptLogMessage_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_21FFECC(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  return (UILabel_o *)main;
}


UILabel_o *ScriptLogMessage__FetchRubyLabel(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *ruby; // x19
  ScriptLogMessage_o *v4; // x20
  ScriptLogMessage_o *v5; // x21
  ScriptLogMessage_o *v6; // x21

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_10;
  ruby = (UnityEngine_Component_o *)analyzeLabel->fields.ruby;
  if ( !ruby )
    goto LABEL_10;
  v4 = this;
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)analyzeLabel->fields.ruby,
                                 0);
  v5 = this;
  if ( !byte_5931940 )
  {
    this = (ScriptLogMessage_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v5 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(ruby, 0);
  v6 = this;
  if ( !byte_5931945 )
  {
    this = (ScriptLogMessage_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v6 )
LABEL_10:
    sub_21FFECC(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
  UILabel__set_fontSize((UILabel_o *)ruby, v4->fields.rubyFontSize, 0);
  return (UILabel_o *)ruby;
}


void ScriptLogMessage__FooterText(
        ScriptLogMessage_o *this,
        System_String_o *text,
        bool isAligned,
        System_String_o *color,
        const MethodInfo *method)
{
  int32_t maxFontSize; // w22
  const MethodInfo *v9; // x4
  int32_t v10; // w22

  if ( isAligned )
  {
    this->fields.horizontalAlign = 2;
    ScriptLogMessage__SetAlignedDispPosition(this, 1, 0, (const MethodInfo *)color);
    maxFontSize = this->fields.maxFontSize;
    this->fields.maxFontSize = this->fields.fowardMaxFontSize;
    ScriptLogMessage__UpdateLabels(this, text, 0, color, v9);
    this->fields.maxFontSize = maxFontSize;
    this->fields.horizontalAlign = 0;
  }
  else
  {
    v10 = this->fields.maxFontSize;
    this->fields.maxFontSize = this->fields.fowardMaxFontSize;
    ScriptLogMessage__UpdateLabels(this, text, 0, color, method);
    this->fields.maxFontSize = v10;
  }
}


void ScriptLogMessage__FowardText(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int32_t maxFontSize; // w8
  int32_t verticalAlign; // w20

  verticalAlign = this->fields.verticalAlign;
  maxFontSize = this->fields.maxFontSize;
  this->fields.verticalAlign = 0;
  this->fields.fowardMaxFontSize = maxFontSize;
  ScriptLogMessage__UpdateLabels(this, text, 1, color, v4);
  this->fields.verticalAlign = verticalAlign;
}


int32_t ScriptLogMessage__GetDefaultFontSize(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t defaultFontSize; // w19

  if ( (byte_593A67D & 1) == 0 )
  {
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    byte_593A67D = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_923/*"-"*/, defaultFontSize, 0);
}


int32_t ScriptLogMessage__GetDefaultScaledFontSize(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v2; // s0

  v2 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  if ( v2 == INFINITY )
    return 0x80000000;
  else
    return (int)v2;
}


System_String_o *ScriptLogMessage__GetFontSizeString(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t fontSize; // w19

  if ( (byte_593A679 & 1) == 0 )
  {
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    byte_593A679 = 1;
  }
  fontSize = this->fields.fontSize;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
  return ScriptMessageLabel__GetFontSizeString(fontSize, 0);
}


void ScriptLogMessage__Init(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t defaultFontSize; // w20
  int32_t FontSize; // w0
  ScriptMessageLabel_c *v6; // x8
  ScriptMessageLabel_o *v7; // x21
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  Il2CppObject *mainPrefab; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UnityEngine_Font_o *trueTypeFont; // x21
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_GameObject_o *v41; // x21
  int32_t v42; // w0
  struct ScriptMessageLabel_o *v43; // x22
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  UnityEngine_GameObject_o *v50; // x21
  int32_t v51; // w0
  struct ScriptMessageLabel_o *v52; // x22
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  UnityEngine_GameObject_o *v59; // x21
  int32_t v60; // w0
  struct ScriptMessageLabel_o *v61; // x22
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  struct ScriptMessageLabel_o *v68; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v71; // s0
  int32_t v72; // w1
  int32_t rubyFontSize; // w8
  float v74; // s1
  float v75; // s0
  float v76; // s0
  float v77; // s1
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x1

  if ( (byte_593A671 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_26705/*"■"*/);
    byte_593A671 = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    ScriptLogMessage__ReleasePlayVoice(this, method);
    defaultFontSize = this->fields.defaultFontSize;
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v3);
    FontSize = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_923/*"-"*/, defaultFontSize, 0);
    v6 = ScriptMessageLabel_TypeInfo;
    this->fields.defaultFontSize = FontSize;
    v7 = (ScriptMessageLabel_o *)sub_21FFEBC(v6);
    ScriptMessageLabel___ctor(v7, 0);
    this->fields.analyzeLabel = v7;
    p_analyzeLabel = &this->fields.analyzeLabel;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.analyzeLabel,
      (int32_t)v7,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              mainPrefab,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v19 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_47;
    layer = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v19, layer, 0);
    v21 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v19,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v21 )
      goto LABEL_47;
    v21->fields.main = (struct UILabel_o *)transform;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->fields, (int32_t)transform, v22, v23, v24, v25, v26, v27);
    if ( !*p_analyzeLabel )
      goto LABEL_47;
    transform = (UnityEngine_GameObject_o *)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_47;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0);
    this->fields.defaultFontType = trueTypeFont;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultFontType,
      (int32_t)trueTypeFont,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    this->fields.fontType = trueTypeFont;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fontType,
      (int32_t)trueTypeFont,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.rubyPrefab,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v41 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_47;
    v42 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v41, v42, 0);
    v43 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v41,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v43 )
      goto LABEL_47;
    v43->fields.ruby = (struct UILabel_o *)transform;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v43->fields.ruby, (int32_t)transform, v44, v45, v46, v47, v48, v49);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.imagePrefab,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v50 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_47;
    v51 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v50, v51, 0);
    v52 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v50,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v52 )
      goto LABEL_47;
    v52->fields.image = (struct UISprite_o *)transform;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v52->fields.image,
      (int32_t)transform,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.playVoicePrefab,
                                              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v59 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_47;
    v60 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v59, v60, 0);
    v61 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v59,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v61
      || (v61->fields.playVoice = (struct UIButton_o *)transform,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v61->fields.playVoice,
            (int32_t)transform,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67),
          (v68 = *p_analyzeLabel) == 0)
      || (main = v68->fields.main,
          ruby = v68->fields.ruby,
          transform = (UnityEngine_GameObject_o *)ScriptLogMessage__GetDefaultFontSize(this, (const MethodInfo *)v18),
          !main) )
    {
LABEL_47:
      sub_21FFECC(transform, v18);
    }
    v71 = this->fields.fontScale * (float)(int)transform;
    if ( v71 == INFINITY )
      v72 = 0x80000000;
    else
      v72 = (int)v71;
    UILabel__set_fontSize(main, v72, 0);
    UILabel__set_text(main, (System_String_o *)StringLiteral_26705/*"■"*/, 0);
    transform = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))main->klass->vtable._22_get_localSize.methodPtr)(
                                              main,
                                              main->klass->vtable._22_get_localSize.method);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v74;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_47;
      v76 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v76 == INFINITY )
        LODWORD(v18) = 0x80000000;
      else
        LODWORD(v18) = (int)v76;
      this->fields.rubyFontSize = v18;
    }
    else
    {
      v75 = this->fields.fontScale * (float)rubyFontSize;
      if ( v75 == INFINITY )
        v18 = 0x80000000LL;
      else
        v18 = (unsigned int)(int)v75;
      this->fields.rubyFontSize = v18;
      if ( !ruby )
        goto LABEL_47;
    }
    UILabel__set_fontSize(ruby, v18, 0);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_26705/*"■"*/, 0);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))ruby->klass->vtable._22_get_localSize.methodPtr)(
      ruby,
      ruby->klass->vtable._22_get_localSize.method);
    this->fields.startPosition.fields.x = 0.0;
    this->fields.rubyLineHeight = v77;
    this->fields.startPosition.fields.y = -v77;
    ScriptLogMessage__Init(this, v78);
    this->fields.dispPosition = this->fields.startPosition;
    ScriptLogMessage__SetDefaultState(this, v79);
  }
}


bool ScriptLogMessage__IsChangeTalkName(ScriptLogMessage_o *this, System_String_o *text, const MethodInfo *method)
{
  return System_String__op_Inequality(this->fields.talkName, text, 0);
}


void ScriptLogMessage__Quit(ScriptLogMessage_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_o *analyzeLabel; // x0
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
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

  if ( this->fields.isInit )
  {
    p_analyzeLabel = &this->fields.analyzeLabel;
    analyzeLabel = this->fields.analyzeLabel;
    *((_BYTE *)p_analyzeLabel + 52) = 0;
    if ( !analyzeLabel )
      sub_21FFECC(0, method);
    ScriptMessageLabel__Destroy(analyzeLabel, 0);
    this->fields.analyzeLabel = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_analyzeLabel, 0, v5, v6, v7, v8, v9, v10);
    this->fields.defaultFontType = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.defaultFontType, 0, v11, v12, v13, v14, v15, v16);
    this->fields.fontType = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fontType, 0, v17, v18, v19, v20, v21, v22);
  }
}


void ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1
  int32_t v10; // w1
  struct System_String_o **p_voiceObjectName; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593A67A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A67A = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.isReservedAddPlayVoice = 0;
  this->fields.voiceAssetName = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voiceAssetName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceObjectName = &this->fields.voiceObjectName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_voiceObjectName, v10, v12, v13, v14, v15, v16, v17);
  *((_BYTE *)p_voiceObjectName + 12) = 0;
  *((_DWORD *)p_voiceObjectName + 2) = 1065353216;
}


void ScriptLogMessage__ReservePlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  ScriptLogMessage_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v11 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceAssetName,
    (int32_t)assetName,
    objectName,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  v11->fields.voiceObjectName = objectName;
  v11 = (ScriptLogMessage_o *)((char *)v11 + 216);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v11, (int32_t)objectName, v12, v13, v14, v15, v16, v17);
  *(float *)&v11->monitor = volume;
}


void ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v3; // s0
  int32_t DefaultFontSize; // w0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  float rubyLineHeight; // s2
  float v13; // s0
  int32_t v14; // w8
  bool v15; // zf
  float defaultTextOnlyLineHeight; // s0

  if ( (byte_593A676 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A676 = 1;
  }
  v3 = this->fields.dispPosition.fields.y
     - (float)((float)(this->fields.textOnlyLineHeight + this->fields.rubyLineHeight) + this->fields.betweenLineHeight);
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = v3;
  DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, method);
  v11 = (int)StringLiteral_1/*""*/;
  rubyLineHeight = this->fields.rubyLineHeight;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  v13 = this->fields.fontScale * (float)DefaultFontSize;
  v14 = (int)v13;
  v15 = v13 == INFINITY;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = this->fields.textOnlyLineHeight + rubyLineHeight;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  if ( v15 )
    v14 = 0x80000000;
  this->fields.fontSize = v14;
  this->fields.verticalAlign = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag, v11, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void ScriptLogMessage__SetAlignedDispPosition(
        ScriptLogMessage_o *this,
        bool isLineHead,
        int32_t lineLength,
        const MethodInfo *method)
{
  int32_t horizontalAlign; // w8
  float ALIGN_LEFT_BASE; // s0
  ScriptLogMessage_c *v9; // x0
  ScriptLogMessage_c *v10; // x0
  float ALIGN_RIGHT_BASE; // s1
  int v12; // w8
  ScriptLogMessage_c *v13; // x0

  if ( (byte_593A67B & 1) == 0 )
  {
    sub_21FFC50(&ScriptLogMessage_TypeInfo);
    byte_593A67B = 1;
  }
  if ( isLineHead )
  {
    horizontalAlign = this->fields.horizontalAlign;
    if ( horizontalAlign == 2 )
    {
      v13 = ScriptLogMessage_TypeInfo;
      if ( !*(&ScriptLogMessage_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo, isLineHead);
        v13 = ScriptLogMessage_TypeInfo;
      }
      v12 = this->fields.fontSize * lineLength;
      ALIGN_RIGHT_BASE = v13->static_fields->ALIGN_RIGHT_BASE;
    }
    else
    {
      if ( horizontalAlign != 1 )
      {
        ALIGN_LEFT_BASE = 0.0;
        if ( !horizontalAlign )
        {
          v9 = ScriptLogMessage_TypeInfo;
          if ( !*(&ScriptLogMessage_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo, isLineHead);
            v9 = ScriptLogMessage_TypeInfo;
          }
          ALIGN_LEFT_BASE = v9->static_fields->ALIGN_LEFT_BASE;
        }
        goto LABEL_17;
      }
      v10 = ScriptLogMessage_TypeInfo;
      if ( !*(&ScriptLogMessage_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo, isLineHead);
        v10 = ScriptLogMessage_TypeInfo;
      }
      ALIGN_RIGHT_BASE = v10->static_fields->ALIGN_CENTER_BASE;
      v12 = this->fields.fontSize * lineLength / 2;
    }
    ALIGN_LEFT_BASE = ALIGN_RIGHT_BASE - (float)v12;
LABEL_17:
    this->fields.dispPosition.fields.x = ALIGN_LEFT_BASE;
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptLogMessage__SetBackLogReplayingVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        bool isReplaying,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct ScriptBackLog_o *backLogDialog; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct ScriptBackLog_o *v18; // x8

  backLogDialog = this->fields.backLogDialog;
  if ( !backLogDialog
    || (backLogDialog->fields._ReplayingAssetName_k__BackingField = assetName,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&backLogDialog->fields._ReplayingAssetName_k__BackingField,
          (int32_t)assetName,
          objectName,
          (System_String_o *)isReplaying,
          (int32_t)method,
          v5,
          v6,
          v7),
        (backLogDialog = this->fields.backLogDialog) == 0)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&backLogDialog->fields._ReplayingObjectName_k__BackingField,
          (int32_t)objectName,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v18 = this->fields.backLogDialog) == 0) )
  {
    sub_21FFECC(backLogDialog, assetName);
  }
  v18->fields._IsReplayingVoice_k__BackingField = isReplaying;
}


void ScriptLogMessage__SetBetweenLineHeight(ScriptLogMessage_o *this, float height, const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_21FFECC(0, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void ScriptLogMessage__SetDefaultState(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t DefaultFontSize; // w0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  struct System_String_o **p_defaultColorTag; // x19
  float v12; // s0
  int v13; // w8
  float v14; // s1
  float v15; // s2

  if ( (byte_593A675 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A675 = 1;
  }
  DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, method);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  p_defaultColorTag = &this->fields.defaultColorTag;
  v12 = *((float *)p_defaultColorTag - 19) * (float)DefaultFontSize;
  v13 = (int)v12;
  v14 = *((float *)p_defaultColorTag - 15);
  v15 = *((float *)p_defaultColorTag - 14);
  *((_DWORD *)p_defaultColorTag - 12) = *((_DWORD *)p_defaultColorTag - 13);
  if ( v12 == INFINITY )
    v13 = 0x80000000;
  *((_DWORD *)p_defaultColorTag - 4) = v13;
  *((_DWORD *)p_defaultColorTag - 3) = 0;
  *((float *)p_defaultColorTag - 17) = v14;
  *((float *)p_defaultColorTag - 16) = v14 + v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_defaultColorTag, v10, v4, v5, v6, v7, v8, v9);
}


void ScriptLogMessage__SetEraseLoopLogData(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o dispPosition; // x8
  ScriptBackLog_o *backLogDialog; // x0

  dispPosition = this->fields.dispPosition;
  backLogDialog = this->fields.backLogDialog;
  this->fields.eraseLoopLogDisplayPosition = dispPosition;
  if ( !backLogDialog )
    sub_21FFECC(0, method);
  this->fields.eraseLoopLogCount = ScriptBackLog__GetCount(backLogDialog, method);
}


void ScriptLogMessage__SetFontSize(
        ScriptLogMessage_o *this,
        System_String_o *sizeName,
        System_String_o *verticalAlign,
        const MethodInfo *method)
{
  int32_t defaultFontSize; // w22
  float v8; // s0
  int32_t v9; // w8
  int32_t VerticalAlignFromString; // w0
  int32_t fontSize; // s0
  float textOnlyLineHeight; // s1
  float v13; // s0

  if ( (byte_593A678 & 1) == 0 )
  {
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    byte_593A678 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, sizeName);
  v8 = this->fields.fontScale * (float)ScriptMessageLabel__GetFontSize(sizeName, defaultFontSize, 0);
  if ( v8 == INFINITY )
    v9 = 0x80000000;
  else
    v9 = (int)v8;
  this->fields.fontSize = v9;
  VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(verticalAlign, 0);
  fontSize = this->fields.fontSize;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  this->fields.verticalAlign = VerticalAlignFromString;
  v13 = (float)fontSize;
  if ( textOnlyLineHeight < v13 )
    this->fields.textOnlyLineHeight = v13;
}


void ScriptLogMessage__SetFontType(ScriptLogMessage_o *this, UnityEngine_Font_o *font, const MethodInfo *method)
{
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_593A677 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A677 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, font);
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0, 0);
  if ( v5 )
  {
    if ( !this )
      sub_21FFECC(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fontType,
    (int32_t)defaultFontType,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void ScriptLogMessage__SetHomePosition(ScriptLogMessage_o *this, int32_t x, const MethodInfo *method)
{
  if ( this->fields.dispPosition.fields.x > this->fields.startPosition.fields.x )
    ScriptLogMessage__ReturnText(this, *(const MethodInfo **)&x);
  this->fields.startPosition.fields.x = (float)x;
  this->fields.dispPosition.fields.x = (float)x;
}


void ScriptLogMessage__SetHorizontalAlign(ScriptLogMessage_o *this, int32_t horizontalAlign, const MethodInfo *method)
{
  this->fields.horizontalAlign = horizontalAlign;
}


void ScriptLogMessage__SetMaxFontSize(ScriptLogMessage_o *this, int32_t fontSize, const MethodInfo *method)
{
  float v3; // s0
  int32_t v4; // w8

  v3 = this->fields.fontScale * (float)fontSize;
  if ( v3 == INFINITY )
    v4 = 0x80000000;
  else
    v4 = (int)v3;
  this->fields.maxFontSize = v4;
}


bool ScriptLogMessage__SetTalkName(ScriptLogMessage_o *this, System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UnityEngine_Font_o *defaultFontType; // x1
  struct UnityEngine_Font_o *fontType; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  int32_t DefaultFontSize; // w0
  float x; // s0
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( System_String__IsNullOrEmpty(text, 0) )
  {
    ScriptLogMessage__ClearTalkName(this, v5);
  }
  else
  {
    this->fields.talkName = text;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.talkName, (int32_t)text, v6, v7, v8, v9, v10, v11);
    defaultFontType = this->fields.defaultFontType;
    fontType = this->fields.fontType;
    this->fields.fontType = defaultFontType;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fontType,
      (int32_t)defaultFontType,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, v20);
    x = this->fields.startPosition.fields.x;
    this->fields.fontSize = DefaultFontSize;
    this->fields.verticalAlign = 0;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptLogMessage__UpdateLabels(this, text, 0, 0, v23);
    ScriptLogMessage__ReturnText(this, v24);
    this->fields.fontType = fontType;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fontType,
      (int32_t)fontType,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  return 1;
}


void ScriptLogMessage__SetText(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x4

  ScriptLogMessage__Init(this, (const MethodInfo *)text);
  this->fields.dispPosition = this->fields.startPosition;
  ScriptLogMessage__SetDefaultState(this, v7);
  ScriptLogMessage__UpdateLabels(this, text, 0, color, v8);
}


void ScriptLogMessage__UpdateLabels(
        ScriptLogMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 Chars; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Text_StringBuilder_c *v18; // x0
  System_Text_StringBuilder_o *v19; // x24
  System_Text_StringBuilder_o **v20; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x25
  __int64 v35; // x24
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  int32_t v38; // w27
  int v39; // w21
  __int64 v40; // x1
  int32_t v41; // w28
  int32_t BraceIndex; // w0
  int32_t v43; // w29
  System_String_o *v44; // x0
  __int64 v45; // x1
  int32_t v46; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Text_StringBuilder_o *v55; // x29
  __int64 v56; // x1
  ScriptReplaceString_c *v57; // x0
  int32_t playerGenderIndex; // w28
  struct System_String_o *v59; // x1
  System_String_o *v60; // x27
  const MethodInfo *v61; // x4
  char v62; // w2
  ScriptLogMessage_o *v63; // x0
  System_String_o *v64; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct System_String_o *v71; // x1
  System_String_o *v72; // x28
  int32_t v73; // w1
  int32_t v74; // w2
  System_String_o *v75; // x0
  __int64 *v76; // x8
  ScriptLogMessage_ProcAddLabel2_o *v77; // x9
  __int64 v78; // x1
  const MethodInfo *v79; // x1
  __int64 v80; // x1
  System_String_o *v81; // x27
  System_String_array *v82; // x0
  struct System_String_o *v83; // x1
  System_String_array *v84; // x27
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_String_o *v91; // x0
  __int64 v92; // x1
  System_Text_StringBuilder_o *v93; // x21
  const MethodInfo *v94; // x1
  ScriptLogMessage_ProcAddLabel2_o *v95; // [xsp+8h] [xbp-78h]
  System_String_o *enforceColora; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593A673 & 1) == 0 )
  {
    sub_21FFC50(&ScriptLogMessage_ProcAddLabel2_TypeInfo);
    sub_21FFC50(&ScriptLogMessage_ProcAddLabel_TypeInfo);
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    sub_21FFC50(&ScriptReplaceString_TypeInfo);
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    sub_21FFC50(&Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__0__);
    sub_21FFC50(&Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__1__);
    sub_21FFC50(&ScriptLogMessage___c__DisplayClass54_0_TypeInfo);
    sub_21FFC50(&StringLiteral_24474/*"servantName"*/);
    sub_21FFC50(&StringLiteral_16415/*"[-]"*/);
    sub_21FFC50(&StringLiteral_21012/*"i"*/);
    sub_21FFC50(&StringLiteral_16623/*"[~1]"*/);
    sub_21FFC50(&StringLiteral_16557/*"[^"*/);
    sub_21FFC50(&StringLiteral_24064/*"r"*/);
    sub_21FFC50(&StringLiteral_19763/*"effectmessage"*/);
    sub_21FFC50(&StringLiteral_22271/*"line"*/);
    sub_21FFC50(&StringLiteral_21225/*"image"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16622/*"[~"*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593A673 = 1;
  }
  text = 0;
  v9 = sub_21FFEBC(ScriptLogMessage___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_84;
  *(_QWORD *)(v9 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v18 = System_Text_StringBuilder_TypeInfo;
  *(_BYTE *)(v9 + 32) = isFoward;
  v19 = (System_Text_StringBuilder_o *)sub_21FFEBC(v18);
  System_Text_StringBuilder___ctor(v19, 0);
  *(_QWORD *)(v9 + 16) = v19;
  v20 = (System_Text_StringBuilder_o **)(v9 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)v19, v21, v22, v23, v24, v25, v26);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)enforceColor,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  enforceColora = enforceColor;
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v9 + 40) = defaultColorTag;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)defaultColorTag, v27, v28, v29, v30, v31, v32);
  v35 = sub_21FFEBC(ScriptLogMessage_ProcAddLabel_TypeInfo);
  ScriptLogMessage_ProcAddLabel___ctor(
    (ScriptLogMessage_ProcAddLabel_o *)v35,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__0__,
    v36);
  v95 = (ScriptLogMessage_ProcAddLabel2_o *)sub_21FFEBC(ScriptLogMessage_ProcAddLabel2_TypeInfo);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v95,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__1__,
    v37);
  if ( !txt )
    goto LABEL_84;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_82;
  v38 = 0;
  v39 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v38, 0) != 91 )
    {
      v55 = *v20;
      Chars = System_String__get_Chars(txt, v38, 0);
      if ( !v55 )
        goto LABEL_84;
      v41 = v38 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_75524092(v55, Chars, 0);
      goto LABEL_37;
    }
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v40);
    v41 = v38 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v38 + 1, 0);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v20;
      if ( !*v20 )
        goto LABEL_84;
      Chars = (__int64)System_Text_StringBuilder__Append_75521760(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_16395/*"["*/,
                         0);
      goto LABEL_37;
    }
    v43 = BraceIndex;
    Chars = System_String__get_Chars(txt, v41, 0);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v35 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
      v44 = System_String__Substring_75489544(txt, v38 + 2, v39 + v43 - 2, 0);
      v46 = System_Int32__Parse(v44, 0);
      if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v45);
      String = ScriptReplaceString__GetString(v46, 0);
      TagSplitString = System_String__Concat_75438412(String, (System_String_o *)StringLiteral_16415/*"[-]"*/, 0);
LABEL_33:
      v59 = *(struct System_String_o **)(v9 + 40);
      v60 = TagSplitString;
      this->fields.defaultColorTag = v59;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag,
        (int32_t)v59,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v62 = *(_BYTE *)(v9 + 32);
      v63 = this;
      v64 = v60;
LABEL_34:
      ScriptLogMessage__UpdateLabels(v63, v64, v62, enforceColora, v61);
      v71 = this->fields.defaultColorTag;
      *(_QWORD *)(v9 + 40) = v71;
LABEL_35:
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)v71, v65, v66, v67, v68, v69, v70);
      goto LABEL_36;
    }
    Chars = System_String__get_Chars(txt, v41, 0);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v35 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
      if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v56);
      if ( !byte_593A4B8 )
      {
        sub_21FFC50(&ScriptReplaceString_TypeInfo);
        byte_593A4B8 = 1;
      }
      v57 = ScriptReplaceString_TypeInfo;
      if ( !*(&ScriptReplaceString_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v56);
        v57 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v57->static_fields->playerGenderIndex;
      if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v56);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v38 + 2, playerGenderIndex, 0);
      goto LABEL_33;
    }
    Chars = System_String__get_Chars(txt, v41, 0);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v35 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
      Chars = (__int64)System_String__Substring_75489544(txt, v38, v39 + v43 + 1, 0);
      goto LABEL_51;
    }
    Chars = System_String__get_Chars(txt, v41, 0);
    if ( (unsigned __int16)Chars != 61 )
      break;
LABEL_36:
    v41 = v43 + 1;
LABEL_37:
    v39 = -v41;
    v38 = v41;
    if ( v41 >= txt->fields._stringLength )
      goto LABEL_82;
  }
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v11);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v41, 0);
  if ( !Chars )
    goto LABEL_84;
  v72 = (System_String_o *)Chars;
  Chars = System_String__Equals_75473208((System_String_o *)Chars, (System_String_o *)StringLiteral_21225/*"image"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
    v73 = v38 + 7;
    v74 = v39 + v43 - 7;
    goto LABEL_49;
  }
  Chars = System_String__Equals_75473208(v72, (System_String_o *)StringLiteral_19763/*"effectmessage"*/, 0);
  if ( (Chars & 1) != 0 )
    goto LABEL_36;
  Chars = System_String__Equals_75473208(v72, (System_String_o *)StringLiteral_21012/*"i"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
    v73 = v38 + 3;
    v74 = v39 + v43 - 3;
LABEL_49:
    v75 = System_String__Substring_75489544(txt, v73, v74, 0);
    v76 = &StringLiteral_16557/*"[^"*/;
LABEL_50:
    Chars = (__int64)System_String__Concat_75481624(
                       (System_String_o *)*v76,
                       v75,
                       (System_String_o *)StringLiteral_16659/*"]"*/,
                       0);
LABEL_51:
    v77 = v95;
    if ( !v95 )
      goto LABEL_84;
    v78 = Chars;
LABEL_53:
    Chars = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v77->fields.invoke_impl)(
              v77->fields.method_code,
              v78,
              v77->fields.method);
    goto LABEL_36;
  }
  Chars = System_String__Equals_75473208(v72, (System_String_o *)StringLiteral_24064/*"r"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v79);
    if ( enforceColora )
    {
      *p_defaultColorTag = enforceColora;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag,
        (int32_t)enforceColora,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
    }
    v71 = *p_defaultColorTag;
    *(_QWORD *)(v9 + 40) = *p_defaultColorTag;
    goto LABEL_35;
  }
  Chars = System_String__Equals_75473208(v72, (System_String_o *)StringLiteral_24474/*"servantName"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
    v81 = System_String__Substring_75489544(txt, v38 + 12, v39 + v43 - 12, 0);
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v80);
    v82 = ScriptMessageLabel__AnalysTagParam(v81, 0, 0);
    v83 = *(struct System_String_o **)(v9 + 40);
    v84 = v82;
    this->fields.defaultColorTag = v83;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)v83,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    v91 = ScriptMessageLabel__GetServantChangeName(v84, 0);
    v62 = *(_BYTE *)(v9 + 32);
    v64 = v91;
    v63 = this;
    goto LABEL_34;
  }
  Chars = System_String__StartsWith(v72, (System_String_o *)StringLiteral_22271/*"line"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
    Chars = (__int64)System_String__Substring_75489544(txt, v38 + 5, v39 + v43 - 5, 0);
    if ( !Chars )
      goto LABEL_84;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v75 = System_String__Trim((System_String_o *)Chars, 0);
      v76 = &StringLiteral_16622/*"[~"*/;
      goto LABEL_50;
    }
    v77 = v95;
    if ( !v95 )
      goto LABEL_84;
    v78 = StringLiteral_16623/*"[~1]"*/;
    goto LABEL_53;
  }
  if ( v43 < txt->fields._stringLength )
  {
    text = System_String__Substring_75489544(txt, v38, v39 + v43 + 1, 0);
    if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v92);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v9 + 40), &text, enforceColora, 0);
    Chars = (__int64)*v20;
    if ( !*v20 )
      goto LABEL_84;
    Chars = (__int64)System_Text_StringBuilder__Append_75521760((System_Text_StringBuilder_o *)Chars, text, 0);
    goto LABEL_36;
  }
  v93 = *v20;
  Chars = (__int64)System_String__Substring(txt, v38, 0);
  if ( !v93 )
    goto LABEL_84;
  Chars = (__int64)System_Text_StringBuilder__Append_75521760(v93, (System_String_o *)Chars, 0);
LABEL_82:
  if ( !v35 )
LABEL_84:
    sub_21FFECC(Chars, v11);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v35 + 24))(*(_QWORD *)(v35 + 64), *(_QWORD *)(v35 + 40));
  ScriptLogMessage__UpdatePlayVoice(this, v94);
}


void ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  ScriptMessageLabel_o *analyzeLabel; // x20
  float voiceVolume; // s8
  System_Action_T1__T2__T3__o *v7; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  __int64 v9; // x1
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_593A674 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__string__bool__TypeInfo);
    sub_21FFC50(&Method_ScriptLogMessage_SetBackLogReplayingVoice__);
    byte_593A674 = 1;
  }
  if ( this->fields.isReservedAddPlayVoice && !this->fields.isDelayAddPlayVoice )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0)
      && !System_String__IsNullOrEmpty(this->fields.voiceObjectName, 0) )
    {
      voiceAssetName = this->fields.voiceAssetName;
      voiceObjectName = this->fields.voiceObjectName;
      analyzeLabel = this->fields.analyzeLabel;
      voiceVolume = this->fields.voiceVolume;
      v7 = (System_Action_T1__T2__T3__o *)sub_21FFEBC(System_Action_string__string__bool__TypeInfo);
      System_Action_object__object__bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_ScriptLogMessage_SetBackLogReplayingVoice__,
        0);
      if ( !analyzeLabel
        || (ScriptMessageLabel__UpdatePlayVoice(
              analyzeLabel,
              voiceAssetName,
              voiceObjectName,
              voiceVolume,
              (System_Action_string__string__bool__o *)v7,
              0),
            backLogDialog = this->fields.backLogDialog,
            LogLabel = ScriptMessageLabel__GetLogLabel(analyzeLabel, 0),
            !backLogDialog) )
      {
        sub_21FFECC(LogLabel, v9);
      }
      ScriptBackLog__AddLog(backLogDialog, LogLabel, v11);
      ScriptLogMessage__ReleasePlayVoice(this, v12);
    }
  }
  else
  {
    this->fields.isDelayAddPlayVoice = 0;
  }
}


float ScriptLogMessage__get_textLineHeight(ScriptLogMessage_o *this, const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


void ScriptLogMessage_ProcAddLabel___ctor(
        ScriptLogMessage_ProcAddLabel_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFCBA8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFCB68;
}


System_IAsyncResult_o *ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ScriptLogMessage_ProcAddLabel__Invoke(ScriptLogMessage_ProcAddLabel_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void ScriptLogMessage_ProcAddLabel2___ctor(
        ScriptLogMessage_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FFCC20;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1FFCC04;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1FFCBBC;
}


System_IAsyncResult_o *ScriptLogMessage_ProcAddLabel2__BeginInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ScriptLogMessage_ProcAddLabel2__Invoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    txt,
    this->fields.method);
}


void ScriptLogMessage___c__DisplayClass54_0___ctor(
        ScriptLogMessage___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ScriptLogMessage___c__DisplayClass54_0___UpdateLabels_b__0(
        ScriptLogMessage___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  char *tmpTxt; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  ScriptLogMessage_o *_4__this; // x20
  const MethodInfo *v11; // x4
  struct ScriptLogMessage_o *v12; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length((System_Text_StringBuilder_o *)tmpTxt, 0) < 1 )
    goto LABEL_8;
  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)tmpTxt + 360LL))(
                           tmpTxt,
                           *(_QWORD *)(*(_QWORD *)tmpTxt + 368LL)),
        (v12 = this->fields.__4__this) == 0)
    || !_4__this
    || (ScriptLogMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v12->fields.defaultColorTag,
          this->fields.isFoward,
          v11),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0) )
  {
LABEL_10:
    sub_21FFECC(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 20) = tmpColorTag;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(tmpTxt + 160), (int32_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
}


void ScriptLogMessage___c__DisplayClass54_0___UpdateLabels_b__1(
        ScriptLogMessage___c__DisplayClass54_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ScriptLogMessage___c__DisplayClass54_0_o *v8; // x19
  struct System_Text_StringBuilder_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v8 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptLogMessage___c__DisplayClass54_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLogMessage__AddLabel(
      (ScriptLogMessage_o *)this,
      text,
      (System_String_o *)this[3].fields.tmpTxt,
      v8->fields.isFoward,
      v4);
  }
  this = (ScriptLogMessage___c__DisplayClass54_0_o *)v8->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_21FFECC(this, text);
  tmpColorTag = (struct System_Text_StringBuilder_o *)v8->fields.tmpColorTag;
  this[3].fields.tmpTxt = tmpColorTag;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this[3].fields,
    (int32_t)tmpColorTag,
    (System_String_o *)method,
    v3,
    (int32_t)v4,
    v5,
    v6,
    v7);
}