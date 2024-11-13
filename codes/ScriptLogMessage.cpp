void __fastcall ScriptLogMessage___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ScriptLogMessage_StaticFields *static_fields; // x8

  if ( (byte_4B17DFC & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptLogMessage_TypeInfo, v1, v2);
    byte_4B17DFC = 1;
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

  if ( (byte_4B17DFB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17DFB = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v9 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v9, v2, v3, v4, v5, v6, v7);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x26
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  System_String_o *v21; // x23
  int m_CancellationTokenSource; // w8
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  int32_t fontSize; // w4
  struct ScriptBackLog_o *backLogDialog; // x7
  UILabel_o **p_main; // x1
  UILabel_o **p_ruby; // x2
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v30; // x19
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  System_String_o *v33; // x23
  int v34; // w8
  ScriptLogMessage_o *v35; // x24
  struct ScriptBackLog_o *v36; // x23
  float v37; // s0
  int v38; // w8
  float v39; // s8
  const MethodInfo *v40; // x1
  System_String_o *v41; // x23
  ScriptLogMessage_o *v42; // x23
  int32_t v43; // w0
  System_String_o **p_mainPrefab; // x8
  UILabel_o *MainLabel; // x0
  int64_t v46; // x2
  char v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int v52; // w8
  ScriptLogMessage_o *v53; // x23
  UILabel_o *RubyLabel; // x0
  int64_t v55; // x2
  char v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_String_o *rubyPrefab; // x24
  ScriptLogMessage_o *v62; // x24
  int v63; // w25
  int32_t v64; // w0
  UnityEngine_Vector2_o v65; // 0:s1.4,4:s2.4

  v10 = text;
  v11 = this;
  if ( (byte_4B17DEF & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, text, colorTag);
    sub_1BCA7E0(&StringLiteral_21335/*"line"*/, v12, v13);
    this = (ScriptLogMessage_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B17DEF = 1;
  }
  analyzeLabel = v11->fields.analyzeLabel;
  if ( !analyzeLabel
    || (analyzeLabel->fields.colorTag = colorTag,
        analyzeLabel->fields.stepTime = 0.0,
        sub_1BCA784(
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
    sub_1BCAA3C(this, text);
  }
  if ( System_String__get_Chars(v10, 0, 0LL) != 91 )
  {
    ScriptLogMessage__FetchMainLabel(v11, v18);
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
    ScriptLogMessage__FetchMainLabel(v11, v19);
    ScriptLogMessage__FetchRubyLabel(v11, v20);
    v21 = System_String__Substring_62420224(v10, 2, v10->fields._stringLength - 3, 0LL);
    this = (ScriptLogMessage_o *)sub_1BCA888(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( LODWORD(this->fields.m_CancellationTokenSource) )
    {
      LOWORD(this->fields.backLogDialog) = 58;
      if ( !v21 )
        goto LABEL_60;
      this = (ScriptLogMessage_o *)System_String__Split_62423376(v21, (System_Char_array *)this, 0LL);
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
    sub_1BCAA44(this, text);
  }
  if ( System_String__get_Chars(v10, 1, 0LL) == 94 )
  {
    ScriptLogMessage__FetchImageSprite(v11, v32);
    v33 = System_String__Substring_62420224(v10, 2, v10->fields._stringLength - 3, 0LL);
    this = (ScriptLogMessage_o *)sub_1BCA888(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v33 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_62423376(v33, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_60;
    v34 = (int)this->fields.m_CancellationTokenSource;
    v35 = this;
    if ( !v34 )
      goto LABEL_61;
    v36 = this->fields.backLogDialog;
    if ( v34 <= 1 )
    {
      this = (ScriptLogMessage_o *)sub_1BCA888(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_60;
      text = (System_String_o *)this;
      if ( LODWORD(this->fields.m_CancellationTokenSource) )
      {
        LOWORD(this->fields.backLogDialog) = 58;
        if ( !v36 )
          goto LABEL_60;
        this = (ScriptLogMessage_o *)System_String__Split_62423376(
                                       (System_String_o *)v36,
                                       (System_Char_array *)this,
                                       0LL);
        if ( !this )
          goto LABEL_60;
        v52 = (int)this->fields.m_CancellationTokenSource;
        v53 = this;
        if ( v52 <= 1 )
        {
          if ( v52 )
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
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&analyzeLabel->fields.ruby,
            (int64_t)RubyLabel,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60);
          if ( LODWORD(v53->fields.m_CancellationTokenSource) >= 2 )
          {
            ScriptMessageLabel__UpdateImageRuby(
              analyzeLabel,
              &analyzeLabel->fields.image,
              &analyzeLabel->fields.ruby,
              &v11->fields.dispPosition,
              v11->fields.fontSize,
              (System_String_o *)v53->fields.backLogDialog,
              (System_String_o *)v53->fields.mainPrefab,
              v11->fields.fontType,
              v11->fields.horizontalAlign,
              0LL);
            goto LABEL_15;
          }
        }
      }
      goto LABEL_61;
    }
    v37 = System_Single__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
    v38 = (int)v35->fields.m_CancellationTokenSource;
    v39 = v37;
    if ( v38 == 2 )
    {
      ScriptMessageLabel__UpdateImage_42446300(
        analyzeLabel,
        &analyzeLabel->fields.image,
        &v11->fields.dispPosition,
        v11->fields.fontSize,
        v37,
        (System_String_o *)v36,
        v11->fields.horizontalAlign,
        0LL);
      goto LABEL_15;
    }
    if ( v38 <= 3 )
    {
      if ( (unsigned int)v38 > 2 )
      {
        rubyPrefab = (System_String_o *)v35->fields.rubyPrefab;
        this = (ScriptLogMessage_o *)sub_1BCA888(char___TypeInfo, 1LL);
        if ( !this )
          goto LABEL_60;
        text = (System_String_o *)this;
        if ( LODWORD(this->fields.m_CancellationTokenSource) )
        {
          LOWORD(this->fields.backLogDialog) = 44;
          if ( !rubyPrefab )
            goto LABEL_60;
          this = (ScriptLogMessage_o *)System_String__Split_62423376(rubyPrefab, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_60;
          v62 = this;
          if ( LODWORD(this->fields.m_CancellationTokenSource) )
          {
            this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0LL);
            if ( LODWORD(v62->fields.m_CancellationTokenSource) > 1 )
            {
              v63 = (int)this;
              v64 = System_Int32__Parse((System_String_o *)v62->fields.mainPrefab, 0LL);
              v65.fields.x = (float)v63;
              v65.fields.y = (float)v64;
              ScriptMessageLabel__UpdateImage_42446452(
                analyzeLabel,
                &analyzeLabel->fields.image,
                &v11->fields.dispPosition,
                v11->fields.fontSize,
                v39,
                (System_String_o *)v36,
                v65,
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
      MainLabel = ScriptLogMessage__FetchMainLabel(v11, v40);
      analyzeLabel->fields.main = MainLabel;
      sub_1BCA784((PartyOrganizationUtility_o *)&analyzeLabel->fields, (int64_t)MainLabel, v46, v47, v48, v49, v50, v51);
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
    ScriptLogMessage__FetchImageSprite(v11, v40);
    v41 = System_String__Substring_62420224(v10, 2, v10->fields._stringLength - 3, 0LL);
    this = (ScriptLogMessage_o *)sub_1BCA888(char___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_60;
    text = (System_String_o *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    LOWORD(this->fields.backLogDialog) = 32;
    if ( !v41 )
      goto LABEL_60;
    this = (ScriptLogMessage_o *)System_String__Split_62423376(v41, (System_Char_array *)this, 0LL);
    if ( !this )
      goto LABEL_60;
    v42 = this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_61;
    v43 = System_Int32__Parse((System_String_o *)this->fields.backLogDialog, 0LL);
    if ( SLODWORD(v42->fields.m_CancellationTokenSource) >= 2 )
      p_mainPrefab = (System_String_o **)&v42->fields.mainPrefab;
    else
      p_mainPrefab = (System_String_o **)&StringLiteral_21335/*"line"*/;
    ScriptMessageLabel__UpdateLine(
      analyzeLabel,
      &analyzeLabel->fields.image,
      &v11->fields.dispPosition,
      v11->fields.fontSize,
      v43,
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
  v30 = v11->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL);
  if ( !v30 )
    goto LABEL_60;
  ScriptBackLog__AddLog(v30, (ScriptMessageLabel_o *)this, v31);
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)v9, (int64_t)objectName, v12, v13, v14, v15, v16, v17);
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
void __fastcall ScriptLogMessage__AddText_42395068(
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

  if ( (byte_4B17DF9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17DF9 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.talkName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
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
  __int64 v4; // x2
  ScriptLogMessage_o *v5; // x20
  __int64 v6; // x2
  ScriptLogMessage_o *v7; // x20

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_10;
  image = (UnityEngine_Component_o *)analyzeLabel->fields.image;
  if ( !image )
    goto LABEL_10;
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)analyzeLabel->fields.image,
                                 0LL);
  v5 = this;
  if ( !byte_4B109C1 )
  {
    this = (ScriptLogMessage_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v4);
    byte_4B109C1 = 1;
  }
  if ( !v5 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(image, 0LL);
  v7 = this;
  if ( !byte_4B109C6 )
  {
    this = (ScriptLogMessage_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7 )
LABEL_10:
    sub_1BCAA3C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v7,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UISprite_o *)image;
}


UILabel_o *__fastcall ScriptLogMessage__FetchMainLabel(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *main; // x19
  __int64 v4; // x2
  ScriptLogMessage_o *v5; // x20
  __int64 v6; // x2
  ScriptLogMessage_o *v7; // x20

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_10;
  main = (UnityEngine_Component_o *)analyzeLabel->fields.main;
  if ( !main )
    goto LABEL_10;
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)analyzeLabel->fields.main,
                                 0LL);
  v5 = this;
  if ( !byte_4B109C1 )
  {
    this = (ScriptLogMessage_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v4);
    byte_4B109C1 = 1;
  }
  if ( !v5 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(main, 0LL);
  v7 = this;
  if ( !byte_4B109C6 )
  {
    this = (ScriptLogMessage_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v6);
    byte_4B109C6 = 1;
  }
  if ( !v7 )
LABEL_10:
    sub_1BCAA3C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v7,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0LL);
  return (UILabel_o *)main;
}


UILabel_o *__fastcall ScriptLogMessage__FetchRubyLabel(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *ruby; // x19
  ScriptLogMessage_o *v4; // x20
  __int64 v5; // x2
  ScriptLogMessage_o *v6; // x21
  __int64 v7; // x2
  ScriptLogMessage_o *v8; // x21

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
  v6 = this;
  if ( !byte_4B109C1 )
  {
    this = (ScriptLogMessage_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v5);
    byte_4B109C1 = 1;
  }
  if ( !v6 )
    goto LABEL_10;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  this = (ScriptLogMessage_o *)UnityEngine_Component__get_transform(ruby, 0LL);
  v8 = this;
  if ( !byte_4B109C6 )
  {
    this = (ScriptLogMessage_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v7);
    byte_4B109C6 = 1;
  }
  if ( !v8 )
LABEL_10:
    sub_1BCAA3C(this, method);
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v8,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t defaultFontSize; // w19

  if ( (byte_4B17DFA & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v4, v5);
    byte_4B17DFA = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_915/*"-"*/, defaultFontSize, 0LL);
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
  __int64 v2; // x2
  int32_t fontSize; // w19

  if ( (byte_4B17DF6 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, method, v2);
    byte_4B17DF6 = 1;
  }
  fontSize = this->fields.fontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, method);
  return ScriptMessageLabel__GetFontSizeString(fontSize, 0LL);
}


void __fastcall ScriptLogMessage__Init(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  int32_t defaultFontSize; // w20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ScriptMessageLabel_o *v23; // x21
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  Il2CppObject *mainPrefab; // x21
  int64_t transform; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v37; // x22
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct UnityEngine_Font_o *trueTypeFont; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  UnityEngine_GameObject_o *v57; // x21
  int32_t v58; // w0
  struct ScriptMessageLabel_o *v59; // x22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  UnityEngine_GameObject_o *v66; // x21
  int32_t v67; // w0
  struct ScriptMessageLabel_o *v68; // x22
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  UnityEngine_GameObject_o *v75; // x21
  int32_t v76; // w0
  struct ScriptMessageLabel_o *v77; // x22
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct ScriptMessageLabel_o *v84; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v87; // s0
  int32_t v88; // w1
  int32_t rubyFontSize; // w8
  float v90; // s1
  float v91; // s0
  float v92; // s0
  float v93; // s1
  const MethodInfo *v94; // x1
  const MethodInfo *v95; // x1

  if ( (byte_4B17DEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_25507/*"■"*/, v16, v17);
    byte_4B17DEE = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    ScriptLogMessage__ReleasePlayVoice(this, method);
    defaultFontSize = this->fields.defaultFontSize;
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v18);
    this->fields.defaultFontSize = ScriptMessageLabel__GetFontSize(
                                     (System_String_o *)StringLiteral_915/*"-"*/,
                                     defaultFontSize,
                                     0LL);
    v23 = (ScriptMessageLabel_o *)sub_1BCAA2C(ScriptMessageLabel_TypeInfo, v20, v21, v22);
    ScriptMessageLabel___ctor(v23, 0LL);
    this->fields.analyzeLabel = v23;
    p_analyzeLabel = &this->fields.analyzeLabel;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.analyzeLabel, (int64_t)v23, v25, v26, v27, v28, v29, v30);
    mainPrefab = (Il2CppObject *)this->fields.mainPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           mainPrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v35 = (UnityEngine_GameObject_o *)transform;
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
    UnityEngine_GameObject__set_layer(v35, layer, 0LL);
    v37 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v35,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v37 )
      goto LABEL_47;
    v37->fields.main = (struct UILabel_o *)transform;
    sub_1BCA784((PartyOrganizationUtility_o *)&v37->fields, transform, v38, v39, v40, v41, v42, v43);
    if ( !*p_analyzeLabel )
      goto LABEL_47;
    transform = (int64_t)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_47;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0LL);
    this->fields.defaultFontType = trueTypeFont;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.defaultFontType,
      (int64_t)trueTypeFont,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    this->fields.fontType = trueTypeFont;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.fontType,
      (int64_t)trueTypeFont,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.rubyPrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v57 = (UnityEngine_GameObject_o *)transform;
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
    v58 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v57, v58, 0LL);
    v59 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v57,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v59 )
      goto LABEL_47;
    v59->fields.ruby = (struct UILabel_o *)transform;
    sub_1BCA784((PartyOrganizationUtility_o *)&v59->fields.ruby, transform, v60, v61, v62, v63, v64, v65);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.imagePrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v66 = (UnityEngine_GameObject_o *)transform;
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
    v67 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v66, v67, 0LL);
    v68 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v66,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v68 )
      goto LABEL_47;
    v68->fields.image = (struct UISprite_o *)transform;
    sub_1BCA784((PartyOrganizationUtility_o *)&v68->fields.image, transform, v69, v70, v71, v72, v73, v74);
    transform = (int64_t)UnityEngine_Object__Instantiate_object_(
                           (Il2CppObject *)this->fields.playVoicePrefab,
                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_47;
    v75 = (UnityEngine_GameObject_o *)transform;
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
    v76 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v75, v76, 0LL);
    v77 = *p_analyzeLabel;
    transform = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           v75,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v77
      || (v77->fields.playVoice = (struct UIButton_o *)transform,
          sub_1BCA784((PartyOrganizationUtility_o *)&v77->fields.playVoice, transform, v78, v79, v80, v81, v82, v83),
          (v84 = *p_analyzeLabel) == 0LL)
      || (main = v84->fields.main,
          ruby = v84->fields.ruby,
          transform = ScriptLogMessage__GetDefaultFontSize(this, (const MethodInfo *)v34),
          !main) )
    {
LABEL_47:
      sub_1BCAA3C(transform, v34);
    }
    v87 = this->fields.fontScale * (float)(int)transform;
    if ( v87 == INFINITY )
      v88 = 0x80000000;
    else
      v88 = (int)v87;
    UILabel__set_fontSize(main, v88, 0LL);
    UILabel__set_text(main, (System_String_o *)StringLiteral_25507/*"■"*/, 0LL);
    transform = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))main->klass->vtable._22_get_localSize.method)(
                  main,
                  main->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v90;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_47;
      v92 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v92 == INFINITY )
        LODWORD(v34) = 0x80000000;
      else
        LODWORD(v34) = (int)v92;
      this->fields.rubyFontSize = v34;
    }
    else
    {
      v91 = this->fields.fontScale * (float)rubyFontSize;
      if ( v91 == INFINITY )
        v34 = 0x80000000LL;
      else
        v34 = (unsigned int)(int)v91;
      this->fields.rubyFontSize = v34;
      if ( !ruby )
        goto LABEL_47;
    }
    UILabel__set_fontSize(ruby, v34, 0LL);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_25507/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))ruby->klass->vtable._22_get_localSize.method)(
      ruby,
      ruby->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v93;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v93;
    ScriptLogMessage__Init(this, v94);
    this->fields.dispPosition = this->fields.startPosition;
    ScriptLogMessage__SetDefaultState(this, v95);
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
      sub_1BCAA3C(0LL, method);
    ScriptMessageLabel__Destroy(analyzeLabel, 0LL);
    this->fields.analyzeLabel = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_analyzeLabel, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.defaultFontType = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultFontType, 0LL, v11, v12, v13, v14, v15, v16);
    this->fields.fontType = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, 0LL, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4B17DF7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17DF7 = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  v9 = StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceAssetName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceObjectName = &this->fields.voiceObjectName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_voiceObjectName, (int64_t)v10, v12, v13, v14, v15, v16, v17);
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)v9, (int64_t)objectName, v12, v13, v14, v15, v16, v17);
  *(float *)&v9->monitor = volume;
}


