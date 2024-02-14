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
  if ( (byte_4211D4A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17036/*"btn_close"*/, method);
    byte_4211D4A = 1;
  }
  return (System_String_o *)StringLiteral_17036/*"btn_close"*/;
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
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *transform; // x0
  struct System_Nullable_int__o fontSize_k__BackingField; // x1
  float z; // s2
  float x; // s0
  float y; // s1

  if ( (byte_4211D49 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, str);
    sub_B0D8A4(&Method_System_Nullable_Vector3__GetValueOrDefault__, v7);
    sub_B0D8A4(&Method_System_Nullable_int__GetValueOrDefault__, v8);
    sub_B0D8A4(&Method_System_Nullable_int__get_HasValue__, v9);
    sub_B0D8A4(&Method_System_Nullable_Vector3__get_HasValue__, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4211D49 = 1;
  }
  confLabel = (UnityEngine_Object_o *)this->fields.confLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(confLabel, 0LL, 0LL) )
  {
    if ( !args )
    {
      args = (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)sub_B0D974(
                                                                       BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo,
                                                                       v13,
                                                                       v14);
      BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(args, 0LL);
    }
    transform = this->fields.confLabel;
    if ( transform )
    {
      UILabel__set_text(transform, str, 0LL);
      if ( args )
      {
        fontSize_k__BackingField = args->fields._fontSize_k__BackingField;
        transform = this->fields.confLabel;
        if ( (*(_QWORD *)&fontSize_k__BackingField & 0xFF00000000LL) == 0 )
          fontSize_k__BackingField.fields.value = this->fields.labelDefaultFontSize;
        if ( transform )
        {
          UILabel__set_fontSize(transform, fontSize_k__BackingField.fields.value, 0LL);
          transform = this->fields.confLabel;
          if ( transform )
          {
            transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
            if ( (*(_QWORD *)&args->fields._localPosition_k__BackingField.fields.value.fields.z & 0xFF00000000LL) != 0 )
            {
              LODWORD(z) = *(_QWORD *)&args->fields._localPosition_k__BackingField.fields.value.fields.z;
              LODWORD(x) = *(_QWORD *)&args->fields._localPosition_k__BackingField.fields.value.fields.x;
              LODWORD(y) = HIDWORD(*(_QWORD *)&args->fields._localPosition_k__BackingField.fields.value.fields.x);
              if ( transform )
              {
LABEL_17:
                UnityEngine_Transform__set_localPosition(
                  (UnityEngine_Transform_o *)transform,
                  *(UnityEngine_Vector3_o *)&x,
                  0LL);
                return;
              }
            }
            else
            {
              x = this->fields.labelDefaultPosition.fields.x;
              y = this->fields.labelDefaultPosition.fields.y;
              z = this->fields.labelDefaultPosition.fields.z;
              if ( transform )
                goto LABEL_17;
            }
          }
        }
      }
    }
    sub_B0D97C(transform);
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

  v2 = *(_QWORD *)&this->fields._localPosition_k__BackingField.fields.value.fields.z;
  v3 = *(_QWORD *)&this->fields._localPosition_k__BackingField.fields.value.fields.x;
  *(_QWORD *)&result.fields.value.fields.z = v2;
  *(_QWORD *)&result.fields.value.fields.x = v3;
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