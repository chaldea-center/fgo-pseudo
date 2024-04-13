void __fastcall ScriptLogMessage___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4B9C & 1) == 0 )
  {
    sub_B5D5C4(&ScriptLogMessage_TypeInfo, v1, v2, v3);
    byte_42E4B9C = 1;
  }
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_LEFT_BASE = -440.0;
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_CENTER_BASE = 0.0;
  ScriptLogMessage_TypeInfo->static_fields->ALIGN_RIGHT_BASE = 400.0;
}


void __fastcall ScriptLogMessage___ctor(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4B9B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4B9B = 1;
  }
  this->fields.fontScale = 1.0;
  this->fields.defaultBetweenLineHeight = 5.0;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.defaultColorTag);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptLogMessage__AddLabel(
        ScriptLogMessage_o *this,
        System_String_o *text,
        System_String_o *colorTag,
        bool isFoward,
        const MethodInfo *method)
{
  System_String_o *v7; // x22
  ScriptLogMessage_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct ScriptMessageLabel_o *analyzeLabel; // x20
  struct UnityEngine_Vector2_o dispPosition; // x25
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  System_String_o *v20; // x22
  int backLogDialog; // w8
  int32_t maxFontSize; // w5
  int32_t verticalAlign; // w6
  int32_t fontSize; // w4
  System_String_o *mainPrefab; // x7
  UILabel_o **p_main; // x1
  UILabel_o **p_ruby; // x2
  UnityEngine_Vector2_o *p_dispPosition; // x3
  System_String_o *rubyText; // x0
  ScriptBackLog_o *v30; // x19
  const MethodInfo *v31; // x1
  System_String_o *v32; // x22
  int v33; // w8
  ScriptLogMessage_o *v34; // x23
  System_String_o *v35; // x22
  float v36; // s0
  int v37; // w8
  float v38; // s8
  const MethodInfo *v39; // x1
  System_String_o *v40; // x22
  ScriptLogMessage_o *v41; // x22
  int32_t v42; // w0
  System_String_o **p_rubyPrefab; // x8
  int v44; // w8
  ScriptLogMessage_o *v45; // x22
  System_String_o *imagePrefab; // x23
  ScriptLogMessage_o *v47; // x23
  int v48; // w24
  int32_t v49; // w0
  __int64 v50; // x0
  UnityEngine_Vector2_o v51; // 0:s1.4,4:s2.4

  v7 = text;
  v8 = this;
  if ( (byte_42E4B8F & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)text, (_DWORD)colorTag, isFoward);
    sub_B5D5C4(&StringLiteral_20484/*"line"*/, v9, v10, v11);
    this = (ScriptLogMessage_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E4B8F = 1;
  }
  analyzeLabel = v8->fields.analyzeLabel;
  if ( !analyzeLabel )
    goto LABEL_67;
  analyzeLabel->fields.colorTag = colorTag;
  analyzeLabel->fields.stepTime = 0.0;
  this = (ScriptLogMessage_o *)sub_B5D560(&analyzeLabel->fields.colorTag);
  if ( !v7 )
    goto LABEL_67;
  dispPosition = v8->fields.dispPosition;
  if ( System_String__get_Chars(v7, 0, 0LL) == 91 )
  {
    if ( System_String__get_Chars(v7, 1, 0LL) == 35 )
    {
      ScriptLogMessage__FetchMainLabel(v8, v18);
      ScriptLogMessage__FetchRubyLabel(v8, v19);
      v20 = System_String__Substring_44641524(v7, 2, v7->fields.m_stringLength - 3, 0LL);
      this = (ScriptLogMessage_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_67;
      text = (System_String_o *)this;
      if ( !LODWORD(this->fields.backLogDialog) )
        goto LABEL_68;
      LOWORD(this->fields.mainPrefab) = 58;
      if ( v20 )
      {
        this = (ScriptLogMessage_o *)System_String__Split(v20, (System_Char_array *)this, 0LL);
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
          v50 = sub_B5D6C8(this);
          sub_B5D668(v50, 0LL);
        }
      }
      goto LABEL_67;
    }
    if ( System_String__get_Chars(v7, 1, 0LL) == 94 )
    {
      ScriptLogMessage__FetchImageSprite(v8, v31);
      v32 = System_String__Substring_44641524(v7, 2, v7->fields.m_stringLength - 3, 0LL);
      this = (ScriptLogMessage_o *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_67;
      text = (System_String_o *)this;
      if ( !LODWORD(this->fields.backLogDialog) )
        goto LABEL_68;
      LOWORD(this->fields.mainPrefab) = 32;
      if ( !v32 )
        goto LABEL_67;
      this = (ScriptLogMessage_o *)System_String__Split(v32, (System_Char_array *)this, 0LL);
      if ( !this )
        goto LABEL_67;
      v33 = (int)this->fields.backLogDialog;
      v34 = this;
      if ( !v33 )
        goto LABEL_68;
      v35 = (System_String_o *)this->fields.mainPrefab;
      if ( v33 <= 1 )
      {
        this = (ScriptLogMessage_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( this )
        {
          text = (System_String_o *)this;
          if ( !LODWORD(this->fields.backLogDialog) )
            goto LABEL_68;
          LOWORD(this->fields.mainPrefab) = 58;
          if ( v35 )
          {
            this = (ScriptLogMessage_o *)System_String__Split(v35, (System_Char_array *)this, 0LL);
            if ( this )
            {
              v44 = (int)this->fields.backLogDialog;
              v45 = this;
              if ( v44 <= 1 )
              {
                if ( v44 )
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
                this = (ScriptLogMessage_o *)sub_B5D560(&analyzeLabel->fields.ruby);
                if ( LODWORD(v45->fields.backLogDialog) >= 2 )
                {
                  ScriptMessageLabel__UpdateImageRuby(
                    analyzeLabel,
                    &analyzeLabel->fields.image,
                    &analyzeLabel->fields.ruby,
                    &v8->fields.dispPosition,
                    v8->fields.fontSize,
                    (System_String_o *)v45->fields.mainPrefab,
                    (System_String_o *)v45->fields.rubyPrefab,
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
        sub_B5D69C(this, text);
      }
      v36 = System_Single__Parse((System_String_o *)this->fields.rubyPrefab, 0LL);
      v37 = (int)v34->fields.backLogDialog;
      v38 = v36;
      if ( v37 == 2 )
      {
        ScriptMessageLabel__UpdateImage_34902708(
          analyzeLabel,
          &analyzeLabel->fields.image,
          &v8->fields.dispPosition,
          v8->fields.fontSize,
          v36,
          v35,
          v8->fields.horizontalAlign,
          0LL);
        if ( !isFoward )
          goto LABEL_20;
        goto LABEL_17;
      }
      if ( v37 <= 3 )
      {
        if ( (unsigned int)v37 <= 2 )
          goto LABEL_68;
        imagePrefab = (System_String_o *)v34->fields.imagePrefab;
        this = (ScriptLogMessage_o *)sub_B5D5DC(char___TypeInfo, 1LL);
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
              v47 = this;
              if ( LODWORD(this->fields.backLogDialog) )
              {
                this = (ScriptLogMessage_o *)System_Int32__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
                if ( LODWORD(v47->fields.backLogDialog) > 1 )
                {
                  v48 = (int)this;
                  v49 = System_Int32__Parse((System_String_o *)v47->fields.rubyPrefab, 0LL);
                  v51.fields.x = (float)v48;
                  v51.fields.y = (float)v49;
                  ScriptMessageLabel__UpdateImage_34902836(
                    analyzeLabel,
                    &analyzeLabel->fields.image,
                    &v8->fields.dispPosition,
                    v8->fields.fontSize,
                    v38,
                    v35,
                    v51,
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
        ScriptLogMessage__FetchImageSprite(v8, v39);
        v40 = System_String__Substring_44641524(v7, 2, v7->fields.m_stringLength - 3, 0LL);
        this = (ScriptLogMessage_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( this )
        {
          text = (System_String_o *)this;
          if ( !LODWORD(this->fields.backLogDialog) )
            goto LABEL_68;
          LOWORD(this->fields.mainPrefab) = 32;
          if ( v40 )
          {
            this = (ScriptLogMessage_o *)System_String__Split(v40, (System_Char_array *)this, 0LL);
            if ( this )
            {
              v41 = this;
              if ( LODWORD(this->fields.backLogDialog) )
              {
                v42 = System_Int32__Parse((System_String_o *)this->fields.mainPrefab, 0LL);
                if ( SLODWORD(v41->fields.backLogDialog) >= 2 )
                  p_rubyPrefab = (System_String_o **)&v41->fields.rubyPrefab;
                else
                  p_rubyPrefab = (System_String_o **)&StringLiteral_20484/*"line"*/;
                ScriptMessageLabel__UpdateLine(
                  analyzeLabel,
                  &analyzeLabel->fields.image,
                  &v8->fields.dispPosition,
                  v8->fields.fontSize,
                  v42,
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
      analyzeLabel->fields.main = ScriptLogMessage__FetchMainLabel(v8, v39);
      sub_B5D560(&analyzeLabel->fields);
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
    ScriptLogMessage__FetchMainLabel(v8, v17);
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
  v30 = v8->fields.backLogDialog;
  this = (ScriptLogMessage_o *)ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL);
  if ( !v30 )
    goto LABEL_67;
  ScriptBackLog__AddLog(v30, (ScriptMessageLabel_o *)this, 0LL);
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
  sub_B5D560(&this->fields.voiceAssetName);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 208);
  sub_B5D560(v5);
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
void __fastcall ScriptLogMessage__AddText_17803872(
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4B99 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4B99 = 1;
  }
  this->fields.talkName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.talkName);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t defaultFontSize; // w19

  if ( (byte_42E4B9A & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v5, v6, v7);
    byte_42E4B9A = 1;
  }
  defaultFontSize = this->fields.defaultFontSize;
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  return ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_755/*"-"*/, defaultFontSize, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t fontSize; // w19

  if ( (byte_42E4B96 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B96 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t defaultFontSize; // w20
  ScriptMessageLabel_o *v27; // x21
  struct ScriptMessageLabel_o **p_analyzeLabel; // x20
  struct UnityEngine_GameObject_o *mainPrefab; // x21
  __int64 transform; // x0
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *v32; // x21
  int32_t layer; // w0
  struct ScriptMessageLabel_o *v34; // x22
  struct UnityEngine_Font_o *trueTypeFont; // x21
  UnityEngine_GameObject_o *v36; // x21
  int32_t v37; // w0
  struct ScriptMessageLabel_o *v38; // x22
  UnityEngine_GameObject_o *v39; // x21
  int32_t v40; // w0
  struct ScriptMessageLabel_o *v41; // x22
  UnityEngine_GameObject_o *v42; // x21
  int32_t v43; // w0
  struct ScriptMessageLabel_o *v44; // x22
  struct ScriptMessageLabel_o *v45; // x8
  UILabel_o *ruby; // x20
  UILabel_o *main; // x21
  float v48; // s0
  double v49; // d0
  int32_t rubyFontSize; // w8
  float v51; // s1
  float v52; // s0
  double v53; // d0
  float v54; // s0
  double v55; // d0
  float v56; // s1
  const MethodInfo *v57; // x1

  if ( (byte_42E4B8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIButton___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_24090/*"■"*/, v23, v24, v25);
    byte_42E4B8E = 1;
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
                                     (System_String_o *)StringLiteral_755/*"-"*/,
                                     defaultFontSize,
                                     0LL);
    v27 = (ScriptMessageLabel_o *)sub_B5D694(ScriptMessageLabel_TypeInfo);
    ScriptMessageLabel___ctor(v27, 0LL);
    p_analyzeLabel = &this->fields.analyzeLabel;
    this->fields.analyzeLabel = v27;
    sub_B5D560(&this->fields.analyzeLabel);
    mainPrefab = this->fields.mainPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v32 = (UnityEngine_GameObject_o *)transform;
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
    UnityEngine_GameObject__set_layer(v32, layer, 0LL);
    v34 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v32,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v34 )
      goto LABEL_49;
    v34->fields.main = (struct UILabel_o *)transform;
    transform = sub_B5D560(&v34->fields);
    if ( !*p_analyzeLabel )
      goto LABEL_49;
    transform = (__int64)(*p_analyzeLabel)->fields.main;
    if ( !transform )
      goto LABEL_49;
    trueTypeFont = UILabel__get_trueTypeFont((UILabel_o *)transform, 0LL);
    this->fields.defaultFontType = trueTypeFont;
    sub_B5D560(&this->fields.defaultFontType);
    this->fields.fontType = trueTypeFont;
    sub_B5D560(&this->fields.fontType);
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v36 = (UnityEngine_GameObject_o *)transform;
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
    v37 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v36, v37, 0LL);
    v38 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v36,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
    if ( !v38 )
      goto LABEL_49;
    v38->fields.ruby = (struct UILabel_o *)transform;
    sub_B5D560(&v38->fields.ruby);
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.imagePrefab,
                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v39 = (UnityEngine_GameObject_o *)transform;
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
    v40 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v39, v40, 0LL);
    v41 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v39,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !v41 )
      goto LABEL_49;
    v41->fields.image = (struct UISprite_o *)transform;
    sub_B5D560(&v41->fields.image);
    transform = (__int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                           (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.playVoicePrefab,
                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !transform )
      goto LABEL_49;
    v42 = (UnityEngine_GameObject_o *)transform;
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
    v43 = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)transform, 0LL);
    UnityEngine_GameObject__set_layer(v42, v43, 0LL);
    v44 = *p_analyzeLabel;
    transform = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                           v42,
                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !v44
      || (v44->fields.playVoice = (struct UIButton_o *)transform,
          transform = sub_B5D560(&v44->fields.playVoice),
          (v45 = *p_analyzeLabel) == 0LL)
      || (main = v45->fields.main,
          ruby = v45->fields.ruby,
          transform = ScriptLogMessage__GetDefaultFontSize(this, v31),
          !main) )
    {
LABEL_49:
      sub_B5D69C(transform, v31);
    }
    v48 = this->fields.fontScale * (float)(int)transform;
    if ( v48 == INFINITY )
      v49 = -v48;
    else
      v49 = v48;
    UILabel__set_fontSize(main, (int)v49, 0LL);
    UILabel__set_text(main, (System_String_o *)StringLiteral_24090/*"■"*/, 0LL);
    transform = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))main->klass->vtable._22_get_localSize.method)(
                  main,
                  main->klass->vtable._23_get_drawingDimensions.methodPtr);
    rubyFontSize = this->fields.rubyFontSize;
    this->fields.defaultTextOnlyLineHeight = v51;
    if ( rubyFontSize <= 0 )
    {
      if ( !ruby )
        goto LABEL_49;
      v54 = this->fields.fontScale * (float)ruby->fields.mFontSize;
      if ( v54 == INFINITY )
        v55 = -INFINITY;
      else
        v55 = v54;
      LODWORD(v31) = (int)v55;
      this->fields.rubyFontSize = (int)v55;
    }
    else
    {
      v52 = this->fields.fontScale * (float)rubyFontSize;
      if ( v52 == INFINITY )
        v53 = -INFINITY;
      else
        v53 = v52;
      v31 = (const MethodInfo *)(unsigned int)(int)v53;
      this->fields.rubyFontSize = (int)v31;
      if ( !ruby )
        goto LABEL_49;
    }
    UILabel__set_fontSize(ruby, (int32_t)v31, 0LL);
    UILabel__set_text(ruby, (System_String_o *)StringLiteral_24090/*"■"*/, 0LL);
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))ruby->klass->vtable._22_get_localSize.method)(
      ruby,
      ruby->klass->vtable._23_get_drawingDimensions.methodPtr);
    this->fields.rubyLineHeight = v56;
    this->fields.startPosition.fields.x = 0.0;
    this->fields.startPosition.fields.y = -v56;
    ScriptLogMessage__ClearText(this, v57);
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
      sub_B5D69C(0LL, method);
    ScriptMessageLabel__Destroy(analyzeLabel, 0LL);
    this->fields.analyzeLabel = 0LL;
    sub_B5D560(p_analyzeLabel);
    this->fields.defaultFontType = 0LL;
    sub_B5D560(&this->fields.defaultFontType);
    this->fields.fontType = 0LL;
    sub_B5D560(&this->fields.fontType);
  }
}


void __fastcall ScriptLogMessage__ReleasePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4B97 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4B97 = 1;
  }
  this->fields.isReservedAddPlayVoice = 0;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.voiceAssetName);
  this->fields.voiceObjectName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.voiceObjectName);
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
  sub_B5D560(&this->fields.voiceAssetName);
  v5->fields.voiceObjectName = objectName;
  v5 = (ScriptLogMessage_o *)((char *)v5 + 208);
  sub_B5D560(v5);
  *(float *)&v5->monitor = volume;
}


void __fastcall ScriptLogMessage__ReturnText(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  float v5; // s0
  float v6; // s0
  float v7; // s2
  double v8; // d3
  bool v9; // zf
  double v10; // d0

  if ( (byte_42E4B93 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4B93 = 1;
  }
  v5 = this->fields.dispPosition.fields.y
     - (float)((float)(this->fields.textOnlyLineHeight + this->fields.rubyLineHeight) + this->fields.betweenLineHeight);
  this->fields.dispPosition.fields.x = this->fields.startPosition.fields.x;
  this->fields.dispPosition.fields.y = v5;
  v6 = this->fields.fontScale * (float)ScriptLogMessage__GetDefaultFontSize(this, method);
  v7 = this->fields.textOnlyLineHeight + this->fields.rubyLineHeight;
  v8 = v6;
  v9 = v6 == INFINITY;
  v10 = -v6;
  if ( !v9 )
    v10 = v8;
  this->fields.textOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  this->fields.beforeTextOnlyLineHeight = v7;
  this->fields.fontSize = (int)v10;
  this->fields.verticalAlign = 0;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.defaultColorTag);
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

  if ( (byte_42E4B98 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptLogMessage_TypeInfo, isLineHead, lineLength, method);
    byte_42E4B98 = 1;
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
        sub_B5D560(&backLogDialog->fields._ReplayingAssetName_k__BackingField),
        (backLogDialog = this->fields.backLogDialog) == 0LL)
    || (backLogDialog->fields._ReplayingObjectName_k__BackingField = objectName,
        backLogDialog = (struct ScriptBackLog_o *)sub_B5D560(&backLogDialog->fields._ReplayingObjectName_k__BackingField),
        (v9 = this->fields.backLogDialog) == 0LL) )
  {
    sub_B5D69C(backLogDialog, assetName);
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
      sub_B5D69C(0LL, method);
  }
  else
  {
    height = this->fields.defaultBetweenLineHeight;
  }
  this->fields.betweenLineHeight = height;
}


void __fastcall ScriptLogMessage__SetDefaultState(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t DefaultFontSize; // w0
  float defaultTextOnlyLineHeight; // s2
  float rubyLineHeight; // s3
  float v8; // s0
  float defaultBetweenLineHeight; // w9
  float v10; // s2
  double v11; // d3
  bool v12; // zf
  double v13; // d0

  if ( (byte_42E4B92 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E4B92 = 1;
  }
  DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, method);
  defaultTextOnlyLineHeight = this->fields.defaultTextOnlyLineHeight;
  rubyLineHeight = this->fields.rubyLineHeight;
  v8 = this->fields.fontScale * (float)DefaultFontSize;
  defaultBetweenLineHeight = this->fields.defaultBetweenLineHeight;
  this->fields.textOnlyLineHeight = defaultTextOnlyLineHeight;
  v10 = defaultTextOnlyLineHeight + rubyLineHeight;
  v11 = v8;
  v12 = v8 == INFINITY;
  v13 = -v8;
  if ( !v12 )
    v13 = v11;
  this->fields.betweenLineHeight = defaultBetweenLineHeight;
  this->fields.beforeTextOnlyLineHeight = v10;
  this->fields.fontSize = (int)v13;
  this->fields.verticalAlign = 0;
  this->fields.defaultColorTag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.defaultColorTag);
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

  if ( (byte_42E4B95 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, (_DWORD)sizeName, (_DWORD)verticalAlign, method);
    byte_42E4B95 = 1;
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
  __int64 v3; // x3
  UnityEngine_Object_o *defaultFontType; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  defaultFontType = (UnityEngine_Object_o *)font;
  if ( (byte_42E4B94 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)font, (_DWORD)method, v3);
    byte_42E4B94 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(defaultFontType, 0LL, 0LL);
  if ( v6 )
  {
    if ( !this )
      sub_B5D69C(v6, v7);
  }
  else
  {
    defaultFontType = (UnityEngine_Object_o *)this->fields.defaultFontType;
  }
  this->fields.fontType = (struct UnityEngine_Font_o *)defaultFontType;
  sub_B5D560(&this->fields.fontType);
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
    sub_B5D560(&this->fields.talkName);
    fontType = this->fields.fontType;
    this->fields.fontType = this->fields.defaultFontType;
    sub_B5D560(&this->fields.fontType);
    DefaultFontSize = ScriptLogMessage__GetDefaultFontSize(this, v7);
    x = this->fields.startPosition.fields.x;
    this->fields.fontSize = DefaultFontSize;
    this->fields.verticalAlign = 0;
    this->fields.dispPosition.fields.x = x + -50.0;
    ScriptLogMessage__UpdateLabels(this, text, 0, 0LL, v10);
    ScriptLogMessage__ReturnText(this, v11);
    this->fields.fontType = fontType;
    sub_B5D560(&this->fields.fontType);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  int v21; // w1
  char v22; // w2
  __int64 v23; // x3
  int v24; // w1
  char v25; // w2
  __int64 v26; // x3
  int v27; // w1
  char v28; // w2
  __int64 v29; // x3
  int v30; // w1
  char v31; // w2
  __int64 v32; // x3
  int v33; // w1
  char v34; // w2
  __int64 v35; // x3
  int v36; // w1
  char v37; // w2
  __int64 v38; // x3
  int v39; // w1
  char v40; // w2
  __int64 v41; // x3
  int v42; // w1
  char v43; // w2
  __int64 v44; // x3
  int v45; // w1
  char v46; // w2
  __int64 v47; // x3
  int v48; // w1
  char v49; // w2
  __int64 v50; // x3
  int v51; // w1
  char v52; // w2
  __int64 v53; // x3
  int v54; // w1
  char v55; // w2
  __int64 v56; // x3
  int v57; // w1
  char v58; // w2
  __int64 v59; // x3
  int v60; // w1
  char v61; // w2
  __int64 v62; // x3
  int v63; // w1
  char v64; // w2
  __int64 v65; // x3
  ScriptLogMessage___c__DisplayClass52_0_o *v66; // x22
  __int64 Chars; // x0
  System_String_o *v68; // x1
  System_Text_StringBuilder_o **p_tmpTxt; // x23
  System_Text_StringBuilder_o *v70; // x24
  struct System_String_o **p_defaultColorTag; // x21
  ScriptLogMessage_ProcAddLabel_o *v72; // x24
  int32_t v73; // w21
  int v74; // w25
  System_String_o *v75; // x0
  System_String_o *v76; // x27
  int32_t v77; // w1
  int32_t v78; // w2
  System_String_o *v79; // x0
  __int64 *v80; // x8
  const MethodInfo *v81; // x1
  System_String_o *v82; // x21
  System_String_array *v83; // x21
  System_String_o *v84; // x0
  const MethodInfo *v85; // x4
  bool v86; // w2
  System_String_o *v87; // x1
  ScriptLogMessage_o *v88; // x0
  int32_t v89; // w27
  int32_t BraceIndex; // w0
  int32_t v91; // w28
  System_String_o *v92; // x0
  int32_t v93; // w21
  System_String_o *String; // x0
  System_String_o *v95; // x21
  System_String_o *v96; // x3
  System_Text_StringBuilder_o *v97; // x28
  int v98; // w1
  char v99; // w2
  __int64 v100; // x3
  ScriptReplaceString_c *v101; // x0
  int32_t playerGenderIndex; // w27
  System_String_o *TagSplitString; // x21
  const MethodInfo *v104; // x1
  System_Text_StringBuilder_o *v105; // x22
  ScriptLogMessage_ProcAddLabel2_o *v106; // [xsp+0h] [xbp-70h]
  struct System_String_o **v107; // [xsp+8h] [xbp-68h]
  System_String_o *overrideColor; // [xsp+10h] [xbp-60h]
  System_String_o *text; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E4B90 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptLogMessage_ProcAddLabel2_TypeInfo, (_DWORD)txt, isFoward, enforceColor);
    sub_B5D5C4(&ScriptLogMessage_ProcAddLabel_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ScriptReplaceString_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__, v21, v22, v23);
    sub_B5D5C4(&Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__, v24, v25, v26);
    sub_B5D5C4(&ScriptLogMessage___c__DisplayClass52_0_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22278/*"servantName"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_15834/*"[-]"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_19497/*"i"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16026/*"[~1]"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_15961/*"[^"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_21954/*"r"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_18508/*"effectmessage"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_20484/*"line"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_19657/*"image"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_16025/*"[~"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v63, v64, v65);
    byte_42E4B90 = 1;
  }
  text = 0LL;
  v66 = (ScriptLogMessage___c__DisplayClass52_0_o *)sub_B5D694(ScriptLogMessage___c__DisplayClass52_0_TypeInfo);
  ScriptLogMessage___c__DisplayClass52_0___ctor(v66, 0LL);
  if ( !v66 )
    goto LABEL_90;
  v66->fields.__4__this = this;
  p_tmpTxt = &v66->fields.tmpTxt;
  sub_B5D560(&v66->fields.__4__this);
  v66->fields.isFoward = isFoward;
  v70 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v70, 0LL);
  v66->fields.tmpTxt = v70;
  sub_B5D560(&v66->fields);
  p_defaultColorTag = &this->fields.defaultColorTag;
  if ( enforceColor )
  {
    *p_defaultColorTag = enforceColor;
    sub_B5D560(&this->fields.defaultColorTag);
  }
  v107 = &this->fields.defaultColorTag;
  overrideColor = enforceColor;
  v66->fields.tmpColorTag = *p_defaultColorTag;
  sub_B5D560(&v66->fields.tmpColorTag);
  v72 = (ScriptLogMessage_ProcAddLabel_o *)sub_B5D694(ScriptLogMessage_ProcAddLabel_TypeInfo);
  ScriptLogMessage_ProcAddLabel___ctor(
    v72,
    (Il2CppObject *)v66,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__0__,
    0LL);
  v106 = (ScriptLogMessage_ProcAddLabel2_o *)sub_B5D694(ScriptLogMessage_ProcAddLabel2_TypeInfo);
  ScriptLogMessage_ProcAddLabel2___ctor(
    v106,
    (Il2CppObject *)v66,
    Method_ScriptLogMessage___c__DisplayClass52_0__UpdateLabels_b__1__,
    0LL);
  if ( !txt )
LABEL_90:
    sub_B5D69C(Chars, v68);
  if ( txt->fields.m_stringLength < 1 )
  {
LABEL_86:
    if ( !v72 )
      goto LABEL_90;
    goto LABEL_87;
  }
  v73 = 0;
  v74 = 0;
  while ( 1 )
  {
    if ( System_String__get_Chars(txt, v73, 0LL) != 91 )
    {
      v97 = *p_tmpTxt;
      Chars = System_String__get_Chars(txt, v73, 0LL);
      if ( !v97 )
        goto LABEL_90;
      v89 = v73 + 1;
      Chars = (__int64)System_Text_StringBuilder__Append_42956988(v97, Chars, 0LL);
      goto LABEL_85;
    }
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v89 = v73 + 1;
    BraceIndex = ScriptMessageLabel__GetBraceIndex(txt, v73 + 1, 0LL);
    if ( BraceIndex == -1 )
    {
      Chars = (__int64)*p_tmpTxt;
      if ( !*p_tmpTxt )
        goto LABEL_90;
      Chars = (__int64)System_Text_StringBuilder__Append_42953744(
                         (System_Text_StringBuilder_o *)Chars,
                         (System_String_o *)StringLiteral_15824/*"["*/,
                         0LL);
      goto LABEL_85;
    }
    v91 = BraceIndex;
    Chars = System_String__get_Chars(txt, v89, 0LL);
    if ( (unsigned __int16)Chars == 37 )
    {
      if ( !v72 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
      v92 = System_String__Substring_44641524(txt, v73 + 2, v74 + v91 - 2, 0LL);
      v93 = System_Int32__Parse(v92, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      String = ScriptReplaceString__GetString(v93, 0LL);
      v95 = System_String__Concat_44577788(String, (System_String_o *)StringLiteral_15834/*"[-]"*/, 0LL);
      this->fields.defaultColorTag = v66->fields.tmpColorTag;
      sub_B5D560(v107);
      v86 = v66->fields.isFoward;
      v88 = this;
      v87 = v95;
      goto LABEL_63;
    }
    Chars = System_String__get_Chars(txt, v89, 0LL);
    if ( (unsigned __int16)Chars == 38 )
    {
      if ( !v72 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
      }
      if ( !byte_42E4CBB )
      {
        sub_B5D5C4(&ScriptReplaceString_TypeInfo, v98, v99, v100);
        byte_42E4CBB = 1;
      }
      v101 = ScriptReplaceString_TypeInfo;
      if ( (BYTE3(ScriptReplaceString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptReplaceString_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptReplaceString_TypeInfo);
        v101 = ScriptReplaceString_TypeInfo;
      }
      playerGenderIndex = v101->static_fields->playerGenderIndex;
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      TagSplitString = ScriptMessageLabel__GetTagSplitString(txt, v73 + 2, playerGenderIndex, 0LL);
      this->fields.defaultColorTag = v66->fields.tmpColorTag;
      sub_B5D560(v107);
      v86 = v66->fields.isFoward;
      v88 = this;
      v87 = TagSplitString;
      v96 = overrideColor;
LABEL_82:
      ScriptLogMessage__UpdateLabels(v88, v87, v86, v96, v85);
      v66->fields.tmpColorTag = this->fields.defaultColorTag;
LABEL_83:
      Chars = sub_B5D560(&v66->fields.tmpColorTag);
      goto LABEL_84;
    }
    Chars = System_String__get_Chars(txt, v89, 0LL);
    if ( (unsigned __int16)Chars == 35 )
    {
      if ( !v72 )
        goto LABEL_90;
      ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
      v75 = System_String__Substring_44641524(txt, v73, v74 + v91 + 1, 0LL);
      goto LABEL_26;
    }
    Chars = System_String__get_Chars(txt, v89, 0LL);
    if ( (unsigned __int16)Chars != 61 )
    {
      if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      }
      Chars = (__int64)ScriptMessageLabel__GetCommandName(txt, v89, 0LL);
      if ( !Chars )
        goto LABEL_90;
      v76 = (System_String_o *)Chars;
      Chars = System_String__Equals_44565128((System_String_o *)Chars, (System_String_o *)StringLiteral_19657/*"image"*/, 0LL);
      if ( (Chars & 1) != 0 )
      {
        if ( !v72 )
          goto LABEL_90;
        ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
        v77 = v73 + 7;
        v78 = v74 + v91 - 7;
        goto LABEL_24;
      }
      Chars = System_String__Equals_44565128(v76, (System_String_o *)StringLiteral_18508/*"effectmessage"*/, 0LL);
      if ( (Chars & 1) == 0 )
        break;
    }
LABEL_84:
    v89 = v91 + 1;
LABEL_85:
    v74 = -v89;
    v73 = v89;
    if ( v89 >= txt->fields.m_stringLength )
      goto LABEL_86;
  }
  Chars = System_String__Equals_44565128(v76, (System_String_o *)StringLiteral_19497/*"i"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v72 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
    v77 = v73 + 3;
    v78 = v74 + v91 - 3;
LABEL_24:
    v79 = System_String__Substring_44641524(txt, v77, v78, 0LL);
    v80 = &StringLiteral_15961/*"[^"*/;
LABEL_25:
    v75 = System_String__Concat_44580072((System_String_o *)*v80, v79, (System_String_o *)StringLiteral_16061/*"]"*/, 0LL);
LABEL_26:
    v68 = v75;
    Chars = (__int64)v106;
    if ( !v106 )
      goto LABEL_90;
LABEL_27:
    ScriptLogMessage_ProcAddLabel2__Invoke((ScriptLogMessage_ProcAddLabel2_o *)Chars, v68, 0LL);
    goto LABEL_84;
  }
  Chars = System_String__Equals_44565128(v76, (System_String_o *)StringLiteral_21954/*"r"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v72 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
    this->fields.isDelayAddPlayVoice = 1;
    ScriptLogMessage__ReturnText(this, v81);
    if ( overrideColor )
    {
      *v107 = overrideColor;
      sub_B5D560(v107);
    }
    v66->fields.tmpColorTag = *v107;
    goto LABEL_83;
  }
  Chars = System_String__Equals_44565128(v76, (System_String_o *)StringLiteral_22278/*"servantName"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v72 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
    v82 = System_String__Substring_44641524(txt, v73 + 12, v74 + v91 - 12, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    v83 = ScriptMessageLabel__AnalysTagParam(v82, 0, 0LL);
    this->fields.defaultColorTag = v66->fields.tmpColorTag;
    sub_B5D560(v107);
    v84 = ScriptMessageLabel__GetServantChangeName(v83, 0LL);
    v86 = v66->fields.isFoward;
    v87 = v84;
    v88 = this;
LABEL_63:
    v96 = overrideColor;
    goto LABEL_82;
  }
  Chars = System_String__StartsWith(v76, (System_String_o *)StringLiteral_20484/*"line"*/, 0LL);
  if ( (Chars & 1) != 0 )
  {
    if ( !v72 )
      goto LABEL_90;
    ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
    Chars = (__int64)System_String__Substring_44641524(txt, v73 + 5, v74 + v91 - 5, 0LL);
    if ( !Chars )
      goto LABEL_90;
    if ( *(int *)(Chars + 16) >= 1 )
    {
      v79 = System_String__Trim_44565120((System_String_o *)Chars, 0LL);
      v80 = &StringLiteral_16025/*"[~"*/;
      goto LABEL_25;
    }
    Chars = (__int64)v106;
    if ( !v106 )
      goto LABEL_90;
    v68 = (System_String_o *)StringLiteral_16026/*"[~1]"*/;
    goto LABEL_27;
  }
  if ( v91 < txt->fields.m_stringLength )
  {
    text = System_String__Substring_44641524(txt, v73, v74 + v91 + 1, 0LL);
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    ScriptMessageLabel__EnforceColorTag(&v66->fields.tmpColorTag, &text, overrideColor, 0LL);
    Chars = (__int64)*p_tmpTxt;
    if ( !*p_tmpTxt )
      goto LABEL_90;
    Chars = (__int64)System_Text_StringBuilder__Append_42953744((System_Text_StringBuilder_o *)Chars, text, 0LL);
    goto LABEL_84;
  }
  v105 = *p_tmpTxt;
  Chars = (__int64)System_String__Substring(txt, v73, 0LL);
  if ( !v105 )
    goto LABEL_90;
  Chars = (__int64)System_Text_StringBuilder__Append_42953744(v105, (System_String_o *)Chars, 0LL);
  if ( !v72 )
    goto LABEL_90;
LABEL_87:
  ScriptLogMessage_ProcAddLabel__Invoke(v72, 0LL);
  ScriptLogMessage__UpdatePlayVoice(this, v104);
}


