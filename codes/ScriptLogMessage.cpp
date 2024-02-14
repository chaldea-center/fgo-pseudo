void __fastcall ScriptLogMessage___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4210AAB & 1) == 0 )
  {
    sub_B0D8A4(&ScriptLogMessage_TypeInfo, v1);
    byte_4210AAB = 1;
  }
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_LEFT_BASE = -440.0;
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_CENTER_BASE = 0.0;
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void __fastcall ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_4210AAA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4210AAA = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  v3 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.defaultColorTag, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptLogMessage__AddLabel(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  ScriptLogMessage_o *v8; // x19
  __int64 v9; // x1
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x25
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  System_String_o *v15; // x22
  int backLogDialog; // w8
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  int32_t fontSize; // w4
  System_String_o *mainPrefab; // x7
  UILabel_o **p_main; // x1
  UILabel_o **p_ruby; // x2
  UnityEngine_Vector2_o *p_dispPosition; // x3
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v25; // x19
  const MethodInfo *v26; // x1
  System_String_o *v27; // x22
  int v28; // w8
  ScriptLogMessage_o *v29; // x23
  System_String_o *v30; // x22
  float v31; // s0
  int v32; // w8
  float v33; // s8
  const MethodInfo *v34; // x1
  System_String_o *v35; // x0
  int32_t v36; // w22
  int32_t v37; // w0
  UILabel_o *MainLabel; // x0
  const MethodInfo *v39; // x1
  int v40; // w8
  ScriptLogMessage_o *v41; // x22
  UILabel_o *RubyLabel; // x0
  System_String_o *imagePrefab; // x23
  ScriptLogMessage_o *v44; // x23
  int v45; // w24
  int32_t v46; // w0
  __int64 v47; // x0
  UnityEngine_Vector2_o v48; // 0:s1.4,4:s2.4

  v8 = this;
  if ( (byte_4210A9E & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, text);
    this = (ScriptLogMessage_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4210A9E = 1;
  }
  analyzeLabel = v8->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_59;
  analyzeLabel->fields.colorTag = colorTag;
  analyzeLabel->fields.stepTime = 0.0;
  this = (ScriptLogMessage_o *)sub_B0D840(&analyzeLabel->fields.colorTag, colorTag);
  if ( !text )
    goto LABEL_59;
  dispPosition = v8->fields.dispPosition;
  if ( System_String__get_Chars(text, 0, 0LL) == 91 )
  {
    if ( System_String__get_Chars(text, 1, 0LL) == 35 )
    {
      ScriptLogMessage__FetchMainLabel(v8, v13);
      ScriptLogMessage__FetchRubyLabel(v8, v14);
      v15 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
      this = (ScriptLogMessage_o *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_59;
      if ( !LODWORD(this->fields.backLogDialog) )
        goto LABEL_60;
      LOWORD(this->fields.mainPrefab) = 58;
      if ( v15 )
      {
        this = (ScriptLogMessage_o *)System_String__Split(v15, (System_Char_array *)this, 0LL);
        if ( this )
        {
          backLogDialog = (int)this->fields.backLogDialog;
          if ( backLogDialog )
          {
            verticalAlign = v8->fields.verticalAlign;
            maxFontSize = v8->fields.maxFontSize;
            fontSize = v8->fields.fontSize;
            mainPrefab = (System_String_o *)this->fields.mainPrefab;
            p_main = &analyzeLabel->fields.main;
            p_ruby = &analyzeLabel->fields.ruby;
            p_dispPosition = &v8->fields.dispPosition;
            if ( backLogDialog <= 1 )
            {
              ScriptMessageLabel__UpdateBouten(
                analyzeLabel,
                p_main,
                p_ruby,
                p_dispPosition,
                fontSize,
                maxFontSize,
                verticalAlign,
                mainPrefab,
                v8->fields.fontType,
                0LL);
              if ( !isFoward )
                goto LABEL_20;
            }
            else
            {
              ScriptMessageLabel__UpdateRuby(
                analyzeLabel,
                p_main,
                p_ruby,
                p_dispPosition,
                fontSize,
                maxFontSize,
                verticalAlign,
                mainPrefab,
                (System_String_o *)this->fields.rubyPrefab,
                v8->fields.fontType,
                0,
                0LL);
              if ( !isFoward )
                goto LABEL_20;
            }
            goto LABEL_17;
          }
LABEL_60:
          v47 = sub_B0D9A8(this);
          sub_B0D948(v47, 0LL);
        }
      }
      goto LABEL_59;
    }
    if ( System_String__get_Chars(text, 1, 0LL) == 94 )
    {
      ScriptLogMessage__FetchImageSprite(v8, v26);
      v27 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
      this = (ScriptLogMessage_o *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_59;
      if ( !LODWORD(this->fields.backLogDialog) )
        goto LABEL_60;
      LOWORD(this->fields.mainPrefab) = 32;
      if ( !v27 )
        goto LABEL_59;
      this = (ScriptLogMessage_o *)System_String__Split(v27, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_59;
      v28 = (int)this->fields.backLogDialog;
      v29 = this;
      if ( !v28 )
        goto LABEL_60;
      v30 = (System_String_o *)this->fields.mainPrefab;
      if ( v28 <= 1 )
      {
        this = (ScriptLogMessage_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( this )
        {
          if ( !LODWORD(this->fields.backLogDialog) )
            goto LABEL_60;
          LOWORD(this->fields.mainPrefab) = 58;
          if ( v30 )
          {
            this = (ScriptLogMessage_o *)System_String__Split(v30, (System_Char_array *)this, 0LL);
            if ( this )
            {
              v40 = (int)this->fields.backLogDialog;
              v41 = this;
              if ( v40 <= 1 )
              {
                if ( v40 )
                {
                  ScriptMessageLabel__UpdateImage(
                    analyzeLabel,
                    &analyzeLabel->fields.image,
                    &v8->fields.dispPosition,
                    v8->fields.fontSize,
                    (System_String_o *)this->fields.mainPrefab,
                    v8->fields.horizontalAlign,
                    0LL);
                  if ( !isFoward )
                    goto LABEL_20;
                  goto LABEL_17;
                }
              }
              else
              {
                RubyLabel = ScriptLogMessage__FetchRubyLabel(v8, v39);
                analyzeLabel->fields.ruby = RubyLabel;
                this = (ScriptLogMessage_o *)sub_B0D840(&analyzeLabel->fields.ruby, RubyLabel);
                if ( LODWORD(v41->fields.backLogDialog) >= 2 )
                {
                  ScriptMessageLabel__UpdateImageRuby(
                    analyzeLabel,
                    &analyzeLabel->fields.image,
                    &analyzeLabel->fields.ruby,
                    &v8->fields.dispPosition,
                    v8->fields.fontSize,
                    (System_String_o *)v41->fields.mainPrefab,
                    (System_String_o *)v41->fields.rubyPrefab,
                    v8->fields.fontType,
                    v8->fields.horizontalAlign,
                    0LL);
                  if ( !isFoward )
                    goto LABEL_20;
                  goto LABEL_17;
                }
              }
              goto LABEL_60;
            }
          }
        }
LABEL_59:
        sub_B0D97C(this);
      }
      v31 = System_Single__Parse((System_String_o *)this->fields.rubyPrefab, 0LL);
      v32 = (int)v29->fields.backLogDialog;
      v33 = v31;
      if ( v32 == 2 )
      {
        ScriptMessageLabel__UpdateImage_33984332(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &v8->fields.dispPosition,
          v8->fields.fontSize,
          v31,
          v30,
          v8->fields.horizontalAlign,
          0LL);
        if ( !isFoward )
          goto LABEL_20;
        goto LABEL_17;
      }
      if ( v32 <= 3 )
      {
        if ( (unsigned int)v32 <= 2 )
          goto LABEL_60;
        imagePrefab = (System_String_o *)v29->fields.imagePrefab;
        this = (ScriptLogMessage_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( this )
        {
          if ( !LODWORD(this->fields.backLogDialog) )
            goto LABEL_60;
          LOWORD(this->fields.mainPrefab) = 44;
          if ( imagePrefab )
          {
            this = (ScriptLogMessage_o *)System_String__Split(imagePrefab, (System_Char_array *)this, 0LL);
            if ( this )
            {
              v44 = this;
              if ( LODWORD(this->fields.backLogDialog) )
              {
                this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
                if ( LODWORD(v44->fields.backLogDialog) > 1 )
                {
                  v45 = (int)this;
                  v46 = System_Int32__Parse((System_String_o *)v44->fields.rubyPrefab, 0LL);
                  v48.fields.x = (float)v45;
                  v48.fields.y = (float)v46;
                  ScriptMessageLabel__UpdateImage_33984460(
                    analyzeLabel,
                    &analyzeLabel->fields.image,
                    &v8->fields.dispPosition,
                    v8->fields.fontSize,
                    v33,
                    v30,
                    v48,
                    v8->fields.horizontalAlign,
                    0LL);
                  if ( !isFoward )
                    goto LABEL_20;
                  goto LABEL_17;
                }
              }
              goto LABEL_60;
            }
          }
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( System_String__get_Chars(text, 1, 0LL) == 126 )
      {
        ScriptLogMessage__FetchImageSprite(v8, v34);
        v35 = System_String__Substring_43913640(text, 2, text->fields.m_stringLength - 3, 0LL);
        v36 = v8->fields.fontSize;
        v37 = System_Int32__Parse(v35, 0LL);
        ScriptMessageLabel__UpdateLine(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &v8->fields.dispPosition,
          v36,
          v37,
          0LL);
        if ( !isFoward )
          goto LABEL_20;
        goto LABEL_17;
      }
      MainLabel = ScriptLogMessage__FetchMainLabel(v8, v34);
      analyzeLabel->fields.main = MainLabel;
      sub_B0D840(&analyzeLabel->fields, MainLabel);
      ScriptMessageLabel__UpdateLabel(
        analyzeLabel,
        &analyzeLabel->fields.main,
        &v8->fields.dispPosition,
        v8->fields.fontSize,
        v8->fields.maxFontSize,
        v8->fields.verticalAlign,
        text,
        v8->fields.fontType,
        0LL);
    }
  }
  else
  {
    ScriptLogMessage__FetchMainLabel(v8, v12);
    ScriptMessageLabel__UpdateLabel(
      analyzeLabel,
      &analyzeLabel->fields.main,
      &v8->fields.dispPosition,
      v8->fields.fontSize,
      v8->fields.maxFontSize,
      v8->fields.verticalAlign,
      text,
      v8->fields.fontType,
      0LL);
  }
  if ( !isFoward )
    goto LABEL_20;
LABEL_17:
  rubyText = analyzeLabel->fields.rubyText;
  analyzeLabel->fields.mainPosition.fields.x = analyzeLabel->fields.mainPosition.fields.x
                                             - analyzeLabel->fields.widthSize;
  if ( System_String__op_Inequality(rubyText, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    analyzeLabel->fields.rubyPosition.fields.x = analyzeLabel->fields.rubyPosition.fields.x
                                               - analyzeLabel->fields.widthSize;
  v8->fields.dispPosition = dispPosition;
LABEL_20:
  v25 = v8->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL);
  if ( !v25 )
    goto LABEL_59;
  ScriptBackLog__AddLog(v25, (ScriptMessageLabel_o *)this, 0LL);
}


void __fastcall ScriptLogMessage__AddPlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  ScriptLogMessage_o *v5; // x20

  v5 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_B0D840(&this->fields.voiceAssetName, assetName);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 208);
  sub_B0D840(v5, objectName);
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
void __fastcall ScriptLogMessage__AddText_17121916(
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
  void *v3; // x1

  if ( (byte_4210AA8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4210AA8 = 1;
  }
  v3 = StringLiteral_1/*""*/;
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.talkName, v3);
}


void __fastcall ScriptLogMessage__ClearText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  ScriptLogMessage__Init(this, method);
  this->fields.dispPosition = this->fields.startPosition;
  ScriptLogMessage__SetDefaultState(this, v3);
}


// local variable allocation has failed, the output may be wrong!
UISprite_o *__fastcall ScriptLogMessage__FetchImageSprite(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *image; // x19
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel
    || (image = (UnityEngine_Component_o *)analyzeLabel->fields.image) == 0LL
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)analyzeLabel->fields.image, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL),
        v8 = UnityEngine_Component__get_transform(image, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL),
        !v8) )
  {
    sub_B0D97C(this);
  }
  UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
  return (UISprite_o *)image;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptLogMessage__FetchMainLabel(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *main; // x19
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0
  UnityEngine_Transform_o *v8; // x20
  int v9; // s0

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel
    || (main = (UnityEngine_Component_o *)analyzeLabel->fields.main) == 0LL
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)analyzeLabel->fields.main, 0LL),
        *(UnityEngine_Vector3_o *)&v5 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v5, 0LL),
        v8 = UnityEngine_Component__get_transform(main, 0LL),
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_one(0LL),
        !v8) )
  {
    sub_B0D97C(this);
  }
  UnityEngine_Transform__set_localScale(v8, *(UnityEngine_Vector3_o *)&v9, 0LL);
  return (UILabel_o *)main;
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *__fastcall ScriptLogMessage__FetchRubyLabel(ScriptLogMessage_o *this, const MethodInfo *method)
{
  struct ScriptMessageLabel_o *analyzeLabel; // x8
  UnityEngine_Component_o *ruby; // x19
  UnityEngine_Transform_o *transform; // x21
  int v6; // s0
  UnityEngine_Transform_o *v9; // x21
  int v10; // s0

  analyzeLabel = this->fields.analyzeLabel;
  if ( !analyzeLabel
    || (ruby = (UnityEngine_Component_o *)analyzeLabel->fields.ruby) == 0LL
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)analyzeLabel->fields.ruby, 0LL),
        *(UnityEngine_Vector3_o *)&v6 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v6, 0LL),
        v9 = UnityEngine_Component__get_transform(ruby, 0LL),
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_one(0LL),
        !v9) )
  {
    sub_B0D97C(this);
  }
  UnityEngine_Transform__set_localScale(v9, *(UnityEngine_Vector3_o *)&v10, 0LL);
  UILabel__set_fontSize((UILabel_o *)ruby, this->fields.rubyFontSize, 0LL);
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

  if ( (byte_4210AA9 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v3);
    byte_4210AA9 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_753/*"-"*/, defaultFontSize, 0LL);
}


