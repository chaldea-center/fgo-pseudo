void __fastcall ScriptLogMessage___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ScriptLogMessage_StaticFields *static_fields; // x8

  if ( (byte_4BFF432 & 1) == 0 )
  {
    sub_1C2E12C(&ScriptLogMessage_TypeInfo, v1);
    byte_4BFF432 = 1;
  }
  static_fields = ScriptLogMessage_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALIGN_LEFT_BASE = 3285975040LL;
  static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void __fastcall ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4BFF431 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFF431 = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v9 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptLogMessage__AddLabel(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_String_o *v10; // x23
  ScriptLogMessage_o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x1
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  System_String_o *v19; // x23
  int m_CancellationTokenSource; // w8
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  int32_t fontSize; // w4
  struct ScriptBackLog_o *backLogDialog; // x7
  UILabel_o **p_main; // x1
  UILabel_o **p_ruby; // x2
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v28; // x19
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  System_String_o *v31; // x23
  int v32; // w8
  ScriptLogMessage_o *v33; // x24
  struct ScriptBackLog_o *v34; // x23
  float v35; // s0
  int v36; // w8
  float v37; // s8
  const MethodInfo *v38; // x1
  System_String_o *v39; // x23
  ScriptLogMessage_o *v40; // x23
  int32_t v41; // w0
  System_String_o **p_mainPrefab; // x8
  UILabel_o *MainLabel; // x0
  int64_t v44; // x2
  char v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int v50; // w8
  ScriptLogMessage_o *v51; // x23
  UILabel_o *RubyLabel; // x0
  int64_t v53; // x2
  char v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_String_o *rubyPrefab; // x24
  ScriptLogMessage_o *v60; // x24
  int v61; // w25
  int32_t v62; // w0
  UnityEngine_Vector2_o v63; // 0:s1.4,4:s2.4

  v10 = text;
  v11 = this;
  if ( (byte_4BFF425 & 1) == 0 )
  {
    sub_1C2E12C(&char___TypeInfo, text);
    sub_1C2E12C(&StringLiteral_21498/*"line"*/, v12);
    this = (ScriptLogMessage_o *)sub_1C2E12C(&StringLiteral_1/*""*/, v13);
    byte_4BFF425 = 1;
  }
  analyzeLabel = v11->fields.analyzeLabel;
  if ( !analyzeLabel
    || (analyzeLabel->fields.colorTag = colorTag,
        analyzeLabel->fields.stepTime = 0.0,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&analyzeLabel->fields.colorTag,
          (int64_t)colorTag,
          (int64_t)colorTag,
          isFoward,
          (System_String_o *)method,
          v5,
          v6,
          v7),
        dispPosition = v11->fields.dispPosition,
        !v10) )
  {
LABEL_60:
    sub_1C2E388(this, text);
  }
  if ( System_String__get_Chars(v10, 0, 0LL) != 91 )
  {
    ScriptLogMessage__FetchMainLabel(v11, v16);
    ScriptMessageLabel__UpdateLabel(
      analyzeLabel,
      &analyzeLabel->fields.main,
      &v11->fields.dispPosition,
      v11->fields.fontSize,
      v11->fields.maxFontSize,
      v11->fields.verticalAlign,
      v10,
      v11->fields.fontType,
      0LL);
    goto LABEL_15;
  }
  if ( System_String__get_Chars(v10, 1, 0LL) == 35 )
  {
    ScriptLogMessage__FetchMainLabel(v11, v17);
    ScriptLogMessage__FetchRubyLabel(v11, v18);
    v19 = System_String__Substring_63254588(v10, 2, v10->fields._stringLength - 3, 0LL);
    this = (ScriptLogMessage_o *)sub_1C2E1D4(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !v19 )
        goto LABEL_60;
      this = (ScriptLogMessage_o *)System_String__Split_63257740(v19, (System_Char_array *)this, 0LL);
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
            0LL);
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
            0LL);
        goto LABEL_15;
      }
    }
