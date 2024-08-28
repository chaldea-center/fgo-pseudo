void __fastcall BattleSealedCommandWindowComponent___ctor(
        BattleSealedCommandWindowComponent_o *this,
        const MethodInfo *method)
{
  this->fields.labelDefaultFontSize = 30;
  *(_QWORD *)&this->fields.labelDefaultPosition.fields.x = 0x4180000000000000LL;
  this->fields.labelDefaultPosition.fields.z = 0.0;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0LL);
}


System_String_o *__fastcall BattleSealedCommandWindowComponent__get_closeBtnPath(
        BattleSealedCommandWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0BBE2 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_17438/*"btn_close"*/, method);
    byte_4A0BBE2 = 1;
  }
  return (System_String_o *)StringLiteral_17438/*"btn_close"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSealedCommandWindowComponent__setLabel(
        BattleSealedCommandWindowComponent_o *this,
        System_String_o *str,
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *args,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *confLabel; // x22
  __int64 value; // x1
  UILabel_o *transform; // x0
  __int64 v15; // x8
  float x; // s0
  float z; // s2
  float y; // s1

  if ( (byte_4A0BBE1 & 1) == 0 )
  {
    sub_1B686D4(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, str);
    sub_1B686D4(&Method_System_Nullable_int__GetValueOrDefault__, v7);
    sub_1B686D4(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8);
    sub_1B686D4(&Method_System_Nullable_Vector3__get_HasValue__, v9);
    sub_1B686D4(&Method_System_Nullable_int__get_HasValue__, v10);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v11);
    byte_4A0BBE1 = 1;
  }
  confLabel = (UnityEngine_Object_o *)this->fields.confLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(confLabel, 0LL, 0LL) )
  {
    if ( !args )
    {
      args = (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)sub_1B68920(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
      System_Object___ctor((Il2CppObject *)args, 0LL);
    }
    transform = this->fields.confLabel;
    if ( !transform || (UILabel__set_text(transform, str, 0LL), !args) )
LABEL_19:
      sub_1B68930(transform, value);
    transform = this->fields.confLabel;
    if ( args->fields._fontSize_k__BackingField.fields.hasValue )
    {
      value = (unsigned int)args->fields._fontSize_k__BackingField.fields.value;
      if ( !transform )
        goto LABEL_19;
    }
    else
    {
      value = (unsigned int)this->fields.labelDefaultFontSize;
      if ( !transform )
        goto LABEL_19;
    }
    UILabel__set_fontSize(transform, value, 0LL);
    transform = this->fields.confLabel;
    if ( !transform )
      goto LABEL_19;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    v15 = *(_QWORD *)&args->fields._localPosition_k__BackingField.fields.hasValue;
    if ( (_BYTE)v15 )
    {
      x = *((float *)&v15 + 1);
      LODWORD(z) = HIDWORD(*(_QWORD *)&args->fields._localPosition_k__BackingField.fields.value.fields.y);
      LODWORD(y) = *(_QWORD *)&args->fields._localPosition_k__BackingField.fields.value.fields.y;
      if ( !transform )
        goto LABEL_19;
    }
    else
    {
      x = this->fields.labelDefaultPosition.fields.x;
      y = this->fields.labelDefaultPosition.fields.y;
      z = this->fields.labelDefaultPosition.fields.z;
      if ( !transform )
        goto LABEL_19;
    }
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
}


void __fastcall BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Nullable_int__o __fastcall BattleSealedCommandWindowComponent_LabelAdjustArgs__get_fontSize(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._fontSize_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_Vector3__o __fastcall BattleSealedCommandWindowComponent_LabelAdjustArgs__get_localPosition(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x0 OVERLAPPED
  System_Nullable_Vector3__o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._localPosition_k__BackingField.fields.value.fields.y;
  v3 = *(_QWORD *)&this->fields._localPosition_k__BackingField.fields.hasValue;
  *(_QWORD *)&result.fields.value.fields.y = v2;
  *(_QWORD *)&result.fields.hasValue = v3;
  return result;
}


void __fastcall BattleSealedCommandWindowComponent_LabelAdjustArgs__set_fontSize(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        System_Nullable_int__o value,
        const MethodInfo *method)
{
  this->fields._fontSize_k__BackingField = value;
}


void __fastcall BattleSealedCommandWindowComponent_LabelAdjustArgs__set_localPosition(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        System_Nullable_Vector3__o value,
        const MethodInfo *method)
{
  this->fields._localPosition_k__BackingField = value;
}