void MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20

  if ( (byte_4C50DF3 & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Hashtable_TypeInfo);
    byte_4C50DF3 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C3E7B0(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_65000696(v3, 0);
  this->fields.table = v3;
  sub_1C3E508(&this->fields.table, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0)) == 0 )
    sub_1C3E7C0(targetLb, method);
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  struct System_Collections_Hashtable_o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  struct System_Collections_Hashtable_o *v29; // x21
  struct System_Collections_Hashtable_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  struct System_Collections_Hashtable_o *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  struct System_Collections_Hashtable_o *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  System_Collections_Hashtable_o *v51; // x19
  int v52; // [xsp+4h] [xbp-5Ch] BYREF
  int v53; // [xsp+8h] [xbp-58h] BYREF
  int v54; // [xsp+Ch] [xbp-54h] BYREF
  float v55; // [xsp+28h] [xbp-38h] BYREF
  char v56[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4C50DF2 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    sub_1C3E564(&iTween_LoopType_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_24884/*"x"*/);
    sub_1C3E564(&StringLiteral_18772/*"easetype"*/);
    sub_1C3E564(&StringLiteral_22435/*"onMoveComplete"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22450/*"oncompletetarget"*/);
    sub_1C3E564(&StringLiteral_18572/*"delay"*/);
    sub_1C3E564(&StringLiteral_21375/*"looptype"*/);
    sub_1C3E564(&StringLiteral_21270/*"linear"*/);
    sub_1C3E564(&StringLiteral_20948/*"isLocal"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_1C3E564(&iTween_TypeInfo);
    byte_4C50DF2 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63384372(gameObject, 0);
  v6->fields.targetLb = targetLb;
  this = (MoveLabelTextControl_o *)sub_1C3E508(&v6->fields.targetLb, targetLb);
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
  v56[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56, v16, v17, v18, v19, v20, v21);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
    table,
    StringLiteral_20948/*"isLocal"*/,
    this,
    table->klass->vtable._22_Add.method);
  v22 = v6->fields.table;
  v55 = v14 - v11;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v23, v24, v25, v26, v27, v28);
  if ( !v22 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, const MethodInfo *))v22->klass->vtable._22_Add.methodPtr)(
    v22,
    StringLiteral_24884/*"x"*/,
    this,
    v22->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_22448/*"oncomplete"*/,
    StringLiteral_22435/*"onMoveComplete"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v29 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !v29 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v29->klass->vtable._22_Add.methodPtr)(
    v29,
    StringLiteral_22450/*"oncompletetarget"*/,
    this,
    v29->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_18772/*"easetype"*/,
    StringLiteral_21270/*"linear"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v30 = v6->fields.table;
  v54 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v31, v32, v33, v34, v35, v36);
  if ( !v30 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v30->klass->vtable._22_Add.methodPtr)(
    v30,
    StringLiteral_24091/*"time"*/,
    this,
    v30->klass->vtable._22_Add.method);
  v37 = v6->fields.table;
  v53 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v38, v39, v40, v41, v42, v43);
  if ( !v37
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v37->klass->vtable._22_Add.methodPtr)(
          v37,
          StringLiteral_18572/*"delay"*/,
          this,
          v37->klass->vtable._22_Add.method),
        v44 = v6->fields.table,
        v52 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(
                                           iTween_LoopType_TypeInfo,
                                           &v52,
                                           v45,
                                           v46,
                                           v47,
                                           v48,
                                           v49,
                                           v50),
        !v44) )
  {
LABEL_28:
    sub_1C3E7C0(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v44->klass->vtable._22_Add.methodPtr)(
    v44,
    StringLiteral_21375/*"looptype"*/,
    this,
    v44->klass->vtable._22_Add.method);
  v51 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63274032(v12, v51, 0);
}