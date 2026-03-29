void ScriptLogMessage___cctor(const MethodInfo *method)
{
  struct ScriptLogMessage_StaticFields *static_fields; // x8

  if ( (byte_4D32961 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptLogMessage_TypeInfo);
    byte_4D32961 = 1;
  }
  static_fields = ScriptLogMessage_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALIGN_LEFT_BASE = 3285975040LL;
  static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D32960 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32960 = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v9 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptLogMessage__AddLabel(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o *v10; // x23
  ScriptLogMessage_o *v11; // x19
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  System_String_o *v17; // x23
  int m_CancellationTokenSource; // w8
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  int32_t fontSize; // w4
  struct ScriptBackLog_o *backLogDialog; // x7
  UILabel_o **p_main; // x1
  UILabel_o **p_ruby; // x2
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v26; // x19
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  System_String_o *v29; // x23
  int v30; // w8
  ScriptLogMessage_o *v31; // x24
  struct ScriptBackLog_o *v32; // x23
  float v33; // s0
  int v34; // w8
  float v35; // s8
  const MethodInfo *v36; // x1
  System_String_o *v37; // x23
  ScriptLogMessage_o *v38; // x23
  int32_t v39; // w0
  System_String_o **p_mainPrefab; // x8
  UILabel_o *MainLabel; // x0
  int32_t v42; // w2
  char v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int v48; // w8
  ScriptLogMessage_o *v49; // x23
  UILabel_o *RubyLabel; // x0
  int32_t v51; // w2
  char v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_String_o *rubyPrefab; // x24
  ScriptLogMessage_o *v58; // x24
  int v59; // w25
  int32_t v60; // w0
  UnityEngine_Vector2_o v61; // 0:s1.4,4:s2.4

  v10 = text;
  v11 = this;
  if ( (byte_4D32954 & 1) == 0 )
  {
    sub_1C93AD4(&char___TypeInfo);
    sub_1C93AD4(&StringLiteral_21502/*"line"*/);
    this = (ScriptLogMessage_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32954 = 1;
  }
  analyzeLabel = v11->fields.analyzeLabel;
  if ( !analyzeLabel
    || (analyzeLabel->fields.colorTag = colorTag,
        analyzeLabel->fields.stepTime = 0.0,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&analyzeLabel->fields.colorTag,
          (int32_t)colorTag,
          (int32_t)colorTag,
          isFoward,
          (System_String_o *)method,
          v5,
          v6,
          v7),
        dispPosition = v11->fields.dispPosition,
        !v10) )
  {
LABEL_60:
    sub_1C93D2C(this, text);
  }
  if ( System_String__get_Chars(v10, 0, 0) != 91 )
  {
    ScriptLogMessage__FetchMainLabel(v11, v14);
    ScriptMessageLabel__UpdateLabel(
      analyzeLabel,
      &analyzeLabel->fields.main,
      &v11->fields.dispPosition,
      v11->fields.fontSize,
      v11->fields.maxFontSize,
      v11->fields.verticalAlign,
      v10,
      v11->fields.fontType,
      0);
    goto LABEL_15;
  }
  if ( System_String__get_Chars(v10, 1, 0) == 35 )
  {
    ScriptLogMessage__FetchMainLabel(v11, v15);
    ScriptLogMessage__FetchRubyLabel(v11, v16);
    v17 = System_String__Substring_64471664(v10, 2, v10->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_1C93B7C(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !v17 )
        goto LABEL_60;
      this = (ScriptLogMessage_o *)System_String__Split_64474816(v17, (System_Char_array *)this, 0);
      if ( !this )
        goto LABEL_60;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        verticalAlign = v11->fields.verticalAlign;
        maxFontSize = v11->fields.maxFontSize;
        fontSize = v11->fields.fontSize;
        backLogDialog = this->fields.backLogDialog;
        p_main = &analyzeLabel->fields.main;
        p_ruby = &analyzeLabel->fields.ruby;
        if ( m_CancellationTokenSource <= 1 )
          ScriptMessageLabel__UpdateBouten(
            analyzeLabel,
            p_main,
            p_ruby,
            &v11->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            (System_String_o *)backLogDialog,
            v11->fields.fontType,
            0);
        else
          ScriptMessageLabel__UpdateRuby(
            analyzeLabel,
            p_main,
            p_ruby,
            &v11->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            (System_String_o *)backLogDialog,
            (System_String_o *)this->fields.mainPrefab,
            v11->fields.fontType,
            0,
            0);
        goto LABEL_15;
      }
    }
LABEL_61:
    sub_1C93D34(this);
  }
  if ( System_String__get_Chars(v10, 1, 0) == 94 )
  {
    ScriptLogMessage__FetchImageSprite(v11, v28);
    v29 = System_String__Substring_64471664(v10, 2, v10->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_1C93B7C(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v29 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_64474816(v29, (System_Char_array *)this, 0);
    if ( !this )
      goto LABEL_60;
    v30 = (int)this->fields.m_CancellationTokenSource;
    v31 = this;
    if ( !v30 )
      goto LABEL_61;
    v32 = this->fields.backLogDialog;
    if ( v30 <= 1 )
    {
      this = (ScriptLogMessage_o *)sub_1C93B7C(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_60;
      text = (System_String_o *)this;
      if ( LODWORD(this->fields.m_CancellationTokenSource) )
      {
        LOWORD(this->fields.backLogDialog) = 58;
        if ( !v32 )
          goto LABEL_60;
        this = (ScriptLogMessage_o *)System_String__Split_64474816((System_String_o *)v32, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_60;
        v48 = (int)this->fields.m_CancellationTokenSource;
        v49 = this;
        if ( v48 <= 1 )
        {
          if ( v48 )
          {
            ScriptMessageLabel__UpdateImage(
              analyzeLabel,
              &analyzeLabel->fields.image,
              &v11->fields.dispPosition,
              v11->fields.fontSize,
              (System_String_o *)this->fields.backLogDialog,
              v11->fields.horizontalAlign,
              0);
            goto LABEL_15;
          }
        }
        else
        {
          RubyLabel = ScriptLogMessage__FetchRubyLabel(v11, (const MethodInfo *)text);
          analyzeLabel->fields.ruby = RubyLabel;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&analyzeLabel->fields.ruby,
            (int32_t)RubyLabel,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          if ( LODWORD(v49->fields.m_CancellationTokenSource) >= 2 )
          {
            ScriptMessageLabel__UpdateImageRuby(
              analyzeLabel,
              &analyzeLabel->fields.image,
              &analyzeLabel->fields.ruby,
              &v11->fields.dispPosition,
              v11->fields.fontSize,
              (System_String_o *)v49->fields.backLogDialog,
              (System_String_o *)v49->fields.mainPrefab,
              v11->fields.fontType,
              v11->fields.horizontalAlign,
              0);
            goto LABEL_15;
          }
        }
      }
      goto LABEL_61;
    }
    v33 = System_Single__Parse((System_String_o *)this->fields.mainPrefab, 0);
    v34 = (int)v31->fields.m_CancellationTokenSource;
    v35 = v33;
    if ( v34 == 2 )
    {
      ScriptMessageLabel__UpdateImage_45570036(
        analyzeLabel,
        &analyzeLabel->fields.image,
        &v11->fields.dispPosition,
        v11->fields.fontSize,
        v33,
        (System_String_o *)v32,
        v11->fields.horizontalAlign,
        0);
      goto LABEL_15;
    }
    if ( v34 <= 3 )
    {
      if ( (unsigned int)v34 > 2 )
      {
        rubyPrefab = (System_String_o *)v31->fields.rubyPrefab;
        this = (ScriptLogMessage_o *)sub_1C93B7C(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_60;
        text = (System_String_o *)this;
        if ( LODWORD(this->fields.m_CancellationTokenSource) )
        {
          LOWORD(this->fields.backLogDialog) = 44;
          if ( !rubyPrefab )
            goto LABEL_60;
          this = (ScriptLogMessage_o *)System_String__Split_64474816(rubyPrefab, (System_Char_array *)this, 0);
          if ( !this )
            goto LABEL_60;
          v58 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0);
            if ( LODWORD(v58->fields.m_CancellationTokenSource) > 1 )
            {
              v59 = (int)this;
              v60 = System_Int32__Parse((System_String_o *)v58->fields.mainPrefab, 0);
              v61.fields.x = (float)v59;
              v61.fields.y = (float)v60;
              ScriptMessageLabel__UpdateImage_45570188(
                analyzeLabel,
                &analyzeLabel->fields.image,
                &v11->fields.dispPosition,
                v11->fields.fontSize,
                v35,
                (System_String_o *)v32,
                v61,
                v11->fields.horizontalAlign,
                0);
              goto LABEL_15;
            }
          }
        }
      }
      goto LABEL_61;
    }
  }
  else
  {
    if ( System_String__get_Chars(v10, 1, 0) != 126 )
    {
      MainLabel = ScriptLogMessage__FetchMainLabel(v11, v36);
      analyzeLabel->fields.main = MainLabel;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&analyzeLabel->fields,
        (int32_t)MainLabel,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      ScriptMessageLabel__UpdateLabel(
        analyzeLabel,
        &analyzeLabel->fields.main,
        &v11->fields.dispPosition,
        v11->fields.fontSize,
        v11->fields.maxFontSize,
        v11->fields.verticalAlign,
        v10,
        v11->fields.fontType,
        0);
      goto LABEL_15;
    }
    ScriptLogMessage__FetchImageSprite(v11, v36);
    v37 = System_String__Substring_64471664(v10, 2, v10->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_1C93B7C(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v37 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_64474816(v37, (System_Char_array *)this, 0);
    if ( !this )
      goto LABEL_60;
    v38 = this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    v39 = System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0);
    if ( SLODWORD(v38->fields.m_CancellationTokenSource) >= 2 )
      p_mainPrefab = (System_String_o **)&v38->fields.mainPrefab;
    else
      p_mainPrefab = (System_String_o **)&StringLiteral_21502/*"line"*/;
    ScriptMessageLabel__UpdateLine(
      analyzeLabel,
      &analyzeLabel->fields.image,
      &v11->fields.dispPosition,
      v11->fields.fontSize,
      v39,
      *p_mainPrefab,
      0);
  }
LABEL_15:
  if ( isFoward )
  {
    rubyText = analyzeLabel->fields.rubyText;
    analyzeLabel->fields.mainPosition.fields.x = analyzeLabel->fields.mainPosition.fields.x
                                               - analyzeLabel->fields.widthSize;
    if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0) )
      analyzeLabel->fields.rubyPosition.fields.x = analyzeLabel->fields.rubyPosition.fields.x
                                                 - analyzeLabel->fields.widthSize;
    v11->fields.dispPosition = dispPosition;
  }
  v26 = v11->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0);
  if ( !v26 )
    goto LABEL_60;
  ScriptBackLog__AddLog(v26, (ScriptMessageLabel_o *)this, v27);
}


void ScriptLogMessage__AddPlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  ScriptLogMessage_o *v9; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  v9 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceAssetName,
    (int32_t)assetName,
    (int32_t)objectName,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v9->fields.voiceObjectName = objectName;
  v9 = (ScriptLogMessage_o *)((char *)v9 + 216);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v9, (int32_t)objectName, v12, v13, v14, v15, v16, v17);
  *(float *)&v9->monitor = volume;
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
void ScriptLogMessage__AddText_45516084(
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D3295E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3295E = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.talkName, v9, v2, v3, v4, v5, v6, v7);
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
    sub_1C93D2C(this, method);
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
  if ( !byte_4D2A139 )
  {
    this = (ScriptLogMessage_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(image, 0);
  v5 = this;
  if ( !byte_4D2A13E )
  {
    this = (ScriptLogMessage_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1C93D2C(this, method);
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
  if ( !byte_4D2A139 )
  {
    this = (ScriptLogMessage_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(main, 0);
  v5 = this;
  if ( !byte_4D2A13E )
  {
    this = (ScriptLogMessage_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1C93D2C(this, method);
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
  if ( !byte_4D2A139 )
  {
    this = (ScriptLogMessage_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  if ( !v5 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(ruby, 0);
  v6 = this;
  if ( !byte_4D2A13E )
  {
    this = (ScriptLogMessage_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  if ( !v6 )
LABEL_10:
    sub_1C93D2C(this, method);
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
  int32_t verticalAlign; // w20

  verticalAlign = this->fields.verticalAlign;
  this->fields.fowardMaxFontSize = this->fields.maxFontSize;
  this->fields.verticalAlign = 0;
  ScriptLogMessage__UpdateLabels(this, text, 1, color, v4);
  this->fields.verticalAlign = verticalAlign;
}


int32_t ScriptLogMessage__GetDefaultFontSize(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t defaultFontSize; // w19

  if ( (byte_4D3295F & 1) == 0 )
  {
    sub_1C93AD4(&ScriptMessageLabel_TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    byte_4D3295F = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_859/*"-"*/, defaultFontSize, 0);
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

  if ( (byte_4D3295B & 1) == 0 )
  {
    sub_1C93AD4(&ScriptMessageLabel_TypeInfo);
    byte_4D3295B = 1;
  }
  fontSize = this->fields.fontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  return ScriptMessageLabel__GetFontSizeString(fontSize, 0);
}


void ScriptLogMessage__Init(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t defaultFontSize; // w20
  ScriptMessageLabel_o *v4; // x21
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *mainPrefab; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct UnityEngine_Font_o *trueTypeFont; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  UnityEngine_GameObject_o *v37; // x21
  int32_t v38; // w0
  struct ScriptMessageLabel_o *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  UnityEngine_GameObject_o *v46; // x21
  int32_t v47; // w0
  struct ScriptMessageLabel_o *v48; // x22
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  UnityEngine_GameObject_o *v55; // x21
  int32_t v56; // w0
  struct ScriptMessageLabel_o *v57; // x22
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  struct ScriptMessageLabel_o *v64; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v67; // s0
  int32_t v68; // w1
  int32_t rubyFontSize; // w8
  float v70; // s1
  float v71; // s0
  float v72; // s0
  float v73; // s1
  const MethodInfo *v74; // x1
  const MethodInfo *v75; // x1

  if ( (byte_4D32953 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScriptMessageLabel_TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_25682/*"■"*/);
    byte_4D32953 = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    ScriptLogMessage__ReleasePlayVoice(this, method);
    defaultFontSize = this->fields.defaultFontSize;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    this->fields.defaultFontSize = ScriptMessageLabel__GetFontSize(
                                     (System_String_o *)StringLiteral_859/*"-"*/,
                                     defaultFontSize,
                                     0);
    v4 = (ScriptMessageLabel_o *)sub_1C93D20(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel___ctor(v4, 0);
    this->fields.analyzeLabel = v4;
    p_analyzeLabel = &this->fields.analyzeLabel;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.analyzeLabel, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              mainPrefab,
                                              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v15 = transform;
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
    UnityEngine_GameObject__set_layer(v15, layer, 0);
    v17 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v15,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v17 )
      goto LABEL_47;
    v17->fields.main = (struct UILabel_o *)transform;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->fields, (int32_t)transform, v18, v19, v20, v21, v22, v23);
    if ( !*p_analyzeLabel )
      goto LABEL_47;
    transform = (UnityEngine_GameObject_o *)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_47;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0);
    this->fields.defaultFontType = trueTypeFont;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultFontType,
      (int32_t)trueTypeFont,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    this->fields.fontType = trueTypeFont;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.fontType,
      (int32_t)trueTypeFont,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.rubyPrefab,
                                              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v37 = transform;
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
    v38 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v37, v38, 0);
    v39 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v37,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v39 )
      goto LABEL_47;
    v39->fields.ruby = (struct UILabel_o *)transform;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v39->fields.ruby, (int32_t)transform, v40, v41, v42, v43, v44, v45);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.imagePrefab,
                                              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v46 = transform;
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
    v47 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v46, v47, 0);
    v48 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v46,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v48 )
      goto LABEL_47;
    v48->fields.image = (struct UISprite_o *)transform;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v48->fields.image, (int32_t)transform, v49, v50, v51, v52, v53, v54);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.playVoicePrefab,
                                              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v55 = transform;
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
    v56 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v55, v56, 0);
    v57 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v55,
                                              (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v57
      || (v57->fields.playVoice = (struct UIButton_o *)transform,
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&v57->fields.playVoice,
            (int32_t)transform,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63),
          (v64 = *p_analyzeLabel) == 0)
      || (main = v64->fields.main,
          ruby = v64->fields.ruby,
          transform = (UnityEngine_GameObject_o *)ScriptLogMessage__GetDefaultFontSize(this, (const MethodInfo *)v14),
          !main) )
    {
LABEL_47:
      sub_1C93D2C(transform, v14);
    }
    v67 = this->fields.fontScale * (float)(int)transform;
    if ( v67 == INFINITY )
      v68 = 0x80000000;
    else
      v68 = (int)v67;
    UILabel__set_fontSize(main, v68, 0);
    UILabel__set_text(main, (System_String_o *)StringLiteral_25682/*"■"*/, 0);
    transform = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))main->klass->vtable._22_get_localSize.methodPtr)(
                                              main,
                                              main->klass->vtable._22_get_localSize.method);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v70;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_47;
      v72 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v72 == INFINITY )
        LODWORD(v14) = 0x80000000;
      else
        LODWORD(v14) = (int)v72;
      this->fields.rubyFontSize = v14;
    }
    else
    {
      v71 = this->fields.fontScale * (float)rubyFontSize;
      if ( v71 == INFINITY )
        v14 = 0x80000000LL;
      else
        v14 = (unsigned int)(int)v71;
      this->fields.rubyFontSize = v14;
      if ( !ruby )
        goto LABEL_47;
    }
    UILabel__set_fontSize(ruby, v14, 0);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_25682/*"■"*/, 0);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))ruby->klass->vtable._22_get_localSize.methodPtr)(
      ruby,
      ruby->klass->vtable._22_get_localSize.method);
    this->fields.rubyLineHeight = v73;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v73;
    ScriptLogMessage__Init(this, v74);
    this->fields.dispPosition = this->fields.startPosition;
    ScriptLogMessage__SetDefaultState(this, v75);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( this->fields.isInit )
  {
    p_analyzeLabel = &this->fields.analyzeLabel;
    analyzeLabel = this->fields.analyzeLabel;
    *((_BYTE *)p_analyzeLabel + 52) = 0;
    if ( !analyzeLabel )
      sub_1C93D2C(0, method);
    ScriptMessageLabel__Destroy(analyzeLabel, 0);
    this->fields.analyzeLabel = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_analyzeLabel, 0, v5, v6, v7, v8, v9, v10);
    this->fields.defaultFontType = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.defaultFontType, 0, v11, v12, v13, v14, v15, v16);
    this->fields.fontType = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fontType, 0, v17, v18, v19, v20, v21, v22);
  }
}


void ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  struct System_String_o **p_voiceObjectName; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D3295C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D3295C = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  v9 = StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceAssetName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceObjectName = &this->fields.voiceObjectName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_voiceObjectName, v10, v12, v13, v14, v15, v16, v17);
  *((_DWORD *)p_voiceObjectName + 2) = 1065353216;
  *((_BYTE *)p_voiceObjectName + 12) = 0;
}


void ScriptLogMessage__ReservePlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  ScriptLogMessage_o *v9; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  v9 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceAssetName,
    (int32_t)assetName,
    (int32_t)objectName,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v9->fields.voiceObjectName = objectName;
  v9 = (ScriptLogMessage_o *)((char *)v9 + 216);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v9, (int32_t)objectName, v12, v13, v14, v15, v16, v17);
  *(float *)&v9->monitor = volume;
}


void ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v3; // s0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  float v10; // s0
  float defaultTextOnlyLineHeight; // s1
  float v12; // s2
  int32_t v13; // w8
  int32_t v14; // w1

  if ( (byte_4D32958 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32958 = 1;
  }
  v3 = this->fields.dispPosition.fields.y
     - (float)((float)(this->fields.textOnlyLineHeight + this->fields.rubyLineHeight) + this->fields.betweenLineHeight);
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = v3;
  v10 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v12 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v13 = (int)v10;
  if ( v10 == INFINITY )
    v13 = 0x80000000;
  this->fields.fontSize = v13;
  this->fields.verticalAlign = 0;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v12;
  v14 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag, v14, v4, v5, v6, v7, v8, v9);
}


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
  float ALIGN_RIGHT_BASE; // s0
  int v12; // w8
  ScriptLogMessage_c *v13; // x0

  if ( (byte_4D3295D & 1) == 0 )
  {
    sub_1C93AD4(&ScriptLogMessage_TypeInfo);
    byte_4D3295D = 1;
  }
  if ( isLineHead )
  {
    horizontalAlign = this->fields.horizontalAlign;
    if ( horizontalAlign == 2 )
    {
      v10 = ScriptLogMessage_TypeInfo;
      if ( !ScriptLogMessage_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo);
        v10 = ScriptLogMessage_TypeInfo;
      }
      ALIGN_RIGHT_BASE = v10->static_fields->ALIGN_RIGHT_BASE;
      v12 = this->fields.fontSize * lineLength;
    }
    else
    {
      if ( horizontalAlign != 1 )
      {
        ALIGN_LEFT_BASE = 0.0;
        if ( !horizontalAlign )
        {
          v9 = ScriptLogMessage_TypeInfo;
          if ( !ScriptLogMessage_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo);
            v9 = ScriptLogMessage_TypeInfo;
          }
          ALIGN_LEFT_BASE = v9->static_fields->ALIGN_LEFT_BASE;
        }
        goto LABEL_17;
      }
      v13 = ScriptLogMessage_TypeInfo;
      if ( !ScriptLogMessage_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo);
        v13 = ScriptLogMessage_TypeInfo;
      }
      ALIGN_RIGHT_BASE = v13->static_fields->ALIGN_CENTER_BASE;
      v12 = this->fields.fontSize * lineLength / 2;
    }
    ALIGN_LEFT_BASE = ALIGN_RIGHT_BASE - (float)v12;