void __fastcall ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  float v4; // s0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  float v11; // s0
  float defaultTextOnlyLineHeight; // s1
  float v13; // s2
  int32_t v14; // w8
  void *v15; // x1

  if ( (byte_4B17DF3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17DF3 = 1;
  }
  v4 = this->fields.dispPosition.fields.y
     - (float)((float)(this->fields.textOnlyLineHeight + this->fields.rubyLineHeight) + this->fields.betweenLineHeight);
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = v4;
  v11 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  v13 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v14 = (int)v11;
  if ( v11 == INFINITY )
    v14 = 0x80000000;
  this->fields.fontSize = v14;
  this->fields.verticalAlign = 0;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v13;
  v15 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v15, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B17DF8 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptLogMessage_TypeInfo, isLineHead, *(_QWORD *)&lineLength);
    byte_4B17DF8 = 1;
  }
  if ( isLineHead )
  {
    horizontalAlign = this->fields.horizontalAlign;
    if ( horizontalAlign == 2 )
    {
      v10 = ScriptLogMessage_TypeInfo;
      if ( !ScriptLogMessage_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo, isLineHead);
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
            j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo, isLineHead);
            v9 = ScriptLogMessage_TypeInfo;
          }
          ALIGN_LEFT_BASE = v9->static_fields->ALIGN_LEFT_BASE;
        }
        goto LABEL_17;
      }
      v13 = ScriptLogMessage_TypeInfo;
      if ( !ScriptLogMessage_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo, isLineHead);
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
        sub_1BCA784(
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
        sub_1BCA784(
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
    sub_1BCAA3C(backLogDialog, assetName);
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
      sub_1BCAA3C(0LL, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLogMessage__SetDefaultState(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t DefaultFontSize; // w0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  float rubyLineHeight; // s3
  float v12; // s0
  float defaultTextOnlyLineHeight; // s1
  int32_t v14; // w8
  void *v15; // x1

  if ( (byte_4B17DF2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B17DF2 = 1;
  }
  DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, method);
  rubyLineHeight = this->fields.rubyLineHeight;
  v12 = this->fields.fontScale * (float)DefaultFontSize;
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.betweenLineHeight = this->fields.defaultBetweenLineHeight;
  v14 = (int)v12;
  if ( v12 == INFINITY )
    v14 = 0x80000000;
  this->fields.fontSize = v14;
  this->fields.verticalAlign = 0;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = defaultTextOnlyLineHeight + rubyLineHeight;
  v15 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.defaultColorTag, (int64_t)v15, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B17DF5 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, sizeName, verticalAlign);
    byte_4B17DF5 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, sizeName);
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
  if ( (byte_4B17DF4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, font, method);
    byte_4B17DF4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, font);
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_1BCAA3C(v5, v6);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)defaultFontType, v7, v8, v9, v10, v11, v12);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.talkName, (int64_t)text, v6, v7, v8, v9, v10, v11);
    fontType = this->fields.fontType;
    defaultFontType = this->fields.defaultFontType;
    this->fields.fontType = defaultFontType;
    sub_1BCA784(
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)fontType, v25, v26, v27, v28, v29, v30);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage__UpdateLabels(
        ScriptLogMessage_o *this,
        System_String_o *txt,
        bool isFoward,
        System_String_o *enforceColor,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x22
  __int64 Chars; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Text_StringBuilder_o *v59; // x24
  System_Text_StringBuilder_o **v60; // x23
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_String_o *defaultColorTag; // x1
  struct System_String_o **p_defaultColorTag; // x25
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x24
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  const MethodInfo *v83; // x3
  int32_t v84; // w27
  int v85; // w21
  __int64 v86; // x1
  int32_t v87; // w28
  int32_t BraceIndex; // w0
  int32_t v89; // w29
  System_String_o *v90; // x0
  __int64 v91; // x1
  int32_t v92; // w27
  System_String_o *String; // x0
  System_String_o *TagSplitString; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  System_Text_StringBuilder_o *v101; // x29
  __int64 v102; // x1
  __int64 v103; // x2
  ScriptReplaceString_c *v104; // x0
  int32_t playerGenderIndex; // w28
  struct System_String_o *v106; // x1
  System_String_o *v107; // x27
  const MethodInfo *v108; // x4
  char v109; // w2
  ScriptLogMessage_o *v110; // x0
  System_String_o *v111; // x1
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct System_String_o *v118; // x1
  System_String_o *v119; // x28
  int32_t v120; // w1
  int32_t v121; // w2
  System_String_o *v122; // x0
  __int64 *v123; // x8
  ScriptLogMessage_ProcAddLabel2_o *v124; // x9
  __int64 v125; // x1
  const MethodInfo *v126; // x1
  __int64 v127; // x1
  System_String_o *v128; // x27
  System_String_array *v129; // x0
  struct System_String_o *v130; // x1
  System_String_array *v131; // x27
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  System_String_o *v138; // x0
  __int64 v139; // x1
  System_Text_StringBuilder_o *v140; // x21
  const MethodInfo *v141; // x1
  ScriptLogMessage_ProcAddLabel2_o *v142; // [xsp+8h] [xbp-78h]
  System_String_o *enforceColora; // [xsp+10h] [xbp-70h]
  System_String_o *text; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B17DF0 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptLogMessage_ProcAddLabel2_TypeInfo, txt, isFoward);
    sub_1BCA7E0(&ScriptLogMessage_ProcAddLabel_TypeInfo, v9, v10);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v11, v12);
    sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__, v17, v18);
    sub_1BCA7E0(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__, v19, v20);
    sub_1BCA7E0(&ScriptLogMessage___c__DisplayClass52_0_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_23358/*"servantName"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_15997/*"[-]"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_20256/*"i"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_16199/*"[~1]"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_16134/*"[^"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22986/*"r"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_19122/*"effectmessage"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_21335/*"line"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_20447/*"image"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_16198/*"[~"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v45, v46);
    byte_4B17DF0 = 1;
  }
  text = 0LL;
  v47 = sub_1BCAA2C(ScriptLogMessage___c__DisplayClass52_0_TypeInfo, txt, isFoward, enforceColor);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_84;
  *(_QWORD *)(v47 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 24), (int64_t)this, v50, v51, v52, v53, v54, v55);
  *(_BYTE *)(v47 + 32) = isFoward;
  v59 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v56, v57, v58);
  System_Text_StringBuilder___ctor(v59, 0LL);
  *(_QWORD *)(v47 + 16) = v59;
  v60 = (System_Text_StringBuilder_o **)(v47 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 16), (int64_t)v59, v61, v62, v63, v64, v65, v66);
  if ( enforceColor )
  {
    this->fields.defaultColorTag = enforceColor;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)enforceColor,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  enforceColora = enforceColor;
  p_defaultColorTag = &this->fields.defaultColorTag;
  defaultColorTag = this->fields.defaultColorTag;
  *(_QWORD *)(v47 + 40) = defaultColorTag;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 40), (int64_t)defaultColorTag, v67, v68, v69, v70, v71, v72);
  v78 = sub_1BCAA2C(ScriptLogMessage_ProcAddLabel_TypeInfo, v75, v76, v77);
  ScriptLogMessage_ProcAddLabel___ctor(
    (ScriptLogMessage_ProcAddLabel_o *)v78,
    (Il2CppObject *)v47,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    v79);
  v142 = (ScriptLogMessage_ProcAddLabel2_o *)sub_1BCAA2C(ScriptLogMessage_ProcAddLabel2_TypeInfo, v80, v81, v82);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v142,
    (Il2CppObject *)v47,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    v83);
  if ( !txt )
    goto LABEL_84;
  if ( txt->fields._stringLength < 1 )
    goto LABEL_82;
  v84 = 0;
  v85 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v84, 0LL) != 91 )
    {
      v101 = *v60;
      Chars = System_String__get_Chars(txt, v84, 0LL);
      if ( !v101 )
        goto LABEL_84;
      v87 = v84 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_61565444(v101, Chars, 0LL);
      goto LABEL_37;
    }
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v86);
    v87 = v84 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v84 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*v60;
      if ( !*v60 )
        goto LABEL_84;
      Chars = (__int64)System_Text_StringBuilder__Append_61563116(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15978/*"["*/,
                         0LL);
      goto LABEL_37;
    }
    v89 = BraceIndex;
    Chars = System_String__get_Chars(txt, v87, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v78 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
      v90 = System_String__Substring_62420224(txt, v84 + 2, v85 + v89 - 2, 0LL);
      v92 = System_Int32__Parse(v90, 0LL);
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v91);
      String = ScriptReplaceString__GetString(v92, 0LL);
      TagSplitString = System_String__Concat_62401220(String, (System_String_o *)StringLiteral_15997/*"[-]"*/, 0LL);
