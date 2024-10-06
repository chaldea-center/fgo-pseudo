void __fastcall ScriptLogMessage___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ScriptLogMessage_StaticFields *static_fields; // x8

  if ( (byte_4A71A4C & 1) == 0 )
  {
    sub_1B90010(&ScriptLogMessage_TypeInfo, v1);
    byte_4A71A4C = 1;
  }
  static_fields = ScriptLogMessage_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALIGN_LEFT_BASE = 3285975040LL;
  static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void __fastcall ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A71A4B & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A71A4B = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptLogMessage__AddLabel(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  System_String_o *v7; // x23
  ScriptLogMessage_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  System_String_o *v16; // x23
  int m_CancellationTokenSource; // w8
  int32_t v18; // w5
  int32_t v19; // w6
  int32_t v20; // w4
  struct ScriptBackLog_o *backLogDialog; // x7
  UILabel_o **v22; // x1
  UILabel_o **p_ruby; // x2
  int32_t maxFontSize; // w4
  int32_t verticalAlign; // w5
  int32_t fontSize; // w3
  UnityEngine_Font_o *fontType; // x7
  UILabel_o **p_main; // x1
  ScriptMessageLabel_o *v29; // x0
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v31; // x19
  const MethodInfo *v32; // x1
  System_String_o *v33; // x23
  int v34; // w8
  ScriptLogMessage_o *v35; // x24
  struct ScriptBackLog_o *v36; // x23
  const MethodInfo *v37; // x6
  float v38; // s0
  int v39; // w8
  float v40; // s8
  const MethodInfo *v41; // x1
  System_String_o *v42; // x23
  ScriptLogMessage_o *v43; // x23
  int32_t v44; // w0
  const MethodInfo *v45; // x6
  System_String_o **p_mainPrefab; // x8
  UILabel_o *MainLabel; // x0
  int32_t v48; // w2
  char v49; // w3
  const MethodInfo *v50; // x6
  int v51; // w8
  ScriptLogMessage_o *v52; // x23
  UILabel_o *RubyLabel; // x0
  int32_t v54; // w2
  char v55; // w3
  System_String_o *rubyPrefab; // x24
  ScriptLogMessage_o *v57; // x24
  int v58; // w25
  int32_t v59; // w0
  const MethodInfo *v60; // x6
  System_String_o *rubyStr; // [xsp+0h] [xbp-70h]
  const MethodInfo *v62; // [xsp+8h] [xbp-68h]
  const MethodInfo *v63; // [xsp+18h] [xbp-58h]
  UnityEngine_Vector2_o v64; // 0:s1.4,4:s2.4

  v7 = text;
  v8 = this;
  if ( (byte_4A71A3F & 1) == 0 )
  {
    sub_1B90010(&char___TypeInfo, text);
    sub_1B90010(&StringLiteral_21138/*"line"*/, v9);
    this = (ScriptLogMessage_o *)sub_1B90010(&StringLiteral_1/*""*/, v10);
    byte_4A71A3F = 1;
  }
  analyzeLabel = v8->fields.analyzeLabel;
  if ( !analyzeLabel
    || (analyzeLabel->fields.colorTag = colorTag,
        analyzeLabel->fields.stepTime = 0.0,
        sub_1B8FFB4(
          (ServantStatusBattleListViewItem_o *)&analyzeLabel->fields.colorTag,
          (int32_t)colorTag,
          (int32_t)colorTag,
          isFoward),
        dispPosition = v8->fields.dispPosition,
        !v7) )
  {
LABEL_61:
    sub_1B9026C(this, text);
  }
  if ( System_String__get_Chars(v7, 0, 0LL) != 91 )
  {
    ScriptLogMessage__FetchMainLabel(v8, v13);
    verticalAlign = v8->fields.verticalAlign;
    maxFontSize = v8->fields.maxFontSize;
    fontSize = v8->fields.fontSize;
    fontType = v8->fields.fontType;
    p_main = &analyzeLabel->fields.main;
    v29 = analyzeLabel;
    goto LABEL_15;
  }
  if ( System_String__get_Chars(v7, 1, 0LL) == 35 )
  {
    ScriptLogMessage__FetchMainLabel(v8, v14);
    ScriptLogMessage__FetchRubyLabel(v8, v15);
    v16 = System_String__Substring_61806096(v7, 2, v7->fields._stringLength - 3, 0LL);
    this = (ScriptLogMessage_o *)sub_1B900B8(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_61;
    text = (System_String_o *)this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !v16 )
        goto LABEL_61;
      this = (ScriptLogMessage_o *)System_String__Split_61809248(v16, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_61;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        v19 = v8->fields.verticalAlign;
        v18 = v8->fields.maxFontSize;
        v20 = v8->fields.fontSize;
        backLogDialog = this->fields.backLogDialog;
        v22 = &analyzeLabel->fields.main;
        p_ruby = &analyzeLabel->fields.ruby;
        if ( m_CancellationTokenSource <= 1 )
          ScriptMessageLabel__UpdateBouten(
            analyzeLabel,
            v22,
            p_ruby,
            &v8->fields.dispPosition,
            v20,
            v18,
            v19,
            (System_String_o *)backLogDialog,
            v8->fields.fontType,
            v62);
        else
          ScriptMessageLabel__UpdateRuby(
            analyzeLabel,
            v22,
            p_ruby,
            &v8->fields.dispPosition,
            v20,
            v18,
            v19,
            (System_String_o *)backLogDialog,
            (System_String_o *)this->fields.mainPrefab,
            v8->fields.fontType,
            0,
            v63);
        goto LABEL_16;
      }
    }
LABEL_62:
    sub_1B90274(this, text);
  }
  if ( System_String__get_Chars(v7, 1, 0LL) != 94 )
  {
    if ( System_String__get_Chars(v7, 1, 0LL) == 126 )
    {
      ScriptLogMessage__FetchImageSprite(v8, v41);
      v42 = System_String__Substring_61806096(v7, 2, v7->fields._stringLength - 3, 0LL);
      this = (ScriptLogMessage_o *)sub_1B900B8(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_61;
      text = (System_String_o *)this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_62;
      LOWORD(this->fields.backLogDialog) = 32;
      if ( !v42 )
        goto LABEL_61;
      this = (ScriptLogMessage_o *)System_String__Split_61809248(v42, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_61;
      v43 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_62;
      v44 = System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0LL);
      if ( SLODWORD(v43->fields.m_CancellationTokenSource) >= 2 )
        p_mainPrefab = (System_String_o **)&v43->fields.mainPrefab;
      else
        p_mainPrefab = (System_String_o **)&StringLiteral_21138/*"line"*/;
      ScriptMessageLabel__UpdateLine(
        analyzeLabel,
        &analyzeLabel->fields.image,
        &v8->fields.dispPosition,
        v8->fields.fontSize,
        v44,
        *p_mainPrefab,
        v45);
      goto LABEL_16;
    }
    MainLabel = ScriptLogMessage__FetchMainLabel(v8, v41);
    analyzeLabel->fields.main = MainLabel;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&analyzeLabel->fields, (int32_t)MainLabel, v48, v49);
    verticalAlign = v8->fields.verticalAlign;
    maxFontSize = v8->fields.maxFontSize;
    fontSize = v8->fields.fontSize;
    fontType = v8->fields.fontType;
    v29 = analyzeLabel;
    p_main = &analyzeLabel->fields.main;
LABEL_15:
    ScriptMessageLabel__UpdateLabel(
      v29,
      p_main,
      &v8->fields.dispPosition,
      fontSize,
      maxFontSize,
      verticalAlign,
      v7,
      fontType,
      (const MethodInfo *)rubyStr);
    goto LABEL_16;
  }
  ScriptLogMessage__FetchImageSprite(v8, v32);
  v33 = System_String__Substring_61806096(v7, 2, v7->fields._stringLength - 3, 0LL);
  this = (ScriptLogMessage_o *)sub_1B900B8(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_61;
  text = (System_String_o *)this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_62;
  LOWORD(this->fields.backLogDialog) = 32;
  if ( !v33 )
    goto LABEL_61;
  this = (ScriptLogMessage_o *)System_String__Split_61809248(v33, (System_Char_array *)this, 0LL);
  if ( !this )
    goto LABEL_61;
  v34 = (int)this->fields.m_CancellationTokenSource;
  v35 = this;
  if ( !v34 )
    goto LABEL_62;
  v36 = this->fields.backLogDialog;
  if ( v34 <= 1 )
  {
    this = (ScriptLogMessage_o *)sub_1B900B8(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_61;
    text = (System_String_o *)this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !v36 )
        goto LABEL_61;
      this = (ScriptLogMessage_o *)System_String__Split_61809248((System_String_o *)v36, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_61;
      v51 = (int)this->fields.m_CancellationTokenSource;
      v52 = this;
      if ( v51 <= 1 )
      {
        if ( v51 )
        {
          ScriptMessageLabel__UpdateImage(
            analyzeLabel,
            &analyzeLabel->fields.image,
            &v8->fields.dispPosition,
            v8->fields.fontSize,
            (System_String_o *)this->fields.backLogDialog,
            v8->fields.horizontalAlign,
            v50);
          goto LABEL_16;
        }
      }
      else
      {
        RubyLabel = ScriptLogMessage__FetchRubyLabel(v8, (const MethodInfo *)text);
        analyzeLabel->fields.ruby = RubyLabel;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&analyzeLabel->fields.ruby, (int32_t)RubyLabel, v54, v55);
        if ( LODWORD(v52->fields.m_CancellationTokenSource) >= 2 )
        {
          ScriptMessageLabel__UpdateImageRuby(
            analyzeLabel,
            &analyzeLabel->fields.image,
            &analyzeLabel->fields.ruby,
            &v8->fields.dispPosition,
            v8->fields.fontSize,
            (System_String_o *)v52->fields.backLogDialog,
            (System_String_o *)v52->fields.mainPrefab,
            v8->fields.fontType,
            v8->fields.horizontalAlign,
            v62);
          goto LABEL_16;
        }
      }
    }
    goto LABEL_62;
  }
  v38 = System_Single__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
  v39 = (int)v35->fields.m_CancellationTokenSource;
  v40 = v38;
  if ( v39 == 2 )
  {
    ScriptMessageLabel__UpdateImage_41696144(
      analyzeLabel,
      &analyzeLabel->fields.image,
      &v8->fields.dispPosition,
      v8->fields.fontSize,
      v38,
      (System_String_o *)v36,
      v8->fields.horizontalAlign,
      v37);
    goto LABEL_16;
  }
  if ( v39 <= 3 )
  {
    if ( (unsigned int)v39 > 2 )
    {
      rubyPrefab = (System_String_o *)v35->fields.rubyPrefab;
      this = (ScriptLogMessage_o *)sub_1B900B8(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_61;
      text = (System_String_o *)this;
      if ( LODWORD(this->fields.m_CancellationTokenSource) )
      {
        LOWORD(this->fields.backLogDialog) = 44;
        if ( !rubyPrefab )
          goto LABEL_61;
        this = (ScriptLogMessage_o *)System_String__Split_61809248(rubyPrefab, (System_Char_array *)this, 0LL);
        if ( !this )
          goto LABEL_61;
        v57 = this;
        if ( LODWORD(this->fields.m_CancellationTokenSource) )
        {
          this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0LL);
          if ( LODWORD(v57->fields.m_CancellationTokenSource) > 1 )
          {
            v58 = (int)this;
            v59 = System_Int32__Parse((System_String_o *)v57->fields.mainPrefab, 0LL);
            v64.fields.x = (float)v58;
            v64.fields.y = (float)v59;
            ScriptMessageLabel__UpdateImage_41696296(
              analyzeLabel,
              &analyzeLabel->fields.image,
              &v8->fields.dispPosition,
              v8->fields.fontSize,
              v40,
              (System_String_o *)v36,
              v64,
              v8->fields.horizontalAlign,
              v60);
            goto LABEL_16;
          }
        }
      }
    }
    goto LABEL_62;
  }
