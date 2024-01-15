void __fastcall WrapLineMessage___ctor(WrapLineMessage_o *this, const MethodInfo *method)
{
  ScriptLineMessage___ctor((ScriptLineMessage_o *)this, 0LL);
}


void __fastcall WrapLineMessage__AfterParseEachChar(
        WrapLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        ScriptLineMessage_ProcAddLabel_o *addLabel,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  System_String_o *v8; // x22

  if ( WrapLineMessage__IsWrapTextSize(this, tempTxt, (const MethodInfo *)addLabel) )
  {
    v7 = BasicHelper__SubstringLast(tempTxt, 1, 0LL);
    if ( !addLabel
      || (v8 = v7,
          ScriptLineMessage_ProcAddLabel__Invoke(addLabel, 0LL),
          ScriptLineMessage__ReturnText((ScriptLineMessage_o *)this, 0LL),
          !tempTxt) )
    {
      sub_B170D4();
    }
    System_Text_StringBuilder__Append_41914240(tempTxt, v8, 0LL);
  }
}


UILabel_o *__fastcall WrapLineMessage__GetWrapCheckLabel(WrapLineMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *wrapCheckLabel; // x21
  struct UILabel_o *MainLabel; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UILabel_o *v11; // x0

  if ( (byte_40F679B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F679B = 1;
  }
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(wrapCheckLabel, 0LL, 0LL) )
  {
    ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0LL);
    MainLabel = ScriptLineMessage__FetchMainLabel((ScriptLineMessage_o *)this, 0LL);
    this->fields._wrapCheckLabel = MainLabel;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._wrapCheckLabel,
      (System_Int32_array **)MainLabel,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = this->fields._wrapCheckLabel;
    if ( !v11 )
      sub_B170D4();
    UILabel__set_fontSize(v11, this->fields.fontSize, 0LL);
  }
  return this->fields._wrapCheckLabel;
}


void __fastcall WrapLineMessage__Init(WrapLineMessage_o *this, System_String_o *text, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0LL);
  this->fields.originalText = text;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.originalText,
    (System_Int32_array **)text,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall WrapLineMessage__IsWrapTextSize(
        WrapLineMessage_o *this,
        System_Text_StringBuilder_o *tempTxt,
        const MethodInfo *method)
{
  float wrapWidth; // s8
  float x; // s9
  float v6; // s10
  int32_t Length; // w21
  const MethodInfo *v9; // x1
  UILabel_o *v10; // x0
  const MethodInfo *v11; // x1
  float v12; // s8
  UILabel_o *v13; // x21
  System_String_o *v14; // x0
  const MethodInfo *v15; // x1
  UILabel_o *v16; // x0
  bool result; // w0

  wrapWidth = this->fields.wrapWidth;
  if ( wrapWidth <= 0.0 )
    return 0;
  if ( !tempTxt )
    goto LABEL_10;
  x = this->fields.dispPosition.fields.x;
  v6 = this->fields.startPosition.fields.x;
  Length = System_Text_StringBuilder__get_Length(tempTxt, 0LL);
  v10 = WrapLineMessage__GetWrapCheckLabel(this, v9);
  if ( !v10 )
    goto LABEL_10;
  v12 = wrapWidth - (float)(x - v6);
  if ( v12 >= (float)(v10->fields.mFontSize * Length) )
    return 0;
  v13 = WrapLineMessage__GetWrapCheckLabel(this, v11);
  v14 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))tempTxt->klass->vtable._3_ToString.method)(
                             tempTxt,
                             tempTxt->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v13 || (UILabel__set_text(v13, v14, 0LL), (v16 = WrapLineMessage__GetWrapCheckLabel(this, v15)) == 0LL) )
LABEL_10:
    sub_B170D4();
  if ( v12 < UILabel__get_printedSize(v16, 0LL).fields.x )
  {
    result = 1;
    this->fields._IsWrapWidth_k__BackingField = 1;
    return result;
  }
  return 0;
}


