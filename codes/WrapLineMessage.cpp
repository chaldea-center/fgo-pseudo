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
  __int64 v8; // x1
  System_String_o *v9; // x22

  if ( WrapLineMessage__IsWrapTextSize(this, tempTxt, (const MethodInfo *)addLabel) )
  {
    v7 = BasicHelper__SubstringLast(tempTxt, 1, 0LL);
    if ( !addLabel
      || (v9 = v7,
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))addLabel->fields.m_target)(
            addLabel->fields.original_method_info,
            *(_QWORD *)&addLabel->fields.extra_arg),
          ScriptLineMessage__ReturnText((ScriptLineMessage_o *)this, 0LL),
          !tempTxt) )
    {
      sub_1BAB678(v7, v8);
    }
    System_Text_StringBuilder__Append_61210024(tempTxt, v9, 0LL);
  }
}


UILabel_o *__fastcall WrapLineMessage__GetWrapCheckLabel(WrapLineMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *wrapCheckLabel; // x21
  struct UILabel_o *MainLabel; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  UILabel_o *v8; // x0

  if ( (byte_4AB8F8B & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB8F8B = 1;
  }
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(wrapCheckLabel, 0LL, 0LL) )
  {
    ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0LL);
    MainLabel = ScriptLineMessage__FetchMainLabel((ScriptLineMessage_o *)this, 0LL);
    this->fields._wrapCheckLabel = MainLabel;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._wrapCheckLabel, (int32_t)MainLabel, v5, v6);
    v8 = this->fields._wrapCheckLabel;
    if ( !v8 )
      sub_1BAB678(0LL, v7);
    UILabel__set_fontSize(v8, this->fields.fontSize, 0LL);
  }
  return this->fields._wrapCheckLabel;
}


void __fastcall WrapLineMessage__Init(WrapLineMessage_o *this, System_String_o *text, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0LL);
  this->fields.originalText = text;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.originalText, (int32_t)text, v5, v6);
}


bool __fastcall WrapLineMessage__IsWrapTextSize(
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
  Length = System_Text_StringBuilder__get_Length(tempTxt, 0LL);
  this = (WrapLineMessage_o *)WrapLineMessage__GetWrapCheckLabel(v7, v9);
  if ( !this )
    goto LABEL_10;
  v10 = wrapWidth - (float)(x - v6);
  if ( v10 >= (float)(LODWORD(this[1].fields.imageStock) * Length) )
    return 0;
  v11 = WrapLineMessage__GetWrapCheckLabel(v7, (const MethodInfo *)tempTxt);
  this = (WrapLineMessage_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))tempTxt->klass->vtable._3_ToString.method)(
                                tempTxt,
                                tempTxt->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
  if ( !v11
    || (UILabel__set_text(v11, (System_String_o *)this, 0LL),
        (this = (WrapLineMessage_o *)WrapLineMessage__GetWrapCheckLabel(v7, v12)) == 0LL) )
  {
LABEL_10:
    sub_1BAB678(this, tempTxt);
  }
  if ( v10 < UILabel__get_printedSize((UILabel_o *)this, 0LL).fields.x )
  {
    result = 1;
    v7->fields._IsWrapWidth_k__BackingField = 1;
    return result;
  }
  return 0;
}


void __fastcall WrapLineMessage__PreProcSetRubyLabel(
        WrapLineMessage_o *this,
        System_String_o *mainText,
        const MethodInfo *method)
{
  System_Text_StringBuilder_o *v5; // x21
  const MethodInfo *v6; // x2

  if ( (byte_4AB8F8A & 1) == 0 )
  {
    sub_1BAB41C(&System_Text_StringBuilder_TypeInfo, mainText);
    byte_4AB8F8A = 1;
  }
  v5 = (System_Text_StringBuilder_o *)sub_1BAB668(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor_61203848(v5, mainText, 0LL);
  if ( WrapLineMessage__IsWrapTextSize(this, v5, v6) )
    ScriptLineMessage__ReturnText((ScriptLineMessage_o *)this, 0LL);
}


void __fastcall WrapLineMessage__Quit(WrapLineMessage_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_wrapCheckLabel; // x20
  UnityEngine_Object_o *wrapCheckLabel; // x21
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4AB8F89 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB8F89 = 1;
  }
  p_wrapCheckLabel = (UnityEngine_Component_o **)&this->fields._wrapCheckLabel;
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(wrapCheckLabel, 0LL, 0LL) )
  {
    if ( !*p_wrapCheckLabel )
      sub_1BAB678(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_wrapCheckLabel, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69800620(gameObject, 0LL);
    *p_wrapCheckLabel = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._wrapCheckLabel, 0, v7, v8);
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
  if ( (byte_4AB8F88 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB8F88 = 1;
  }
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    v9 = this->fields.messageOffset;
    if ( !v9 )
      sub_1BAB678(0LL, v8);
    v13.fields.x = x;
    v13.fields.y = y;
    v13.fields.z = z;
    UnityEngine_Transform__set_localPosition(v9, v13, 0LL);
    x = x + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0LL).fields.x;
  }
  v10 = y;
  v11 = z;
  v12 = x;
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v12;
  return result;
}


void __fastcall WrapLineMessage__SetText(
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

  if ( (byte_4AB8F87 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, text);
    byte_4AB8F87 = 1;
  }
  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.originalText = text;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.originalText,
    (int32_t)text,
    (int32_t)color,
    (int32_t)font);
  ScriptLineMessage__SetText((ScriptLineMessage_o *)this, text, color, font, removeUserNameColorCode, isTalkName, 0LL);
  v14 = WrapLineMessage__GetWrapCheckLabel(this, v13);
  if ( !v14 )
    sub_1BAB678(0LL, v15);
  UILabel__set_text(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall WrapLineMessage__UpdateWrapWidth(WrapLineMessage_o *this, float width, const MethodInfo *method)
{
  UILabel_o *v4; // x0
  __int64 v5; // x1

  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.wrapWidth = width;
  v4 = WrapLineMessage__GetWrapCheckLabel(this, method);
  if ( !v4 )
    sub_1BAB678(0LL, v5);
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