LABEL_16:
  if ( isFoward )
  {
    rubyText = analyzeLabel->fields.rubyText;
    analyzeLabel->fields.mainPosition.fields.x = analyzeLabel->fields.mainPosition.fields.x
                                               - analyzeLabel->fields.widthSize;
    if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      analyzeLabel->fields.rubyPosition.fields.x = analyzeLabel->fields.rubyPosition.fields.x
                                                 - analyzeLabel->fields.widthSize;
    v8->fields.dispPosition = dispPosition;
  }
  v31 = v8->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, (const MethodInfo *)text);
  if ( !v31 )
    goto LABEL_61;
  ScriptBackLog__AddLog(v31, (ScriptMessageLabel_o *)this, 0LL);
}


void __fastcall ScriptLogMessage__AddPlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  ScriptLogMessage_o *v5; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  v5 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.voiceAssetName,
    (int32_t)assetName,
    (int32_t)objectName,
    (int32_t)method);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 216);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v5, (int32_t)objectName, v8, v9);
  *(float *)&v5->monitor = volume;
}


void __fastcall ScriptLogMessage__AddText(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  ScriptLogMessage__UpdateLabels(this, text, 0, color, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage__AddText_41714128(
        ScriptLogMessage_o *this,
        System_String_o *text,
        bool isLineHead,
        int32_t lineLength,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x4

  ScriptLogMessage__SetAlignedDispPosition(this, isLineHead, lineLength, *(const MethodInfo **)&lineLength);
  ScriptLogMessage__UpdateLabels(this, text, 0, 0LL, v7);
}


void __fastcall ScriptLogMessage__ClearTalkName(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A71A49 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A71A49 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.talkName, v5, v2, v3);
}


void __fastcall ScriptLogMessage__ClearText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ScriptLogMessage__Init(this, method);
  this->fields.dispPosition = this->fields.startPosition;
  ScriptLogMessage__SetDefaultState(this, v3);
}