LABEL_33:
      v106 = *(struct System_String_o **)(v47 + 40);
      v107 = TagSplitString;
      this->fields.defaultColorTag = v106;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)v106,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100);
      v109 = *(_BYTE *)(v47 + 32);
      v110 = this;
      v111 = v107;
LABEL_34:
      ScriptLogMessage__UpdateLabels(v110, v111, v109, enforceColora, v108);
      v118 = this->fields.defaultColorTag;
      *(_QWORD *)(v47 + 40) = v118;
LABEL_35:
      sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 40), (int64_t)v118, v112, v113, v114, v115, v116, v117);
      goto LABEL_36;
    }
    Chars = System_String__get_Chars(txt, v87, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v78 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v102);
      if ( !byte_4B17C7E )
      {
        sub_1BCA7E0(&ScriptReplaceString_TypeInfo, v102, v103);
        byte_4B17C7E = 1;
      }
      v104 = ScriptReplaceString_TypeInfo;
      if ( !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo, v102);
        v104 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v104->static_fields->playerGenderIndex;
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v102);
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v84 + 2, playerGenderIndex, 0LL);
      goto LABEL_33;
    }
    Chars = System_String__get_Chars(txt, v87, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v78 )
        goto LABEL_84;
      (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
      Chars = (__int64)System_String__Substring_62420224(txt, v84, v85 + v89 + 1, 0LL);
      goto LABEL_51;
    }
    Chars = System_String__get_Chars(txt, v87, 0LL);
    if ( (unsigned __int16)Chars != 61 )
      break;
