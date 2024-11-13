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
  __int64 v2; // x2

  if ( (byte_4B19254 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17676/*"btn_close"*/, method, v2);
    byte_4B19254 = 1;
  }
  return (System_String_o *)StringLiteral_17676/*"btn_close"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSealedCommandWindowComponent__setLabel(
        BattleSealedCommandWindowComponent_o *this,
        System_String_o *str,
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *args,
        const MethodInfo *method)
{
  BattleSealedCommandWindowComponent_LabelAdjustArgs_o *v4; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *confLabel; // x22
  __int64 value; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  UILabel_o *transform; // x0
  __int64 v22; // x8
  float x; // s0
  float z; // s2
  float y; // s1

  v4 = args;
  if ( (byte_4B19253 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, str, args);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v7, v8);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__GetValueOrDefault__, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B19253 = 1;
  }
  confLabel = (UnityEngine_Object_o *)this->fields.confLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, str);
  if ( !UnityEngine_Object__op_Equality(confLabel, 0LL, 0LL) )
  {
    if ( !v4 )
    {
      v4 = (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)sub_1BCAA2C(
                                                                     BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo,
                                                                     value,
                                                                     v19,
                                                                     v20);
      System_Object___ctor((Il2CppObject *)v4, 0LL);
    }
    transform = this->fields.confLabel;
    if ( !transform || (UILabel__set_text(transform, str, 0LL), !v4) )
LABEL_19:
      sub_1BCAA3C(transform, value);
    transform = this->fields.confLabel;
    if ( v4->fields._fontSize_k__BackingField.fields.hasValue )
    {
      value = (unsigned int)v4->fields._fontSize_k__BackingField.fields.value;
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
    v22 = *(_QWORD *)&v4->fields._localPosition_k__BackingField.fields.hasValue;
    if ( (_BYTE)v22 )
    {
      x = *((float *)&v22 + 1);
      LODWORD(z) = HIDWORD(*(_QWORD *)&v4->fields._localPosition_k__BackingField.fields.value.fields.y);
      LODWORD(y) = *(_QWORD *)&v4->fields._localPosition_k__BackingField.fields.value.fields.y;
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