UISprite_o *__fastcall ScriptLogMessage__FetchImageSprite(ScriptLogMessage_o *this, const MethodInfo *method)
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
                                 0LL);
  v4 = this;
  if ( !byte_4A6A9C1 )
  {
    this = (ScriptLogMessage_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C1 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(image, 0LL);
  v5 = this;
  if ( !byte_4A6A9C6 )
  {
    this = (ScriptLogMessage_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C6 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1B9026C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UISprite_o *)image;
}


UILabel_o *__fastcall ScriptLogMessage__FetchMainLabel(ScriptLogMessage_o *this, const MethodInfo *method)
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
                                 0LL);
  v4 = this;
  if ( !byte_4A6A9C1 )
  {
    this = (ScriptLogMessage_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C1 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(main, 0LL);
  v5 = this;
  if ( !byte_4A6A9C6 )
  {
    this = (ScriptLogMessage_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C6 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1B9026C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UILabel_o *)main;
}


UILabel_o *__fastcall ScriptLogMessage__FetchRubyLabel(ScriptLogMessage_o *this, const MethodInfo *method)
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
                                 0LL);
  v5 = this;
  if ( !byte_4A6A9C1 )
  {
    this = (ScriptLogMessage_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C1 = 1;
  }
  if ( !v5 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(ruby, 0LL);
  v6 = this;
  if ( !byte_4A6A9C6 )
  {
    this = (ScriptLogMessage_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A6A9C6 = 1;
  }
  if ( !v6 )
LABEL_10:
    sub_1B9026C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  UILabel__set_fontSize((UILabel_o *)ruby, v4->fields.rubyFontSize, 0LL);
  return (UILabel_o *)ruby;
}


void __fastcall ScriptLogMessage__FooterText(
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


void __fastcall ScriptLogMessage__FowardText(
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


int32_t __fastcall ScriptLogMessage__GetDefaultFontSize(ScriptLogMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  int32_t defaultFontSize; // w19

  if ( (byte_4A71A4A & 1) == 0 )
  {
    sub_1B90010(&ScriptMessageLabel_TypeInfo, method);
    sub_1B90010(&StringLiteral_919/*"-"*/, v4);
    byte_4A71A4A = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_919/*"-"*/, defaultFontSize, v2);
}


int32_t __fastcall ScriptLogMessage__GetDefaultScaledFontSize(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v2; // s0

  v2 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  if ( v2 == INFINITY )
    return 0x80000000;
  else
    return (int)v2;
}


System_String_o *__fastcall ScriptLogMessage__GetFontSizeString(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t fontSize; // w19

  if ( (byte_4A71A46 & 1) == 0 )
  {
    sub_1B90010(&ScriptMessageLabel_TypeInfo, method);
    byte_4A71A46 = 1;
  }
  fontSize = this->fields.fontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  return ScriptMessageLabel__GetFontSizeString(fontSize, method);
}


void __fastcall ScriptLogMessage__Init(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t defaultFontSize; // w20
  ScriptMessageLabel_o *v12; // x21
  const MethodInfo *v13; // x1
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *mainPrefab; // x21
  UnityEngine_GameObject_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_GameObject_o *v20; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  struct UnityEngine_Font_o *trueTypeFont; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_GameObject_o *v30; // x21
  int32_t v31; // w0
  struct ScriptMessageLabel_o *v32; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_GameObject_o *v35; // x21
  int32_t v36; // w0
  struct ScriptMessageLabel_o *v37; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  UnityEngine_GameObject_o *v40; // x21
  int32_t v41; // w0
  struct ScriptMessageLabel_o *v42; // x22
  int32_t v43; // w2
  int32_t v44; // w3
  struct ScriptMessageLabel_o *v45; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v48; // s0
  int32_t v49; // w1
  int32_t rubyFontSize; // w8
  float v51; // s1
  float v52; // s0
  float v53; // s0
  float v54; // s1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1

  if ( (byte_4A71A3E & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&ScriptMessageLabel_TypeInfo, v7);
    sub_1B90010(&StringLiteral_919/*"-"*/, v8);
    sub_1B90010(&StringLiteral_25292/*"■"*/, v9);
    byte_4A71A3E = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    ScriptLogMessage__ReleasePlayVoice(this, method);
    defaultFontSize = this->fields.defaultFontSize;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    this->fields.defaultFontSize = ScriptMessageLabel__GetFontSize(
                                     (System_String_o *)StringLiteral_919/*"-"*/,
                                     defaultFontSize,
                                     v10);
    v12 = (ScriptMessageLabel_o *)sub_1B9025C(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel___ctor(v12, v13);
    this->fields.analyzeLabel = v12;
    p_analyzeLabel = &this->fields.analyzeLabel;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.analyzeLabel, (int32_t)v12, v15, v16);
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              mainPrefab,
                                              (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v20 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    layer = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v20, layer, 0LL);
    v22 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v20,
                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v22 )
      goto LABEL_47;
    v22->fields.main = (struct UILabel_o *)transform;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v22->fields, (int32_t)transform, v23, v24);
    if ( !*p_analyzeLabel )
      goto LABEL_47;
    transform = (UnityEngine_GameObject_o *)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_47;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0LL);
    this->fields.defaultFontType = trueTypeFont;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v26, v27);
    this->fields.fontType = trueTypeFont;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v28, v29);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.rubyPrefab,
                                              (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v30 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    v31 = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v30, v31, 0LL);
    v32 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v30,
                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v32 )
      goto LABEL_47;
    v32->fields.ruby = (struct UILabel_o *)transform;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v32->fields.ruby, (int32_t)transform, v33, v34);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.imagePrefab,
                                              (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v35 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    v36 = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v35, v36, 0LL);
    v37 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v35,
                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v37 )
      goto LABEL_47;
    v37->fields.image = (struct UISprite_o *)transform;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v37->fields.image, (int32_t)transform, v38, v39);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                              (Il2CppObject *)this->fields.playVoicePrefab,
                                              (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v40 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    v41 = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v40, v41, 0LL);
    v42 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                              v40,
                                              (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v42
      || (v42->fields.playVoice = (struct UIButton_o *)transform,
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v42->fields.playVoice, (int32_t)transform, v43, v44),
          (v45 = *p_analyzeLabel) == 0LL)
      || (main = v45->fields.main,
          ruby = v45->fields.ruby,
          transform = (UnityEngine_GameObject_o *)ScriptLogMessage__GetDefaultFontSize(this, (const MethodInfo *)v19),
          !main) )
    {
LABEL_47:
      sub_1B9026C(transform, v19);
    }
    v48 = this->fields.fontScale * (float)(int)transform;
    if ( v48 == INFINITY )
      v49 = 0x80000000;
    else
      v49 = (int)v48;
    UILabel__set_fontSize(main, v49, 0LL);
    UILabel__set_text(main, (System_String_o *)StringLiteral_25292/*"■"*/, 0LL);
    transform = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))main->klass->vtable._22_get_localSize.method)(
                                              main,
                                              main->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v51;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_47;
      v53 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v53 == INFINITY )
        LODWORD(v19) = 0x80000000;
      else
        LODWORD(v19) = (int)v53;
      this->fields.rubyFontSize = v19;
    }
    else
    {
      v52 = this->fields.fontScale * (float)rubyFontSize;
      if ( v52 == INFINITY )
        v19 = 0x80000000LL;
      else
        v19 = (unsigned int)(int)v52;
      this->fields.rubyFontSize = v19;
      if ( !ruby )
        goto LABEL_47;
    }
    UILabel__set_fontSize(ruby, v19, 0LL);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_25292/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))ruby->klass->vtable._22_get_localSize.method)(
      ruby,
      ruby->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v54;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v54;
    ScriptLogMessage__Init(this, v55);
    this->fields.dispPosition = this->fields.startPosition;
    ScriptLogMessage__SetDefaultState(this, v56);
  }
}