LABEL_61:
    sub_1C2E390(this, text);
  }
  if ( System_String__get_Chars(v10, 1, 0LL) == 94 )
  {
    ScriptLogMessage__FetchImageSprite(v11, v30);
    v31 = System_String__Substring_63254588(v10, 2, v10->fields._stringLength - 3, 0LL);
    this = (ScriptLogMessage_o *)sub_1C2E1D4(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v31 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_63257740(v31, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_60;
    v32 = (int)this->fields.m_CancellationTokenSource;
    v33 = this;
    if ( !v32 )
      goto LABEL_61;
    v34 = this->fields.backLogDialog;
    if ( v32 <= 1 )
    {
      this = (ScriptLogMessage_o *)sub_1C2E1D4(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_60;
      text = (System_String_o *)this;
      if ( LODWORD(this->fields.m_CancellationTokenSource) )
      {
        LOWORD(this->fields.backLogDialog) = 58;
        if ( !v34 )
          goto LABEL_60;
        this = (ScriptLogMessage_o *)System_String__Split_63257740(
                                       (System_String_o *)v34,
                                       (System_Char_array *)this,
                                       0LL);
        if ( !this )
          goto LABEL_60;
        v50 = (int)this->fields.m_CancellationTokenSource;
        v51 = this;
        if ( v50 <= 1 )
        {
          if ( v50 )
          {
            ScriptMessageLabel__UpdateImage(
              analyzeLabel,
              &analyzeLabel->fields.image,
              &v11->fields.dispPosition,
              v11->fields.fontSize,
              (System_String_o *)this->fields.backLogDialog,
              v11->fields.horizontalAlign,
              0LL);
            goto LABEL_15;
          }
        }
        else
        {
          RubyLabel = ScriptLogMessage__FetchRubyLabel(v11, (const MethodInfo *)text);
          analyzeLabel->fields.ruby = RubyLabel;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&analyzeLabel->fields.ruby,
            (int64_t)RubyLabel,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
          if ( LODWORD(v51->fields.m_CancellationTokenSource) >= 2 )
          {
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
              0LL);
            goto LABEL_15;
          }
        }
      }
      goto LABEL_61;
    }
    v35 = System_Single__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
    v36 = (int)v33->fields.m_CancellationTokenSource;
    v37 = v35;
    if ( v36 == 2 )
    {
      ScriptMessageLabel__UpdateImage_43098752(
        analyzeLabel,
        &analyzeLabel->fields.image,
        &v11->fields.dispPosition,
        v11->fields.fontSize,
        v35,
        (System_String_o *)v34,
        v11->fields.horizontalAlign,
        0LL);
      goto LABEL_15;
    }
    if ( v36 <= 3 )
    {
      if ( (unsigned int)v36 > 2 )
      {
        rubyPrefab = (System_String_o *)v33->fields.rubyPrefab;
        this = (ScriptLogMessage_o *)sub_1C2E1D4(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_60;
        text = (System_String_o *)this;
        if ( LODWORD(this->fields.m_CancellationTokenSource) )
        {
          LOWORD(this->fields.backLogDialog) = 44;
          if ( !rubyPrefab )
            goto LABEL_60;
          this = (ScriptLogMessage_o *)System_String__Split_63257740(rubyPrefab, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_60;
          v60 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0LL);
            if ( LODWORD(v60->fields.m_CancellationTokenSource) > 1 )
            {
              v61 = (int)this;
              v62 = System_Int32__Parse((System_String_o *)v60->fields.mainPrefab, 0LL);
              v63.fields.x = (float)v61;
              v63.fields.y = (float)v62;
              ScriptMessageLabel__UpdateImage_43098904(
                analyzeLabel,
                &analyzeLabel->fields.image,
                &v11->fields.dispPosition,
                v11->fields.fontSize,
                v37,
                (System_String_o *)v34,
                v63,
                v11->fields.horizontalAlign,
                0LL);
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
    if ( System_String__get_Chars(v10, 1, 0LL) != 126 )
    {
      MainLabel = ScriptLogMessage__FetchMainLabel(v11, v38);
      analyzeLabel->fields.main = MainLabel;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&analyzeLabel->fields, (int64_t)MainLabel, v44, v45, v46, v47, v48, v49);
      ScriptMessageLabel__UpdateLabel(
        analyzeLabel,
        &analyzeLabel->fields.main,
        &v11->fields.dispPosition,
        v11->fields.fontSize,
        v11->fields.maxFontSize,
        v11->fields.verticalAlign,
        v10,
        v11->fields.fontType,
        0LL);
      goto LABEL_15;
    }
    ScriptLogMessage__FetchImageSprite(v11, v38);
    v39 = System_String__Substring_63254588(v10, 2, v10->fields._stringLength - 3, 0LL);
    this = (ScriptLogMessage_o *)sub_1C2E1D4(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v39 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_63257740(v39, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_60;
    v40 = this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    v41 = System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0LL);
    if ( SLODWORD(v40->fields.m_CancellationTokenSource) >= 2 )
      p_mainPrefab = (System_String_o **)&v40->fields.mainPrefab;
    else
      p_mainPrefab = (System_String_o **)&StringLiteral_21498/*"line"*/;
    ScriptMessageLabel__UpdateLine(
      analyzeLabel,
      &analyzeLabel->fields.image,
      &v11->fields.dispPosition,
      v11->fields.fontSize,
      v41,
      *p_mainPrefab,
      0LL);
  }
LABEL_15:
  if ( isFoward )
  {
    rubyText = analyzeLabel->fields.rubyText;
    analyzeLabel->fields.mainPosition.fields.x = analyzeLabel->fields.mainPosition.fields.x
                                               - analyzeLabel->fields.widthSize;
    if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
      analyzeLabel->fields.rubyPosition.fields.x = analyzeLabel->fields.rubyPosition.fields.x
                                                 - analyzeLabel->fields.widthSize;
    v11->fields.dispPosition = dispPosition;
  }
  v28 = v11->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL);
  if ( !v28 )
    goto LABEL_60;
  ScriptBackLog__AddLog(v28, (ScriptMessageLabel_o *)this, v29);
}


void __fastcall ScriptLogMessage__AddPlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  ScriptLogMessage_o *v9; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v9 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.voiceAssetName,
    (int64_t)assetName,
    (int64_t)objectName,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v9->fields.voiceObjectName = objectName;
  v9 = (ScriptLogMessage_o *)((char *)v9 + 216);
  sub_1C2E0D0((PartyOrganizationUtility_o *)v9, (int64_t)objectName, v12, v13, v14, v15, v16, v17);
  *(float *)&v9->monitor = volume;
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
void __fastcall ScriptLogMessage__AddText_43047176(
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4BFF42F & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFF42F = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.talkName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
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
  if ( !byte_4BF7D91 )
  {
    this = (ScriptLogMessage_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(image, 0LL);
  v5 = this;
  if ( !byte_4BF7D96 )
  {
    this = (ScriptLogMessage_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D96 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1C2E388(this, method);
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
  if ( !byte_4BF7D91 )
  {
    this = (ScriptLogMessage_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
  }
  if ( !v4 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v4,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(main, 0LL);
  v5 = this;
  if ( !byte_4BF7D96 )
  {
    this = (ScriptLogMessage_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D96 = 1;
  }
  if ( !v5 )
LABEL_10:
    sub_1C2E388(this, method);
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
  if ( !byte_4BF7D91 )
  {
    this = (ScriptLogMessage_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D91 = 1;
  }
  if ( !v5 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(ruby, 0LL);
  v6 = this;
  if ( !byte_4BF7D96 )
  {
    this = (ScriptLogMessage_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, method);
    byte_4BF7D96 = 1;
  }
  if ( !v6 )
LABEL_10:
    sub_1C2E388(this, method);
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
  __int64 v3; // x1
  int32_t defaultFontSize; // w19

  if ( (byte_4BFF430 & 1) == 0 )
  {
    sub_1C2E12C(&ScriptMessageLabel_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_897/*"-"*/, v3);
    byte_4BFF430 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_897/*"-"*/, defaultFontSize, 0LL);
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

  if ( (byte_4BFF42C & 1) == 0 )
  {
    sub_1C2E12C(&ScriptMessageLabel_TypeInfo, method);
    byte_4BFF42C = 1;
  }
  fontSize = this->fields.fontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  return ScriptMessageLabel__GetFontSizeString(fontSize, 0LL);
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
  int32_t defaultFontSize; // w20
  ScriptMessageLabel_o *v11; // x21
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *mainPrefab; // x21
  int64_t transform; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UnityEngine_Font_o *trueTypeFont; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_GameObject_o *v44; // x21
  int32_t v45; // w0
  struct ScriptMessageLabel_o *v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_GameObject_o *v53; // x21
  int32_t v54; // w0
  struct ScriptMessageLabel_o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  UnityEngine_GameObject_o *v62; // x21
  int32_t v63; // w0
  struct ScriptMessageLabel_o *v64; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct ScriptMessageLabel_o *v71; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v74; // s0
  int32_t v75; // w1
  int32_t rubyFontSize; // w8
  float v77; // s1
  float v78; // s0
  float v79; // s0
  float v80; // s1
  const MethodInfo *v81; // x1
  const MethodInfo *v82; // x1

  if ( (byte_4BFF424 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&ScriptMessageLabel_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_897/*"-"*/, v8);
    sub_1C2E12C(&StringLiteral_25727/*"■"*/, v9);
    byte_4BFF424 = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    ScriptLogMessage__ReleasePlayVoice(this, method);
    defaultFontSize = this->fields.defaultFontSize;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    this->fields.defaultFontSize = ScriptMessageLabel__GetFontSize(
                                     (System_String_o *)StringLiteral_897/*"-"*/,
                                     defaultFontSize,
                                     0LL);
    v11 = (ScriptMessageLabel_o *)sub_1C2E378(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel___ctor(v11, 0LL);
    this->fields.analyzeLabel = v11;
    p_analyzeLabel = &this->fields.analyzeLabel;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.analyzeLabel, (int64_t)v11, v13, v14, v15, v16, v17, v18);
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v22 = (UnityEngine_GameObject_o *)transform;
    transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (int64_t)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v22, layer, 0LL);
    v24 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v22,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v24 )
      goto LABEL_47;
    v24->fields.main = (struct UILabel_o *)transform;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v24->fields, transform, v25, v26, v27, v28, v29, v30);
    if ( !*p_analyzeLabel )
      goto LABEL_47;
    transform = (int64_t)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_47;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0LL);
    this->fields.defaultFontType = trueTypeFont;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.defaultFontType,
      (int64_t)trueTypeFont,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    this->fields.fontType = trueTypeFont;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.fontType,
      (int64_t)trueTypeFont,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v44 = (UnityEngine_GameObject_o *)transform;
    transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (int64_t)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    v45 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v44, v45, 0LL);
    v46 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v44,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v46 )
      goto LABEL_47;
    v46->fields.ruby = (struct UILabel_o *)transform;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v46->fields.ruby, transform, v47, v48, v49, v50, v51, v52);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.imagePrefab,
                           (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v53 = (UnityEngine_GameObject_o *)transform;
    transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (int64_t)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    v54 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v53, v54, 0LL);
    v55 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v53,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v55 )
      goto LABEL_47;
    v55->fields.image = (struct UISprite_o *)transform;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v55->fields.image, transform, v56, v57, v58, v59, v60, v61);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.playVoicePrefab,
                           (const MethodInfo_3057E94 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v62 = (UnityEngine_GameObject_o *)transform;
    transform = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (int64_t)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_47;
    transform = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_47;
    v63 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v62, v63, 0LL);
    v64 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v62,
                           (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v64
      || (v64->fields.playVoice = (struct UIButton_o *)transform,
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v64->fields.playVoice, transform, v65, v66, v67, v68, v69, v70),
          (v71 = *p_analyzeLabel) == 0LL)
      || (main = v71->fields.main,
          ruby = v71->fields.ruby,
          transform = ScriptLogMessage__GetDefaultFontSize(this, (const MethodInfo *)v21),
          !main) )
    {
LABEL_47:
      sub_1C2E388(transform, v21);
    }
    v74 = this->fields.fontScale * (float)(int)transform;
    if ( v74 == INFINITY )
      v75 = 0x80000000;
    else
      v75 = (int)v74;
    UILabel__set_fontSize(main, v75, 0LL);
    UILabel__set_text(main, (System_String_o *)StringLiteral_25727/*"■"*/, 0LL);
    transform = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))main->klass->vtable._22_get_localSize.method)(
                  main,
                  main->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v77;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_47;
      v79 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v79 == INFINITY )
        LODWORD(v21) = 0x80000000;
      else
        LODWORD(v21) = (int)v79;
      this->fields.rubyFontSize = v21;
    }
    else
    {
      v78 = this->fields.fontScale * (float)rubyFontSize;
      if ( v78 == INFINITY )
        v21 = 0x80000000LL;
      else
        v21 = (unsigned int)(int)v78;
      this->fields.rubyFontSize = v21;
      if ( !ruby )
        goto LABEL_47;
    }
    UILabel__set_fontSize(ruby, v21, 0LL);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_25727/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))ruby->klass->vtable._22_get_localSize.method)(
      ruby,
      ruby->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v80;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v80;
    ScriptLogMessage__Init(this, v81);
    this->fields.dispPosition = this->fields.startPosition;
    ScriptLogMessage__SetDefaultState(this, v82);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( this->fields.isInit )
  {
    p_analyzeLabel = &this->fields.analyzeLabel;
    analyzeLabel = this->fields.analyzeLabel;
    *((_BYTE *)p_analyzeLabel + 37) = 0;
    if ( !analyzeLabel )
      sub_1C2E388(0LL, method);
    ScriptMessageLabel__Destroy(analyzeLabel, 0LL);
    this->fields.analyzeLabel = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)p_analyzeLabel, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.defaultFontType = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.defaultFontType, 0LL, v11, v12, v13, v14, v15, v16);
    this->fields.fontType = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v17, v18, v19, v20, v21, v22);
  }
}


