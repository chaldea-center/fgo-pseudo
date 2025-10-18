void ScriptLogMessage___cctor(const MethodInfo *method)
{
  struct ScriptLogMessage_StaticFields *static_fields; // x8

  if ( (byte_4C44F40 & 1) == 0 )
  {
    sub_1C37058(&ScriptLogMessage_TypeInfo);
    byte_4C44F40 = 1;
  }
  static_fields = ScriptLogMessage_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALIGN_LEFT_BASE = 3285975040LL;
  static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C44F3F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F3F = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v5 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v5, v2, v3);
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
  ScriptLogMessage_o *v8; // x19
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_String_o *v14; // x23
  int m_CancellationTokenSource; // w8
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  int32_t fontSize; // w4
  struct ScriptBackLog_o *backLogDialog; // x7
  UILabel_o **p_main; // x1
  UILabel_o **p_ruby; // x2
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v23; // x19
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  System_String_o *v26; // x23
  int v27; // w8
  ScriptLogMessage_o *v28; // x24
  struct ScriptBackLog_o *v29; // x23
  float v30; // s0
  int v31; // w8
  float v32; // s8
  const MethodInfo *v33; // x1
  System_String_o *v34; // x23
  ScriptLogMessage_o *v35; // x23
  int32_t v36; // w0
  System_String_o **p_mainPrefab; // x8
  UILabel_o *MainLabel; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x1
  int v42; // w8
  ScriptLogMessage_o *v43; // x23
  UILabel_o *RubyLabel; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_String_o *rubyPrefab; // x24
  ScriptLogMessage_o *v48; // x24
  int v49; // w25
  int32_t v50; // w0
  UnityEngine_Vector2_o v51; // 0:s1.4,4:s2.4

  v8 = this;
  if ( (byte_4C44F33 & 1) == 0 )
  {
    sub_1C37058(&char___TypeInfo);
    sub_1C37058(&StringLiteral_21241/*"line"*/);
    this = (ScriptLogMessage_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F33 = 1;
  }
  analyzeLabel = v8->fields.analyzeLabel;
  if ( !analyzeLabel
    || (analyzeLabel->fields.colorTag = colorTag,
        analyzeLabel->fields.stepTime = 0.0,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&analyzeLabel->fields.colorTag,
          (int32_t)colorTag,
          (int32_t)colorTag,
          (const MethodInfo *)isFoward),
        dispPosition = v8->fields.dispPosition,
        !text) )
  {
LABEL_60:
    sub_1C372B4(this);
  }
  if ( System_String__get_Chars(text, 0, 0) != 91 )
  {
    ScriptLogMessage__FetchMainLabel(v8, v11);
    ScriptMessageLabel__UpdateLabel(
      analyzeLabel,
      &analyzeLabel->fields.main,
      &v8->fields.dispPosition,
      v8->fields.fontSize,
      v8->fields.maxFontSize,
      v8->fields.verticalAlign,
      text,
      v8->fields.fontType,
      0);
    goto LABEL_15;
  }
  if ( System_String__get_Chars(text, 1, 0) == 35 )
  {
    ScriptLogMessage__FetchMainLabel(v8, v12);
    ScriptLogMessage__FetchRubyLabel(v8, v13);
    v14 = System_String__Substring_63607580(text, 2, text->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_1C37100(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_60;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !v14 )
        goto LABEL_60;
      this = (ScriptLogMessage_o *)System_String__Split_63610732(v14, (System_Char_array *)this, 0);
      if ( !this )
        goto LABEL_60;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        verticalAlign = v8->fields.verticalAlign;
        maxFontSize = v8->fields.maxFontSize;
        fontSize = v8->fields.fontSize;
        backLogDialog = this->fields.backLogDialog;
        p_main = &analyzeLabel->fields.main;
        p_ruby = &analyzeLabel->fields.ruby;
        if ( m_CancellationTokenSource <= 1 )
          ScriptMessageLabel__UpdateBouten(
            analyzeLabel,
            p_main,
            p_ruby,
            &v8->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            (System_String_o *)backLogDialog,
            v8->fields.fontType,
            0);
        else
          ScriptMessageLabel__UpdateRuby(
            analyzeLabel,
            p_main,
            p_ruby,
            &v8->fields.dispPosition,
            fontSize,
            maxFontSize,
            verticalAlign,
            (System_String_o *)backLogDialog,
            (System_String_o *)this->fields.mainPrefab,
            v8->fields.fontType,
            0,
            0);
        goto LABEL_15;
      }
    }