bool __fastcall ScriptLogMessage__IsChangeTalkName(
        ScriptLogMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  return System_String__op_Inequality(this->fields.talkName, text, 0LL);
}


void __fastcall ScriptLogMessage__Quit(ScriptLogMessage_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_o *analyzeLabel; // x0
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( this->fields.isInit )
  {
    p_analyzeLabel = &this->fields.analyzeLabel;
    analyzeLabel = this->fields.analyzeLabel;
    *((_BYTE *)p_analyzeLabel + 37) = 0;
    if ( !analyzeLabel )
      sub_1B9026C(0LL, method);
    ScriptMessageLabel__Destroy(analyzeLabel, method);
    this->fields.analyzeLabel = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_analyzeLabel, 0, v5, v6);
    this->fields.defaultFontType = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultFontType, 0, v7, v8);
    this->fields.fontType = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fontType, 0, v9, v10);
  }
}


void __fastcall ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  struct System_String_o **p_voiceObjectName; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A71A47 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A71A47 = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.voiceAssetName, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceObjectName = &this->fields.voiceObjectName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_voiceObjectName, v6, v8, v9);
  *((_DWORD *)p_voiceObjectName + 2) = 1065353216;
  *((_BYTE *)p_voiceObjectName + 12) = 0;
}