void __fastcall ScriptLogMessage__UpdatePlayVoice(ScriptLogMessage_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ScriptMessageLabel_o *analyzeLabel; // x20
  System_String_o *voiceAssetName; // x21
  System_String_o *voiceObjectName; // x22
  float voiceVolume; // s8
  System_Action_string__string__bool__o *v15; // x23
  ScriptMessageLabel_o *LogLabel; // x0
  __int64 v17; // x1
  ScriptBackLog_o *backLogDialog; // x21
  const MethodInfo *v19; // x1

  if ( (byte_42E4B91 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string__string__bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_string__string__bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ScriptLogMessage_SetBackLogReplayingVoice__, v8, v9, v10);
    byte_42E4B91 = 1;
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
      v15 = (System_Action_string__string__bool__o *)sub_B5D694(System_Action_string__string__bool__TypeInfo);
      System_Action_string__string__bool____ctor(
        v15,
        (Il2CppObject *)this,
        Method_ScriptLogMessage_SetBackLogReplayingVoice__,
        (const MethodInfo_259BB2C *)Method_System_Action_string__string__bool___ctor__);
      if ( !analyzeLabel
        || (ScriptMessageLabel__UpdatePlayVoice(analyzeLabel, voiceAssetName, voiceObjectName, voiceVolume, v15, 0LL),
            backLogDialog = this->fields.backLogDialog,
            LogLabel = ScriptMessageLabel__GetLogLabel(analyzeLabel, 0LL),
            !backLogDialog) )
      {
        sub_B5D69C(LogLabel, v17);
      }
      ScriptBackLog__AddLog(backLogDialog, LogLabel, 0LL);
      ScriptLogMessage__ReleasePlayVoice(this, v19);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall ScriptLogMessage_ProcAddLabel__BeginInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel__EndInvoke(
        ScriptLogMessage_ProcAddLabel_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall ScriptLogMessage_ProcAddLabel__Invoke(ScriptLogMessage_ProcAddLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  ScriptLogMessage_ProcAddLabel_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
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
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  ScriptLogMessage_ProcAddLabel_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (ScriptLogMessage_ProcAddLabel_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
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
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall ScriptLogMessage_ProcAddLabel2__EndInvoke(
        ScriptLogMessage_ProcAddLabel2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  System_String_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_String_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_String_o *, _QWORD); // x0
  ScriptLogMessage_ProcAddLabel2_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_String_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_String_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  ScriptLogMessage_ProcAddLabel2_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_String_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, txt, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = txt->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&txt->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&txt->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(txt, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(txt, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
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
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(txt, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v15)(txt, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&txt->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  txt,
                  *((_QWORD *)&txt->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(txt, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, txt, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v23)(v31, txt, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v31
                                                                           + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                           + 312))(
                v31,
                txt,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v32)(v31, txt, v30);
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
    sub_B5D69C(tmpTxt, method);
  }
  System_Text_StringBuilder__set_Length(tmpTxt, 0, 0LL);
LABEL_8:
  tmpTxt = (System_Text_StringBuilder_o *)this->fields.__4__this;
  if ( !tmpTxt )
    goto LABEL_10;
  tmpTxt[3].monitor = this->fields.tmpColorTag;
  sub_B5D560(&tmpTxt[3].monitor);
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
    sub_B5D69C(this, text);
  this[3].monitor = v3->fields.tmpColorTag;
  sub_B5D560(&this[3].monitor);
}