LABEL_61:
    sub_1C372BC(this);
  }
  if ( System_String__get_Chars(text, 1, 0) == 94 )
  {
    ScriptLogMessage__FetchImageSprite(v8, v25);
    v26 = System_String__Substring_63607580(text, 2, text->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_1C37100(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_60;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v26 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_63610732(v26, (System_Char_array *)this, 0);
    if ( !this )
      goto LABEL_60;
    v27 = (int)this->fields.m_CancellationTokenSource;
    v28 = this;
    if ( !v27 )
      goto LABEL_61;
    v29 = this->fields.backLogDialog;
    if ( v27 <= 1 )
    {
      this = (ScriptLogMessage_o *)sub_1C37100(char___TypeInfo, 1);
      if ( !this )
        goto LABEL_60;
      if ( LODWORD(this->fields.m_CancellationTokenSource) )
      {
        LOWORD(this->fields.backLogDialog) = 58;
        if ( !v29 )
          goto LABEL_60;
        this = (ScriptLogMessage_o *)System_String__Split_63610732((System_String_o *)v29, (System_Char_array *)this, 0);
        if ( !this )
          goto LABEL_60;
        v42 = (int)this->fields.m_CancellationTokenSource;
        v43 = this;
        if ( v42 <= 1 )
        {
          if ( v42 )
          {
            ScriptMessageLabel__UpdateImage(
              analyzeLabel,
              &analyzeLabel->fields.image,
              &v8->fields.dispPosition,
              v8->fields.fontSize,
              (System_String_o *)this->fields.backLogDialog,
              v8->fields.horizontalAlign,
              0);
            goto LABEL_15;
          }
        }
        else
        {
          RubyLabel = ScriptLogMessage__FetchRubyLabel(v8, v41);
          analyzeLabel->fields.ruby = RubyLabel;
          sub_1C36FFC((CGThumbnailListItem_o *)&analyzeLabel->fields.ruby, (int32_t)RubyLabel, v45, v46);
          if ( LODWORD(v43->fields.m_CancellationTokenSource) >= 2 )
          {
            ScriptMessageLabel__UpdateImageRuby(
              analyzeLabel,
              &analyzeLabel->fields.image,
              &analyzeLabel->fields.ruby,
              &v8->fields.dispPosition,
              v8->fields.fontSize,
              (System_String_o *)v43->fields.backLogDialog,
              (System_String_o *)v43->fields.mainPrefab,
              v8->fields.fontType,
              v8->fields.horizontalAlign,
              0);
            goto LABEL_15;
          }
        }
      }
      goto LABEL_61;
    }
    v30 = System_Single__Parse((System_String_o *)this->fields.mainPrefab, 0);
    v31 = (int)v28->fields.m_CancellationTokenSource;
    v32 = v30;
    if ( v31 == 2 )
    {
      ScriptMessageLabel__UpdateImage_44867988(
        analyzeLabel,
        &analyzeLabel->fields.image,
        &v8->fields.dispPosition,
        v8->fields.fontSize,
        v30,
        (System_String_o *)v29,
        v8->fields.horizontalAlign,
        0);
      goto LABEL_15;
    }
    if ( v31 <= 3 )
    {
      if ( (unsigned int)v31 > 2 )
      {
        rubyPrefab = (System_String_o *)v28->fields.rubyPrefab;
        this = (ScriptLogMessage_o *)sub_1C37100(char___TypeInfo, 1);
        if ( !this )
          goto LABEL_60;
        if ( LODWORD(this->fields.m_CancellationTokenSource) )
        {
          LOWORD(this->fields.backLogDialog) = 44;
          if ( !rubyPrefab )
            goto LABEL_60;
          this = (ScriptLogMessage_o *)System_String__Split_63610732(rubyPrefab, (System_Char_array *)this, 0);
          if ( !this )
            goto LABEL_60;
          v48 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0);
            if ( LODWORD(v48->fields.m_CancellationTokenSource) > 1 )
            {
              v49 = (int)this;
              v50 = System_Int32__Parse((System_String_o *)v48->fields.mainPrefab, 0);
              v51.fields.x = (float)v49;
              v51.fields.y = (float)v50;
              ScriptMessageLabel__UpdateImage_44868140(
                analyzeLabel,
                &analyzeLabel->fields.image,
                &v8->fields.dispPosition,
                v8->fields.fontSize,
                v32,
                (System_String_o *)v29,
                v51,
                v8->fields.horizontalAlign,
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
    if ( System_String__get_Chars(text, 1, 0) != 126 )
    {
      MainLabel = ScriptLogMessage__FetchMainLabel(v8, v33);
      analyzeLabel->fields.main = MainLabel;
      sub_1C36FFC((CGThumbnailListItem_o *)&analyzeLabel->fields, (int32_t)MainLabel, v39, v40);
      ScriptMessageLabel__UpdateLabel(
        analyzeLabel,
        &analyzeLabel->fields.main,
        &v8->fields.dispPosition,
        v8->fields.fontSize,
        v8->fields.maxFontSize,
        v8->fields.verticalAlign,
        text,
        v8->fields.fontType,
        0);
      goto LABEL_15;
    }
    ScriptLogMessage__FetchImageSprite(v8, v33);
    v34 = System_String__Substring_63607580(text, 2, text->fields._stringLength - 3, 0);
    this = (ScriptLogMessage_o *)sub_1C37100(char___TypeInfo, 1);
    if ( !this )
      goto LABEL_60;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v34 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_63610732(v34, (System_Char_array *)this, 0);
    if ( !this )
      goto LABEL_60;
    v35 = this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    v36 = System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0);
    if ( SLODWORD(v35->fields.m_CancellationTokenSource) >= 2 )
      p_mainPrefab = (System_String_o **)&v35->fields.mainPrefab;
    else
      p_mainPrefab = (System_String_o **)&StringLiteral_21241/*"line"*/;
    ScriptMessageLabel__UpdateLine(
      analyzeLabel,
      &analyzeLabel->fields.image,
      &v8->fields.dispPosition,
      v8->fields.fontSize,
      v36,
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
    v8->fields.dispPosition = dispPosition;
  }
  v23 = v8->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0);
  if ( !v23 )
    goto LABEL_60;
  ScriptBackLog__AddLog(v23, (ScriptMessageLabel_o *)this, v24);
}


void ScriptLogMessage__AddPlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  ScriptLogMessage_o *v5; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v5 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.voiceAssetName, (int32_t)assetName, (int32_t)objectName, method);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 216);
  sub_1C36FFC((CGThumbnailListItem_o *)v5, (int32_t)objectName, v8, v9);
  *(float *)&v5->monitor = volume;
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
void ScriptLogMessage__AddText_44814628(
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
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C44F3D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F3D = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.talkName, v5, v2, v3);
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
    sub_1C372B4(this);
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
  if ( !byte_4C3C921 )
  {
    this = (ScriptLogMessage_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(image, 0);
  v5 = this;
  if ( !byte_4C3C926 )
  {
    this = (ScriptLogMessage_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1C372B4(this);
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
  if ( !byte_4C3C921 )
  {
    this = (ScriptLogMessage_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(main, 0);
  v5 = this;
  if ( !byte_4C3C926 )
  {
    this = (ScriptLogMessage_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1C372B4(this);
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
  if ( !byte_4C3C921 )
  {
    this = (ScriptLogMessage_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v5 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(ruby, 0);
  v6 = this;
  if ( !byte_4C3C926 )
  {
    this = (ScriptLogMessage_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v6 )
LABEL_10:
    sub_1C372B4(this);
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

  if ( (byte_4C44F3E & 1) == 0 )
  {
    sub_1C37058(&ScriptMessageLabel_TypeInfo);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    byte_4C44F3E = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_861/*"-"*/, defaultFontSize, 0);
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

  if ( (byte_4C44F3A & 1) == 0 )
  {
    sub_1C37058(&ScriptMessageLabel_TypeInfo);
    byte_4C44F3A = 1;
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
  const MethodInfo *v7; // x3
  Il2CppObject *mainPrefab; // x21
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct UnityEngine_Font_o *trueTypeFont; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *v20; // x21
  int32_t v21; // w0
  struct ScriptMessageLabel_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *v25; // x21
  int32_t v26; // w0
  struct ScriptMessageLabel_o *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_GameObject_o *v30; // x21
  int32_t v31; // w0
  struct ScriptMessageLabel_o *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  struct ScriptMessageLabel_o *v36; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v39; // s0
  int32_t v40; // w1
  int32_t rubyFontSize; // w8
  float v42; // s1
  float v43; // s0
  int32_t v44; // w1
  float v45; // s0
  float v46; // s1
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1

  if ( (byte_4C44F32 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ScriptMessageLabel_TypeInfo);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    sub_1C37058(&StringLiteral_25356/*"■"*/);
    byte_4C44F32 = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    ScriptLogMessage__ReleasePlayVoice(this, method);
    defaultFontSize = this->fields.defaultFontSize;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    this->fields.defaultFontSize = ScriptMessageLabel__GetFontSize(
                                     (System_String_o *)StringLiteral_861/*"-"*/,
                                     defaultFontSize,
                                     0);
    v4 = (ScriptMessageLabel_o *)sub_1C372A4(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel___ctor(v4, 0);
    this->fields.analyzeLabel = v4;
    p_analyzeLabel = &this->fields.analyzeLabel;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.analyzeLabel, (int32_t)v4, v6, v7);
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              mainPrefab,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v10 = transform;
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
    UnityEngine_GameObject__set_layer(v10, layer, 0);
    v12 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v10,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v12 )
      goto LABEL_47;
    v12->fields.main = (struct UILabel_o *)transform;
    sub_1C36FFC((CGThumbnailListItem_o *)&v12->fields, (int32_t)transform, v13, v14);
    if ( !*p_analyzeLabel )
      goto LABEL_47;
    transform = (UnityEngine_GameObject_o *)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_47;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0);
    this->fields.defaultFontType = trueTypeFont;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v16, v17);
    this->fields.fontType = trueTypeFont;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v18, v19);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.rubyPrefab,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v20 = transform;
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
    v21 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v20, v21, 0);
    v22 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v20,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v22 )
      goto LABEL_47;
    v22->fields.ruby = (struct UILabel_o *)transform;
    sub_1C36FFC((CGThumbnailListItem_o *)&v22->fields.ruby, (int32_t)transform, v23, v24);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.imagePrefab,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v25 = transform;
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
    v26 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v25, v26, 0);
    v27 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v25,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v27 )
      goto LABEL_47;
    v27->fields.image = (struct UISprite_o *)transform;
    sub_1C36FFC((CGThumbnailListItem_o *)&v27->fields.image, (int32_t)transform, v28, v29);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.playVoicePrefab,
                                              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v30 = transform;
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
    v31 = UnityEngine_GameObject__get_layer(transform, 0);
    UnityEngine_GameObject__set_layer(v30, v31, 0);
    v32 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v30,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v32
      || (v32->fields.playVoice = (struct UIButton_o *)transform,
          sub_1C36FFC((CGThumbnailListItem_o *)&v32->fields.playVoice, (int32_t)transform, v33, v34),
          (v36 = *p_analyzeLabel) == 0)
      || (main = v36->fields.main,
          ruby = v36->fields.ruby,
          transform = (UnityEngine_GameObject_o *)ScriptLogMessage__GetDefaultFontSize(this, v35),
          !main) )
    {
LABEL_47:
      sub_1C372B4(transform);
    }
    v39 = this->fields.fontScale * (float)(int)transform;
    if ( v39 == INFINITY )
      v40 = 0x80000000;
    else
      v40 = (int)v39;
    UILabel__set_fontSize(main, v40, 0);
    UILabel__set_text(main, (System_String_o *)StringLiteral_25356/*"■"*/, 0);
    transform = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))main->klass->vtable._22_get_localSize.methodPtr)(
                                              main,
                                              main->klass->vtable._22_get_localSize.method);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v42;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_47;
      v45 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v45 == INFINITY )
        v44 = 0x80000000;
      else
        v44 = (int)v45;
      this->fields.rubyFontSize = v44;
    }
    else
    {
      v43 = this->fields.fontScale * (float)rubyFontSize;
      if ( v43 == INFINITY )
        v44 = 0x80000000;
      else
        v44 = (int)v43;
      this->fields.rubyFontSize = v44;
      if ( !ruby )
        goto LABEL_47;
    }
    UILabel__set_fontSize(ruby, v44, 0);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_25356/*"■"*/, 0);
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))ruby->klass->vtable._22_get_localSize.methodPtr)(
      ruby,
      ruby->klass->vtable._22_get_localSize.method);
    this->fields.rubyLineHeight = v46;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v46;
    ScriptLogMessage__Init(this, v47);
    this->fields.dispPosition = this->fields.startPosition;
    ScriptLogMessage__SetDefaultState(this, v48);
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
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( this->fields.isInit )
  {
    p_analyzeLabel = &this->fields.analyzeLabel;
    analyzeLabel = this->fields.analyzeLabel;
    *((_BYTE *)p_analyzeLabel + 52) = 0;
    if ( !analyzeLabel )
      sub_1C372B4(0);
    ScriptMessageLabel__Destroy(analyzeLabel, 0);
    this->fields.analyzeLabel = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)p_analyzeLabel, 0, v5, v6);
    this->fields.defaultFontType = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultFontType, 0, v7, v8);
    this->fields.fontType = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fontType, 0, v9, v10);
  }
}


void ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  struct System_String_o **p_voiceObjectName; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C44F3B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F3B = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  v5 = StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.voiceAssetName, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceObjectName = &this->fields.voiceObjectName;
  sub_1C36FFC((CGThumbnailListItem_o *)p_voiceObjectName, v6, v8, v9);
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
  ScriptLogMessage_o *v5; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v5 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.voiceAssetName, (int32_t)assetName, (int32_t)objectName, method);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 216);
  sub_1C36FFC((CGThumbnailListItem_o *)v5, (int32_t)objectName, v8, v9);
  *(float *)&v5->monitor = volume;
}


void ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v3; // s0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  float v6; // s0
  float defaultTextOnlyLineHeight; // s1
  float v8; // s2
  int32_t v9; // w8
  int32_t v10; // w1

  if ( (byte_4C44F37 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F37 = 1;
  }
  v3 = this->fields.dispPosition.fields.y
     - (float)((float)(this->fields.textOnlyLineHeight + this->fields.rubyLineHeight) + this->fields.betweenLineHeight);
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = v3;
  v6 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v8 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v9 = (int)v6;
  if ( v6 == INFINITY )
    v9 = 0x80000000;
  this->fields.fontSize = v9;
  this->fields.verticalAlign = 0;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v8;
  v10 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v10, v4, v5);
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

  if ( (byte_4C44F3C & 1) == 0 )
  {
    sub_1C37058(&ScriptLogMessage_TypeInfo);
    byte_4C44F3C = 1;
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


// local variable allocation has failed, the output may be wrong!
void ScriptLogMessage__SetBackLogReplayingVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        bool isReplaying,
        const MethodInfo *method)
{
  struct ScriptBackLog_o *backLogDialog; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ScriptBackLog_o *v11; // x8

  backLogDialog = this->fields.backLogDialog;
  if ( !backLogDialog
    || (backLogDialog->fields._ReplayingAssetName_k__BackingField = assetName,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&backLogDialog->fields._ReplayingAssetName_k__BackingField,
          (int32_t)assetName,
          (int32_t)objectName,
          (const MethodInfo *)isReplaying),
        (backLogDialog = this->fields.backLogDialog) == 0)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&backLogDialog->fields._ReplayingObjectName_k__BackingField,
          (int32_t)objectName,
          v9,
          v10),
        (v11 = this->fields.backLogDialog) == 0) )
  {
    sub_1C372B4(backLogDialog);
  }
  v11->fields._IsReplayingVoice_k__BackingField = isReplaying;
}


