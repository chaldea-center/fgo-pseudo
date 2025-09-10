void WrapLineMessage___ctor(WrapLineMessage_o *this, const MethodInfo *method)
{
  ScriptLineMessage___ctor((ScriptLineMessage_o *)this, 0);
}


void WrapLineMessage__AfterParseEachChar(
        WrapLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        ScriptLineMessage_ProcAddLabel_o *addLabel,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x22

  if ( WrapLineMessage__IsWrapTextSize(this, tempTxt, (const MethodInfo *)addLabel) )
  {
    v7 = BasicHelper__SubstringLast(tempTxt, 1, 0);
    if ( !addLabel
      || (v9 = v7,
          ((void (__fastcall *)(intptr_t, intptr_t))addLabel->fields.invoke_impl)(
            addLabel->fields.method_code,
            addLabel->fields.method),
          ScriptLineMessage__ReturnText((ScriptLineMessage_o *)this, 0),
          !tempTxt) )
    {
      sub_1C2D6EC(v7, v8);
    }
    System_Text_StringBuilder__Append_63542928(tempTxt, v9, 0);
  }
}


UILabel_o *WrapLineMessage__GetWrapCheckLabel(WrapLineMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *wrapCheckLabel; // x21
  struct UILabel_o *MainLabel; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  UILabel_o *v8; // x0

  if ( (byte_4C2AA3B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA3B = 1;
  }
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(wrapCheckLabel, 0, 0) )
  {
    ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0);
    MainLabel = ScriptLineMessage__FetchMainLabel((ScriptLineMessage_o *)this, 0);
    this->fields._wrapCheckLabel = MainLabel;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._wrapCheckLabel, (int32_t)MainLabel, v5, v6);
    v8 = this->fields._wrapCheckLabel;
    if ( !v8 )
      sub_1C2D6EC(0, v7);
    UILabel__set_fontSize(v8, this->fields.fontSize, 0);
  }
  return this->fields._wrapCheckLabel;
}


void WrapLineMessage__Init(WrapLineMessage_o *this, System_String_o *text, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0);
  this->fields.originalText = text;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.originalText, (int32_t)text, v5, v6);
}


bool WrapLineMessage__IsWrapTextSize(
        WrapLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        const MethodInfo *method)
{
  float wrapWidth; // s8
  float x; // s9
  float v6; // s10
  WrapLineMessage_o *v7; // x19
  int32_t Length; // w21
  const MethodInfo *v9; // x1
  float v10; // s8
  UILabel_o *v11; // x21
  const MethodInfo *v12; // x1
  bool result; // w0

  wrapWidth = this->fields.wrapWidth;
  if ( wrapWidth <= 0.0 )
    return 0;
  if ( !tempTxt )
    goto LABEL_10;
  x = this->fields.dispPosition.fields.x;
  v6 = this->fields.startPosition.fields.x;
  v7 = this;
  Length = System_Text_StringBuilder__get_Length(tempTxt, 0);
  this = (WrapLineMessage_o *)WrapLineMessage__GetWrapCheckLabel(v7, v9);
  if ( !this )
    goto LABEL_10;
  v10 = wrapWidth - (float)(x - v6);
  if ( v10 >= (float)(LODWORD(this[1].fields.imageStock) * Length) )
    return 0;
  v11 = WrapLineMessage__GetWrapCheckLabel(v7, (const MethodInfo *)tempTxt);
  this = (WrapLineMessage_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))tempTxt->klass->vtable._3_ToString.methodPtr)(
                                tempTxt,
                                tempTxt->klass->vtable._3_ToString.method);
  if ( !v11
    || (UILabel__set_text(v11, (System_String_o *)this, 0),
        (this = (WrapLineMessage_o *)WrapLineMessage__GetWrapCheckLabel(v7, v12)) == 0) )
  {
LABEL_10:
    sub_1C2D6EC(this, tempTxt);
  }
  if ( v10 < UILabel__get_printedSize((UILabel_o *)this, 0).fields.x )
  {
    result = 1;
    v7->fields._IsWrapWidth_k__BackingField = 1;
    return result;
  }
  return 0;
}