void __fastcall ScriptLogMessage__ReservePlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  ScriptLogMessage_o *v5; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  v5 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.voiceAssetName,
    (int32_t)assetName,
    (int32_t)objectName,
    (int32_t)method);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 216);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v5, (int32_t)objectName, v8, v9);
  *(float *)&v5->monitor = volume;
}


void __fastcall ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v3; // s0
  int32_t v4; // w2
  int32_t v5; // w3
  float v6; // s0
  float defaultTextOnlyLineHeight; // s1
  float v8; // s2
  int32_t v9; // w8
  int32_t v10; // w1

  if ( (byte_4A71A43 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A71A43 = 1;
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
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v10, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage__SetAlignedDispPosition(
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

  if ( (byte_4A71A48 & 1) == 0 )
  {
    sub_1B90010(&ScriptLogMessage_TypeInfo, isLineHead);
    byte_4A71A48 = 1;
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


void __fastcall ScriptLogMessage__SetBackLogReplayingVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        bool isReplaying,
        const MethodInfo *method)
{
  struct ScriptBackLog_o *backLogDialog; // x0
  int32_t v9; // w2
  char v10; // w3
  struct ScriptBackLog_o *v11; // x8

  backLogDialog = this->fields.backLogDialog;
  if ( !backLogDialog
    || (backLogDialog->fields._ReplayingAssetName_k__BackingField = assetName,
        sub_1B8FFB4(
          (ServantStatusBattleListViewItem_o *)&backLogDialog->fields._ReplayingAssetName_k__BackingField,
          (int32_t)assetName,
          (int32_t)objectName,
          isReplaying),
        (backLogDialog = this->fields.backLogDialog) == 0LL)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        sub_1B8FFB4(
          (ServantStatusBattleListViewItem_o *)&backLogDialog->fields._ReplayingObjectName_k__BackingField,
          (int32_t)objectName,
          v9,
          v10),
        (v11 = this->fields.backLogDialog) == 0LL) )
  {
    sub_1B9026C(backLogDialog, assetName);
  }
  v11->fields._IsReplayingVoice_k__BackingField = isReplaying;
}


void __fastcall ScriptLogMessage__SetBetweenLineHeight(
        ScriptLogMessage_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1B9026C(0LL, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLogMessage__SetDefaultState(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t DefaultFontSize; // w0
  int32_t v4; // w2
  int32_t v5; // w3
  float rubyLineHeight; // s3
  float v7; // s0
  float defaultTextOnlyLineHeight; // s1
  int32_t v9; // w8
  int32_t v10; // w1

  if ( (byte_4A71A42 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, method);
    byte_4A71A42 = 1;
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
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, v10, v4, v5);
}


void __fastcall ScriptLogMessage__SetFontSize(
        ScriptLogMessage_o *this,
        System_String_o *sizeName,
        System_String_o *verticalAlign,
        const MethodInfo *method)
{
  int32_t defaultFontSize; // w22
  const MethodInfo *v8; // x1
  float v9; // s0
  int32_t v10; // w8
  int32_t VerticalAlignFromString; // w0
  int32_t fontSize; // s0
  float textOnlyLineHeight; // s1
  float v14; // s0

  if ( (byte_4A71A45 & 1) == 0 )
  {
    sub_1B90010(&ScriptMessageLabel_TypeInfo, sizeName);
    byte_4A71A45 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v9 = this->fields.fontScale
     * (float)ScriptMessageLabel__GetFontSize(sizeName, defaultFontSize, (const MethodInfo *)verticalAlign);
  v10 = (int)v9;
  if ( v9 == INFINITY )
    v10 = 0x80000000;
  this->fields.fontSize = v10;
  VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(verticalAlign, v8);
  fontSize = this->fields.fontSize;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  this->fields.verticalAlign = VerticalAlignFromString;
  v14 = (float)fontSize;
  if ( textOnlyLineHeight < v14 )
    this->fields.textOnlyLineHeight = v14;
}


void __fastcall ScriptLogMessage__SetFontType(
        ScriptLogMessage_o *this,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_4A71A44 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, font);
    byte_4A71A44 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_1B9026C(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)defaultFontType, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage__SetHomePosition(ScriptLogMessage_o *this, int32_t x, const MethodInfo *method)
{
  if ( this->fields.dispPosition.fields.x > this->fields.startPosition.fields.x )
    ScriptLogMessage__ReturnText(this, *(const MethodInfo **)&x);
  this->fields.startPosition.fields.x = (float)x;
  this->fields.dispPosition.fields.x = (float)x;
}


void __fastcall ScriptLogMessage__SetHorizontalAlign(
        ScriptLogMessage_o *this,
        int32_t horizontalAlign,
        const MethodInfo *method)
{
  this->fields.horizontalAlign = horizontalAlign;
}


void __fastcall ScriptLogMessage__SetMaxFontSize(ScriptLogMessage_o *this, int32_t fontSize, const MethodInfo *method)
{
  float v3; // s0
  int32_t v4; // w8

  v3 = this->fields.fontScale * (float)fontSize;
  v4 = (int)v3;
  if ( v3 == INFINITY )
    v4 = 0x80000000;
  this->fields.maxFontSize = v4;
}


bool __fastcall ScriptLogMessage__SetTalkName(
        ScriptLogMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct UnityEngine_Font_o *fontType; // x22
  struct UnityEngine_Font_o *defaultFontType; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  int32_t DefaultFontSize; // w0
  float x; // s0
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3

  if ( System_String__IsNullOrEmpty(text, 0LL) )
  {
    ScriptLogMessage__ClearTalkName(this, v5);
  }
  else
  {
    this->fields.talkName = text;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.talkName, (int32_t)text, v6, v7);
    fontType = this->fields.fontType;
    defaultFontType = this->fields.defaultFontType;
    this->fields.fontType = defaultFontType;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)defaultFontType, v10, v11);
    DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, v12);
    x = this->fields.startPosition.fields.x;
    this->fields.fontSize = DefaultFontSize;
    this->fields.verticalAlign = 0;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptLogMessage__UpdateLabels(this, text, 0, 0LL, v15);
    ScriptLogMessage__ReturnText(this, v16);
    this->fields.fontType = fontType;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)fontType, v17, v18);
  }
  return 1;
}


