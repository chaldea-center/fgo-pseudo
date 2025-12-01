void MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20

  if ( (byte_4CC143E & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Hashtable_TypeInfo);
    byte_4CC143E = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C715FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65394340(v3, 0);
  this->fields.table = v3;
  sub_1C71354(&this->fields.table, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0)) == 0 )
    sub_1C71608(targetLb, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)targetLb, this->fields.lbStartPosition, 0);
}


void MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  MoveLabelTextControl_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x22
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v11; // s9
  UnityEngine_GameObject_o *v12; // x20
  unsigned int localPosition; // s0
  float v14; // s8
  struct System_Collections_Hashtable_o *table; // x21
  struct System_Collections_Hashtable_o *v16; // x21
  struct System_Collections_Hashtable_o *v17; // x21
  struct System_Collections_Hashtable_o *v18; // x21
  struct System_Collections_Hashtable_o *v19; // x21
  struct System_Collections_Hashtable_o *v20; // x21
  System_Collections_Hashtable_o *v21; // x19
  int v22; // [xsp+4h] [xbp-5Ch] BYREF
  int v23; // [xsp+8h] [xbp-58h] BYREF
  int v24; // [xsp+Ch] [xbp-54h] BYREF
  float v25; // [xsp+28h] [xbp-38h] BYREF
  char v26[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4CC143D & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    sub_1C713B0(&iTween_LoopType_TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_24994/*"x"*/);
    sub_1C713B0(&StringLiteral_18800/*"easetype"*/);
    sub_1C713B0(&StringLiteral_22520/*"onMoveComplete"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22535/*"oncompletetarget"*/);
    sub_1C713B0(&StringLiteral_18592/*"delay"*/);
    sub_1C713B0(&StringLiteral_21456/*"looptype"*/);
    sub_1C713B0(&StringLiteral_21349/*"linear"*/);
    sub_1C713B0(&StringLiteral_21009/*"isLocal"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_1C713B0(&iTween_TypeInfo);
    byte_4CC143D = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63779628(gameObject, 0);
  v6->fields.targetLb = targetLb;
  this = (MoveLabelTextControl_o *)sub_1C71354(&v6->fields.targetLb, targetLb);
  mText = targetLb->fields.mText;
  if ( !mText )
    goto LABEL_28;
  if ( !parent )
    goto LABEL_28;
  stringLength = mText->fields._stringLength;
  mFontSize = targetLb->fields.mFontSize;
  v6->fields.parentSize = UIPanel__GetViewSize(parent, 0);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
  if ( !this )
    goto LABEL_28;
  v6->fields.lbStartPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
  if ( !this )
    goto LABEL_28;
  if ( COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) != v6->fields.lbStartPosition.fields.x )
  {
    this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
    if ( !this )
      goto LABEL_28;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v6->fields.lbStartPosition, 0);
  }
  v11 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v11 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v14 = *(float *)&localPosition;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    this->klass[1].vtable._0_Equals.methodPtr);
  table = v6->fields.table;
  v26[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v26);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
    table,
    StringLiteral_21009/*"isLocal"*/,
    this,
    table->klass->vtable._22_Add.method);
  v16 = v6->fields.table;
  v25 = v14 - v11;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v25);
  if ( !v16 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
    v16,
    StringLiteral_24994/*"x"*/,
    this,
    v16->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_22533/*"oncomplete"*/,
    StringLiteral_22520/*"onMoveComplete"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v17 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !v17 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v17->klass->vtable._22_Add.methodPtr)(
    v17,
    StringLiteral_22535/*"oncompletetarget"*/,
    this,
    v17->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_18800/*"easetype"*/,
    StringLiteral_21349/*"linear"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v18 = v6->fields.table;
  v24 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v24);
  if ( !v18 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v18->klass->vtable._22_Add.methodPtr)(
    v18,
    StringLiteral_24189/*"time"*/,
    this,
    v18->klass->vtable._22_Add.method);
  v19 = v6->fields.table;
  v23 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v23);
  if ( !v19
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v19->klass->vtable._22_Add.methodPtr)(
          v19,
          StringLiteral_18592/*"delay"*/,
          this,
          v19->klass->vtable._22_Add.method),
        v20 = v6->fields.table,
        v22 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v22),
        !v20) )
  {
LABEL_28:
    sub_1C71608(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v20->klass->vtable._22_Add.methodPtr)(
    v20,
    StringLiteral_21456/*"looptype"*/,
    this,
    v20->klass->vtable._22_Add.method);
  v21 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63669288(v12, v21, 0);
}