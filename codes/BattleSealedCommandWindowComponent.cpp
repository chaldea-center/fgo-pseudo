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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E579C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17194/*"btn_close"*/, (_DWORD)method, v2, v3);
    byte_42E579C = 1;
  }
  return (System_String_o *)StringLiteral_17194/*"btn_close"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSealedCommandWindowComponent__setLabel(
        BattleSealedCommandWindowComponent_o *this,
        System_String_o *str,
        BattleSealedCommandWindowComponent_LabelAdjustArgs_o *args,
        const MethodInfo *method)
{
  BattleSealedCommandWindowComponent_LabelAdjustArgs_o *v4; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_Object_o *confLabel; // x22
  struct System_Nullable_int__o fontSize_k__BackingField; // x1
  UILabel_o *transform; // x0
  float z; // s2
  float x; // s0
  float y; // s1

  v4 = args;
  if ( (byte_42E579B & 1) == 0 )
  {
    sub_B5D5C4(&BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo, (_DWORD)str, (_DWORD)args, method);
    sub_B5D5C4(&Method_System_Nullable_Vector3__GetValueOrDefault__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Nullable_int__GetValueOrDefault__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Nullable_int__get_HasValue__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    byte_42E579B = 1;
  }
  confLabel = (UnityEngine_Object_o *)this->fields.confLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(confLabel, 0LL, 0LL) )
  {
    if ( !v4 )
    {
      v4 = (BattleSealedCommandWindowComponent_LabelAdjustArgs_o *)sub_B5D694(BattleSealedCommandWindowComponent_LabelAdjustArgs_TypeInfo);
      BattleSealedCommandWindowComponent_LabelAdjustArgs___ctor(v4, 0LL);
    }
    transform = this->fields.confLabel;
    if ( transform )
    {
      UILabel__set_text(transform, str, 0LL);
      if ( v4 )
      {
        fontSize_k__BackingField = v4->fields._fontSize_k__BackingField;
        transform = this->fields.confLabel;
        if ( (*(_QWORD *)&fontSize_k__BackingField & 0xFF00000000LL) == 0 )
          fontSize_k__BackingField = (struct System_Nullable_int__o)(unsigned int)this->fields.labelDefaultFontSize;
        if ( transform )
        {
          UILabel__set_fontSize(transform, fontSize_k__BackingField.fields.value, 0LL);
          transform = this->fields.confLabel;
          if ( transform )
          {
            transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
            if ( (*(_QWORD *)&v4->fields._localPosition_k__BackingField.fields.value.fields.z & 0xFF00000000LL) != 0 )
            {
              LODWORD(z) = *(_QWORD *)&v4->fields._localPosition_k__BackingField.fields.value.fields.z;
              LODWORD(x) = *(_QWORD *)&v4->fields._localPosition_k__BackingField.fields.value.fields.x;
              LODWORD(y) = HIDWORD(*(_QWORD *)&v4->fields._localPosition_k__BackingField.fields.value.fields.x);
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
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(transform, fontSize_k__BackingField);
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