int32_t __fastcall ScriptLogMessage__GetDefaultScaledFontSize(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v2; // s0

  v2 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  if ( v2 == INFINITY )
    return (int)-v2;
  else
    return (int)v2;
}


System_String_o *__fastcall ScriptLogMessage__GetFontSizeString(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int32_t fontSize; // w19

  if ( (byte_4210AA5 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, method);
    byte_4210AA5 = 1;
  }
  fontSize = this->fields.fontSize;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
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
  __int64 v11; // x1
  __int64 v12; // x2
  ScriptMessageLabel_o *v13; // x21
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x21
  __int64 transform; // x0
  UnityEngine_GameObject_o *v17; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v19; // x22
  struct UnityEngine_Font_o *trueTypeFont; // x21
  UnityEngine_GameObject_o *v21; // x21
  int32_t v22; // w0
  struct ScriptMessageLabel_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x21
  int32_t v25; // w0
  struct ScriptMessageLabel_o *v26; // x22
  UnityEngine_GameObject_o *v27; // x21
  int32_t v28; // w0
  struct ScriptMessageLabel_o *v29; // x22
  const MethodInfo *v30; // x1
  struct ScriptMessageLabel_o *v31; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v34; // s0
  double v35; // d0
  int32_t rubyFontSize; // w8
  float v37; // s1
  float v38; // s0
  double v39; // d0
  int32_t v40; // w1
  float v41; // s0
  double v42; // d0
  float v43; // s1
  const MethodInfo *v44; // x1

  if ( (byte_4210A9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v4);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v8);
    sub_B0D8A4(&StringLiteral_23855/*"■"*/, v9);
    byte_4210A9D = 1;
  }
  if ( !this->fields.isInit )
  {
    this->fields.isInit = 1;
    ScriptLogMessage__ReleasePlayVoice(this, method);
    defaultFontSize = this->fields.defaultFontSize;
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    this->fields.defaultFontSize = ScriptMessageLabel__GetFontSize(
                                     (System_String_o *)StringLiteral_753/*"-"*/,
                                     defaultFontSize,
                                     0LL);
    v13 = (ScriptMessageLabel_o *)sub_B0D974(ScriptMessageLabel_TypeInfo, v11, v12);
    ScriptMessageLabel___ctor(v13, 0LL);
    p_analyzeLabel = &this->fields.analyzeLabel;
    this->fields.analyzeLabel = v13;
    sub_B0D840(&this->fields.analyzeLabel, v13);
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v17 = (UnityEngine_GameObject_o *)transform;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (__int64)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v17, layer, 0LL);
    v19 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v17,
                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v19 )
      goto LABEL_49;
    v19->fields.main = (struct UILabel_o *)transform;
    transform = sub_B0D840(&v19->fields, transform);
    if ( !*p_analyzeLabel )
      goto LABEL_49;
    transform = (__int64)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_49;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0LL);
    this->fields.defaultFontType = trueTypeFont;
    sub_B0D840(&this->fields.defaultFontType, trueTypeFont);
    this->fields.fontType = trueTypeFont;
    sub_B0D840(&this->fields.fontType, trueTypeFont);
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v21 = (UnityEngine_GameObject_o *)transform;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (__int64)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    v22 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v21, v22, 0LL);
    v23 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v21,
                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v23 )
      goto LABEL_49;
    v23->fields.ruby = (struct UILabel_o *)transform;
    sub_B0D840(&v23->fields.ruby, transform);
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.imagePrefab,
                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v24 = (UnityEngine_GameObject_o *)transform;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (__int64)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    v25 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v24, v25, 0LL);
    v26 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v24,
                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v26 )
      goto LABEL_49;
    v26->fields.image = (struct UISprite_o *)transform;
    sub_B0D840(&v26->fields.image, transform);
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.playVoicePrefab,
                           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v27 = (UnityEngine_GameObject_o *)transform;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (__int64)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    v28 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v27, v28, 0LL);
    v29 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v27,
                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v29
      || (v29->fields.playVoice = (struct UIButton_o *)transform,
          transform = sub_B0D840(&v29->fields.playVoice, transform),
          (v31 = *p_analyzeLabel) == 0LL)
      || (main = v31->fields.main,
          ruby = v31->fields.ruby,
          transform = ScriptLogMessage__GetDefaultFontSize(this, v30),
          !main) )
    {
LABEL_49:
      sub_B0D97C(transform);
    }
    v34 = this->fields.fontScale * (float)(int)transform;
    if ( v34 == INFINITY )
      v35 = -v34;
    else
      v35 = v34;
    UILabel__set_fontSize(main, (int)v35, 0LL);
    UILabel__set_text(main, (System_String_o *)StringLiteral_23855/*"■"*/, 0LL);
    transform = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))main->klass->vtable._22_get_localSize.method)(
                  main,
                  main->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v37;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_49;
      v41 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v41 == INFINITY )
        v42 = -INFINITY;
      else
        v42 = v41;
      v40 = (int)v42;
      this->fields.rubyFontSize = (int)v42;
    }
    else
    {
      v38 = this->fields.fontScale * (float)rubyFontSize;
      if ( v38 == INFINITY )
        v39 = -INFINITY;
      else
        v39 = v38;
      v40 = (int)v39;
      this->fields.rubyFontSize = (int)v39;
      if ( !ruby )
        goto LABEL_49;
    }
    UILabel__set_fontSize(ruby, v40, 0LL);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_23855/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))ruby->klass->vtable._22_get_localSize.method)(
      ruby,
      ruby->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v43;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v43;
    ScriptLogMessage__ClearText(this, v44);
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

  if ( this->fields.isInit )
  {
    p_analyzeLabel = &this->fields.analyzeLabel;
    analyzeLabel = this->fields.analyzeLabel;
    *((_BYTE *)p_analyzeLabel + 37) = 0;
    if ( !analyzeLabel )
      sub_B0D97C(0LL);
    ScriptMessageLabel__Destroy(analyzeLabel, 0LL);
    this->fields.analyzeLabel = 0LL;
    sub_B0D840(p_analyzeLabel, 0LL);
    this->fields.defaultFontType = 0LL;
    sub_B0D840(&this->fields.defaultFontType, 0LL);
    this->fields.fontType = 0LL;
    sub_B0D840(&this->fields.fontType, 0LL);
  }
}