void ScriptLogMessage__SetBetweenLineHeight(ScriptLogMessage_o *this, float height, const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1C372B4(0);
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
  const MethodInfo *v5; // x3
  float rubyLineHeight; // s3
  float v7; // s0
  float defaultTextOnlyLineHeight; // s1
  int32_t v9; // w8
  int32_t v10; // w1

  if ( (byte_4C44F36 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C44F36 = 1;
  }
  DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, method);
  rubyLineHeight = this->fields.rubyLineHeight;
  v7 = this->fields.fontScale * (float)DefaultFontSize;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = this->fields.defaultBetweenLineHeight;
  v9 = (int)v7;
  if ( v7 == INFINITY )
    v9 = 0x80000000;
  this->fields.fontSize = v9;
  this->fields.verticalAlign = 0;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v10 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, v10, v4, v5);
}


void ScriptLogMessage__SetEraseLoopLogData(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o dispPosition; // x8
  ScriptBackLog_o *backLogDialog; // x0

  dispPosition = this->fields.dispPosition;
  backLogDialog = this->fields.backLogDialog;
  this->fields.eraseLoopLogDisplayPosition = dispPosition;
  if ( !backLogDialog )
    sub_1C372B4(0);
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

  if ( (byte_4C44F39 & 1) == 0 )
  {
    sub_1C37058(&ScriptMessageLabel_TypeInfo);
    byte_4C44F39 = 1;
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C44F38 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C44F38 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0, 0);
  if ( v5 )
  {
    if ( !this )
      sub_1C372B4(v5);
  }
  else
  {
    font = this->fields.defaultFontType;
  }
  this->fields.fontType = font;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)font, v6, v7);
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
  const MethodInfo *v7; // x3
  struct UnityEngine_Font_o *fontType; // x22
  struct UnityEngine_Font_o *defaultFontType; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  int32_t DefaultFontSize; // w0
  float x; // s0
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( System_String__IsNullOrEmpty(text, 0) )
  {
    ScriptLogMessage__ClearTalkName(this, v5);
  }
  else
  {
    this->fields.talkName = text;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.talkName, (int32_t)text, v6, v7);
    fontType = this->fields.fontType;
    defaultFontType = this->fields.defaultFontType;
    this->fields.fontType = defaultFontType;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)defaultFontType, v10, v11);
    DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, v12);
    x = this->fields.startPosition.fields.x;
    this->fields.fontSize = DefaultFontSize;
    this->fields.verticalAlign = 0;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptLogMessage__UpdateLabels(this, text, 0, 0, v15);
    ScriptLogMessage__ReturnText(this, v16);
    this->fields.fontType = fontType;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)fontType, v17, v18);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Text_StringBuilder_o *v13; // x24
  System_Text_StringBuilder_o **v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x25
  __int64 v21; // x24
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  int32_t v24; // w27
  int v25; // w21
  int32_t v26; // w28
  int32_t BraceIndex; // w0
  int32_t v28; // w29
  System_String_o *v29; // x0
  int32_t v30; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Text_StringBuilder_o *v35; // x29
  ScriptReplaceString_c *v36; // x0
  int32_t playerGenderIndex; // w28
  struct System_String_o *v38; // x1
  System_String_o *v39; // x27
  const MethodInfo *v40; // x4
  char v41; // w2
  ScriptLogMessage_o *v42; // x0
  System_String_o *v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_String_o *v46; // x1
  System_String_o *v47; // x28
  int32_t v48; // w1
  int32_t v49; // w2
  System_String_o *v50; // x0
  __int64 *v51; // x8
  ScriptLogMessage_ProcAddLabel2_o *v52; // x9
  __int64 v53; // x1
  const MethodInfo *v54; // x1
  System_String_o *v55; // x27
  System_String_array *v56; // x0
  struct System_String_o *v57; // x1
  System_String_array *v58; // x27
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_String_o *v61; // x0
  System_Text_StringBuilder_o *v62; // x21
  const MethodInfo *v63; // x1
  ScriptLogMessage_ProcAddLabel2_o *v64; // [xsp+8h] [xbp-78h]
  System_String_o *enforceColora; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C44F34 & 1) == 0 )
  {
    sub_1C37058(&ScriptLogMessage_ProcAddLabel2_TypeInfo);
    sub_1C37058(&ScriptLogMessage_ProcAddLabel_TypeInfo);
    sub_1C37058(&ScriptMessageLabel_TypeInfo);
    sub_1C37058(&ScriptReplaceString_TypeInfo);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__0__);
    sub_1C37058(&Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__1__);
    sub_1C37058(&ScriptLogMessage___c__DisplayClass54_0_TypeInfo);
    sub_1C37058(&StringLiteral_23284/*"servantName"*/);
    sub_1C37058(&StringLiteral_15823/*"[-]"*/);
    sub_1C37058(&StringLiteral_20091/*"i"*/);
    sub_1C37058(&StringLiteral_16023/*"[~1]"*/);
    sub_1C37058(&StringLiteral_15958/*"[^"*/);
    sub_1C37058(&StringLiteral_22919/*"r"*/);
    sub_1C37058(&StringLiteral_18936/*"effectmessage"*/);
    sub_1C37058(&StringLiteral_21241/*"line"*/);
    sub_1C37058(&StringLiteral_20285/*"image"*/);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_16022/*"[~"*/);
    sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C44F34 = 1;
  }
  text = 0;
  v9 = sub_1C372A4(ScriptLogMessage___c__DisplayClass54_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_84;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  *(_BYTE *)(v9 + 32) = isFoward;
  v13 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0);
  *(_QWORD *)(v9 + 16) = v13;
  v14 = (System_Text_StringBuilder_o **)(v9 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v13, v15, v16);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v17, v18);
  }
  enforceColora = enforceColor;
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v9 + 40) = defaultColorTag;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)defaultColorTag, v17, v18);
  v21 = sub_1C372A4(ScriptLogMessage_ProcAddLabel_TypeInfo);
  ScriptLogMessage_ProcAddLabel___ctor(
    (ScriptLogMessage_ProcAddLabel_o *)v21,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__0__,
    v22);
  v64 = (ScriptLogMessage_ProcAddLabel2_o *)sub_1C372A4(ScriptLogMessage_ProcAddLabel2_TypeInfo);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v64,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass54_0__UpdateLabels_b__1__,
    v23);
  if ( !txt )
    goto LABEL_84;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_82;
  v24 = 0;
  v25 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v24, 0) != 91 )
    {
      v35 = *v14;
      Chars = System_String__get_Chars(txt, v24, 0);
      if ( !v35 )
        goto LABEL_84;
      v26 = v24 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_63649048(v35, Chars, 0);
      goto LABEL_37;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v26 = v24 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v24 + 1, 0);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v14;
      if ( !*v14 )
        goto LABEL_84;
      Chars = (__int64)System_Text_StringBuilder__Append_63646720(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15804/*"["*/,
                         0);
      goto LABEL_37;
    }
    v28 = BraceIndex;
    Chars = System_String__get_Chars(txt, v26, 0);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v21 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
      v29 = System_String__Substring_63607580(txt, v24 + 2, v25 + v28 - 2, 0);
      v30 = System_Int32__Parse(v29, 0);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v30, 0);
      TagSplitString = System_String__Concat_63561656(String, (System_String_o *)StringLiteral_15823/*"[-]"*/, 0);
