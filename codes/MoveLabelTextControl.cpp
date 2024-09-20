void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5ED2A & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    byte_4A5ED2A = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v3, 0LL);
  this->fields.table = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.table, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_1B8880C(targetLb, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)targetLb, this->fields.lbStartPosition, 0LL);
}


void __fastcall MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  MoveLabelTextControl_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x22
  int32_t v8; // w2
  int32_t v9; // w3
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
  if ( (byte_4A5ED29 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&iTween_LoopType_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_24743/*"x"*/);
    sub_1B885B0(&StringLiteral_18755/*"easetype"*/);
    sub_1B885B0(&StringLiteral_22260/*"onMoveComplete"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_18551/*"delay"*/);
    sub_1B885B0(&StringLiteral_21217/*"looptype"*/);
    sub_1B885B0(&StringLiteral_21119/*"linear"*/);
    sub_1B885B0(&StringLiteral_20798/*"isLocal"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_1B885B0(&iTween_TypeInfo);
    byte_4A5ED29 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.targetLb, (int32_t)targetLb, v8, v9);
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
  v13 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v13 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v16 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v43[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v43, v18, v19, v20);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_20798/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v21 = v6->fields.table;
  v42 = v16 - v13;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v42, v22, v23, v24);
  if ( !v21 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, Il2CppMethodPointer))v21->klass->vtable._23_Add.method)(
    v21,
    StringLiteral_24743/*"x"*/,
    this,
    v21->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_22273/*"oncomplete"*/,
    StringLiteral_22260/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v25 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v25 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_22275/*"oncompletetarget"*/,
    this,
    v25->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_18755/*"easetype"*/,
    StringLiteral_21119/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v26 = v6->fields.table;
  v41 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v41, v27, v28, v29);
  if ( !v26 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_23929/*"time"*/,
    this,
    v26->klass->vtable._24_Clear.methodPtr);
  v30 = v6->fields.table;
  v40 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v40, v31, v32, v33);
  if ( !v30
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
          v30,
          StringLiteral_18551/*"delay"*/,
          this,
          v30->klass->vtable._24_Clear.methodPtr),
        v34 = v6->fields.table,
        v39 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v39, v35, v36, v37),
        !v34) )
  {
LABEL_28:
    sub_1B8880C(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
    v34,
    StringLiteral_21217/*"looptype"*/,
    this,
    v34->klass->vtable._24_Clear.methodPtr);
  v38 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60245364(v14, v38, 0LL);
}