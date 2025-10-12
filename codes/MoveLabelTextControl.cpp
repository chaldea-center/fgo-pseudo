void MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3BC6A & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Hashtable_TypeInfo);
    byte_4C3BC6A = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C32E6C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64882772(v3, 0);
  this->fields.table = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0)) == 0 )
    sub_1C32E7C(targetLb);
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
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  struct System_Collections_Hashtable_o *v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  struct System_Collections_Hashtable_o *v31; // x21
  struct System_Collections_Hashtable_o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  struct System_Collections_Hashtable_o *v39; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  struct System_Collections_Hashtable_o *v46; // x21
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  System_Collections_Hashtable_o *v53; // x19
  int v54; // [xsp+4h] [xbp-5Ch] BYREF
  int v55; // [xsp+8h] [xbp-58h] BYREF
  int v56; // [xsp+Ch] [xbp-54h] BYREF
  float v57; // [xsp+28h] [xbp-38h] BYREF
  char v58[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4C3BC69 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    sub_1C32C20(&iTween_LoopType_TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_24859/*"x"*/);
    sub_1C32C20(&StringLiteral_18751/*"easetype"*/);
    sub_1C32C20(&StringLiteral_22414/*"onMoveComplete"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22429/*"oncompletetarget"*/);
    sub_1C32C20(&StringLiteral_18551/*"delay"*/);
    sub_1C32C20(&StringLiteral_21354/*"looptype"*/);
    sub_1C32C20(&StringLiteral_21249/*"linear"*/);
    sub_1C32C20(&StringLiteral_20927/*"isLocal"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_1C32C20(&iTween_TypeInfo);
    byte_4C3BC69 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63266448(gameObject, 0);
  v6->fields.targetLb = targetLb;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.targetLb, (int32_t)targetLb, v8, v9);
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
  v58[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v58, v18, v19, v20, v21, v22, v23);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
    table,
    StringLiteral_20927/*"isLocal"*/,
    this,
    table->klass->vtable._22_Add.method);
  v24 = v6->fields.table;
  v57 = v16 - v13;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v57, v25, v26, v27, v28, v29, v30);
  if ( !v24 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, const MethodInfo *))v24->klass->vtable._22_Add.methodPtr)(
    v24,
    StringLiteral_24859/*"x"*/,
    this,
    v24->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_22427/*"oncomplete"*/,
    StringLiteral_22414/*"onMoveComplete"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v31 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !v31 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v31->klass->vtable._22_Add.methodPtr)(
    v31,
    StringLiteral_22429/*"oncompletetarget"*/,
    this,
    v31->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_18751/*"easetype"*/,
    StringLiteral_21249/*"linear"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v32 = v6->fields.table;
  v56 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v56, v33, v34, v35, v36, v37, v38);
  if ( !v32 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v32->klass->vtable._22_Add.methodPtr)(
    v32,
    StringLiteral_24067/*"time"*/,
    this,
    v32->klass->vtable._22_Add.method);
  v39 = v6->fields.table;
  v55 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v40, v41, v42, v43, v44, v45);
  if ( !v39
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v39->klass->vtable._22_Add.methodPtr)(
          v39,
          StringLiteral_18551/*"delay"*/,
          this,
          v39->klass->vtable._22_Add.method),
        v46 = v6->fields.table,
        v54 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(
                                           iTween_LoopType_TypeInfo,
                                           &v54,
                                           v47,
                                           v48,
                                           v49,
                                           v50,
                                           v51,
                                           v52),
        !v46) )
  {
LABEL_28:
    sub_1C32E7C(this);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v46->klass->vtable._22_Add.methodPtr)(
    v46,
    StringLiteral_21354/*"looptype"*/,
    this,
    v46->klass->vtable._22_Add.method);
  v53 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63156108(v14, v53, 0);
}