LABEL_17:
    this->fields.dispPosition.fields.x = ALIGN_LEFT_BASE;
  }
}


void ScriptLogMessage__SetBackLogReplayingVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        bool isReplaying,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ScriptBackLog_o *backLogDialog; // x0
  int32_t v12; // w2
  char v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct ScriptBackLog_o *v18; // x8

  backLogDialog = this->fields.backLogDialog;
  if ( !backLogDialog
    || (backLogDialog->fields._ReplayingAssetName_k__BackingField = assetName,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&backLogDialog->fields._ReplayingAssetName_k__BackingField,
          (int32_t)assetName,
          (int32_t)objectName,
          isReplaying,
          (System_String_o *)method,
          v5,
          v6,
          v7),
        (backLogDialog = this->fields.backLogDialog) == 0)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&backLogDialog->fields._ReplayingObjectName_k__BackingField,
          (int32_t)objectName,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v18 = this->fields.backLogDialog) == 0) )
  {
    sub_1C93D2C(backLogDialog, assetName);
  }
  v18->fields._IsReplayingVoice_k__BackingField = isReplaying;
}


void ScriptLogMessage__SetBetweenLineHeight(ScriptLogMessage_o *this, float height, const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1C93D2C(0, method);
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  float rubyLineHeight; // s3
  float v11; // s0
  float defaultTextOnlyLineHeight; // s1
  int32_t v13; // w8
  int32_t v14; // w1

  if ( (byte_4D32957 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D32957 = 1;
  }
  DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, method);
  rubyLineHeight = this->fields.rubyLineHeight;
  v11 = this->fields.fontScale * (float)DefaultFontSize;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = this->fields.defaultBetweenLineHeight;
  v13 = (int)v11;
  if ( v11 == INFINITY )
    v13 = 0x80000000;
  this->fields.fontSize = v13;
  this->fields.verticalAlign = 0;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v14 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag, v14, v4, v5, v6, v7, v8, v9);
}