void WrapLineMessage__PreProcSetRubyLabel(WrapLineMessage_o *this, System_String_o *mainText, const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4C2AA3A & 1) == 0 )
  {
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    byte_4C2AA3A = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_63536752(v5, mainText, 0);
  if ( WrapLineMessage__IsWrapTextSize(this, v5, v6) )
    ScriptLineMessage__ReturnText((ScriptLineMessage_o *)this, 0);
}


void WrapLineMessage__Quit(WrapLineMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_wrapCheckLabel; // x20
  UnityEngine_Object_o *wrapCheckLabel; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2AA39 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA39 = 1;
  }
  p_wrapCheckLabel = (UnityEngine_Component_o **)&this->fields._wrapCheckLabel;
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(wrapCheckLabel, 0, 0) )
  {
    if ( !*p_wrapCheckLabel )
      sub_1C2D6EC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_wrapCheckLabel, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_wrapCheckLabel = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._wrapCheckLabel, 0, v7, v8);
  }
  ScriptLineMessage__Quit((ScriptLineMessage_o *)this, 0);
}


UnityEngine_Vector3_o WrapLineMessage__SetOffsetMessage(
        WrapLineMessage_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x0
  float v10; // s1
  float v11; // s2
  float v12; // s0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C2AA38 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA38 = 1;
  }
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0, 0) )
  {
    v9 = this->fields.messageOffset;
    if ( !v9 )
      sub_1C2D6EC(0, v8);
    v13.fields.x = x;
    v13.fields.y = y;
    v13.fields.z = z;
    UnityEngine_Transform__set_localPosition(v9, v13, 0);
    x = x + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0).fields.x;
  }
  v10 = y;
  v11 = z;
  v12 = x;
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v12;
  return result;
}


void WrapLineMessage__SetText(
        WrapLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        bool isTalkName,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x1
  UILabel_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_4C2AA37 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AA37 = 1;
  }
  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.originalText = text;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.originalText,
    (int32_t)text,
    (int32_t)color,
    (const MethodInfo *)font);
  ScriptLineMessage__SetText((ScriptLineMessage_o *)this, text, color, font, removeUserNameColorCode, isTalkName, 0);
  v14 = WrapLineMessage__GetWrapCheckLabel(this, v13);
  if ( !v14 )
    sub_1C2D6EC(0, v15);
  UILabel__set_text(v14, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void WrapLineMessage__UpdateWrapWidth(WrapLineMessage_o *this, float width, const MethodInfo *method)
{
  UILabel_o *v4; // x0
  __int64 v5; // x1

  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.wrapWidth = width;
  v4 = WrapLineMessage__GetWrapCheckLabel(this, method);
  if ( !v4 )
    sub_1C2D6EC(0, v5);
  UILabel__set_fontSize(v4, this->fields.fontSize, 0);
  if ( !System_String__IsNullOrEmpty(this->fields.originalText, 0) )
    ((void (__fastcall *)(WrapLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))this->klass->vtable._7_SetText.methodPtr)(
      this,
      this->fields.originalText,
      0,
      0,
      0,
      0,
      this->klass->vtable._7_SetText.method);
}


bool WrapLineMessage__get_IsWrapWidth(WrapLineMessage_o *this, const MethodInfo *method)
{
  return this->fields._IsWrapWidth_k__BackingField;
}


// attributes: thunk
UILabel_o *WrapLineMessage__get_WrapCheckLabel(WrapLineMessage_o *this, const MethodInfo *method)
{
  return WrapLineMessage__GetWrapCheckLabel(this, method);
}


void WrapLineMessage__set_IsWrapWidth(WrapLineMessage_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsWrapWidth_k__BackingField = value;
}