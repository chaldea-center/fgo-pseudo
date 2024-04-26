void __fastcall ScriptLogMessage___cctor(const MethodInfo *method)
{
  if ( (byte_434E2E0 & 1) == 0 )
  {
    sub_B70694(&ScriptLogMessage_TypeInfo);
    byte_434E2E0 = 1;
  }
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_LEFT_BASE = -440.0;
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_CENTER_BASE = 0.0;
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void __fastcall ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  if ( (byte_434E2DF & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E2DF = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.defaultColorTag);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptLogMessage__AddLabel(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  ScriptLogMessage_o *v8; // x19
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x25
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_String_o *v14; // x22
  int backLogDialog; // w8
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  int32_t fontSize; // w4
  System_String_o *mainPrefab; // x7
  UILabel_o **p_main; // x1
  UILabel_o **p_ruby; // x2
  UnityEngine_Vector2_o *p_dispPosition; // x3
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v24; // x19
  const MethodInfo *v25; // x1
  System_String_o *v26; // x22
  int v27; // w8
  ScriptLogMessage_o *v28; // x23
  System_String_o *v29; // x22
  float v30; // s0
  int v31; // w8
  float v32; // s8
  const MethodInfo *v33; // x1
  System_String_o *v34; // x22
  ScriptLogMessage_o *v35; // x22
  int32_t v36; // w0
  System_String_o **p_rubyPrefab; // x8
  int v38; // w8
  ScriptLogMessage_o *v39; // x22
  System_String_o *imagePrefab; // x23
  ScriptLogMessage_o *v41; // x23
  int v42; // w24
  int32_t v43; // w0
  __int64 v44; // x0
  UnityEngine_Vector2_o v45; // 0:s1.4,4:s2.4

  v7 = text;
  v8 = this;
  if ( (byte_434E2D3 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&StringLiteral_20544/*"line"*/);
    this = (ScriptLogMessage_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_434E2D3 = 1;
  }
  analyzeLabel = v8->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_67;
  analyzeLabel->fields.colorTag = colorTag;
  analyzeLabel->fields.stepTime = 0.0;
  sub_B70630(&analyzeLabel->fields.colorTag);
  if ( !v7 )
    goto LABEL_67;
  dispPosition = v8->fields.dispPosition;
  if ( System_String__get_Chars(v7, 0, 0LL) == 91 )
  {
    if ( System_String__get_Chars(v7, 1, 0LL) == 35 )
    {
      ScriptLogMessage__FetchMainLabel(v8, v12);
      ScriptLogMessage__FetchRubyLabel(v8, v13);
      v14 = System_String__Substring_44821904(v7, 2, v7->fields.m_stringLength - 3, 0LL);
      this = (ScriptLogMessage_o *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_67;
      text = (System_String_o *)this;
      if ( !LODWORD(this->fields.backLogDialog) )
        goto LABEL_68;
      LOWORD(this->fields.mainPrefab) = 58;
      if ( v14 )
      {
        this = (ScriptLogMessage_o *)System_String__Split(v14, (System_Char_array *)this, 0LL);
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
LABEL_68:
          v44 = sub_B70798(this);
          sub_B70738(v44, 0LL);
        }
      }
      goto LABEL_67;
    }
    if ( System_String__get_Chars(v7, 1, 0LL) == 94 )
    {
      ScriptLogMessage__FetchImageSprite(v8, v25);
      v26 = System_String__Substring_44821904(v7, 2, v7->fields.m_stringLength - 3, 0LL);
      this = (ScriptLogMessage_o *)sub_B706AC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_67;
      text = (System_String_o *)this;
      if ( !LODWORD(this->fields.backLogDialog) )
        goto LABEL_68;
      LOWORD(this->fields.mainPrefab) = 32;
      if ( !v26 )
        goto LABEL_67;
      this = (ScriptLogMessage_o *)System_String__Split(v26, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_67;
      v27 = (int)this->fields.backLogDialog;
      v28 = this;
      if ( !v27 )
        goto LABEL_68;
      v29 = (System_String_o *)this->fields.mainPrefab;
      if ( v27 <= 1 )
      {
        this = (ScriptLogMessage_o *)sub_B706AC(char___TypeInfo, 1LL);
        if ( this )
        {
          text = (System_String_o *)this;
          if ( !LODWORD(this->fields.backLogDialog) )
            goto LABEL_68;
          LOWORD(this->fields.mainPrefab) = 58;
          if ( v29 )
          {
            this = (ScriptLogMessage_o *)System_String__Split(v29, (System_Char_array *)this, 0LL);
            if ( this )
            {
              v38 = (int)this->fields.backLogDialog;
              v39 = this;
              if ( v38 <= 1 )
              {
                if ( v38 )
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
                analyzeLabel->fields.ruby = ScriptLogMessage__FetchRubyLabel(v8, (const MethodInfo *)text);
                sub_B70630(&analyzeLabel->fields.ruby);
                if ( LODWORD(v39->fields.backLogDialog) >= 2 )
                {
                  ScriptMessageLabel__UpdateImageRuby(
                    analyzeLabel,
                    &analyzeLabel->fields.image,
                    &analyzeLabel->fields.ruby,
                    &v8->fields.dispPosition,
                    v8->fields.fontSize,
                    (System_String_o *)v39->fields.mainPrefab,
                    (System_String_o *)v39->fields.rubyPrefab,
                    v8->fields.fontType,
                    v8->fields.horizontalAlign,
                    0LL);
                  if ( !isFoward )
                    goto LABEL_20;
                  goto LABEL_17;
                }
              }
              goto LABEL_68;
            }
          }
        }
LABEL_67:
        sub_B7076C(this, text);
      }
      v30 = System_Single__Parse((System_String_o *)this->fields.rubyPrefab, 0LL);
      v31 = (int)v28->fields.backLogDialog;
      v32 = v30;
      if ( v31 == 2 )
      {
        ScriptMessageLabel__UpdateImage_34857472(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &v8->fields.dispPosition,
          v8->fields.fontSize,
          v30,
          v29,
          v8->fields.horizontalAlign,
          0LL);
        if ( !isFoward )
          goto LABEL_20;
        goto LABEL_17;
      }
      if ( v31 <= 3 )
      {
        if ( (unsigned int)v31 <= 2 )
          goto LABEL_68;
        imagePrefab = (System_String_o *)v28->fields.imagePrefab;
        this = (ScriptLogMessage_o *)sub_B706AC(char___TypeInfo, 1LL);
        if ( this )
        {
          text = (System_String_o *)this;
          if ( !LODWORD(this->fields.backLogDialog) )
            goto LABEL_68;
          LOWORD(this->fields.mainPrefab) = 44;
          if ( imagePrefab )
          {
            this = (ScriptLogMessage_o *)System_String__Split(imagePrefab, (System_Char_array *)this, 0LL);
            if ( this )
            {
              v41 = this;
              if ( LODWORD(this->fields.backLogDialog) )
              {
                this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
                if ( LODWORD(v41->fields.backLogDialog) > 1 )
                {
                  v42 = (int)this;
                  v43 = System_Int32__Parse((System_String_o *)v41->fields.rubyPrefab, 0LL);
                  v45.fields.x = (float)v42;
                  v45.fields.y = (float)v43;
                  ScriptMessageLabel__UpdateImage_34857600(
                    analyzeLabel,
                    &analyzeLabel->fields.image,
                    &v8->fields.dispPosition,
                    v8->fields.fontSize,
                    v32,
                    v29,
                    v45,
                    v8->fields.horizontalAlign,
                    0LL);
                  if ( !isFoward )
                    goto LABEL_20;
                  goto LABEL_17;
                }
              }
              goto LABEL_68;
            }
          }
        }
        goto LABEL_67;
      }
    }
    else
    {
      if ( System_String__get_Chars(v7, 1, 0LL) == 126 )
      {
        ScriptLogMessage__FetchImageSprite(v8, v33);
        v34 = System_String__Substring_44821904(v7, 2, v7->fields.m_stringLength - 3, 0LL);
        this = (ScriptLogMessage_o *)sub_B706AC(char___TypeInfo, 1LL);
        if ( this )
        {
          text = (System_String_o *)this;
          if ( !LODWORD(this->fields.backLogDialog) )
            goto LABEL_68;
          LOWORD(this->fields.mainPrefab) = 32;
          if ( v34 )
          {
            this = (ScriptLogMessage_o *)System_String__Split(v34, (System_Char_array *)this, 0LL);
            if ( this )
            {
              v35 = this;
              if ( LODWORD(this->fields.backLogDialog) )
              {
                v36 = System_Int32__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
                if ( SLODWORD(v35->fields.backLogDialog) >= 2 )
                  p_rubyPrefab = (System_String_o **)&v35->fields.rubyPrefab;
                else
                  p_rubyPrefab = (System_String_o **)&StringLiteral_20544/*"line"*/;
                ScriptMessageLabel__UpdateLine(
                  analyzeLabel,
                  &analyzeLabel->fields.image,
                  &v8->fields.dispPosition,
                  v8->fields.fontSize,
                  v36,
                  *p_rubyPrefab,
                  0LL);
                if ( !isFoward )
                  goto LABEL_20;
                goto LABEL_17;
              }
              goto LABEL_68;
            }
          }
        }
        goto LABEL_67;
      }
      analyzeLabel->fields.main = ScriptLogMessage__FetchMainLabel(v8, v33);
      sub_B70630(&analyzeLabel->fields);
      ScriptMessageLabel__UpdateLabel(
        analyzeLabel,
        &analyzeLabel->fields.main,
        &v8->fields.dispPosition,
        v8->fields.fontSize,
        v8->fields.maxFontSize,
        v8->fields.verticalAlign,
        v7,
        v8->fields.fontType,
        0LL);
    }
  }
  else
  {
    ScriptLogMessage__FetchMainLabel(v8, v11);
    ScriptMessageLabel__UpdateLabel(
      analyzeLabel,
      &analyzeLabel->fields.main,
      &v8->fields.dispPosition,
      v8->fields.fontSize,
      v8->fields.maxFontSize,
      v8->fields.verticalAlign,
      v7,
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
  v24 = v8->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL);
  if ( !v24 )
    goto LABEL_67;
  ScriptBackLog__AddLog(v24, (ScriptMessageLabel_o *)this, 0LL);
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
  sub_B70630(&this->fields.voiceAssetName);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 208);
  sub_B70630(v5);
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
void __fastcall ScriptLogMessage__AddText_18208564(
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
  if ( (byte_434E2DD & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E2DD = 1;
  }
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.talkName);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
  int32_t defaultFontSize; // w19

  if ( (byte_434E2DE & 1) == 0 )
  {
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    sub_B70694(&StringLiteral_760/*"-"*/);
    byte_434E2DE = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_760/*"-"*/, defaultFontSize, 0LL);
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

  if ( (byte_434E2DA & 1) == 0 )
  {
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    byte_434E2DA = 1;
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
  int32_t defaultFontSize; // w20
  ScriptMessageLabel_o *v4; // x21
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x21
  UnityEngine_GameObject_o *transform; // x0
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *v9; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v11; // x22
  struct UnityEngine_Font_o *trueTypeFont; // x21
  UnityEngine_GameObject_o *v13; // x21
  int32_t v14; // w0
  struct ScriptMessageLabel_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x21
  int32_t v17; // w0
  struct ScriptMessageLabel_o *v18; // x22
  UnityEngine_GameObject_o *v19; // x21
  int32_t v20; // w0
  struct ScriptMessageLabel_o *v21; // x22
  struct ScriptMessageLabel_o *v22; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v25; // s0
  double v26; // d0
  int32_t rubyFontSize; // w8
  float v28; // s1
  float v29; // s0
  double v30; // d0
  float v31; // s0
  double v32; // d0
  float v33; // s1
  const MethodInfo *v34; // x1

  if ( (byte_434E2D2 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    sub_B70694(&StringLiteral_760/*"-"*/);
    sub_B70694(&StringLiteral_24162/*"■"*/);
    byte_434E2D2 = 1;
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
                                     (System_String_o *)StringLiteral_760/*"-"*/,
                                     defaultFontSize,
                                     0LL);
    v4 = (ScriptMessageLabel_o *)sub_B70764(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel___ctor(v4, 0LL);
    p_analyzeLabel = &this->fields.analyzeLabel;
    this->fields.analyzeLabel = v4;
    sub_B70630(&this->fields.analyzeLabel);
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v9 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    layer = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v9, layer, 0LL);
    v11 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v9,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v11 )
      goto LABEL_49;
    v11->fields.main = (struct UILabel_o *)transform;
    sub_B70630(&v11->fields);
    if ( !*p_analyzeLabel )
      goto LABEL_49;
    transform = (UnityEngine_GameObject_o *)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_49;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0LL);
    this->fields.defaultFontType = trueTypeFont;
    sub_B70630(&this->fields.defaultFontType);
    this->fields.fontType = trueTypeFont;
    sub_B70630(&this->fields.fontType);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v13 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    v14 = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v13, v14, 0LL);
    v15 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v13,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v15 )
      goto LABEL_49;
    v15->fields.ruby = (struct UILabel_o *)transform;
    sub_B70630(&v15->fields.ruby);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.imagePrefab,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v16 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    v17 = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v16, v17, 0LL);
    v18 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v16,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v18 )
      goto LABEL_49;
    v18->fields.image = (struct UISprite_o *)transform;
    sub_B70630(&v18->fields.image);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                              (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.playVoicePrefab,
                                              (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v19 = transform;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)transform, this->fields.workLabelRoot, 0LL);
    transform = (UnityEngine_GameObject_o *)this->fields.workLabelRoot;
    if ( !transform )
      goto LABEL_49;
    transform = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_49;
    v20 = UnityEngine_GameObject__get_layer(transform, 0LL);
    UnityEngine_GameObject__set_layer(v19, v20, 0LL);
    v21 = *p_analyzeLabel;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v19,
                                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v21
      || (v21->fields.playVoice = (struct UIButton_o *)transform,
          sub_B70630(&v21->fields.playVoice),
          (v22 = *p_analyzeLabel) == 0LL)
      || (main = v22->fields.main,
          ruby = v22->fields.ruby,
          transform = (UnityEngine_GameObject_o *)ScriptLogMessage__GetDefaultFontSize(this, v8),
          !main) )
    {
LABEL_49:
      sub_B7076C(transform, v8);
    }
    v25 = this->fields.fontScale * (float)(int)transform;
    if ( v25 == INFINITY )
      v26 = -v25;
    else
      v26 = v25;
    UILabel__set_fontSize(main, (int)v26, 0LL);
    UILabel__set_text(main, (System_String_o *)StringLiteral_24162/*"■"*/, 0LL);
    transform = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))main->klass->vtable._22_get_localSize.method)(
                                              main,
                                              main->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v28;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_49;
      v31 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v31 == INFINITY )
        v32 = -INFINITY;
      else
        v32 = v31;
      LODWORD(v8) = (int)v32;
      this->fields.rubyFontSize = (int)v32;
    }
    else
    {
      v29 = this->fields.fontScale * (float)rubyFontSize;
      if ( v29 == INFINITY )
        v30 = -INFINITY;
      else
        v30 = v29;
      v8 = (const MethodInfo *)(unsigned int)(int)v30;
      this->fields.rubyFontSize = (int)v8;
      if ( !ruby )
        goto LABEL_49;
    }
    UILabel__set_fontSize(ruby, (int32_t)v8, 0LL);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_24162/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))ruby->klass->vtable._22_get_localSize.method)(
      ruby,
      ruby->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v33;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v33;
    ScriptLogMessage__ClearText(this, v34);
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
      sub_B7076C(0LL, method);
    ScriptMessageLabel__Destroy(analyzeLabel, 0LL);
    this->fields.analyzeLabel = 0LL;
    sub_B70630(p_analyzeLabel);
    this->fields.defaultFontType = 0LL;
    sub_B70630(&this->fields.defaultFontType);
    this->fields.fontType = 0LL;
    sub_B70630(&this->fields.fontType);
  }
}