LABEL_33:
      v38 = *(struct System_String_o **)(v9 + 40);
      v39 = TagSplitString;
      this->fields.defaultColorTag = v38;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)v38, v33, v34);
      v41 = *(_BYTE *)(v9 + 32);
      v42 = this;
      v43 = v39;
LABEL_34:
      ScriptLogMessage__UpdateLabels(v42, v43, v41, enforceColora, v40);
      v46 = this->fields.defaultColorTag;
      *(_QWORD *)(v9 + 40) = v46;
LABEL_35:
      sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v46, v44, v45);
      goto LABEL_36;
    }
    Chars = System_String__get_Chars(txt, v26, 0);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v21 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4C44C93 )
      {
        sub_1C37058(&ScriptReplaceString_TypeInfo);
        byte_4C44C93 = 1;
      }
      v36 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v36 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v36->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v24 + 2, playerGenderIndex, 0);
      goto LABEL_33;
    }
    Chars = System_String__get_Chars(txt, v26, 0);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v21 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
      Chars = (__int64)System_String__Substring_63607580(txt, v24, v25 + v28 + 1, 0);
      goto LABEL_51;
    }
    Chars = System_String__get_Chars(txt, v26, 0);
    if ( (unsigned __int16)Chars != 61 )
      break;
LABEL_36:
    v26 = v28 + 1;