void __fastcall ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1
  void *v10; // x1
  struct System_String_o **p_voiceObjectName; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BFF42D & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFF42D = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  v9 = StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.voiceAssetName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceObjectName = &this->fields.voiceObjectName;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_voiceObjectName, (int64_t)v10, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  ScriptLogMessage_o *v9; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v9 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.voiceAssetName,
    (int64_t)assetName,
    (int64_t)objectName,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  v9->fields.voiceObjectName = objectName;
  v9 = (ScriptLogMessage_o *)((char *)v9 + 216);
  sub_1C2E0D0((PartyOrganizationUtility_o *)v9, (int64_t)objectName, v12, v13, v14, v15, v16, v17);
  *(float *)&v9->monitor = volume;
}


void __fastcall ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v3; // s0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  float v10; // s0
  float defaultTextOnlyLineHeight; // s1
  float v12; // s2
  int32_t v13; // w8
  void *v14; // x1

  if ( (byte_4BFF429 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFF429 = 1;
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v14, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4BFF42E & 1) == 0 )
  {
    sub_1C2E12C(&ScriptLogMessage_TypeInfo, isLineHead);
    byte_4BFF42E = 1;
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ScriptBackLog_o *backLogDialog; // x0
  int64_t v12; // x2
  char v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct ScriptBackLog_o *v18; // x8

  backLogDialog = this->fields.backLogDialog;
  if ( !backLogDialog
    || (backLogDialog->fields._ReplayingAssetName_k__BackingField = assetName,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&backLogDialog->fields._ReplayingAssetName_k__BackingField,
          (int64_t)assetName,
          (int64_t)objectName,
          isReplaying,
          (System_String_o *)method,
          v5,
          v6,
          v7),
        (backLogDialog = this->fields.backLogDialog) == 0LL)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&backLogDialog->fields._ReplayingObjectName_k__BackingField,
          (int64_t)objectName,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (v18 = this->fields.backLogDialog) == 0LL) )
  {
    sub_1C2E388(backLogDialog, assetName);
  }
  v18->fields._IsReplayingVoice_k__BackingField = isReplaying;
}