void ScriptLogMessage__SetEraseLoopLogData(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o dispPosition; // x8
  ScriptBackLog_o *backLogDialog; // x0

  dispPosition = this->fields.dispPosition;
  backLogDialog = this->fields.backLogDialog;
  this->fields.eraseLoopLogDisplayPosition = dispPosition;
  if ( !backLogDialog )
    sub_1C93D2C(0, method);
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

  if ( (byte_4D3295A & 1) == 0 )
  {
    sub_1C93AD4(&ScriptMessageLabel_TypeInfo);
    byte_4D3295A = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v8 = this->fields.fontScale * (float)ScriptMessageLabel__GetFontSize(sizeName, defaultFontSize, 0);
  v9 = (int)v8;
  if ( v8 == INFINITY )
    v9 = 0x80000000;
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
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D32959 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32959 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0);
  if ( v5 )
  {
    if ( !this )
      sub_1C93D2C(v5, v6);
  }
  else
  {
    font = this->fields.defaultFontType;
  }
  this->fields.fontType = font;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fontType, (int32_t)font, v7, v8, v9, v10, v11, v12);
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
  v4 = (int)v3;
  if ( v3 == INFINITY )
    v4 = 0x80000000;
  this->fields.maxFontSize = v4;
}


bool ScriptLogMessage__SetTalkName(ScriptLogMessage_o *this, System_String_o *text, const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct UnityEngine_Font_o *fontType; // x22
  struct UnityEngine_Font_o *defaultFontType; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  int32_t DefaultFontSize; // w0
  float x; // s0
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( System_String__IsNullOrEmpty(text, 0) )
  {
    ScriptLogMessage__ClearTalkName(this, v5);
  }
  else
  {
    this->fields.talkName = text;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.talkName, (int32_t)text, v6, v7, v8, v9, v10, v11);
    fontType = this->fields.fontType;
    defaultFontType = this->fields.defaultFontType;
    this->fields.fontType = defaultFontType;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.fontType,
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fontType, (int32_t)fontType, v25, v26, v27, v28, v29, v30);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Text_StringBuilder_o *v18; // x24
  System_Text_StringBuilder_o **v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x25
  __int64 v34; // x24
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  int32_t v37; // w27
  int v38; // w21
  int32_t v39; // w28
  int32_t BraceIndex; // w0
  int32_t v41; // w29
  System_String_o *v42; // x0
  int32_t v43; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Text_StringBuilder_o *v52; // x29
  ScriptReplaceString_c *v53; // x0
  int32_t playerGenderIndex; // w28
  struct System_String_o *v55; // x1
  System_String_o *v56; // x27
  const MethodInfo *v57; // x4
  char v58; // w2
  ScriptLogMessage_o *v59; // x0
  System_String_o *v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct System_String_o *v67; // x1
  System_String_o *v68; // x28
  int32_t v69; // w1
  int32_t v70; // w2
  System_String_o *v71; // x0
  __int64 *v72; // x8
  ScriptLogMessage_ProcAddLabel2_o *v73; // x9
  __int64 v74; // x1
  const MethodInfo *v75; // x1
  System_String_o *v76; // x27
  System_String_array *v77; // x0
  struct System_String_o *v78; // x1
  System_String_array *v79; // x27
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  System_String_o *v86; // x0
  System_Text_StringBuilder_o *v87; // x21
  const MethodInfo *v88; // x1
  ScriptLogMessage_ProcAddLabel2_o *v89; // [xsp+8h] [xbp-78h]
  System_String_o *enforceColora; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D32955 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptLogMessage_ProcAddLabel2_TypeInfo);
    sub_1C93AD4(&ScriptLogMessage_ProcAddLabel_TypeInfo);
    sub_1C93AD4(&ScriptMessageLabel_TypeInfo);
    sub_1C93AD4(&ScriptReplaceString_TypeInfo);
    sub_1C93AD4(&System_Text_StringBuilder_TypeInfo);
    sub_1C93AD4(&Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__0__);
    sub_1C93AD4(&Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__1__);
    sub_1C93AD4(&ScriptLogMessage___c__DisplayClass54_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_23582/*"servantName"*/);
    sub_1C93AD4(&StringLiteral_15923/*"[-]"*/);
    sub_1C93AD4(&StringLiteral_20310/*"i"*/);
    sub_1C93AD4(&StringLiteral_16121/*"[~1]"*/);
    sub_1C93AD4(&StringLiteral_16056/*"[^"*/);
    sub_1C93AD4(&StringLiteral_23204/*"r"*/);
    sub_1C93AD4(&StringLiteral_19113/*"effectmessage"*/);
    sub_1C93AD4(&StringLiteral_21502/*"line"*/);
    sub_1C93AD4(&StringLiteral_20513/*"image"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_16120/*"[~"*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D32955 = 1;
  }
  text = 0;
  v9 = sub_1C93D20(ScriptLogMessage___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_84;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 32) = isFoward;
  v18 = (System_Text_StringBuilder_o *)sub_1C93D20(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v18, 0);
  *(_QWORD *)(v9 + 16) = v18;
  v19 = (System_Text_StringBuilder_o **)(v9 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v18, v20, v21, v22, v23, v24, v25);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)enforceColor,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  enforceColora = enforceColor;
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v9 + 40) = defaultColorTag;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)defaultColorTag, v26, v27, v28, v29, v30, v31);
  v34 = sub_1C93D20(ScriptLogMessage_ProcAddLabel_TypeInfo);
  ScriptLogMessage_ProcAddLabel___ctor(
    (ScriptLogMessage_ProcAddLabel_o *)v34,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__0__,
    v35);
  v89 = (ScriptLogMessage_ProcAddLabel2_o *)sub_1C93D20(ScriptLogMessage_ProcAddLabel2_TypeInfo);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v89,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__1__,
    v36);
  if ( !txt )
    goto LABEL_84;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_82;
  v37 = 0;
  v38 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v37, 0) != 91 )
    {
      v52 = *v19;
      Chars = System_String__get_Chars(txt, v37, 0);
      if ( !v52 )
        goto LABEL_84;
      v39 = v37 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_64512012(v52, Chars, 0);
      goto LABEL_37;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v39 = v37 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v37 + 1, 0);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v19;
      if ( !*v19 )
        goto LABEL_84;
      Chars = (__int64)System_Text_StringBuilder__Append_64509684(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15904/*"["*/,
                         0);
      goto LABEL_37;
    }
    v41 = BraceIndex;
    Chars = System_String__get_Chars(txt, v39, 0);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v34 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
      v42 = System_String__Substring_64471664(txt, v37 + 2, v38 + v41 - 2, 0);
      v43 = System_Int32__Parse(v42, 0);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v43, 0);
      TagSplitString = System_String__Concat_64425724(String, (System_String_o *)StringLiteral_15923/*"[-]"*/, 0);