LABEL_37:
    v25 = -v26;
    v24 = v26;
    if ( v26 >= txt->fields._stringLength )
      goto LABEL_82;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v26, 0);
  if ( !Chars )
    goto LABEL_84;
  v47 = (System_String_o *)Chars;
  Chars = System_String__Equals_63596960((System_String_o *)Chars, (System_String_o *)StringLiteral_20285/*"image"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v48 = v24 + 7;
    v49 = v25 + v28 - 7;
    goto LABEL_49;
  }
  Chars = System_String__Equals_63596960(v47, (System_String_o *)StringLiteral_18936/*"effectmessage"*/, 0);
  if ( (Chars & 1) != 0 )
    goto LABEL_36;
  Chars = System_String__Equals_63596960(v47, (System_String_o *)StringLiteral_20091/*"i"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v48 = v24 + 3;
    v49 = v25 + v28 - 3;
LABEL_49:
    v50 = System_String__Substring_63607580(txt, v48, v49, 0);
    v51 = &StringLiteral_15958/*"[^"*/;
LABEL_50:
    Chars = (__int64)System_String__Concat_63599904(
                       (System_String_o *)*v51,
                       v50,
                       (System_String_o *)StringLiteral_16058/*"]"*/,
                       0);
LABEL_51:
    v52 = v64;
    if ( !v64 )
      goto LABEL_84;
    v53 = Chars;
LABEL_53:
    Chars = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))v52->fields.invoke_impl)(
              v52->fields.method_code,
              v53,
              v52->fields.method);
    goto LABEL_36;
  }
  Chars = System_String__Equals_63596960(v47, (System_String_o *)StringLiteral_22919/*"r"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v54);
    if ( enforceColora )
    {
      *p_defaultColorTag = enforceColora;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColora, v44, v45);
    }
    v46 = *p_defaultColorTag;
    *(_QWORD *)(v9 + 40) = *p_defaultColorTag;
    goto LABEL_35;
  }
  Chars = System_String__Equals_63596960(v47, (System_String_o *)StringLiteral_23284/*"servantName"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    v55 = System_String__Substring_63607580(txt, v24 + 12, v25 + v28 - 12, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v56 = ScriptMessageLabel__AnalysTagParam(v55, 0, 0);
    v57 = *(struct System_String_o **)(v9 + 40);
    v58 = v56;
    this->fields.defaultColorTag = v57;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultColorTag, (int32_t)v57, v59, v60);
    v61 = ScriptMessageLabel__GetServantChangeName(v58, 0);
    v41 = *(_BYTE *)(v9 + 32);
    v43 = v61;
    v42 = this;
    goto LABEL_34;
  }
  Chars = System_String__StartsWith(v47, (System_String_o *)StringLiteral_21241/*"line"*/, 0);
  if ( (Chars & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
    Chars = (__int64)System_String__Substring_63607580(txt, v24 + 5, v25 + v28 - 5, 0);
    if ( !Chars )
      goto LABEL_84;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v50 = System_String__Trim((System_String_o *)Chars, 0);
      v51 = &StringLiteral_16022/*"[~"*/;
      goto LABEL_50;
    }
    v52 = v64;
    if ( !v64 )
      goto LABEL_84;
    v53 = StringLiteral_16023/*"[~1]"*/;
    goto LABEL_53;
  }
  if ( v28 < txt->fields._stringLength )
  {
    text = System_String__Substring_63607580(txt, v24, v25 + v28 + 1, 0);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v9 + 40), &text, enforceColora, 0);
    Chars = (__int64)*v14;
    if ( !*v14 )
      goto LABEL_84;
    Chars = (__int64)System_Text_StringBuilder__Append_63646720((System_Text_StringBuilder_o *)Chars, text, 0);
    goto LABEL_36;
  }
  v62 = *v14;
  Chars = (__int64)System_String__Substring(txt, v24, 0);
  if ( !v62 )
    goto LABEL_84;
  Chars = (__int64)System_Text_StringBuilder__Append_63646720(v62, (System_String_o *)Chars, 0);