void __fastcall ScriptLogMessage__SetText(
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


void __fastcall ScriptLogMessage__UpdateLabels(
        ScriptLogMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x22
  __int64 Chars; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_Text_StringBuilder_o *v33; // x24
  System_Text_StringBuilder_o **v34; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x25
  __int64 v41; // x24
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  int32_t v44; // w27
  int v45; // w21
  const MethodInfo *v46; // x2
  int32_t v47; // w28
  int32_t BraceIndex; // w0
  int32_t v49; // w29
  System_String_o *v50; // x0
  int32_t v51; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_Text_StringBuilder_o *v56; // x29
  __int64 v57; // x1
  const MethodInfo *v58; // x3
  ScriptReplaceString_c *v59; // x0
  int32_t playerGenderIndex; // w28
  struct System_String_o *v61; // x1
  System_String_o *v62; // x27
  const MethodInfo *v63; // x4
  char v64; // w2
  ScriptLogMessage_o *v65; // x0
  System_String_o *v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_String_o *v69; // x1
  const MethodInfo *v70; // x2
  System_String_o *v71; // x28
  int32_t v72; // w1
  int32_t v73; // w2
  System_String_o *v74; // x0
  __int64 *v75; // x8
  ScriptLogMessage_ProcAddLabel2_o *v76; // x9
  __int64 v77; // x1
  const MethodInfo *v78; // x1
  const MethodInfo *v79; // x2
  System_String_o *v80; // x27
  System_String_array *v81; // x0
  struct System_String_o *v82; // x1
  System_String_array *v83; // x27
  int32_t v84; // w2
  int32_t v85; // w3
  const MethodInfo *v86; // x1
  System_String_o *v87; // x0
  const MethodInfo *v88; // x3
  System_Text_StringBuilder_o *v89; // x21
  const MethodInfo *v90; // x1
  ScriptLogMessage_ProcAddLabel2_o *v91; // [xsp+8h] [xbp-78h]
  System_String_o *enforceColora; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A71A40 & 1) == 0 )
  {
    sub_1B90010(&ScriptLogMessage_ProcAddLabel2_TypeInfo, txt);
    sub_1B90010(&ScriptLogMessage_ProcAddLabel_TypeInfo, v9);
    sub_1B90010(&ScriptMessageLabel_TypeInfo, v10);
    sub_1B90010(&ScriptReplaceString_TypeInfo, v11);
    sub_1B90010(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1B90010(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__, v13);
    sub_1B90010(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__, v14);
    sub_1B90010(&ScriptLogMessage___c__DisplayClass52_0_TypeInfo, v15);
    sub_1B90010(&StringLiteral_23149/*"servantName"*/, v16);
    sub_1B90010(&StringLiteral_15856/*"[-]"*/, v17);
    sub_1B90010(&StringLiteral_20075/*"i"*/, v18);
    sub_1B90010(&StringLiteral_16057/*"[~1]"*/, v19);
    sub_1B90010(&StringLiteral_15992/*"[^"*/, v20);
    sub_1B90010(&StringLiteral_22775/*"r"*/, v21);
    sub_1B90010(&StringLiteral_18952/*"effectmessage"*/, v22);
    sub_1B90010(&StringLiteral_21138/*"line"*/, v23);
    sub_1B90010(&StringLiteral_20260/*"image"*/, v24);
    sub_1B90010(&StringLiteral_15837/*"["*/, v25);
    sub_1B90010(&StringLiteral_16056/*"[~"*/, v26);
    sub_1B90010(&StringLiteral_16094/*"]"*/, v27);
    byte_4A71A40 = 1;
  }
  text = 0LL;
  v28 = sub_1B9025C(ScriptLogMessage___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_84;
  *(_QWORD *)(v28 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 24), (int32_t)this, v31, v32);
  *(_BYTE *)(v28 + 32) = isFoward;
  v33 = (System_Text_StringBuilder_o *)sub_1B9025C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v33, 0LL);
  *(_QWORD *)(v28 + 16) = v33;
  v34 = (System_Text_StringBuilder_o **)(v28 + 16);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v33, v35, v36);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColor, v37, v38);
  }
  enforceColora = enforceColor;
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v28 + 40) = defaultColorTag;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 40), (int32_t)defaultColorTag, v37, v38);
  v41 = sub_1B9025C(ScriptLogMessage_ProcAddLabel_TypeInfo);
  ScriptLogMessage_ProcAddLabel___ctor(
    (ScriptLogMessage_ProcAddLabel_o *)v41,
    (Il2CppObject *)v28,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    v42);
  v91 = (ScriptLogMessage_ProcAddLabel2_o *)sub_1B9025C(ScriptLogMessage_ProcAddLabel2_TypeInfo);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v91,
    (Il2CppObject *)v28,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    v43);
  if ( !txt )
    goto LABEL_84;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_82;
  v44 = 0;
  v45 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v44, 0LL) != 91 )
    {
      v56 = *v34;
      Chars = System_String__get_Chars(txt, v44, 0LL);
      if ( !v56 )
        goto LABEL_84;
      v47 = v44 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_60951316(v56, Chars, 0LL);
      goto LABEL_37;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v47 = v44 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v44 + 1, v46);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v34;
      if ( !*v34 )
        goto LABEL_84;
      Chars = (__int64)System_Text_StringBuilder__Append_60948988(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15837/*"["*/,
                         0LL);
      goto LABEL_37;
    }
    v49 = BraceIndex;
    Chars = System_String__get_Chars(txt, v47, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v41 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
      v50 = System_String__Substring_61806096(txt, v44 + 2, v45 + v49 - 2, 0LL);
      v51 = System_Int32__Parse(v50, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v51, 0LL);
      TagSplitString = System_String__Concat_61787092(String, (System_String_o *)StringLiteral_15856/*"[-]"*/, 0LL);
LABEL_33:
      v61 = *(struct System_String_o **)(v28 + 40);
      v62 = TagSplitString;
      this->fields.defaultColorTag = v61;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v61, v54, v55);
      v64 = *(_BYTE *)(v28 + 32);
      v65 = this;
      v66 = v62;
