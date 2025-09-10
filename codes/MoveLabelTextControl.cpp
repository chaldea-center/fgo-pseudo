void MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2B54B & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    byte_4C2B54B = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v3, 0);
  this->fields.table = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0)) == 0 )
    sub_1C2D6EC(targetLb, method);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x20
  unsigned int localPosition; // s0
  float v16; // s8
  struct System_Collections_Hashtable_o *table; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct System_Collections_Hashtable_o *v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct System_Collections_Hashtable_o *v25; // x21
  struct System_Collections_Hashtable_o *v26; // x21
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct System_Collections_Hashtable_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct System_Collections_Hashtable_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Hashtable_o *v38; // x19
  int v39; // [xsp+4h] [xbp-5Ch] BYREF
  int v40; // [xsp+8h] [xbp-58h] BYREF
  int v41; // [xsp+Ch] [xbp-54h] BYREF
  float v42; // [xsp+28h] [xbp-38h] BYREF
  char v43[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4C2B54A & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_LoopType_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24841/*"x"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_22397/*"onMoveComplete"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_21341/*"looptype"*/);
    sub_1C2D490(&StringLiteral_21237/*"linear"*/);
    sub_1C2D490(&StringLiteral_20915/*"isLocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_1C2D490(&iTween_TypeInfo);
    byte_4C2B54A = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
  v6->fields.targetLb = targetLb;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.targetLb, (int32_t)targetLb, v8, v9);
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
  v13 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v13 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v16 = *(float *)&localPosition;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    this->klass[1].vtable._0_Equals.methodPtr);
  table = v6->fields.table;
  v43[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v18, v19, v20);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
    table,
    StringLiteral_20915/*"isLocal"*/,
    this,
    table->klass->vtable._22_Add.method);
  v21 = v6->fields.table;
  v42 = v16 - v13;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v42, v22, v23, v24);
  if ( !v21 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, const MethodInfo *))v21->klass->vtable._22_Add.methodPtr)(
    v21,
    StringLiteral_24841/*"x"*/,
    this,
    v21->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_22410/*"oncomplete"*/,
    StringLiteral_22397/*"onMoveComplete"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v25 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !v25 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v25->klass->vtable._22_Add.methodPtr)(
    v25,
    StringLiteral_22412/*"oncompletetarget"*/,
    this,
    v25->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_18742/*"easetype"*/,
    StringLiteral_21237/*"linear"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v26 = v6->fields.table;
  v41 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v41, v27, v28, v29);
  if ( !v26 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v26->klass->vtable._22_Add.methodPtr)(
    v26,
    StringLiteral_24049/*"time"*/,
    this,
    v26->klass->vtable._22_Add.method);
  v30 = v6->fields.table;
  v40 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v40, v31, v32, v33);
  if ( !v30
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v30->klass->vtable._22_Add.methodPtr)(
          v30,
          StringLiteral_18545/*"delay"*/,
          this,
          v30->klass->vtable._22_Add.method),
        v34 = v6->fields.table,
        v39 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v39, v35, v36, v37),
        !v34) )
  {
LABEL_28:
    sub_1C2D6EC(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v34->klass->vtable._22_Add.methodPtr)(
    v34,
    StringLiteral_21341/*"looptype"*/,
    this,
    v34->klass->vtable._22_Add.method);
  v38 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(v14, v38, 0);
}