void __fastcall ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  if ( (byte_434E2DB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E2DB = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.voiceAssetName);
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.voiceObjectName);
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
  sub_B70630(&this->fields.voiceAssetName);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 208);
  sub_B70630(v5);
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

  if ( (byte_434E2D7 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E2D7 = 1;
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
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.defaultColorTag);
}


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

  if ( (byte_434E2DC & 1) == 0 )
  {
    sub_B70694(&ScriptLogMessage_TypeInfo);
    byte_434E2DC = 1;
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
        sub_B70630(&backLogDialog->fields._ReplayingAssetName_k__BackingField),
        (backLogDialog = this->fields.backLogDialog) == 0LL)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        sub_B70630(&backLogDialog->fields._ReplayingObjectName_k__BackingField),
        (v9 = this->fields.backLogDialog) == 0LL) )
  {
    sub_B7076C(backLogDialog, assetName);
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
      sub_B7076C(0LL, method);
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

  if ( (byte_434E2D6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E2D6 = 1;
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
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.defaultColorTag);
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

  if ( (byte_434E2D9 & 1) == 0 )
  {
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    byte_434E2D9 = 1;
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
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_434E2D8 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E2D8 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)font, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this )
      sub_B7076C(v5, v6);
  }
  else
  {
    font = this->fields.defaultFontType;
  }
  this->fields.fontType = font;
  sub_B70630(&this->fields.fontType);
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
  const MethodInfo *v7; // x1
  int32_t DefaultFontSize; // w0
  float x; // s0
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x1

  if ( System_String__IsNullOrEmpty(text, 0LL) )
  {
    ScriptLogMessage__ClearTalkName(this, v5);
  }
  else
  {
    this->fields.talkName = text;
    sub_B70630(&this->fields.talkName);
    fontType = this->fields.fontType;
    this->fields.fontType = this->fields.defaultFontType;
    sub_B70630(&this->fields.fontType);
    DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, v7);
    x = this->fields.startPosition.fields.x;
    this->fields.fontSize = DefaultFontSize;
    this->fields.verticalAlign = 0;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptLogMessage__UpdateLabels(this, text, 0, 0LL, v10);
    ScriptLogMessage__ReturnText(this, v11);
    this->fields.fontType = fontType;
    sub_B70630(&this->fields.fontType);
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
  ScriptLogMessage___c__DisplayClass52_0_o *v9; // x22
  unsigned __int64 Chars; // x0
  System_String_o *v11; // x1
  System_Text_StringBuilder_o **p_tmpTxt; // x23
  System_Text_StringBuilder_o *v13; // x24
  struct System_String_o **p_defaultColorTag; // x21
  ScriptLogMessage_ProcAddLabel_o *v15; // x24
  int32_t v16; // w21
  int v17; // w25
  System_String_o *v18; // x0
  System_String_o *v19; // x27
  int32_t v20; // w1
  int32_t v21; // w2
  System_String_o *v22; // x0
  __int64 *v23; // x8
  const MethodInfo *v24; // x1
  System_String_o *v25; // x21
  System_String_array *v26; // x21
  System_String_o *v27; // x0
  const MethodInfo *v28; // x4
  bool v29; // w2
  System_String_o *v30; // x1
  ScriptLogMessage_o *v31; // x0
  int32_t v32; // w27
  int32_t BraceIndex; // w0
  int32_t v34; // w28
  System_String_o *v35; // x0
  int32_t v36; // w21
  System_String_o *String; // x0
  System_String_o *v38; // x21
  System_String_o *v39; // x3
  System_Text_StringBuilder_o *v40; // x28
  ScriptReplaceString_c *v41; // x0
  int32_t playerGenderIndex; // w27
  System_String_o *TagSplitString; // x21
  const MethodInfo *v44; // x1
  System_Text_StringBuilder_o *v45; // x22
  ScriptLogMessage_ProcAddLabel2_o *v46; // [xsp+0h] [xbp-70h]
  struct System_String_o **v47; // [xsp+8h] [xbp-68h]
  System_String_o *overrideColor; // [xsp+10h] [xbp-60h]
  System_String_o *text; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_434E2D4 & 1) == 0 )
  {
    sub_B70694(&ScriptLogMessage_ProcAddLabel2_TypeInfo);
    sub_B70694(&ScriptLogMessage_ProcAddLabel_TypeInfo);
    sub_B70694(&ScriptMessageLabel_TypeInfo);
    sub_B70694(&ScriptReplaceString_TypeInfo);
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    sub_B70694(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__);
    sub_B70694(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__);
    sub_B70694(&ScriptLogMessage___c__DisplayClass52_0_TypeInfo);
    sub_B70694(&StringLiteral_22346/*"servantName"*/);
    sub_B70694(&StringLiteral_15865/*"[-]"*/);
    sub_B70694(&StringLiteral_19555/*"i"*/);
    sub_B70694(&StringLiteral_16057/*"[~1]"*/);
    sub_B70694(&StringLiteral_15992/*"[^"*/);
    sub_B70694(&StringLiteral_22021/*"r"*/);
    sub_B70694(&StringLiteral_18558/*"effectmessage"*/);
    sub_B70694(&StringLiteral_20544/*"line"*/);
    sub_B70694(&StringLiteral_19716/*"image"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_16056/*"[~"*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_434E2D4 = 1;
  }
  text = 0LL;
  v9 = (ScriptLogMessage___c__DisplayClass52_0_o *)sub_B70764(ScriptLogMessage___c__DisplayClass52_0_TypeInfo);
  ScriptLogMessage___c__DisplayClass52_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_90;
  v9->fields.__4__this = this;
  p_tmpTxt = &v9->fields.tmpTxt;
  sub_B70630(&v9->fields.__4__this);
  v9->fields.isFoward = isFoward;
  v13 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0LL);
  v9->fields.tmpTxt = v13;
  sub_B70630(&v9->fields);
  p_defaultColorTag = &this->fields.defaultColorTag;
  if ( enforceColor )
  {
    *p_defaultColorTag = enforceColor;
    sub_B70630(&this->fields.defaultColorTag);
  }
  v47 = &this->fields.defaultColorTag;
  overrideColor = enforceColor;
  v9->fields.tmpColorTag = *p_defaultColorTag;
  sub_B70630(&v9->fields.tmpColorTag);
  v15 = (ScriptLogMessage_ProcAddLabel_o *)sub_B70764(ScriptLogMessage_ProcAddLabel_TypeInfo);
  ScriptLogMessage_ProcAddLabel___ctor(
    v15,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    0LL);
  v46 = (ScriptLogMessage_ProcAddLabel2_o *)sub_B70764(ScriptLogMessage_ProcAddLabel2_TypeInfo);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v46,
    (Il2CppObject *)v9,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_90:
    sub_B7076C(Chars, v11);
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_86:
    if ( !v15 )
      goto LABEL_90;
    goto LABEL_87;
  }
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v16, 0LL) != 91 )
    {
      v40 = *p_tmpTxt;
      Chars = System_String__get_Chars(txt, v16, 0LL);
      if ( !v40 )
        goto LABEL_90;
      v32 = v16 + 1;
      Chars = (unsigned __int64)System_Text_StringBuilder__Append_42605224(v40, Chars, 0LL);
      goto LABEL_85;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v32 = v16 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v16 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (unsigned __int64)*p_tmpTxt;
      if ( !*p_tmpTxt )
        goto LABEL_90;
      Chars = (unsigned __int64)System_Text_StringBuilder__Append_42601980(
                                  (System_Text_StringBuilder_o *)Chars,
                                  (System_String_o *)StringLiteral_15855/*"["*/,
                                  0LL);
      goto LABEL_85;
    }
    v34 = BraceIndex;
    Chars = System_String__get_Chars(txt, v32, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v15 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
      v35 = System_String__Substring_44821904(txt, v16 + 2, v17 + v34 - 2, 0LL);
      v36 = System_Int32__Parse(v35, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      String = ScriptReplaceString__GetString(v36, 0LL);
      v38 = System_String__Concat_44758168(String, (System_String_o *)StringLiteral_15865/*"[-]"*/, 0LL);
      this->fields.defaultColorTag = v9->fields.tmpColorTag;
      sub_B70630(v47);
      v29 = v9->fields.isFoward;
      v31 = this;
      v30 = v38;
      goto LABEL_63;
    }
    Chars = System_String__get_Chars(txt, v32, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v15 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      if ( !byte_434E3FF )
      {
        sub_B70694(&ScriptReplaceString_TypeInfo);
        byte_434E3FF = 1;
      }
      v41 = ScriptReplaceString_TypeInfo;
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v41 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v41->static_fields->playerGenderIndex;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v16 + 2, playerGenderIndex, 0LL);
      this->fields.defaultColorTag = v9->fields.tmpColorTag;
      sub_B70630(v47);
      v29 = v9->fields.isFoward;
      v31 = this;
      v30 = TagSplitString;
      v39 = overrideColor;
LABEL_82:
      ScriptLogMessage__UpdateLabels(v31, v30, v29, v39, v28);
      v9->fields.tmpColorTag = this->fields.defaultColorTag;
LABEL_83:
      sub_B70630(&v9->fields.tmpColorTag);
      goto LABEL_84;
    }
    Chars = System_String__get_Chars(txt, v32, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v15 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
      v18 = System_String__Substring_44821904(txt, v16, v17 + v34 + 1, 0LL);
      goto LABEL_26;
    }
    Chars = System_String__get_Chars(txt, v32, 0LL);
    if ( (unsigned __int16)Chars != 61 )
    {
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      Chars = (unsigned __int64)ScriptMessageLabel__GetCommandName(txt, v32, 0LL);
      if ( !Chars )
        goto LABEL_90;
      v19 = (System_String_o *)Chars;
      Chars = System_String__Equals_44745508((System_String_o *)Chars, (System_String_o *)StringLiteral_19716/*"image"*/, 0LL);
      if ( (Chars & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_90;
        ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
        v20 = v16 + 7;
        v21 = v17 + v34 - 7;
        goto LABEL_24;
      }
      Chars = System_String__Equals_44745508(v19, (System_String_o *)StringLiteral_18558/*"effectmessage"*/, 0LL);
      if ( (Chars & 1) == 0 )
        break;
    }
LABEL_84:
    v32 = v34 + 1;
LABEL_85:
    v17 = -v32;
    v16 = v32;
    if ( v32 >= txt->fields.m_stringLength )
      goto LABEL_86;
  }
  Chars = System_String__Equals_44745508(v19, (System_String_o *)StringLiteral_19555/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
    v20 = v16 + 3;
    v21 = v17 + v34 - 3;
LABEL_24:
    v22 = System_String__Substring_44821904(txt, v20, v21, 0LL);
    v23 = &StringLiteral_15992/*"[^"*/;
LABEL_25:
    v18 = System_String__Concat_44760452((System_String_o *)*v23, v22, (System_String_o *)StringLiteral_16092/*"]"*/, 0LL);
LABEL_26:
    v11 = v18;
    Chars = (unsigned __int64)v46;
    if ( !v46 )
      goto LABEL_90;
LABEL_27:
    ScriptLogMessage_ProcAddLabel2__Invoke((ScriptLogMessage_ProcAddLabel2_o *)Chars, v11, 0LL);
    goto LABEL_84;
  }
  Chars = System_String__Equals_44745508(v19, (System_String_o *)StringLiteral_22021/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v24);
    if ( overrideColor )
    {
      *v47 = overrideColor;
      sub_B70630(v47);
    }
    v9->fields.tmpColorTag = *v47;
    goto LABEL_83;
  }
  Chars = System_String__Equals_44745508(v19, (System_String_o *)StringLiteral_22346/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
    v25 = System_String__Substring_44821904(txt, v16 + 12, v17 + v34 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v26 = ScriptMessageLabel__AnalysTagParam(v25, 0, 0LL);
    this->fields.defaultColorTag = v9->fields.tmpColorTag;
    sub_B70630(v47);
    v27 = ScriptMessageLabel__GetServantChangeName(v26, 0LL);
    v29 = v9->fields.isFoward;
    v30 = v27;
    v31 = this;
LABEL_63:
    v39 = overrideColor;
    goto LABEL_82;
  }
  Chars = System_String__StartsWith(v19, (System_String_o *)StringLiteral_20544/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
    Chars = (unsigned __int64)System_String__Substring_44821904(txt, v16 + 5, v17 + v34 - 5, 0LL);
    if ( !Chars )
      goto LABEL_90;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v22 = System_String__Trim_44745500((System_String_o *)Chars, 0LL);
      v23 = &StringLiteral_16056/*"[~"*/;
      goto LABEL_25;
    }
    Chars = (unsigned __int64)v46;
    if ( !v46 )
      goto LABEL_90;
    v11 = (System_String_o *)StringLiteral_16057/*"[~1]"*/;
    goto LABEL_27;
  }
  if ( v34 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_44821904(txt, v16, v17 + v34 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(&v9->fields.tmpColorTag, &text, overrideColor, 0LL);
    Chars = (unsigned __int64)*p_tmpTxt;
    if ( !*p_tmpTxt )
      goto LABEL_90;
    Chars = (unsigned __int64)System_Text_StringBuilder__Append_42601980(
                                (System_Text_StringBuilder_o *)Chars,
                                text,
                                0LL);
    goto LABEL_84;
  }
  v45 = *p_tmpTxt;
  Chars = (unsigned __int64)System_String__Substring(txt, v16, 0LL);
  if ( !v45 )
    goto LABEL_90;
  Chars = (unsigned __int64)System_Text_StringBuilder__Append_42601980(v45, (System_String_o *)Chars, 0LL);
  if ( !v15 )
    goto LABEL_90;
LABEL_87:
  ScriptLogMessage_ProcAddLabel__Invoke(v15, 0LL);
  ScriptLogMessage__UpdatePlayVoice(this, v44);
}