LABEL_33:
      v55 = *(struct System_String_o **)(v9 + 40);
      v56 = TagSplitString;
      this->fields.defaultColorTag = v55;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
        (int32_t)v55,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
      v58 = *(_BYTE *)(v9 + 32);
      v59 = this;
      v60 = v56;
LABEL_34:
      ScriptLogMessage__UpdateLabels(v59, v60, v58, enforceColora, v57);
      v67 = this->fields.defaultColorTag;
      *(_QWORD *)(v9 + 40) = v67;
LABEL_35:
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)v67, v61, v62, v63, v64, v65, v66);
      goto LABEL_36;
    }
    Chars = System_String__get_Chars(txt, v39, 0);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v34 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4D3268D )
      {
        sub_1C93AD4(&ScriptReplaceString_TypeInfo);
        byte_4D3268D = 1;
      }
      v53 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v53 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v53->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v37 + 2, playerGenderIndex, 0);
      goto LABEL_33;
    }
    Chars = System_String__get_Chars(txt, v39, 0);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v34 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
      Chars = (__int64)System_String__Substring_64471664(txt, v37, v38 + v41 + 1, 0);
      goto LABEL_51;
    }
    Chars = System_String__get_Chars(txt, v39, 0);
    if ( (unsigned __int16)Chars != 61 )
      break;