void __fastcall WrapLineMessage__PreProcSetRubyLabel(
        WrapLineMessage_o *this,
        System_String_o *mainText,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  System_Text_StringBuilder_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_40F679A & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, mainText);
    byte_40F679A = 1;
  }
  v7 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, mainText, method, v3, v4);
  System_Text_StringBuilder___ctor_41908412(v7, mainText, 0LL);
  if ( WrapLineMessage__IsWrapTextSize(this, v7, v8) )
    ScriptLineMessage__ReturnText((ScriptLineMessage_o *)this, 0LL);
}


void __fastcall WrapLineMessage__Quit(WrapLineMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_wrapCheckLabel; // x20
  UnityEngine_Object_o *wrapCheckLabel; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40F6799 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6799 = 1;
  }
  p_wrapCheckLabel = (UnityEngine_Component_o **)&this->fields._wrapCheckLabel;
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(wrapCheckLabel, 0LL, 0LL) )
  {
    if ( !*p_wrapCheckLabel )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_wrapCheckLabel, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_wrapCheckLabel = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields._wrapCheckLabel, 0LL, v6, v7, v8, v9, v10, v11);
  }
  ScriptLineMessage__Quit((ScriptLineMessage_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WrapLineMessage__SetOffsetMessage(
        WrapLineMessage_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *messageOffset; // x20
  UnityEngine_Transform_o *v8; // x0
  float v9; // s1
  float v10; // s2
  float v11; // s0
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_40F6798 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F6798 = 1;
  }
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    v8 = this->fields.messageOffset;
    if ( !v8 )
      sub_B170D4();
    v12.fields.x = x;
    v12.fields.y = y;
    v12.fields.z = z;
    UnityEngine_Transform__set_localPosition(v8, v12, 0LL);
    x = x + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0LL).fields.x;
  }
  v9 = y;
  v10 = z;
  v11 = x;
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v11;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WrapLineMessage__SetText(
        WrapLineMessage_o *this,
        System_String_o *text,
        System_String_o *color,
        UnityEngine_Font_o *font,
        bool removeUserNameColorCode,
        bool isTalkName,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  const MethodInfo *v14; // x1
  UILabel_o *v15; // x0

  if ( (byte_40F6797 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, text);
    byte_40F6797 = 1;
  }
  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.originalText = text;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.originalText,
    (System_Int32_array **)text,
    (System_String_array **)color,
    (System_String_array **)font,
    (System_Boolean_array **)removeUserNameColorCode,
    (System_Int32_array **)isTalkName,
    (System_Int32_array *)method,
    v7);
  ScriptLineMessage__SetText((ScriptLineMessage_o *)this, text, color, font, removeUserNameColorCode, isTalkName, 0LL);
  v15 = WrapLineMessage__GetWrapCheckLabel(this, v14);
  if ( !v15 )
    sub_B170D4();
  UILabel__set_text(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall WrapLineMessage__UpdateWrapWidth(WrapLineMessage_o *this, float width, const MethodInfo *method)
{
  UILabel_o *v4; // x0

  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.wrapWidth = width;
  v4 = WrapLineMessage__GetWrapCheckLabel(this, method);
  if ( !v4 )
    sub_B170D4();
  UILabel__set_fontSize(v4, this->fields.fontSize, 0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.originalText, 0LL) )
    ((void (__fastcall *)(WrapLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))this->klass->vtable._7_SetText.method)(
      this,
      this->fields.originalText,
      0LL,
      0LL,
      0LL,
      0LL,
      this->klass[1]._1.image);
}


bool __fastcall WrapLineMessage__get_IsWrapWidth(WrapLineMessage_o *this, const MethodInfo *method)
{
  return this->fields._IsWrapWidth_k__BackingField;
}


// attributes: thunk
UILabel_o *__fastcall WrapLineMessage__get_WrapCheckLabel(WrapLineMessage_o *this, const MethodInfo *method)
{
  return WrapLineMessage__GetWrapCheckLabel(this, method);
}


void __fastcall WrapLineMessage__set_IsWrapWidth(WrapLineMessage_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsWrapWidth_k__BackingField = value;
}