void __fastcall ScriptLogMessage__SetBetweenLineHeight(
        ScriptLogMessage_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_1C2E388(0LL, method);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  float rubyLineHeight; // s3
  float v11; // s0
  float defaultTextOnlyLineHeight; // s1
  int32_t v13; // w8
  void *v14; // x1

  if ( (byte_4BFF428 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BFF428 = 1;
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
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v14, v4, v5, v6, v7, v8, v9);
}


void __fastcall ScriptLogMessage__SetFontSize(
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

  if ( (byte_4BFF42B & 1) == 0 )
  {
    sub_1C2E12C(&ScriptMessageLabel_TypeInfo, sizeName);
    byte_4BFF42B = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  v8 = this->fields.fontScale * (float)ScriptMessageLabel__GetFontSize(sizeName, defaultFontSize, 0LL);
  v9 = (int)v8;
  if ( v8 == INFINITY )
    v9 = 0x80000000;
  this->fields.fontSize = v9;
  VerticalAlignFromString = ScriptMessageLabel__GetVerticalAlignFromString(verticalAlign, 0LL);
  fontSize = this->fields.fontSize;
  textOnlyLineHeight = this->fields.textOnlyLineHeight;
  this->fields.verticalAlign = VerticalAlignFromString;
  v13 = (float)fontSize;
  if ( textOnlyLineHeight < v13 )
    this->fields.textOnlyLineHeight = v13;
}


void __fastcall ScriptLogMessage__SetFontType(
        ScriptLogMessage_o *this,
        UnityEngine_Font_o *font,
        const MethodInfo *method)
{
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_4BFF42A & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, font);
    byte_4BFF42A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_1C2E388(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)defaultFontType, v7, v8, v9, v10, v11, v12);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UnityEngine_Font_o *fontType; // x22
  struct UnityEngine_Font_o *defaultFontType; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1
  int32_t DefaultFontSize; // w0
  float x; // s0
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( System_String__IsNullOrEmpty(text, 0LL) )
  {
    ScriptLogMessage__ClearTalkName(this, v5);
  }
  else
  {
    this->fields.talkName = text;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.talkName, (int64_t)text, v6, v7, v8, v9, v10, v11);
    fontType = this->fields.fontType;
    defaultFontType = this->fields.defaultFontType;
    this->fields.fontType = defaultFontType;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.fontType,
      (int64_t)defaultFontType,
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
    ScriptLogMessage__UpdateLabels(this, text, 0, 0LL, v23);
    ScriptLogMessage__ReturnText(this, v24);
    this->fields.fontType = fontType;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)fontType, v25, v26, v27, v28, v29, v30);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Text_StringBuilder_o *v37; // x24
  System_Text_StringBuilder_o **v38; // x23
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x25
  __int64 v53; // x24
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  int32_t v56; // w27
  int v57; // w21
  int32_t v58; // w28
  int32_t BraceIndex; // w0
  int32_t v60; // w29
  System_String_o *v61; // x0
  int32_t v62; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Text_StringBuilder_o *v71; // x29
  __int64 v72; // x1
  ScriptReplaceString_c *v73; // x0
  int32_t playerGenderIndex; // w28
  struct System_String_o *v75; // x1
  System_String_o *v76; // x27
  const MethodInfo *v77; // x4
  char v78; // w2
  ScriptLogMessage_o *v79; // x0
  System_String_o *v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_String_o *v87; // x1
  System_String_o *v88; // x28
  int32_t v89; // w1
  int32_t v90; // w2
  System_String_o *v91; // x0
  __int64 *v92; // x8
  ScriptLogMessage_ProcAddLabel2_o *v93; // x9
  __int64 v94; // x1
  const MethodInfo *v95; // x1
  System_String_o *v96; // x27
  System_String_array *v97; // x0
  struct System_String_o *v98; // x1
  System_String_array *v99; // x27
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  System_String_o *v106; // x0
  System_Text_StringBuilder_o *v107; // x21
  const MethodInfo *v108; // x1
  ScriptLogMessage_ProcAddLabel2_o *v109; // [xsp+8h] [xbp-78h]
  System_String_o *enforceColora; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4BFF426 & 1) == 0 )
  {
    sub_1C2E12C(&ScriptLogMessage_ProcAddLabel2_TypeInfo, txt);
    sub_1C2E12C(&ScriptLogMessage_ProcAddLabel_TypeInfo, v9);
    sub_1C2E12C(&ScriptMessageLabel_TypeInfo, v10);
    sub_1C2E12C(&ScriptReplaceString_TypeInfo, v11);
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, v12);
    sub_1C2E12C(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__, v13);
    sub_1C2E12C(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__, v14);
    sub_1C2E12C(&ScriptLogMessage___c__DisplayClass52_0_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_23558/*"servantName"*/, v16);
    sub_1C2E12C(&StringLiteral_16118/*"[-]"*/, v17);
    sub_1C2E12C(&StringLiteral_20408/*"i"*/, v18);
    sub_1C2E12C(&StringLiteral_16320/*"[~1]"*/, v19);
    sub_1C2E12C(&StringLiteral_16255/*"[^"*/, v20);
    sub_1C2E12C(&StringLiteral_23172/*"r"*/, v21);
    sub_1C2E12C(&StringLiteral_19263/*"effectmessage"*/, v22);
    sub_1C2E12C(&StringLiteral_21498/*"line"*/, v23);
    sub_1C2E12C(&StringLiteral_20600/*"image"*/, v24);
    sub_1C2E12C(&StringLiteral_16099/*"["*/, v25);
    sub_1C2E12C(&StringLiteral_16319/*"[~"*/, v26);
    sub_1C2E12C(&StringLiteral_16358/*"]"*/, v27);
    byte_4BFF426 = 1;
  }
  text = 0LL;
  v28 = sub_1C2E378(ScriptLogMessage___c__DisplayClass52_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_84;
  *(_QWORD *)(v28 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 24), (int64_t)this, v31, v32, v33, v34, v35, v36);
  *(_BYTE *)(v28 + 32) = isFoward;
  v37 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v37, 0LL);
  *(_QWORD *)(v28 + 16) = v37;
  v38 = (System_Text_StringBuilder_o **)(v28 + 16);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)v37, v39, v40, v41, v42, v43, v44);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)enforceColor,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  enforceColora = enforceColor;
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v28 + 40) = defaultColorTag;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 40), (int64_t)defaultColorTag, v45, v46, v47, v48, v49, v50);
  v53 = sub_1C2E378(ScriptLogMessage_ProcAddLabel_TypeInfo);
  ScriptLogMessage_ProcAddLabel___ctor(
    (ScriptLogMessage_ProcAddLabel_o *)v53,
    (Il2CppObject *)v28,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    v54);
  v109 = (ScriptLogMessage_ProcAddLabel2_o *)sub_1C2E378(ScriptLogMessage_ProcAddLabel2_TypeInfo);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v109,
    (Il2CppObject *)v28,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    v55);
  if ( !txt )
    goto LABEL_84;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_82;
  v56 = 0;
  v57 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v56, 0LL) != 91 )
    {
      v71 = *v38;
      Chars = System_String__get_Chars(txt, v56, 0LL);
      if ( !v71 )
        goto LABEL_84;
      v58 = v56 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_62399064(v71, Chars, 0LL);
      goto LABEL_37;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v58 = v56 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v56 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v38;
      if ( !*v38 )
        goto LABEL_84;
      Chars = (__int64)System_Text_StringBuilder__Append_62396736(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_16099/*"["*/,
                         0LL);
      goto LABEL_37;
    }
    v60 = BraceIndex;
    Chars = System_String__get_Chars(txt, v58, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v53 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
      v61 = System_String__Substring_63254588(txt, v56 + 2, v57 + v60 - 2, 0LL);
      v62 = System_Int32__Parse(v61, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      String = ScriptReplaceString__GetString(v62, 0LL);
      TagSplitString = System_String__Concat_63235584(String, (System_String_o *)StringLiteral_16118/*"[-]"*/, 0LL);
LABEL_33:
      v75 = *(struct System_String_o **)(v28 + 40);
      v76 = TagSplitString;
      this->fields.defaultColorTag = v75;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)v75,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      v78 = *(_BYTE *)(v28 + 32);
      v79 = this;
      v80 = v76;
LABEL_34:
      ScriptLogMessage__UpdateLabels(v79, v80, v78, enforceColora, v77);
      v87 = this->fields.defaultColorTag;
      *(_QWORD *)(v28 + 40) = v87;
LABEL_35:
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v28 + 40), (int64_t)v87, v81, v82, v83, v84, v85, v86);
      goto LABEL_36;
    }
    Chars = System_String__get_Chars(txt, v58, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v53 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      if ( !byte_4BFF2A6 )
      {
        sub_1C2E12C(&ScriptReplaceString_TypeInfo, v72);
        byte_4BFF2A6 = 1;
      }
      v73 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v73 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v73->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v56 + 2, playerGenderIndex, 0LL);
      goto LABEL_33;
    }
    Chars = System_String__get_Chars(txt, v58, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v53 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
      Chars = (__int64)System_String__Substring_63254588(txt, v56, v57 + v60 + 1, 0LL);
      goto LABEL_51;
    }
    Chars = System_String__get_Chars(txt, v58, 0LL);
    if ( (unsigned __int16)Chars != 61 )
      break;