void __fastcall ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  void *v3; // x1
  void *v4; // x1

  if ( (byte_4210AA6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4210AA6 = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.voiceAssetName, v3);
  v4 = StringLiteral_1/*""*/;
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.voiceObjectName, v4);
  this->fields.voiceVolume = 1.0;
  this->fields.isDelayAddPlayVoice = 0;
}


void __fastcall ScriptLogMessage__ReservePlayVoice(
        ScriptLogMessage_o *this,
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        const MethodInfo *method)
{
  ScriptLogMessage_o *v5; // x20

  v5 = this;
  this->fields.isReservedAddPlayVoice = 1;
  this->fields.voiceAssetName = assetName;
  sub_B0D840(&this->fields.voiceAssetName, assetName);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 208);
  sub_B0D840(v5, objectName);
  *(float *)&v5->monitor = volume;
}


void __fastcall ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  float v3; // s0
  float v4; // s0
  float v5; // s2
  double v6; // d3
  bool v7; // zf
  double v8; // d0
  void *v9; // x1

  if ( (byte_4210AA2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4210AA2 = 1;
  }
  v3 = this->fields.dispPosition.fields.y
     - (float)((float)(this->fields.textOnlyLineHeight + this->fields.rubyLineHeight) + this->fields.betweenLineHeight);
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = v3;
  v4 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  v5 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v6 = v4;
  v7 = v4 == INFINITY;
  v8 = -v4;
  if ( !v7 )
    v8 = v6;
  this->fields.textOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v5;
  this->fields.fontSize = (int)v8;
  this->fields.verticalAlign = 0;
  v9 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.defaultColorTag, v9);
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

  if ( (byte_4210AA7 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptLogMessage_TypeInfo, isLineHead);
    byte_4210AA7 = 1;
  }
  if ( isLineHead )
  {
    horizontalAlign = this->fields.horizontalAlign;
    if ( horizontalAlign == 2 )
    {
      v10 = ScriptLogMessage_TypeInfo;
      if ( (BYTE3(ScriptLogMessage_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptLogMessage_TypeInfo->_2.cctor_finished )
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
          if ( (BYTE3(ScriptLogMessage_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ScriptLogMessage_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo);
            v9 = ScriptLogMessage_TypeInfo;
          }
          ALIGN_LEFT_BASE = v9->static_fields->ALIGN_LEFT_BASE;
        }
        goto LABEL_20;
      }
      v13 = ScriptLogMessage_TypeInfo;
      if ( (BYTE3(ScriptLogMessage_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptLogMessage_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptLogMessage_TypeInfo);
        v13 = ScriptLogMessage_TypeInfo;
      }
      ALIGN_RIGHT_BASE = v13->static_fields->ALIGN_CENTER_BASE;
      v12 = this->fields.fontSize * lineLength / 2;
    }
    ALIGN_LEFT_BASE = ALIGN_RIGHT_BASE - (float)v12;
LABEL_20:
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
  struct ScriptBackLog_o *v9; // x8

  backLogDialog = this->fields.backLogDialog;
  if ( !backLogDialog
    || (backLogDialog->fields._ReplayingAssetName_k__BackingField = assetName,
        sub_B0D840(&backLogDialog->fields._ReplayingAssetName_k__BackingField, assetName),
        (backLogDialog = this->fields.backLogDialog) == 0LL)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        backLogDialog = (struct ScriptBackLog_o *)sub_B0D840(
                                                    &backLogDialog->fields._ReplayingObjectName_k__BackingField,
                                                    objectName),
        (v9 = this->fields.backLogDialog) == 0LL) )
  {
    sub_B0D97C(backLogDialog);
  }
  v9->fields._IsReplayingVoice_k__BackingField = isReplaying;
}


void __fastcall ScriptLogMessage__SetBetweenLineHeight(
        ScriptLogMessage_o *this,
        float height,
        const MethodInfo *method)
{
  if ( height >= 0.0 )
  {
    if ( !this )
      sub_B0D97C(0LL);
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
  float defaultTextOnlyLineHeight; // s2
  float rubyLineHeight; // s3
  float v6; // s0
  float defaultBetweenLineHeight; // w9
  float v8; // s2
  double v9; // d3
  bool v10; // zf
  double v11; // d0
  void *v12; // x1

  if ( (byte_4210AA1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4210AA1 = 1;
  }
  DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, method);
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  v6 = this->fields.fontScale * (float)DefaultFontSize;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  v8 = defaultTextOnlyLineHeight + rubyLineHeight;
  v9 = v6;
  v10 = v6 == INFINITY;
  v11 = -v6;
  if ( !v10 )
    v11 = v9;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  this->fields.beforeTextOnlyLineHeight = v8;
  this->fields.fontSize = (int)v11;
  this->fields.verticalAlign = 0;
  v12 = StringLiteral_1/*""*/;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.defaultColorTag, v12);
}


void __fastcall ScriptLogMessage__SetFontSize(
        ScriptLogMessage_o *this,
        System_String_o *sizeName,
        System_String_o *verticalAlign,
        const MethodInfo *method)
{
  int32_t defaultFontSize; // w22
  float v8; // s0
  double v9; // d0
  int32_t VerticalAlignFromString; // w0
  int32_t fontSize; // s0
  float textOnlyLineHeight; // s1
  float v13; // s0

  if ( (byte_4210AA4 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, sizeName);
    byte_4210AA4 = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  v8 = this->fields.fontScale * (float)ScriptMessageLabel__GetFontSize(sizeName, defaultFontSize, 0LL);
  if ( v8 == INFINITY )
    v9 = -v8;
  else
    v9 = v8;
  this->fields.fontSize = (int)v9;
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

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_4210AA3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, font);
    byte_4210AA3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_B0D97C(v5);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_B0D840(&this->fields.fontType, defaultFontType);
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
  double v4; // d0

  v3 = this->fields.fontScale * (float)fontSize;
  if ( v3 == INFINITY )
    v4 = -v3;
  else
    v4 = v3;
  this->fields.maxFontSize = (int)v4;
}


bool __fastcall ScriptLogMessage__SetTalkName(
        ScriptLogMessage_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  struct UnityEngine_Font_o *fontType; // x22
  struct UnityEngine_Font_o *defaultFontType; // x1
  const MethodInfo *v8; // x1
  int32_t DefaultFontSize; // w0
  float x; // s0
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x1

  if ( System_String__IsNullOrEmpty(text, 0LL) )
  {
    ScriptLogMessage__ClearTalkName(this, v5);
  }
  else
  {
    this->fields.talkName = text;
    sub_B0D840(&this->fields.talkName, text);
    fontType = this->fields.fontType;
    defaultFontType = this->fields.defaultFontType;
    this->fields.fontType = defaultFontType;
    sub_B0D840(&this->fields.fontType, defaultFontType);
    DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, v8);
    x = this->fields.startPosition.fields.x;
    this->fields.fontSize = DefaultFontSize;
    this->fields.verticalAlign = 0;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptLogMessage__UpdateLabels(this, text, 0, 0LL, v11);
    ScriptLogMessage__ReturnText(this, v12);
    this->fields.fontType = fontType;
    sub_B0D840(&this->fields.fontType, fontType);
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
  ScriptLogMessage___c__DisplayClass52_0_o *v28; // x22
  __int64 Chars; // x0
  System_Text_StringBuilder_o **p_tmpTxt; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  System_Text_StringBuilder_o *v33; // x24
  struct System_String_o **p_defaultColorTag; // x21
  struct System_String_o *v35; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  ScriptLogMessage_ProcAddLabel_o *v38; // x24
  __int64 v39; // x1
  __int64 v40; // x2
  int32_t v41; // w21
  int v42; // w25
  System_String_o *v43; // x0
  System_String_o *v44; // x27
  int32_t v45; // w1
  int32_t v46; // w2
  System_String_o *v47; // x1
  System_String_o *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x1
  const MethodInfo *v51; // x1
  struct System_String_o *defaultColorTag; // x1
  System_String_o *v53; // x21
  System_String_array *v54; // x21
  struct System_String_o *v55; // x1
  System_String_o *v56; // x0
  const MethodInfo *v57; // x4
  bool v58; // w2
  System_String_o *v59; // x1
  ScriptLogMessage_o *v60; // x0
  int32_t v61; // w27
  int32_t BraceIndex; // w0
  int32_t v63; // w28
  System_String_o *v64; // x0
  int32_t v65; // w21
  System_String_o *String; // x0
  System_String_o *v67; // x21
  struct System_String_o *tmpColorTag; // x1
  System_String_o *v69; // x3
  System_Text_StringBuilder_o *v70; // x28
  __int64 v71; // x1
  ScriptReplaceString_c *v72; // x0
  int32_t playerGenderIndex; // w27
  System_String_o *TagSplitString; // x21
  struct System_String_o *v75; // x1
  const MethodInfo *v76; // x1
  System_Text_StringBuilder_o *v77; // x22
  ScriptLogMessage_ProcAddLabel2_o *v78; // [xsp+0h] [xbp-70h]
  struct System_String_o **v79; // [xsp+8h] [xbp-68h]
  System_String_o *overrideColor; // [xsp+10h] [xbp-60h]
  System_String_o *text; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4210A9F & 1) == 0 )
  {
    sub_B0D8A4(&ScriptLogMessage_ProcAddLabel2_TypeInfo, txt);
    sub_B0D8A4(&ScriptLogMessage_ProcAddLabel_TypeInfo, v9);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v10);
    sub_B0D8A4(&ScriptReplaceString_TypeInfo, v11);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v12);
    sub_B0D8A4(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__, v13);
    sub_B0D8A4(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__, v14);
    sub_B0D8A4(&ScriptLogMessage___c__DisplayClass52_0_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_22052/*"servantName"*/, v16);
    sub_B0D8A4(&StringLiteral_15691/*"[-]"*/, v17);
    sub_B0D8A4(&StringLiteral_19315/*"i"*/, v18);
    sub_B0D8A4(&StringLiteral_15882/*"[~1]"*/, v19);
    sub_B0D8A4(&StringLiteral_15817/*"[^"*/, v20);
    sub_B0D8A4(&StringLiteral_21732/*"r"*/, v21);
    sub_B0D8A4(&StringLiteral_18337/*"effectmessage"*/, v22);
    sub_B0D8A4(&StringLiteral_20291/*"line"*/, v23);
    sub_B0D8A4(&StringLiteral_19474/*"image"*/, v24);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v25);
    sub_B0D8A4(&StringLiteral_15881/*"[~"*/, v26);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v27);
    byte_4210A9F = 1;
  }
  text = 0LL;
  v28 = (ScriptLogMessage___c__DisplayClass52_0_o *)sub_B0D974(
                                                      ScriptLogMessage___c__DisplayClass52_0_TypeInfo,
                                                      txt,
                                                      isFoward);
  ScriptLogMessage___c__DisplayClass52_0___ctor(v28, 0LL);
  if ( !v28 )
    goto LABEL_90;
  v28->fields.__4__this = this;
  p_tmpTxt = &v28->fields.tmpTxt;
  sub_B0D840(&v28->fields.__4__this, this);
  v28->fields.isFoward = isFoward;
  v33 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v31, v32);
  System_Text_StringBuilder___ctor(v33, 0LL);
  v28->fields.tmpTxt = v33;
  sub_B0D840(&v28->fields, v33);
  p_defaultColorTag = &this->fields.defaultColorTag;
  if ( enforceColor )
  {
    *p_defaultColorTag = enforceColor;
    sub_B0D840(&this->fields.defaultColorTag, enforceColor);
  }
  v79 = &this->fields.defaultColorTag;
  overrideColor = enforceColor;
  v35 = *p_defaultColorTag;
  v28->fields.tmpColorTag = *p_defaultColorTag;
  sub_B0D840(&v28->fields.tmpColorTag, v35);
  v38 = (ScriptLogMessage_ProcAddLabel_o *)sub_B0D974(ScriptLogMessage_ProcAddLabel_TypeInfo, v36, v37);
  ScriptLogMessage_ProcAddLabel___ctor(
    v38,
    (Il2CppObject *)v28,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    0LL);
  v78 = (ScriptLogMessage_ProcAddLabel2_o *)sub_B0D974(ScriptLogMessage_ProcAddLabel2_TypeInfo, v39, v40);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v78,
    (Il2CppObject *)v28,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_90:
    sub_B0D97C(Chars);
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_86:
    if ( !v38 )
      goto LABEL_90;
    goto LABEL_87;
  }
  v41 = 0;
  v42 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v41, 0LL) != 91 )
    {
      v70 = *p_tmpTxt;
      Chars = System_String__get_Chars(txt, v41, 0LL);
      if ( !v70 )
        goto LABEL_90;
      v61 = v41 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_42158644(v70, Chars, 0LL);
      goto LABEL_85;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v61 = v41 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v41 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*p_tmpTxt;
      if ( !*p_tmpTxt )
        goto LABEL_90;
      Chars = (__int64)System_Text_StringBuilder__Append_42155400(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15681/*"["*/,
                         0LL);
      goto LABEL_85;
    }
    v63 = BraceIndex;
    Chars = System_String__get_Chars(txt, v61, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v38 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
      v64 = System_String__Substring_43913640(txt, v41 + 2, v42 + v63 - 2, 0LL);
      v65 = System_Int32__Parse(v64, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      String = ScriptReplaceString__GetString(v65, 0LL);
      v67 = System_String__Concat_43849904(String, (System_String_o *)StringLiteral_15691/*"[-]"*/, 0LL);
      tmpColorTag = v28->fields.tmpColorTag;
      this->fields.defaultColorTag = tmpColorTag;
      sub_B0D840(v79, tmpColorTag);
      v58 = v28->fields.isFoward;
      v60 = this;
      v59 = v67;
      goto LABEL_63;
    }
    Chars = System_String__get_Chars(txt, v61, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v38 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      if ( !byte_4210BC1 )
      {
        sub_B0D8A4(&ScriptReplaceString_TypeInfo, v71);
        byte_4210BC1 = 1;
      }
      v72 = ScriptReplaceString_TypeInfo;
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v72 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v72->static_fields->playerGenderIndex;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v41 + 2, playerGenderIndex, 0LL);
      v75 = v28->fields.tmpColorTag;
      this->fields.defaultColorTag = v75;
      sub_B0D840(v79, v75);
      v58 = v28->fields.isFoward;
      v60 = this;
      v59 = TagSplitString;
      v69 = overrideColor;
LABEL_82:
      ScriptLogMessage__UpdateLabels(v60, v59, v58, v69, v57);
      defaultColorTag = this->fields.defaultColorTag;
      v28->fields.tmpColorTag = defaultColorTag;
LABEL_83:
      Chars = sub_B0D840(&v28->fields.tmpColorTag, defaultColorTag);
      goto LABEL_84;
    }
    Chars = System_String__get_Chars(txt, v61, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v38 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
      v43 = System_String__Substring_43913640(txt, v41, v42 + v63 + 1, 0LL);
      goto LABEL_26;
    }
    Chars = System_String__get_Chars(txt, v61, 0LL);
    if ( (unsigned __int16)Chars != 61 )
    {
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v61, 0LL);
      if ( !Chars )
        goto LABEL_90;
      v44 = (System_String_o *)Chars;
      Chars = System_String__Equals_43837244((System_String_o *)Chars, (System_String_o *)StringLiteral_19474/*"image"*/, 0LL);
      if ( (Chars & 1) != 0 )
      {
        if ( !v38 )
          goto LABEL_90;
        ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
        v45 = v41 + 7;
        v46 = v42 + v63 - 7;
        goto LABEL_24;
      }
      Chars = System_String__Equals_43837244(v44, (System_String_o *)StringLiteral_18337/*"effectmessage"*/, 0LL);
      if ( (Chars & 1) == 0 )
        break;
    }