LABEL_34:
      ScriptLogMessage__UpdateLabels(v65, v66, v64, enforceColora, v63);
      v69 = this->fields.defaultColorTag;
      *(_QWORD *)(v28 + 40) = v69;
LABEL_35:
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v28 + 40), (int32_t)v69, v67, v68);
      goto LABEL_36;
    }
    Chars = System_String__get_Chars(txt, v47, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v41 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4A71901 )
      {
        sub_1B90010(&ScriptReplaceString_TypeInfo, v57);
        byte_4A71901 = 1;
      }
      v59 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v59 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v59->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v44 + 2, playerGenderIndex, v58);
      goto LABEL_33;
    }
    Chars = System_String__get_Chars(txt, v47, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v41 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
      Chars = (__int64)System_String__Substring_61806096(txt, v44, v45 + v49 + 1, 0LL);
      goto LABEL_51;
    }
    Chars = System_String__get_Chars(txt, v47, 0LL);
    if ( (unsigned __int16)Chars != 61 )
      break;
LABEL_36:
    v47 = v49 + 1;
LABEL_37:
    v45 = -v47;
    v44 = v47;
    if ( v47 >= txt->fields._stringLength )
      goto LABEL_82;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v47, v70);
  if ( !Chars )
    goto LABEL_84;
  v71 = (System_String_o *)Chars;
  Chars = System_String__Equals_61795408((System_String_o *)Chars, (System_String_o *)StringLiteral_20260/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
    v72 = v44 + 7;
    v73 = v45 + v49 - 7;
    goto LABEL_49;
  }
  Chars = System_String__Equals_61795408(v71, (System_String_o *)StringLiteral_18952/*"effectmessage"*/, 0LL);
  if ( (Chars & 1) != 0 )
    goto LABEL_36;
  Chars = System_String__Equals_61795408(v71, (System_String_o *)StringLiteral_20075/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
    v72 = v44 + 3;
    v73 = v45 + v49 - 3;
LABEL_49:
    v74 = System_String__Substring_61806096(txt, v72, v73, 0LL);
    v75 = &StringLiteral_15992/*"[^"*/;
LABEL_50:
    Chars = (__int64)System_String__Concat_61798352(
                       (System_String_o *)*v75,
                       v74,
                       (System_String_o *)StringLiteral_16094/*"]"*/,
                       0LL);
LABEL_51:
    v76 = v91;
    if ( !v91 )
      goto LABEL_84;
    v77 = Chars;
LABEL_53:
    Chars = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v76->fields.m_target)(
              v76->fields.original_method_info,
              v77,
              *(_QWORD *)&v76->fields.extra_arg);
    goto LABEL_36;
  }
  Chars = System_String__Equals_61795408(v71, (System_String_o *)StringLiteral_22775/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v78);
    if ( enforceColora )
    {
      *p_defaultColorTag = enforceColora;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)enforceColora, v67, v68);
    }
    v69 = *p_defaultColorTag;
    *(_QWORD *)(v28 + 40) = *p_defaultColorTag;
    goto LABEL_35;
  }
  Chars = System_String__Equals_61795408(v71, (System_String_o *)StringLiteral_23149/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
    v80 = System_String__Substring_61806096(txt, v44 + 12, v45 + v49 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v81 = ScriptMessageLabel__AnalysTagParam(v80, 0, v79);
    v82 = *(struct System_String_o **)(v28 + 40);
    v83 = v81;
    this->fields.defaultColorTag = v82;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.defaultColorTag, (int32_t)v82, v84, v85);
    v87 = ScriptMessageLabel__GetServantChangeName(v83, v86);
    v64 = *(_BYTE *)(v28 + 32);
    v66 = v87;
    v65 = this;
    goto LABEL_34;
  }
  Chars = System_String__StartsWith(v71, (System_String_o *)StringLiteral_21138/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
    Chars = (__int64)System_String__Substring_61806096(txt, v44 + 5, v45 + v49 - 5, 0LL);
    if ( !Chars )
      goto LABEL_84;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v74 = System_String__Trim((System_String_o *)Chars, 0LL);
      v75 = &StringLiteral_16056/*"[~"*/;
      goto LABEL_50;
    }
    v76 = v91;
    if ( !v91 )
      goto LABEL_84;
    v77 = StringLiteral_16057/*"[~1]"*/;
    goto LABEL_53;
  }
  if ( v49 < txt->fields._stringLength )
  {
    text = System_String__Substring_61806096(txt, v44, v45 + v49 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v28 + 40), &text, enforceColora, v88);
    Chars = (__int64)*v34;
    if ( !*v34 )
      goto LABEL_84;
    Chars = (__int64)System_Text_StringBuilder__Append_60948988((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_36;
  }
  v89 = *v34;
  Chars = (__int64)System_String__Substring(txt, v44, 0LL);
  if ( !v89 )
    goto LABEL_84;
  Chars = (__int64)System_Text_StringBuilder__Append_60948988(v89, (System_String_o *)Chars, 0LL);
LABEL_82:
  if ( !v41 )
LABEL_84:
    sub_1B9026C(Chars, v30);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v41 + 24))(*(_QWORD *)(v41 + 64), *(_QWORD *)(v41 + 40));
  ScriptLogMessage__UpdatePlayVoice(this, v90);
}