LABEL_36:
    v39 = v41 + 1;
LABEL_37:
    v38 = -v39;
    v37 = v39;
    if ( v39 >= txt->fields._stringLength )
      goto LABEL_82;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v39, 0);
  if ( !Chars )
    goto LABEL_84;
  v68 = (System_String_o *)Chars;
  Chars = System_String__Equals_64461044((System_String_o *)Chars, (System_String_o *)StringLiteral_20513/*"image"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
    v69 = v37 + 7;
    v70 = v38 + v41 - 7;
    goto LABEL_49;
  }
  Chars = System_String__Equals_64461044(v68, (System_String_o *)StringLiteral_19113/*"effectmessage"*/, 0);
  if ( (Chars & 1) != 0 )
    goto LABEL_36;
  Chars = System_String__Equals_64461044(v68, (System_String_o *)StringLiteral_20310/*"i"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
    v69 = v37 + 3;
    v70 = v38 + v41 - 3;
LABEL_49:
    v71 = System_String__Substring_64471664(txt, v69, v70, 0);
    v72 = &StringLiteral_16056/*"[^"*/;
LABEL_50:
    Chars = (__int64)System_String__Concat_64463988(
                       (System_String_o *)*v72,
                       v71,
                       (System_String_o *)StringLiteral_16156/*"]"*/,
                       0);
LABEL_51:
    v73 = v89;
    if ( !v89 )
      goto LABEL_84;
    v74 = Chars;
LABEL_53:
    Chars = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v73->fields.invoke_impl)(
              v73->fields.method_code,
              v74,
              v73->fields.method);
    goto LABEL_36;
  }
  Chars = System_String__Equals_64461044(v68, (System_String_o *)StringLiteral_23204/*"r"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v75);
    if ( enforceColora )
    {
      *p_defaultColorTag = enforceColora;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
        (int32_t)enforceColora,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    v67 = *p_defaultColorTag;
    *(_QWORD *)(v9 + 40) = *p_defaultColorTag;
    goto LABEL_35;
  }
  Chars = System_String__Equals_64461044(v68, (System_String_o *)StringLiteral_23582/*"servantName"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
    v76 = System_String__Substring_64471664(txt, v37 + 12, v38 + v41 - 12, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v77 = ScriptMessageLabel__AnalysTagParam(v76, 0, 0);
    v78 = *(struct System_String_o **)(v9 + 40);
    v79 = v77;
    this->fields.defaultColorTag = v78;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultColorTag,
      (int32_t)v78,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85);
    v86 = ScriptMessageLabel__GetServantChangeName(v79, 0);
    v58 = *(_BYTE *)(v9 + 32);
    v60 = v86;
    v59 = this;
    goto LABEL_34;
  }
  Chars = System_String__StartsWith(v68, (System_String_o *)StringLiteral_21502/*"line"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
    Chars = (__int64)System_String__Substring_64471664(txt, v37 + 5, v38 + v41 - 5, 0);
    if ( !Chars )
      goto LABEL_84;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v71 = System_String__Trim((System_String_o *)Chars, 0);
      v72 = &StringLiteral_16120/*"[~"*/;
      goto LABEL_50;
    }
    v73 = v89;
    if ( !v89 )
      goto LABEL_84;
    v74 = StringLiteral_16121/*"[~1]"*/;
    goto LABEL_53;
  }
  if ( v41 < txt->fields._stringLength )
  {
    text = System_String__Substring_64471664(txt, v37, v38 + v41 + 1, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v9 + 40), &text, enforceColora, 0);
    Chars = (__int64)*v19;
    if ( !*v19 )
      goto LABEL_84;
    Chars = (__int64)System_Text_StringBuilder__Append_64509684((System_Text_StringBuilder_o *)Chars, text, 0);
    goto LABEL_36;
  }
  v87 = *v19;
  Chars = (__int64)System_String__Substring(txt, v37, 0);
  if ( !v87 )
    goto LABEL_84;
  Chars = (__int64)System_Text_StringBuilder__Append_64509684(v87, (System_String_o *)Chars, 0);
