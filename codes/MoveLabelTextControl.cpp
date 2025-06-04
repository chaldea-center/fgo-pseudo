void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B060E8 & 1) == 0 )
  {
    sub_1BC3008(&System_Collections_Hashtable_TypeInfo, method);
    byte_4B060E8 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1BC3254(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63711480(v3, 0LL);
  this->fields.table = v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_1BC3264(targetLb, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)targetLb, this->fields.lbStartPosition, 0LL);
}


void __fastcall MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  MoveLabelTextControl_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v26; // s9
  UnityEngine_GameObject_o *v27; // x20
  unsigned int localPosition; // s0
  float v29; // s8
  struct System_Collections_Hashtable_o *table; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct System_Collections_Hashtable_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct System_Collections_Hashtable_o *v38; // x21
  struct System_Collections_Hashtable_o *v39; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct System_Collections_Hashtable_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct System_Collections_Hashtable_o *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Collections_Hashtable_o *v51; // x19
  int v52; // [xsp+4h] [xbp-5Ch] BYREF
  int v53; // [xsp+8h] [xbp-58h] BYREF
  int v54; // [xsp+Ch] [xbp-54h] BYREF
  float v55; // [xsp+28h] [xbp-38h] BYREF
  char v56[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4B060E7 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, parent);
    sub_1BC3008(&iTween_LoopType_TypeInfo, v7);
    sub_1BC3008(&float_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_24623/*"x"*/, v9);
    sub_1BC3008(&StringLiteral_18578/*"easetype"*/, v10);
    sub_1BC3008(&StringLiteral_22198/*"onMoveComplete"*/, v11);
    sub_1BC3008(&StringLiteral_23833/*"time"*/, v12);
    sub_1BC3008(&StringLiteral_22213/*"oncompletetarget"*/, v13);
    sub_1BC3008(&StringLiteral_18383/*"delay"*/, v14);
    sub_1BC3008(&StringLiteral_21146/*"looptype"*/, v15);
    sub_1BC3008(&StringLiteral_21042/*"linear"*/, v16);
    sub_1BC3008(&StringLiteral_20726/*"isLocal"*/, v17);
    sub_1BC3008(&StringLiteral_22211/*"oncomplete"*/, v18);
    this = (MoveLabelTextControl_o *)sub_1BC3008(&iTween_TypeInfo, v19);
    byte_4B060E7 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62096552(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.targetLb, (int32_t)targetLb, v21, v22);
  mText = targetLb->fields.mText;
  if ( !mText )
    goto LABEL_28;
  if ( !parent )
    goto LABEL_28;
  stringLength = mText->fields._stringLength;
  mFontSize = targetLb->fields.mFontSize;
  v6->fields.parentSize = UIPanel__GetViewSize(parent, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  v6->fields.lbStartPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL)) != v6->fields.lbStartPosition.fields.x )
  {
    this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
    if ( !this )
      goto LABEL_28;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v6->fields.lbStartPosition, 0LL);
  }
  v26 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v26 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v29 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    this->klass[1].vtable._1_Finalize.methodPtr);
  table = v6->fields.table;
  v56[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56, v31, v32, v33);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._22_Add.method)(
    table,
    StringLiteral_20726/*"isLocal"*/,
    this,
    table->klass->vtable._23_Clear.methodPtr);
  v34 = v6->fields.table;
  v55 = v29 - v26;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v35, v36, v37);
  if ( !v34 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, Il2CppMethodPointer))v34->klass->vtable._22_Add.method)(
    v34,
    StringLiteral_24623/*"x"*/,
    this,
    v34->klass->vtable._23_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    StringLiteral_22211/*"oncomplete"*/,
    StringLiteral_22198/*"onMoveComplete"*/,
    this->klass[1].vtable._0_Equals.methodPtr);
  v38 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v38 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v38->klass->vtable._22_Add.method)(
    v38,
    StringLiteral_22213/*"oncompletetarget"*/,
    this,
    v38->klass->vtable._23_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    StringLiteral_18578/*"easetype"*/,
    StringLiteral_21042/*"linear"*/,
    this->klass[1].vtable._0_Equals.methodPtr);
  v39 = v6->fields.table;
  v54 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v40, v41, v42);
  if ( !v39 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v39->klass->vtable._22_Add.method)(
    v39,
    StringLiteral_23833/*"time"*/,
    this,
    v39->klass->vtable._23_Clear.methodPtr);
  v43 = v6->fields.table;
  v53 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v44, v45, v46);
  if ( !v43
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v43->klass->vtable._22_Add.method)(
          v43,
          StringLiteral_18383/*"delay"*/,
          this,
          v43->klass->vtable._23_Clear.methodPtr),
        v47 = v6->fields.table,
        v52 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v52, v48, v49, v50),
        !v47) )
  {
LABEL_28:
    sub_1BC3264(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v47->klass->vtable._22_Add.method)(
    v47,
    StringLiteral_21146/*"looptype"*/,
    this,
    v47->klass->vtable._23_Clear.methodPtr);
  v51 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61986212(v27, v51, 0LL);
}