void __fastcall ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  ScriptMessageLabel_o *analyzeLabel; // x20
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  float voiceVolume; // s8
  System_Action_string__string__bool__o *v7; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  __int64 v9; // x1
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v11; // x1

  if ( (byte_434E2D5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_string__string__bool___ctor__);
    sub_B70694(&System_Action_string__string__bool__TypeInfo);
    sub_B70694(&Method_ScriptLogMessage_SetBackLogReplayingVoice__);
    byte_434E2D5 = 1;
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
      v7 = (System_Action_string__string__bool__o *)sub_B70764(System_Action_string__string__bool__TypeInfo);
      System_Action_string__string__bool____ctor(
        v7,
        (Il2CppObject *)this,
        Method_ScriptLogMessage_SetBackLogReplayingVoice__,
        (const MethodInfo_265C954 *)Method_System_Action_string__string__bool___ctor__);
      if ( !analyzeLabel
        || (ScriptMessageLabel__UpdatePlayVoice(analyzeLabel, voiceAssetName, voiceObjectName, voiceVolume, v7, 0LL),
            backLogDialog = this->fields.backLogDialog,
            LogLabel = ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL),
            !backLogDialog) )
      {
        sub_B7076C(LogLabel, v9);
      }
      ScriptBackLog__AddLog(backLogDialog, LogLabel, 0LL);
      ScriptLogMessage__ReleasePlayVoice(this, v11);
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
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, &v5, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall ScriptLogMessage_ProcAddLabel__Invoke(ScriptLogMessage_ProcAddLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  ScriptLogMessage_ProcAddLabel_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  ScriptLogMessage_ProcAddLabel_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  ScriptLogMessage_ProcAddLabel_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (ScriptLogMessage_ProcAddLabel_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B706C4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B706BC(v18);
      v21 = sub_B70AC0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B08590(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B70744(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B08590(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
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
  sub_B70630(p_method);
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
  return (System_IAsyncResult_o *)sub_B70638(this, v6, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__Invoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_String_o *txt,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  ScriptLogMessage_ProcAddLabel2_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptLogMessage_ProcAddLabel2_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  ScriptLogMessage_ProcAddLabel2_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (ScriptLogMessage_ProcAddLabel2_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v27->fields.extra_arg, txt);
      v31 = sub_B706C4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B706BC(v28);
            v41 = sub_B70AC0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = txt->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B08590(txt, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B70744(v15, v28);
              (*v24)(txt, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = txt->klass;
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B08590(txt, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(txt, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(txt, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B706BC(v28);
          v34 = sub_B70AC0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B08590(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B70744(v22, v28);
            (*v26)(v29, txt, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B08590(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, txt, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                txt,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, txt, v28);
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
    sub_B7076C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (System_Text_StringBuilder_o *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpTxt[3].monitor = this->fields.tmpColorTag;
  sub_B70630(&tmpTxt[3].monitor);
}


void __fastcall ScriptLogMessage___c__DisplayClass52_0___UpdateLabels_b__1(
        ScriptLogMessage___c__DisplayClass52_0_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  ScriptLogMessage___c__DisplayClass52_0_o *v3; // x19

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
    sub_B7076C(this, text);
  this[3].monitor = v3->fields.tmpColorTag;
  sub_B70630(&this[3].monitor);
}