LABEL_36:
    v87 = v89 + 1;
LABEL_37:
    v85 = -v87;
    v84 = v87;
    if ( v87 >= txt->fields._stringLength )
      goto LABEL_82;
  }
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v49);
  Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v87, 0LL);
  if ( !Chars )
    goto LABEL_84;
  v119 = (System_String_o *)Chars;
  Chars = System_String__Equals_62409536((System_String_o *)Chars, (System_String_o *)StringLiteral_20447/*"image"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v78 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
    v120 = v84 + 7;
    v121 = v85 + v89 - 7;
    goto LABEL_49;
  }
  Chars = System_String__Equals_62409536(v119, (System_String_o *)StringLiteral_19122/*"effectmessage"*/, 0LL);
  if ( (Chars & 1) != 0 )
    goto LABEL_36;
  Chars = System_String__Equals_62409536(v119, (System_String_o *)StringLiteral_20256/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v78 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
    v120 = v84 + 3;
    v121 = v85 + v89 - 3;
LABEL_49:
    v122 = System_String__Substring_62420224(txt, v120, v121, 0LL);
    v123 = &StringLiteral_16134/*"[^"*/;
LABEL_50:
    Chars = (__int64)System_String__Concat_62412480(
                       (System_String_o *)*v123,
                       v122,
                       (System_String_o *)StringLiteral_16236/*"]"*/,
                       0LL);
LABEL_51:
    v124 = v142;
    if ( !v142 )
      goto LABEL_84;
    v125 = Chars;
LABEL_53:
    Chars = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v124->fields.m_target)(
              v124->fields.original_method_info,
              v125,
              *(_QWORD *)&v124->fields.extra_arg);
    goto LABEL_36;
  }
  Chars = System_String__Equals_62409536(v119, (System_String_o *)StringLiteral_22986/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v78 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v126);
    if ( enforceColora )
    {
      *p_defaultColorTag = enforceColora;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
        (int64_t)enforceColora,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117);
    }
    v118 = *p_defaultColorTag;
    *(_QWORD *)(v47 + 40) = *p_defaultColorTag;
    goto LABEL_35;
  }
  Chars = System_String__Equals_62409536(v119, (System_String_o *)StringLiteral_23358/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v78 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
    v128 = System_String__Substring_62420224(txt, v84 + 12, v85 + v89 - 12, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v127);
    v129 = ScriptMessageLabel__AnalysTagParam(v128, 0, 0LL);
    v130 = *(struct System_String_o **)(v47 + 40);
    v131 = v129;
    this->fields.defaultColorTag = v130;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.defaultColorTag,
      (int64_t)v130,
      v132,
      v133,
      v134,
      v135,
      v136,
      v137);
    v138 = ScriptMessageLabel__GetServantChangeName(v131, 0LL);
    v109 = *(_BYTE *)(v47 + 32);
    v111 = v138;
    v110 = this;
    goto LABEL_34;
  }
  Chars = System_String__StartsWith(v119, (System_String_o *)StringLiteral_21335/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v78 )
      goto LABEL_84;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
    Chars = (__int64)System_String__Substring_62420224(txt, v84 + 5, v85 + v89 - 5, 0LL);
    if ( !Chars )
      goto LABEL_84;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v122 = System_String__Trim((System_String_o *)Chars, 0LL);
      v123 = &StringLiteral_16198/*"[~"*/;
      goto LABEL_50;
    }
    v124 = v142;
    if ( !v142 )
      goto LABEL_84;
    v125 = StringLiteral_16199/*"[~1]"*/;
    goto LABEL_53;
  }
  if ( v89 < txt->fields._stringLength )
  {
    text = System_String__Substring_62420224(txt, v84, v85 + v89 + 1, 0LL);
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v139);
    ScriptMessageLabel__EnforceColorTag((System_String_o **)(v47 + 40), &text, enforceColora, 0LL);
    Chars = (__int64)*v60;
    if ( !*v60 )
      goto LABEL_84;
    Chars = (__int64)System_Text_StringBuilder__Append_61563116((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_36;
  }
  v140 = *v60;
  Chars = (__int64)System_String__Substring(txt, v84, 0LL);
  if ( !v140 )
    goto LABEL_84;
  Chars = (__int64)System_Text_StringBuilder__Append_61563116(v140, (System_String_o *)Chars, 0LL);
LABEL_82:
  if ( !v78 )
LABEL_84:
    sub_1BCAA3C(Chars, v49);
  (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(*(_QWORD *)(v78 + 64), *(_QWORD *)(v78 + 40));
  ScriptLogMessage__UpdatePlayVoice(this, v141);
}


void __fastcall ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  ScriptMessageLabel_o *analyzeLabel; // x20
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  float voiceVolume; // s8
  System_Action_T1__T2__T3__o *v13; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  __int64 v15; // x1
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1

  if ( (byte_4B17DF1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__string__bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScriptLogMessage_SetBackLogReplayingVoice__, v4, v5);
    byte_4B17DF1 = 1;
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
      v13 = (System_Action_T1__T2__T3__o *)sub_1BCAA2C(System_Action_string__string__bool__TypeInfo, v6, v7, v8);
      System_Action_object__object__bool____ctor(
        v13,
        (Il2CppObject *)this,
        Method_ScriptLogMessage_SetBackLogReplayingVoice__,
        0LL);
      if ( !analyzeLabel
        || (ScriptMessageLabel__UpdatePlayVoice(
              analyzeLabel,
              voiceAssetName,
              voiceObjectName,
              voiceVolume,
              (System_Action_string__string__bool__o *)v13,
              0LL),
            backLogDialog = this->fields.backLogDialog,
            LogLabel = ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL),
            !backLogDialog) )
      {
        sub_1BCAA3C(LogLabel, v15);
      }
      ScriptBackLog__AddLog(backLogDialog, LogLabel, v17);
      ScriptLogMessage__ReleasePlayVoice(this, v18);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0E2B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E274;
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A0E330;
LABEL_8:
      this->fields.m_target = v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = (Il2CppObject *)sub_1A0E310;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v15, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E2C8;
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
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
    sub_1BCAA3C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (char *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  *((_QWORD *)tmpTxt + 20) = tmpColorTag;
  sub_1BCA784((PartyOrganizationUtility_o *)(tmpTxt + 160), (int64_t)tmpColorTag, v4, v5, v6, v7, v8, v9);
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
    sub_1BCAA3C(this, text);
  tmpColorTag = (struct System_Text_StringBuilder_o *)v8->fields.tmpColorTag;
  this[3].fields.tmpTxt = tmpColorTag;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this[3].fields,
    (int64_t)tmpColorTag,
    (int64_t)method,
    v3,
    (System_String_o *)v4,
    v5,
    v6,
    v7);
}