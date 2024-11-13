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
      sub_1BCAA3C(v7, v8);
    }
    System_Text_StringBuilder__Append_61563116(tempTxt, v9, 0LL);
  }
}


UILabel_o *__fastcall WrapLineMessage__GetWrapCheckLabel(WrapLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *wrapCheckLabel; // x21
  struct UILabel_o *MainLabel; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  UILabel_o *v13; // x0

  if ( (byte_4B1947C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1947C = 1;
  }
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(wrapCheckLabel, 0LL, 0LL) )
  {
    ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0LL);
    MainLabel = ScriptLineMessage__FetchMainLabel((ScriptLineMessage_o *)this, 0LL);
    this->fields._wrapCheckLabel = MainLabel;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._wrapCheckLabel,
      (int64_t)MainLabel,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v13 = this->fields._wrapCheckLabel;
    if ( !v13 )
      sub_1BCAA3C(0LL, v12);
    UILabel__set_fontSize(v13, this->fields.fontSize, 0LL);
  }
  return this->fields._wrapCheckLabel;
}


void __fastcall WrapLineMessage__Init(WrapLineMessage_o *this, System_String_o *text, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  ScriptLineMessage__Init((ScriptLineMessage_o *)this, 0LL);
  this->fields.originalText = text;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.originalText, (int64_t)text, v5, v6, v7, v8, v9, v10);
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
    sub_1BCAA3C(this, tempTxt);
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
  __int64 v3; // x3
  System_Text_StringBuilder_o *v6; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4B1947B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, mainText, method);
    byte_4B1947B = 1;
  }
  v6 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, mainText, method, v3);
  System_Text_StringBuilder___ctor_61556940(v6, mainText, 0LL);
  if ( WrapLineMessage__IsWrapTextSize(this, v6, v7) )
    ScriptLineMessage__ReturnText((ScriptLineMessage_o *)this, 0LL);
}


void __fastcall WrapLineMessage__Quit(WrapLineMessage_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_wrapCheckLabel; // x20
  UnityEngine_Object_o *wrapCheckLabel; // x21
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1947A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1947A = 1;
  }
  p_wrapCheckLabel = (UnityEngine_Component_o **)&this->fields._wrapCheckLabel;
  wrapCheckLabel = (UnityEngine_Object_o *)this->fields._wrapCheckLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(wrapCheckLabel, 0LL, 0LL) )
  {
    if ( !*p_wrapCheckLabel )
      sub_1BCAA3C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_wrapCheckLabel, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_wrapCheckLabel = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._wrapCheckLabel, 0LL, v9, v10, v11, v12, v13, v14);
  }
  ScriptLineMessage__Quit((ScriptLineMessage_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall WrapLineMessage__SetOffsetMessage(
        WrapLineMessage_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *messageOffset; // x20
  __int64 v9; // x1
  UnityEngine_Transform_o *v10; // x0
  float v11; // s1
  float v12; // s2
  float v13; // s0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4B19479 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v3);
    byte_4B19479 = 1;
  }
  messageOffset = (UnityEngine_Object_o *)this->fields.messageOffset;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(messageOffset, 0LL, 0LL) )
  {
    v10 = this->fields.messageOffset;
    if ( !v10 )
      sub_1BCAA3C(0LL, v9);
    v14.fields.x = x;
    v14.fields.y = y;
    v14.fields.z = z;
    UnityEngine_Transform__set_localPosition(v10, v14, 0LL);
    x = x + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)this, 0LL).fields.x;
  }
  v11 = y;
  v12 = z;
  v13 = x;
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v13;
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
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v14; // x1
  UILabel_o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4B19478 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, text, color);
    byte_4B19478 = 1;
  }
  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.originalText = text;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.originalText,
    (int64_t)text,
    (int64_t)color,
    (int32_t)font,
    (System_String_o *)removeUserNameColorCode,
    (BattleSetupInfo_o *)isTalkName,
    (FollowerInfo_o *)method,
    v7);
  ScriptLineMessage__SetText((ScriptLineMessage_o *)this, text, color, font, removeUserNameColorCode, isTalkName, 0LL);
  v15 = WrapLineMessage__GetWrapCheckLabel(this, v14);
  if ( !v15 )
    sub_1BCAA3C(0LL, v16);
  UILabel__set_text(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall WrapLineMessage__UpdateWrapWidth(WrapLineMessage_o *this, float width, const MethodInfo *method)
{
  UILabel_o *v4; // x0
  __int64 v5; // x1

  this->fields._IsWrapWidth_k__BackingField = 0;
  this->fields.wrapWidth = width;
  v4 = WrapLineMessage__GetWrapCheckLabel(this, method);
  if ( !v4 )
    sub_1BCAA3C(0LL, v5);
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