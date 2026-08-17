void BattleSealedCommandWindowComponent___ctor(BattleSealedCommandWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.labelDefaultFontSize = 30;
  this->fields.labelDefaultPosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.labelDefaultPosition.fields.x = 0x4180000000000000LL;
  BattleWindowOuterClickManagerComponent___ctor((BattleWindowOuterClickManagerComponent_o *)this, 0);
}


System_String_o *BattleSealedCommandWindowComponent__get_closeBtnPath(
        BattleSealedCommandWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974175 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18236/*"btn_close"*/);
    byte_5974175 = 1;
  }
  return (System_String_o *)StringLiteral_18236/*"btn_close"*/;
}


// local variable allocation has failed, the output may be wrong!
void BattleSealedCommandWindowComponent__setLabel(
        BattleSealedCommandWindowComponent_o *this,
        System_String_o *str,
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *args,
        const MethodInfo *method)
{
  UnityEngine_Object_o *confLabel; // x22
  __int64 labelDefaultFontSize; // x1
  UILabel_o *transform; // x0
  __int64 v10; // x8
  float y; // s1
  float z; // s2
  float x; // s0 OVERLAPPED

  if ( (byte_5974174 & 1) == 0 )
  {
    sub_2213A60(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974174 = 1;
  }
  confLabel = (UnityEngine_Object_o *)this->fields.confLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, str);
  if ( !UnityEngine_Object__op_Equality(confLabel, 0, 0) )
  {
    if ( !args )
    {
      args = (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)sub_2213CCC(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
      System_Object___ctor((Il2CppObject *)args, 0);
    }
    transform = this->fields.confLabel;
    if ( !transform || (UILabel__set_text(transform, str, 0), !args) )
LABEL_19:
      sub_2213CDC(transform, labelDefaultFontSize);
    transform = this->fields.confLabel;
    if ( (unsigned __int8)*(_QWORD *)&args->fields._fontSize_k__BackingField )
    {
      labelDefaultFontSize = HIDWORD(*(_QWORD *)&args->fields._fontSize_k__BackingField);
      if ( !transform )
        goto LABEL_19;
    }
    else
    {
      labelDefaultFontSize = (unsigned int)this->fields.labelDefaultFontSize;
      if ( !transform )
        goto LABEL_19;
    }
    UILabel__set_fontSize(transform, labelDefaultFontSize, 0);
    transform = this->fields.confLabel;
    if ( !transform )
      goto LABEL_19;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    v10 = *(_QWORD *)&args->fields._localPosition_k__BackingField.fields.hasValue;
    if ( (_BYTE)v10 )
    {
      y = args->fields._localPosition_k__BackingField.fields.value.fields.y;
      z = args->fields._localPosition_k__BackingField.fields.value.fields.z;
      x = *((float *)&v10 + 1);
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
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, *(UnityEngine_Vector3_o *)&x, 0);
  }
}


void BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Nullable_int__o BattleSealedCommandWindowComponent_LabelAdjustArgs__get_fontSize(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._fontSize_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
System_Nullable_Vector3__o BattleSealedCommandWindowComponent_LabelAdjustArgs__get_localPosition(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x0
  System_Nullable_Vector3__o result; // 0:x0.16

  v2 = *(_QWORD *)&this->fields._localPosition_k__BackingField.fields.value.fields.y;
  v3 = *(_QWORD *)&this->fields._localPosition_k__BackingField.fields.hasValue;
  *(_QWORD *)&result.fields.value.fields.y = v2;
  *(_QWORD *)&result.fields.hasValue = v3;
  return result;
}


void BattleSealedCommandWindowComponent_LabelAdjustArgs__set_fontSize(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        System_Nullable_int__o value,
        const MethodInfo *method)
{
  this->fields._fontSize_k__BackingField = value;
}


void BattleSealedCommandWindowComponent_LabelAdjustArgs__set_localPosition(
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *this,
        System_Nullable_Vector3__o value,
        const MethodInfo *method)
{
  this->fields._localPosition_k__BackingField = value;
}