LABEL_36:
    v58 = v60 + 1;
LABEL_37:
    v57 = -v58;
    v56 = v58;
    if ( v58 >= txt->fields._stringLength )
      goto LABEL_82;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v58, 0LL);
  if ( !Chars )
    goto LABEL_84;
  v88 = (System_String_o *)Chars;
  Chars = System_String__Equals_63243900((System_String_o *)Chars, (System_String_o *)StringLiteral_20600/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
    v89 = v56 + 7;
    v90 = v57 + v60 - 7;
    goto LABEL_49;
  }
  Chars = System_String__Equals_63243900(v88, (System_String_o *)StringLiteral_19263/*"effectmessage"*/, 0LL);
  if ( (Chars & 1) != 0 )
    goto LABEL_36;
  Chars = System_String__Equals_63243900(v88, (System_String_o *)StringLiteral_20408/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
    v89 = v56 + 3;
    v90 = v57 + v60 - 3;
LABEL_49:
    v91 = System_String__Substring_63254588(txt, v89, v90, 0LL);
    v92 = &StringLiteral_16255/*"[^"*/;
LABEL_50:
    Chars = (__int64)System_String__Concat_63246844(
                       (System_String_o *)*v92,
                       v91,
                       (System_String_o *)StringLiteral_16358/*"]"*/,
                       0LL);
LABEL_51:
    v93 = v109;
    if ( !v109 )
      goto LABEL_84;
    v94 = Chars;
LABEL_53:
    Chars = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v93->fields.m_target)(
              v93->fields.original_method_info,
              v94,
              *(_QWORD *)&v93->fields.extra_arg);
    goto LABEL_36;
  }
  Chars = System_String__Equals_63243900(v88, (System_String_o *)StringLiteral_23172/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v95);
    if ( enforceColora )
    {
      *p_defaultColorTag = enforceColora;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)enforceColora,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
    }
    v87 = *p_defaultColorTag;
    *(_QWORD *)(v28 + 40) = *p_defaultColorTag;
    goto LABEL_35;
  }
  Chars = System_String__Equals_63243900(v88, (System_String_o *)StringLiteral_23558/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
    v96 = System_String__Substring_63254588(txt, v56 + 12, v57 + v60 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    v97 = ScriptMessageLabel__AnalysTagParam(v96, 0, 0LL);
    v98 = *(struct System_String_o **)(v28 + 40);
    v99 = v97;
    this->fields.defaultColorTag = v98;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)v98,
      v100,
      v101,
      v102,
      v103,
      v104,
      v105);
    v106 = ScriptMessageLabel__GetServantChangeName(v99, 0LL);
    v78 = *(_BYTE *)(v28 + 32);
    v80 = v106;
    v79 = this;
    goto LABEL_34;
  }
  Chars = System_String__StartsWith(v88, (System_String_o *)StringLiteral_21498/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v53 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
    Chars = (__int64)System_String__Substring_63254588(txt, v56 + 5, v57 + v60 - 5, 0LL);
    if ( !Chars )
      goto LABEL_84;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v91 = System_String__Trim((System_String_o *)Chars, 0LL);
      v92 = &StringLiteral_16319/*"[~"*/;
      goto LABEL_50;
    }
    v93 = v109;
    if ( !v109 )
      goto LABEL_84;
    v94 = StringLiteral_16320/*"[~1]"*/;
    goto LABEL_53;
  }
  if ( v60 < txt->fields._stringLength )
  {
    text = System_String__Substring_63254588(txt, v56, v57 + v60 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v28 + 40), &text, enforceColora, 0LL);
    Chars = (__int64)*v38;
    if ( !*v38 )
      goto LABEL_84;
    Chars = (__int64)System_Text_StringBuilder__Append_62396736((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_36;
  }
  v107 = *v38;
  Chars = (__int64)System_String__Substring(txt, v56, 0LL);
  if ( !v107 )
    goto LABEL_84;
  Chars = (__int64)System_Text_StringBuilder__Append_62396736(v107, (System_String_o *)Chars, 0LL);
LABEL_82:
  if ( !v53 )
LABEL_84:
    sub_1C2E388(Chars, v30);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v53 + 24))(*(_QWORD *)(v53 + 64), *(_QWORD *)(v53 + 40));
  ScriptLogMessage__UpdatePlayVoice(this, v108);
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
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1

  if ( (byte_4BFF427 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_string__string__bool__TypeInfo, method);
    sub_1C2E12C(&Method_ScriptLogMessage_SetBackLogReplayingVoice__, v3);
    byte_4BFF427 = 1;
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
      v8 = (System_Action_T1__T2__T3__o *)sub_1C2E378(System_Action_string__string__bool__TypeInfo);
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
              0LL),
            backLogDialog = this->fields.backLogDialog,
            LogLabel = ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL),
            !backLogDialog) )
      {
        sub_1C2E388(LogLabel, v10);
      }
      ScriptBackLog__AddLog(backLogDialog, LogLabel, v12);
      ScriptLogMessage__ReleasePlayVoice(this, v13);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A70B44;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A70B04;
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, &v5, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A70BC0;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A70BA0;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A70B58;
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
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, &v6, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ScriptLogMessage_o *_4__this; // x20
  const MethodInfo *v11; // x4
  struct ScriptLogMessage_o *v12; // x8
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
        (v12 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptLogMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v12->fields.defaultColorTag,
          this->fields.isFoward,
          v11),
        (tmpTxt = (char *)this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_1C2E388(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 20) = tmpColorTag;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(tmpTxt + 160), (int64_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
}


void __fastcall ScriptLogMessage___c__DisplayClass52_0___UpdateLabels_b__1(
        ScriptLogMessage___c__DisplayClass52_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  int32_t v3; // w3
  MethodInfo *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ScriptLogMessage___c__DisplayClass52_0_o *v8; // x19
  struct System_Text_StringBuilder_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v8 = this;
  if ( text->fields._stringLength >= 1 )
  {
    this = (ScriptLogMessage___c__DisplayClass52_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLogMessage__AddLabel(
      (ScriptLogMessage_o *)this,
      text,
      (System_String_o *)this[3].fields.tmpTxt,
      v8->fields.isFoward,
      v4);
  }
  this = (ScriptLogMessage___c__DisplayClass52_0_o *)v8->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_1C2E388(this, text);
  tmpColorTag = (struct System_Text_StringBuilder_o *)v8->fields.tmpColorTag;
  this[3].fields.tmpTxt = tmpColorTag;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this[3].fields,
    (int64_t)tmpColorTag,
    (int64_t)method,
    v3,
    (System_String_o *)v4,
    v5,
    v6,
    v7);
}