LABEL_84:
    v61 = v63 + 1;
LABEL_85:
    v42 = -v61;
    v41 = v61;
    if ( v61 >= txt->fields.m_stringLength )
      goto LABEL_86;
  }
  Chars = System_String__Equals_43837244(v44, (System_String_o *)StringLiteral_19315/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
    v45 = v41 + 3;
    v46 = v42 + v63 - 3;
LABEL_24:
    v47 = System_String__Substring_43913640(txt, v45, v46, 0LL);
    v48 = (System_String_o *)StringLiteral_15817/*"[^"*/;
    v49 = (System_String_o *)StringLiteral_15917/*"]"*/;
LABEL_25:
    v43 = System_String__Concat_43852188(v48, v47, v49, 0LL);
LABEL_26:
    v50 = v43;
    Chars = (__int64)v78;
    if ( !v78 )
      goto LABEL_90;
LABEL_27:
    ScriptLogMessage_ProcAddLabel2__Invoke((ScriptLogMessage_ProcAddLabel2_o *)Chars, v50, 0LL);
    goto LABEL_84;
  }
  Chars = System_String__Equals_43837244(v44, (System_String_o *)StringLiteral_21732/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v51);
    if ( overrideColor )
    {
      *v79 = overrideColor;
      sub_B0D840(v79, overrideColor);
    }
    defaultColorTag = *v79;
    v28->fields.tmpColorTag = *v79;
    goto LABEL_83;
  }
  Chars = System_String__Equals_43837244(v44, (System_String_o *)StringLiteral_22052/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
    v53 = System_String__Substring_43913640(txt, v41 + 12, v42 + v63 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v54 = ScriptMessageLabel__AnalysTagParam(v53, 0, 0LL);
    v55 = v28->fields.tmpColorTag;
    this->fields.defaultColorTag = v55;
    sub_B0D840(v79, v55);
    v56 = ScriptMessageLabel__GetServantChangeName(v54, 0LL);
    v58 = v28->fields.isFoward;
    v59 = v56;
    v60 = this;
LABEL_63:
    v69 = overrideColor;
    goto LABEL_82;
  }
  Chars = System_String__StartsWith(v44, (System_String_o *)StringLiteral_20291/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v38 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
    Chars = (__int64)System_String__Substring_43913640(txt, v41 + 5, v42 + v63 - 5, 0LL);
    if ( !Chars )
      goto LABEL_90;
    v47 = (System_String_o *)Chars;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v48 = (System_String_o *)StringLiteral_15881/*"[~"*/;
      v49 = (System_String_o *)StringLiteral_15917/*"]"*/;
      goto LABEL_25;
    }
    Chars = (__int64)v78;
    if ( !v78 )
      goto LABEL_90;
    v50 = (System_String_o *)StringLiteral_15882/*"[~1]"*/;
    goto LABEL_27;
  }
  if ( v63 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_43913640(txt, v41, v42 + v63 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(&v28->fields.tmpColorTag, &text, overrideColor, 0LL);
    Chars = (__int64)*p_tmpTxt;
    if ( !*p_tmpTxt )
      goto LABEL_90;
    Chars = (__int64)System_Text_StringBuilder__Append_42155400((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_84;
  }
  v77 = *p_tmpTxt;
  Chars = (__int64)System_String__Substring(txt, v41, 0LL);
  if ( !v77 )
    goto LABEL_90;
  Chars = (__int64)System_Text_StringBuilder__Append_42155400(v77, (System_String_o *)Chars, 0LL);
  if ( !v38 )
    goto LABEL_90;
LABEL_87:
  ScriptLogMessage_ProcAddLabel__Invoke(v38, 0LL);
  ScriptLogMessage__UpdatePlayVoice(this, v76);
}


void __fastcall ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  ScriptMessageLabel_o *analyzeLabel; // x20
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  float voiceVolume; // s8
  System_Action_string__string__bool__o *v11; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v14; // x1

  if ( (byte_4210AA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string__string__bool___ctor__, method);
    sub_B0D8A4(&System_Action_string__string__bool__TypeInfo, v3);
    sub_B0D8A4(&Method_ScriptLogMessage_SetBackLogReplayingVoice__, v4);
    byte_4210AA0 = 1;
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
      v11 = (System_Action_string__string__bool__o *)sub_B0D974(System_Action_string__string__bool__TypeInfo, v5, v6);
      System_Action_string__string__bool____ctor(
        v11,
        (Il2CppObject *)this,
        Method_ScriptLogMessage_SetBackLogReplayingVoice__,
        (const MethodInfo_247F248 *)Method_System_Action_string__string__bool___ctor__);
      if ( !analyzeLabel
        || (ScriptMessageLabel__UpdatePlayVoice(analyzeLabel, voiceAssetName, voiceObjectName, voiceVolume, v11, 0LL),
            backLogDialog = this->fields.backLogDialog,
            LogLabel = ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL),
            !backLogDialog) )
      {
        sub_B0D97C(LogLabel);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall ScriptLogMessage_ProcAddLabel__Invoke(ScriptLogMessage_ProcAddLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  ScriptLogMessage_ProcAddLabel_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  ScriptLogMessage_ProcAddLabel_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  ScriptLogMessage_ProcAddLabel_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (ScriptLogMessage_ProcAddLabel_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage_ProcAddLabel2___ctor(
        ScriptLogMessage_ProcAddLabel2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel2__BeginInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)txt;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, v6, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__Invoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ScriptLogMessage_ProcAddLabel2_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  _DWORD *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  void (__fastcall **v25)(System_String_o *, _QWORD); // x0
  __int64 v26; // x0
  void (__fastcall **v27)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptLogMessage_ProcAddLabel2_o *v28; // x8
  __int64 v29; // x21
  __int64 *v30; // x22
  void (__fastcall *v31)(System_String_o *, __int64); // x23
  char v32; // w0
  int v33; // w8
  char v34; // w23
  char v35; // w0
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  unsigned __int64 v39; // x10
  _DWORD *v40; // x11
  char v41; // w22
  char v42; // w0
  System_String_c *klass; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  ScriptLogMessage_ProcAddLabel2_o *v48; // [xsp+8h] [xbp-48h] BYREF

  v48 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v48;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ScriptLogMessage_ProcAddLabel2_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v28 = v8[i];
      v30 = *(__int64 **)&v28->fields.method;
      v29 = *(_QWORD *)&v28->fields.extra_arg;
      v31 = *(void (__fastcall **)(System_String_o *, __int64))&v28->fields.method_ptr;
      if ( *(__int16 *)(v29 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v28->fields.extra_arg, txt, method, v3);
      v32 = sub_B0D8D4(v29);
      v33 = *(unsigned __int8 *)(v29 + 74);
      if ( (v32 & 1) != 0 )
      {
        if ( v33 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v33 != 1 )
        {
          if ( *(__int16 *)(v29 + 72) != -1 && this->fields.m_target )
          {
            v41 = sub_B0D8CC(v29);
            v42 = sub_B0DCD0(v29);
            if ( (v41 & 1) != 0 )
            {
              if ( (v42 & 1) != 0 )
              {
                klass = txt->klass;
                v44 = *(_QWORD *)(v29 + 24);
                v45 = *(unsigned __int16 *)(v29 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v46 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v44 )
                  {
                    ++v46;
                    p_offset += 4;
                    if ( v46 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v45);
                }
                else
                {
LABEL_57:
                  v24 = sub_AA67A0(txt, v44, v45);
                }
                v16 = *(_QWORD *)(v24 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72));
              }
              v25 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B0D954(v16, v29);
              (*v25)(txt, v25);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v29 + 72);
              if ( (v42 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v29);
                v12 = txt->klass;
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v10));
                }
                else
                {
LABEL_11:
                  v15 = sub_AA67A0(txt, class_0, v10);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(txt, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v29 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v29 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v31(txt, v29);
          continue;
        }
        if ( !v30 )
          goto LABEL_58;
        if ( *(__int16 *)(v29 + 72) != -1 && (*(_BYTE *)(*v30 + 277) & 1) == 0 && this->fields.m_target )
        {
          v34 = sub_B0D8CC(v29);
          v35 = sub_B0DCD0(v29);
          if ( (v34 & 1) != 0 )
          {
            if ( (v35 & 1) != 0 )
            {
              v36 = *v30;
              v37 = *(_QWORD *)(v29 + 24);
              v38 = *(unsigned __int16 *)(v29 + 72);
              if ( *(_WORD *)(*v30 + 298) )
              {
                v39 = 0LL;
                v40 = (_DWORD *)(*(_QWORD *)(v36 + 176) + 8LL);
                while ( *((_QWORD *)v40 - 1) != v37 )
                {
                  ++v39;
                  v40 += 4;
                  if ( v39 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_48;
                }
                v26 = v36 + 16LL * (*v40 + (int)v38) + 312;
              }
              else
              {
LABEL_48:
                v26 = sub_AA67A0(v30, v37, v38);
              }
              v23 = *(_QWORD *)(v26 + 8);
            }
            else
            {
              v23 = *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320);
            }
            v27 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B0D954(v23, v29);
            (*v27)(v30, txt, v27);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v29 + 72);
            if ( (v35 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v29);
              v19 = *v30;
              if ( *(_WORD *)(*v30 + 298) )
              {
                v20 = 0LL;
                v21 = (_DWORD *)(*(_QWORD *)(v19 + 176) + 8LL);
                while ( *((_QWORD *)v21 - 1) != v18 )
                {
                  ++v20;
                  v21 += 4;
                  if ( v20 >= *(unsigned __int16 *)(*v30 + 298) )
                    goto LABEL_19;
                }
                v22 = v19 + 16LL * (int)(*v21 + v17) + 312;
              }
              else
              {
LABEL_19:
                v22 = sub_AA67A0(v30, v18, v17);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v22)(v30, txt, *(_QWORD *)(v22 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v30
                                                                           + 16LL * *(unsigned __int16 *)(v29 + 72)
                                                                           + 312))(
                v30,
                txt,
                *(_QWORD *)(*v30 + 16LL * *(unsigned __int16 *)(v29 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v31)(v30, txt, v29);
    }
  }
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
  System_Text_StringBuilder_o *tmpTxt; // x0
  ScriptLogMessage_o *_4__this; // x20
  struct ScriptLogMessage_o *v5; // x8
  struct System_String_o *tmpColorTag; // x1

  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt )
    goto LABEL_10;
  if ( System_Text_StringBuilder__get_Length(tmpTxt, 0LL) < 1 )
    goto LABEL_8;
  tmpTxt = this->fields.tmpTxt;
  if ( !tmpTxt
    || (_4__this = this->fields.__4__this,
        tmpTxt = (System_Text_StringBuilder_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))tmpTxt->klass->vtable._3_ToString.method)(
                                                  tmpTxt,
                                                  tmpTxt->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr),
        (v5 = this->fields.__4__this) == 0LL)
    || !_4__this
    || (ScriptLogMessage__AddLabel(
          _4__this,
          (System_String_o *)tmpTxt,
          v5->fields.defaultColorTag,
          this->fields.isFoward,
          0LL),
        (tmpTxt = this->fields.tmpTxt) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(tmpTxt);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (System_Text_StringBuilder_o *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpColorTag = this->fields.tmpColorTag;
  tmpTxt[3].monitor = tmpColorTag;
  sub_B0D840(&tmpTxt[3].monitor, tmpColorTag);
}


void __fastcall ScriptLogMessage___c__DisplayClass52_0___UpdateLabels_b__1(
        ScriptLogMessage___c__DisplayClass52_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  ScriptLogMessage___c__DisplayClass52_0_o *v3; // x19
  struct System_String_o *tmpColorTag; // x1

  if ( !text )
    goto LABEL_7;
  v3 = this;
  if ( text->fields.m_stringLength >= 1 )
  {
    this = (ScriptLogMessage___c__DisplayClass52_0_o *)this->fields.__4__this;
    if ( !this )
      goto LABEL_7;
    ScriptLogMessage__AddLabel(
      (ScriptLogMessage_o *)this,
      text,
      (System_String_o *)this[3].monitor,
      v3->fields.isFoward,
      0LL);
  }
  this = (ScriptLogMessage___c__DisplayClass52_0_o *)v3->fields.__4__this;
  if ( !this )
LABEL_7:
    sub_B0D97C(this);
  tmpColorTag = v3->fields.tmpColorTag;
  this[3].monitor = tmpColorTag;
  sub_B0D840(&this[3].monitor, tmpColorTag);
}