void __fastcall ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ScriptMessageLabel_o *analyzeLabel; // x20
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  float voiceVolume; // s8
  System_Action_T1__T2__T3__o *v8; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4A71A41 & 1) == 0 )
  {
    sub_1B90010(&System_Action_string__string__bool__TypeInfo, method);
    sub_1B90010(&Method_ScriptLogMessage_SetBackLogReplayingVoice__, v3);
    byte_4A71A41 = 1;
  }
  if ( this->fields.isReservedAddPlayVoice && !this->fields.isDelayAddPlayVoice )
  {
    if ( !System_String__IsNullOrEmpty(this->fields.voiceAssetName, 0LL)
      && !System_String__IsNullOrEmpty(this->fields.voiceObjectName, 0LL) )
    {
      analyzeLabel = this->fields.analyzeLabel;
      voiceAssetName = this->fields.voiceAssetName;
      voiceObjectName = this->fields.voiceObjectName;
      voiceVolume = this->fields.voiceVolume;
      v8 = (System_Action_T1__T2__T3__o *)sub_1B9025C(System_Action_string__string__bool__TypeInfo);
      System_Action_object__object__bool____ctor(
        v8,
        (Il2CppObject *)this,
        Method_ScriptLogMessage_SetBackLogReplayingVoice__,
        0LL);
      if ( !analyzeLabel
        || (ScriptMessageLabel__UpdatePlayVoice(
              analyzeLabel,
              voiceAssetName,
              voiceObjectName,
              voiceVolume,
              (System_Action_string__string__bool__o *)v8,
              v11),
            backLogDialog = this->fields.backLogDialog,
            LogLabel = ScriptMessageLabel__GetLogLabel(analyzeLabel, v13),
            !backLogDialog) )
      {
        sub_1B9026C(LogLabel, v10);
      }
      ScriptBackLog__AddLog(backLogDialog, LogLabel, 0LL);
      ScriptLogMessage__ReleasePlayVoice(this, v14);
    }
  }
  else
  {
    this->fields.isDelayAddPlayVoice = 0;
  }
}


float __fastcall ScriptLogMessage__get_textLineHeight(ScriptLogMessage_o *this, const MethodInfo *method)
{
  return this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage_ProcAddLabel___ctor(
        ScriptLogMessage_ProcAddLabel_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D7104;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D70C4;
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v5, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall ScriptLogMessage_ProcAddLabel__Invoke(ScriptLogMessage_ProcAddLabel_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage_ProcAddLabel2___ctor(
        ScriptLogMessage_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D7180;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_19D7160;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D7118;
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel2__BeginInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = txt;
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, &v6, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__Invoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    txt,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ScriptLogMessage___c__DisplayClass52_0___ctor(
        ScriptLogMessage___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ScriptLogMessage___c__DisplayClass52_0___UpdateLabels_b__0(
        ScriptLogMessage___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  char *tmpTxt; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ScriptLogMessage_o *_4__this; // x20
  const MethodInfo *v7; // x4
  struct ScriptLogMessage_o *v8; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length((System_Text_StringBuilder_o *)tmpTxt, 0LL) < 1 )
    goto LABEL_8;
  tmpTxt = (char *)this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (char *)(*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)tmpTxt + 360LL))(
                           tmpTxt,
                           *(_QWORD *)(*(_QWORD *)tmpTxt + 368LL)),
        (v8 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptLogMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v8->fields.defaultColorTag,
          this->fields.isFoward,
          v7),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_1B9026C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 20) = tmpColorTag;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(tmpTxt + 160), (int32_t)tmpColorTag, v4, v5);
}


void __fastcall ScriptLogMessage___c__DisplayClass52_0___UpdateLabels_b__1(
        ScriptLogMessage___c__DisplayClass52_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v4; // x4
  ScriptLogMessage___c__DisplayClass52_0_o *v5; // x19
  struct System_Text_StringBuilder_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v5 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptLogMessage___c__DisplayClass52_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLogMessage__AddLabel(
      (ScriptLogMessage_o *)this,
      text,
      (System_String_o *)this[3].fields.tmpTxt,
      v5->fields.isFoward,
      v4);
  }
  this = (ScriptLogMessage___c__DisplayClass52_0_o *)v5->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1B9026C(this, text);
  tmpColorTag = (struct System_Text_StringBuilder_o *)v5->fields.tmpColorTag;
  this[3].fields.tmpTxt = tmpColorTag;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this[3].fields, (int32_t)tmpColorTag, (int32_t)method, v3);
}