LABEL_82:
  if ( !v21 )
LABEL_84:
    sub_1C372B4(Chars);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v21 + 24))(*(_QWORD *)(v21 + 64), *(_QWORD *)(v21 + 40));
  ScriptLogMessage__UpdatePlayVoice(this, v63);
}


void ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_o *analyzeLabel; // x20
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  float voiceVolume; // s8
  System_Action_T1__T2__T3__o *v7; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1

  if ( (byte_4C44F35 & 1) == 0 )
  {
    sub_1C37058(&System_Action_string__string__bool__TypeInfo);
    sub_1C37058(&Method_ScriptLogMessage_SetBackLogReplayingVoice__);
    byte_4C44F35 = 1;
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
      v7 = (System_Action_T1__T2__T3__o *)sub_1C372A4(System_Action_string__string__bool__TypeInfo);
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
        sub_1C372B4(LogLabel);
      }
      ScriptBackLog__AddLog(backLogDialog, LogLabel, v10);
      ScriptLogMessage__ReleasePlayVoice(this, v11);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7D244;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7D204;
}


System_IAsyncResult_o *ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7D2C0;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A7D2A0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7D258;
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
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v6, callback, object);
}


void ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ScriptLogMessage_o *_4__this; // x20
  const MethodInfo *v7; // x4
  struct ScriptLogMessage_o *v8; // x8
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
        (v8 = this->fields.__4__this) == 0)
    || !_4__this
    || (ScriptLogMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v8->fields.defaultColorTag,
          this->fields.isFoward,
          v7),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0) )
  {
LABEL_10:
    sub_1C372B4(tmpTxt);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 20) = tmpColorTag;
  sub_1C36FFC((CGThumbnailListItem_o *)(tmpTxt + 160), (int32_t)tmpColorTag, v4, v5);
}


void ScriptLogMessage___c__DisplayClass54_0___UpdateLabels_b__1(
        ScriptLogMessage___c__DisplayClass54_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x4
  ScriptLogMessage___c__DisplayClass54_0_o *v5; // x19
  struct System_Text_StringBuilder_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v5 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptLogMessage___c__DisplayClass54_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLogMessage__AddLabel(
      (ScriptLogMessage_o *)this,
      text,
      (System_String_o *)this[3].fields.tmpTxt,
      v5->fields.isFoward,
      v4);
  }
  this = (ScriptLogMessage___c__DisplayClass54_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1C372B4(this);
  tmpColorTag = (struct System_Text_StringBuilder_o *)v5->fields.tmpColorTag;
  this[3].fields.tmpTxt = tmpColorTag;
  sub_1C36FFC((CGThumbnailListItem_o *)&this[3].fields, (int32_t)tmpColorTag, (int32_t)method, v3);
}