LABEL_82:
  if ( !v34 )
LABEL_84:
    sub_1C93D2C(Chars, v11);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
  ScriptLogMessage__UpdatePlayVoice(this, v88);
}


void ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_o *analyzeLabel; // x20
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  float voiceVolume; // s8
  System_Action_T1__T2__T3__o *v7; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  __int64 v9; // x1
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( (byte_4D32956 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__string__bool__TypeInfo);
    sub_1C93AD4(&Method_ScriptLogMessage_SetBackLogReplayingVoice__);
    byte_4D32956 = 1;
  }
  if ( this->fields.isReservedAddPlayVoice && !this->fields.isDelayAddPlayVoice )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0)
      && !System_String__IsNullOrEmpty(this->fields.voiceObjectName, 0) )
    {
      analyzeLabel = this->fields.analyzeLabel;
      voiceAssetName = this->fields.voiceAssetName;
      voiceObjectName = this->fields.voiceObjectName;
      voiceVolume = this->fields.voiceVolume;
      v7 = (System_Action_T1__T2__T3__o *)sub_1C93D20(System_Action_string__string__bool__TypeInfo);
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
        sub_1C93D2C(LogLabel, v9);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ACA4C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACA484;
}


System_IAsyncResult_o *ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1ACA540;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1ACA520;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1ACA4D8;
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
  return sub_1C93A88(this, &v6, callback, object);
}


void ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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
  void *tmpTxt; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  ScriptLogMessage_o *_4__this; // x20
  const MethodInfo *v11; // x4
  struct ScriptLogMessage_o *v12; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length((System_Text_StringBuilder_o *)tmpTxt, 0) < 1 )
    goto LABEL_8;
  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)tmpTxt + 360LL))(
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
        (tmpTxt = this->fields.tmpTxt) == 0) )
  {
LABEL_10:
    sub_1C93D2C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0);
LABEL_8:
  tmpTxt = this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 20) = tmpColorTag;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)tmpTxt + 1, (int32_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
}


void ScriptLogMessage___c__DisplayClass54_0___UpdateLabels_b__1(
        ScriptLogMessage___c__DisplayClass54_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  MethodInfo *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ScriptLogMessage___c__DisplayClass54_0_o *v8; // x19
  struct System_String_o *tmpColorTag; // x1

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
      *((System_String_o **)this + 20),
      v8->fields.isFoward,
      v4);
  }
  this = (ScriptLogMessage___c__DisplayClass54_0_o *)v8->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1C93D2C(this, text);
  tmpColorTag = v8->fields.tmpColorTag;
  *((_QWORD *)this + 20) = tmpColorTag;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)this + 1,
    (int32_t)tmpColorTag,
    (int32_t)method,
    v3,
    (System_String_o *)v4,
    v5,
    v6,
    v7);
}